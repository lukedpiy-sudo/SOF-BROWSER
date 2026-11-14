// rea decompile_all
// name: __ld12tod
// address: 0x10016c90
// body: available
// range: 0x10016c90-0x100171e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_10027040 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar15 = *(uint *)(_Ifp->ld12 + 6);
  local_14[0] = uVar15;
  uVar2 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_14[1] = uVar2;
  local_14[2] = iVar5;
  bVar3 = (byte)DAT_10027f2c;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (local_14[iVar5] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_10027f28 + -1;
    iVar14 = (int)(DAT_10027f28 + (DAT_10027f28 >> 0x1f & 0x1fU)) >> 5;
    puVar10 = local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_10027f28 & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_10016dd4;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_10016ddb;
LAB_10016dd4:
            do {
              bVar4 = true;
LAB_10016ddb:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_10016de9;
              puVar9 = local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = local_14[iVar6];
      }
    }
LAB_10016de9:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_10027f24 - DAT_10027f28) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_10027f24 < iVar14) {
        if (iVar14 < DAT_10027f20) {
          iVar14 = iVar14 + DAT_10027f34;
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar5 = (int)(DAT_10027f2c + (DAT_10027f2c >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar5 = (int)(DAT_10027f2c + (DAT_10027f2c >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          iVar14 = DAT_10027f34 + DAT_10027f20;
        }
        goto LAB_10017194;
      }
      iVar13 = DAT_10027f24 - iVar13;
      local_14[0] = uVar15;
      local_14[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_14[2] = iVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar5 = 2;
      puVar10 = local_14 + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          local_14[iVar5] = 0;
        }
        else {
          local_14[iVar5] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar13 = DAT_10027f28 + -1;
      iVar5 = (int)(DAT_10027f28 + (DAT_10027f28 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_10027f28 & 0x1f);
      puVar10 = local_14 + iVar5;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar15 = local_14[iVar5] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_10016f88;
          uVar15 = local_14[iVar14];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f);
        uVar12 = local_14[iVar14];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar15;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          uVar12 = local_14[iVar14];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar15;
        }
      }
LAB_10016f88:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = local_14 + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(DAT_10027f2c + 1 + (DAT_10027f2c + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_14 + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          local_14[iVar13] = 0;
        }
        else {
          local_14[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
  }
LAB_10017194:
  uVar15 = iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_10027f30 == 0x40) {
    *(uint *)((int)&_D->x + 4) = uVar15;
    *(uint *)&_D->x = local_14[1];
  }
  else if (DAT_10027f30 == 0x20) {
    *(uint *)&_D->x = uVar15;
  }
  IVar7 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return IVar7;
}

