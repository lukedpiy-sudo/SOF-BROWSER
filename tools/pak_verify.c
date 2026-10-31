/*
 * pak_verify.c - verify a Quake II .pak and report what is inside it.
 *
 * Why this exists: pak0.pak sizes vary wildly between distributions
 * (some repacks bundle extra assets), so file size is not a reliable
 * identity test. The authoritative check is the directory checksum that
 * the engine itself knows about:
 *
 *   qcommon/files.c:483   if (checksum != PAK0_CHECKSUM) return NULL;
 *   qcommon/files.c:28    #define PAK0_CHECKSUM  0x40e614e0   (full)
 *   qcommon/files.c:30    //                   0xb2c6d7ea     (demo)
 *   qcommon/files.c:32    //                   0x78e135c      (OEM)
 *
 * and the checksum is computed by qcommon/md4.c:265 as
 *
 *   Com_BlockChecksum = MD4(dirbytes) with the four 32-bit digest words XORed.
 *
 * Usage: pak_verify <file.pak> [--list-bsp]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ------------------------------------------------------------------ *
 * MD4 (RFC 1320)
 * ------------------------------------------------------------------ */

typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

#define F(x, y, z) (((x) & (y)) | (~(x) & (z)))
#define G(x, y, z) (((x) & (y)) | ((x) & (z)) | ((y) & (z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define ROL(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

#define STEP(f, a, b, c, d, x, s, t) \
    (a) += f((b), (c), (d)) + (x) + (t); (a) = ROL((a), (s)); (a) += (b);

static void md4(const u8 *msg, size_t len, u32 out[4])
{
    u32 a = 0x67452301u, b = 0xefcdab89u, c = 0x98badcfeu, d = 0x10325476u;
    u32 x[16];
    size_t i, nblocks = (len + 63) / 64;
    u8 *padded = (u8 *)calloc(nblocks * 64, 1);
    u64 bitlen = (u64)len * 8;

    if (!padded) { fprintf(stderr, "oom\n"); exit(1); }
    memcpy(padded, msg, len);
    for (i = 0; i < 8; i++)
        padded[nblocks * 64 - 8 + i] = (u8)(bitlen >> (8 * i));

    for (i = 0; i < nblocks; i++) {
        const u8 *blk = padded + i * 64;
        int j;
        for (j = 0; j < 16; j++)
            x[j] = (u32)blk[j * 4] | ((u32)blk[j * 4 + 1] << 8) |
                   ((u32)blk[j * 4 + 2] << 16) | ((u32)blk[j * 4 + 3] << 24);

        /* round 1 */
        STEP(F, a, b, c, d, x[ 0],  3, 0xd76aa478u)
        STEP(F, d, a, b, c, x[ 1],  7, 0xe8c7b756u)
        STEP(F, c, d, a, b, x[ 2], 11, 0x242070dbu)
        STEP(F, b, c, d, a, x[ 3], 19, 0xc1bdceeeu)
        STEP(F, a, b, c, d, x[ 4],  3, 0xf57c0fafu)
        STEP(F, d, a, b, c, x[ 5],  7, 0x4787c62au)
        STEP(F, c, d, a, b, x[ 6], 11, 0xa8304613u)
        STEP(F, b, c, d, a, x[ 7], 19, 0xfd469501u)
        STEP(F, a, b, c, d, x[ 8],  3, 0x698098d8u)
        STEP(F, d, a, b, c, x[ 9],  7, 0x8b44f7afu)
        STEP(F, c, d, a, b, x[10], 11, 0xffff5bb1u)
        STEP(F, b, c, d, a, x[11], 19, 0x895cd7beu)
        STEP(F, a, b, c, d, x[12],  3, 0x6b901122u)
        STEP(F, d, a, b, c, x[13],  7, 0xfd987193u)
        STEP(F, c, d, a, b, x[14], 11, 0xa679438eu)
        STEP(F, b, c, d, a, x[15], 19, 0x49b40821u)

        /* round 2 */
        STEP(G, a, b, c, d, x[ 0],  3, 0xf61e2562u)
        STEP(G, d, a, b, c, x[ 4],  5, 0xc040b340u)
        STEP(G, c, d, a, b, x[ 8],  9, 0x265e5a51u)
        STEP(G, b, c, d, a, x[12], 13, 0xe9b6c7aau)
        STEP(G, a, b, c, d, x[ 1],  3, 0xd62f105du)
        STEP(G, d, a, b, c, x[ 5],  5, 0x02441453u)
        STEP(G, c, d, a, b, x[ 9],  9, 0xd8a1e681u)
        STEP(G, b, c, d, a, x[13], 13, 0xe7d3fbc8u)
        STEP(G, a, b, c, d, x[ 2],  3, 0x21e1cde6u)
        STEP(G, d, a, b, c, x[ 6],  5, 0xc33707d6u)
        STEP(G, c, d, a, b, x[10],  9, 0xf4d50d87u)
        STEP(G, b, c, d, a, x[14], 13, 0x455a14edu)
        STEP(G, a, b, c, d, x[ 3],  3, 0xa9e3e905u)
        STEP(G, d, a, b, c, x[ 7],  5, 0xfcefa3f8u)
        STEP(G, c, d, a, b, x[11],  9, 0x676f02d9u)
        STEP(G, b, c, d, a, x[15], 13, 0x8d2a4c8au)

        /* round 3 */
        STEP(H, a, b, c, d, x[ 0],  3, 0xfffa3942u)
        STEP(H, d, a, b, c, x[ 8],  9, 0x8771f681u)
        STEP(H, c, d, a, b, x[ 4], 11, 0x6d9d6122u)
        STEP(H, b, c, d, a, x[12], 15, 0xfde5380cu)
        STEP(H, a, b, c, d, x[ 2],  3, 0xa4beea44u)
        STEP(H, d, a, b, c, x[10],  9, 0x4bdecfa9u)
        STEP(H, c, d, a, b, x[ 6], 11, 0xf6bb4b60u)
        STEP(H, b, c, d, a, x[14], 15, 0xbebfbc70u)
        STEP(H, a, b, c, d, x[ 1],  3, 0x289b7ec6u)
        STEP(H, d, a, b, c, x[ 9],  9, 0xeaa127fau)
        STEP(H, c, d, a, b, x[13], 11, 0xd4ef3085u)
        STEP(H, b, c, d, a, x[ 3], 15, 0x04881d05u)
        STEP(H, a, b, c, d, x[ 5],  3, 0xd9d4d039u)
        STEP(H, d, a, b, c, x[ 7],  9, 0xe6db99e5u)
        STEP(H, c, d, a, b, x[15], 11, 0x1fa27cf8u)
        STEP(H, b, c, d, a, x[11], 15, 0xc4ac5665u)

        a += 0x67452301u; b += 0xefcdab89u;
        c += 0x98badcfeu; d += 0x10325476u;
    }

    out[0] = a; out[1] = b; out[2] = c; out[3] = d;
    free(padded);
}

/* ------------------------------------------------------------------ */

static int is_bsps(const char *n) { return strstr(n, ".bsp") != NULL; }

int main(int argc, char **argv)
{
    static const u32 known[3] = { 0x40e614e0u, 0xb2c6d7eau, 0x78e135cu };
    static const char *kn[3] = { "FULL (retail)", "DEMO", "OEM" };

    FILE *f;
    char magic[4];
    int dirofs, dirlen;
    u8 *dir;
    u32 dg[4], sum;
    int nfiles, i, matched = -1, listbsp = 0;
    long fsize;

    if (argc < 2) {
        fprintf(stderr, "usage: pak_verify <file.pak> [--list-bsp]\n");
        return 2;
    }
    for (i = 2; i < argc; i++)
        if (!strcmp(argv[i], "--list-bsp")) listbsp = 1;

    f = fopen(argv[1], "rb");
    if (!f) { fprintf(stderr, "cannot open %s\n", argv[1]); return 1; }

    fseek(f, 0, SEEK_END); fsize = ftell(f); fseek(f, 0, SEEK_SET);

    if (fread(magic, 1, 4, f) != 4) { fprintf(stderr, "too short\n"); return 1; }
    if (memcmp(magic, "PACK", 4)) { fprintf(stderr, "not a pak (magic %.4s)\n", magic); return 1; }
    if (fread(&dirofs, 4, 1, f) != 1) return 1;
    if (fread(&dirlen, 4, 1, f) != 1) return 1;

    printf("file        : %s\n", argv[1]);
    printf("size        : %ld bytes (%.1f MB)\n", fsize, fsize / 1048576.0);
    printf("magic       : PACK\n");
    printf("dirofs      : %d\n", dirofs);
    printf("dirlen      : %d\n", dirlen);

    if (dirlen <= 0 || dirofs < 0 || (long)dirofs + dirlen > fsize) {
        fprintf(stderr, "directory out of range - corrupt pak\n");
        return 1;
    }
    if (dirlen % 64) printf("WARNING     : dirlen not a multiple of 64 (unusual)\n");

    dir = (u8 *)malloc(dirlen);
    if (!dir) return 1;
    fseek(f, dirofs, SEEK_SET);
    if (fread(dir, 1, dirlen, f) != (size_t)dirlen) { fprintf(stderr, "short dir read\n"); return 1; }

    md4(dir, (size_t)dirlen, dg);
    sum = dg[0] ^ dg[1] ^ dg[2] ^ dg[3];

    for (i = 0; i < 3; i++)
        if (sum == known[i]) matched = i;

    printf("\ndir checksum: 0x%08x\n", sum);
    for (i = 0; i < 3; i++)
        printf("  %-14s 0x%08x %s\n", kn[i], known[i], known[i] == sum ? "<== MATCH" : "");
    printf("\nverdict      : %s\n", matched >= 0 ? "AUTHENTIC pak0.pak" : "does NOT match any known pak0");
    if (matched != 0 && matched >= 0)
        printf("              note: this is %s, not the retail full pak0\n", kn[matched]);

    nfiles = dirlen / 64;
    printf("entries      : %d\n", nfiles);

    if (listbsp) {
        int nbsp = 0;
        printf("\n--- BSP entries (stock Q2 3.21 requires version 38) ---\n");
        for (i = 0; i < nfiles; i++) {
            const char *nm = (const char *)(dir + i * 64);
            int pos, len, ver = -1;
            if (!is_bsps(nm)) continue;
            memcpy(&pos, dir + i * 64 + 56, 4);
            memcpy(&len, dir + i * 64 + 60, 4);
            if (pos >= 0 && len >= 8 && (long)pos + 8 <= fsize) {
                char bm[4]; int v;
                fseek(f, pos, SEEK_SET);
                if (fread(bm, 1, 4, f) == 4 && !memcmp(bm, "IBSP", 4)) {
                    if (fread(&v, 4, 1, f) == 1) ver = v;
                }
            }
            printf("  %-40s ver=%d%s\n", nm, ver,
                   ver == 38 ? "" : (ver < 0 ? "  (unreadable)" : "  <-- NOT stock"));
            nbsp++;
        }
        printf("  total .bsp entries: %d\n", nbsp);
    }

    free(dir);
    fclose(f);
    return 0;
}