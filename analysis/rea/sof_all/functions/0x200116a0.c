// rea decompile_all
// name: FUN_200116a0
// address: 0x200116a0
// body: available
// range: 0x200116a0-0x200117e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200116a0(void)

{
  int iVar1;
  int iVar2;
  uint local_c [3];
  
  if ((*(float *)(DAT_20225098 + 0x18) != 0.0) && (-1 < DAT_201e7ea4)) {
    iVar1 = (DAT_201c23e8 & 0x3f) * 6;
    local_c[0] = (int)DAT_201e7e98 - (int)*(short *)(&DAT_201e7cb4 + iVar1);
    local_c[1] = (int)DAT_201e7e9a - (int)*(short *)(&DAT_201e7cb6 + iVar1);
    local_c[2] = (int)DAT_201e7e9c - (int)*(short *)(&DAT_201e7cb8 + iVar1);
    if (0x280 < (int)(((local_c[2] ^ (int)local_c[2] >> 0x1f) - ((int)local_c[2] >> 0x1f)) +
                      ((local_c[1] ^ (int)local_c[1] >> 0x1f) - ((int)local_c[1] >> 0x1f)) +
                     ((local_c[0] ^ (int)local_c[0] >> 0x1f) - ((int)local_c[0] >> 0x1f)))) {
      DAT_201e7e54 = 0;
      DAT_201e7e58 = 0;
      _DAT_201e7e5c = 0;
      return;
    }
    if ((*(float *)(DAT_201e7550 + 0x18) != 0.0) &&
       (((local_c[0] != 0 || (local_c[1] != 0)) || (local_c[2] != 0)))) {
      Com_Printf(s_prediction_miss_on__i___i_2011f3cc,DAT_201e7e64,
                 local_c[2] + local_c[1] + local_c[0]);
    }
    *(short *)(&DAT_201e7cb4 + iVar1) = DAT_201e7e98;
    *(short *)(&DAT_201e7cb6 + iVar1) = DAT_201e7e9a;
    *(short *)(&DAT_201e7cb8 + iVar1) = DAT_201e7e9c;
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 4;
      *(float *)((int)&DAT_201e7e54 + iVar1) = (float)*(int *)((int)local_c + iVar1) * 0.125;
      iVar1 = iVar2;
    } while (iVar2 < 0xc);
  }
  return;
}

