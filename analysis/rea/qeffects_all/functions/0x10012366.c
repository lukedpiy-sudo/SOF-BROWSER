// rea decompile_all
// name: ___strgtold12_l
// address: 0x10012366
// body: available
// range: 0x10012366-0x10012a0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2010 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined **ppuVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  undefined **local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  undefined2 local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar23 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (_Locale != (_locale_t)0x0) {
    local_58 = str;
    for (; (((cVar8 = *str, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) || (cVar8 == '\r'))
        ; str = str + 1) {
    }
LAB_100123e3:
    cVar8 = *str;
    pcVar18 = str + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_100123fe:
        iVar16 = 3;
        goto LAB_10012400;
      }
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_10012415:
        iVar16 = 5;
        str = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar16 = 2;
        str = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_1001242f;
          goto LAB_100125ab;
        }
        iVar16 = 2;
        uVar7 = 0x8000;
        str = pcVar18;
      }
      goto LAB_100123e3;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_100123fe;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_10012464;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1001248e;
      if (cVar8 == '0') goto LAB_1001242f;
      goto LAB_10012474;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_100123fe;
      if (cVar8 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_10012415;
      str = local_58;
      if (cVar8 != '0') goto LAB_100125d4;
LAB_1001242f:
      iVar16 = 1;
      str = pcVar18;
      goto LAB_100123e3;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_100124fc;
LAB_10012464:
      bVar4 = true;
      iVar16 = 4;
      str = pcVar18;
      goto LAB_100123e3;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_100124fc:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1001248e:
        bVar4 = true;
        iVar16 = 0xb;
        str = pcVar18 + -1;
      }
      else {
LAB_10012474:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && (1 < (byte)(cVar8 + 0x9cU))))) goto LAB_100125ab;
        iVar16 = 6;
        str = pcVar18;
      }
      goto LAB_100123e3;
    case 5:
      bVar6 = true;
      str = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_10012400;
      }
      goto LAB_100125d4;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_10012592;
        if (cVar8 == '-') goto LAB_10012586;
LAB_10012579:
        str = local_58;
        if (cVar8 != '0') goto LAB_100125d4;
        iVar16 = 8;
        str = pcVar18;
        goto LAB_100123e3;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_10012579;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100125ab;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_10012636;
    default:
      goto switchD_100123ef_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar8 == '+') {
LAB_10012592:
          iVar16 = 7;
          str = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_100125d4;
LAB_10012586:
          local_6c = -1;
          iVar16 = 7;
          str = pcVar18;
        }
        goto LAB_100123e3;
      }
      iVar16 = 10;
      pcVar18 = str;
switchD_100123ef_caseD_a:
      str = pcVar18;
      if (iVar16 != 10) goto LAB_100123e3;
      goto LAB_100125d4;
    }
    iVar16 = 9;
LAB_10012400:
    str = pcVar18 + -1;
    goto LAB_100123e3;
  }
  piVar10 = __errno();
  *piVar10 = 0x16;
  FUN_1000d7dd();
  uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_10012a01;
LAB_10012636:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_10012651;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_10012636;
  }
  local_68 = 0x1451;
LAB_10012651:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_100125ab:
  str = pcVar18 + -1;
LAB_100125d4:
  *p_end_ptr = str;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_100129e2;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar2 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar12 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + scale);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - decpt);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_100129e2;
      ppuVar17 = &PTR_DAT_10027ef0;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          ppuVar17 = (undefined **)&DAT_10028050;
        }
        if (mult12 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        uVar12 = uVar13;
        uVar14 = uStack_2e;
        iVar1 = uStack_2a;
        uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar2 = local_3c;
joined_r0x100126de:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
          uVar13 = (int)local_58 >> 3;
          ppuVar17 = ppuVar17 + 0x15;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar13;
          if (uVar11 != 0) {
            ppuVar20 = ppuVar17 + uVar11 * 3;
            if (0x7fff < *(ushort *)ppuVar20) {
              local_4c = SUB42(*ppuVar20,0);
              uStack_4a._0_2_ = (undefined2)((uint)*ppuVar20 >> 0x10);
              uStack_4a._2_2_ = SUB42(ppuVar20[1],0);
              uStack_46 = (undefined2)((uint)ppuVar20[1] >> 0x10);
              local_44 = ppuVar20[2];
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              ppuVar20 = (undefined **)&local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar14 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar1 = 0;
            uStack_26 = 0;
            uVar9 = *(ushort *)((int)ppuVar20 + 10) & 0x7fff;
            uVar21 = (*(ushort *)((int)ppuVar20 + 10) ^ uStack_38._2_2_) & 0x8000;
            uVar15 = uVar9 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar9 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar12 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar12 & 0x7fffffff) == 0)) &&
                   ((iVar2 == 0 && (uVar3 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar12 = uVar12 & 0xffff;
                  uVar14 = 0;
                  iVar1 = 0;
                }
                else if (((uVar9 == 0) &&
                         (uVar15 = uVar15 + 1, ((uint)ppuVar20[2] & 0x7fffffff) == 0)) &&
                        ((ppuVar20[1] == (undefined *)0x0 && (*ppuVar20 == (undefined *)0x0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar12 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar3 = 0;
                  iVar2 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = ppuVar20 + 2;
                      do {
                        bVar4 = false;
                        uVar14 = *(uint *)(psVar24 + -2) +
                                 (uint)*(ushort *)local_64 * (uint)*local_60;
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*(ushort *)local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar4) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = (undefined **)((int)local_64 + -2);
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_1001289a:
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar14 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar12 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar13 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar14 = uVar14 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar12 >> 1);
                        local_30 = (byte)uVar13;
                        uStack_2f = (undefined1)(uVar13 >> 8);
                      } while (uVar14 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar9 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar9 >> 0xf;
                      iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar2 | (ushort)uStack_2a >> 0xf;
                      uVar15 = uVar15 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar2 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_1001289a;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uVar14 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar15 = uVar15 + 1;
                          iVar1 = 0;
                          uVar14 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar14 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                      }
                    }
                    else {
                      uVar14 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    local_40 = uVar14;
                    local_3c = iVar1;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar15 | uVar21;
                    uVar12 = CONCAT22(uVar15 | uVar21,uStack_26);
                    uVar3 = uVar14;
                    iVar2 = iVar1;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar12;
                    uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
                    uVar3 = 0;
                    iVar2 = 0;
                  }
                }
                goto joined_r0x100126de;
              }
              uVar12 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar12;
            uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
            uVar14 = 0;
            iVar1 = 0;
            uVar3 = 0;
            iVar2 = 0;
          }
          goto joined_r0x100126de;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar2;
      local_40._2_2_ = (undefined2)(uVar3 >> 0x10);
      local_40._0_2_ = (undefined2)uVar3;
      uStack_38._2_2_ = (ushort)(uVar12 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar12;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar13 = uVar12;
      uStack_2e = uVar14;
      uStack_2a = iVar1;
      local_3c = iVar2;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_100129e2:
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar7;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar19;
LAB_10012a01:
  uStack_38 = uVar13;
  local_40 = uVar3;
  uVar14 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar14;
}

