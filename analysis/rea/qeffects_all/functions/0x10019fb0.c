// rea decompile_all
// name: $I10_OUTPUT
// address: 0x10019fb0
// body: available
// range: 0x10019fb0-0x1001a8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1001a4bf) */
/* WARNING: Removing unreachable block (ram,0x1001a4c9) */
/* WARNING: Removing unreachable block (ram,0x1001a4ce) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2010 Release */

void __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint extraout_EAX;
  errno_t eVar7;
  undefined **ppuVar8;
  ushort *puVar9;
  ushort uVar10;
  uint extraout_ECX;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  short *psVar19;
  ushort uVar20;
  short *psVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  undefined **local_70;
  undefined **local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c [4];
  undefined4 local_24;
  undefined1 auStack_20 [4];
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar5 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  local_64 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c[0] = 0xcccc;
  local_2c[1] = 0x3ffb;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar14 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
      *(undefined2 *)((int)param_6 + 3) = 0x3001;
      *(undefined1 *)((int)param_6 + 5) = 0;
      iVar1 = iVar5;
      param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
      goto LAB_1001a85c;
    }
  }
  else if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    uVar16 = 0x80000000;
    if ((param_2 == 0x80000000) && (param_1 == 0)) goto LAB_1001a08d;
    if ((param_2 & 0x40000000) != 0) goto LAB_1001a08d;
    pcVar25 = "1#SNAN";
LAB_1001a0d4:
    eVar7 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
    if (eVar7 != 0) {
      do {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        uVar16 = extraout_EAX;
        param_2 = extraout_ECX;
LAB_1001a08d:
        if ((local_64 == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != uVar16) || (param_1 != 0)) goto LAB_1001a0cf;
          pcVar25 = "1#INF";
        }
        else {
          if (param_1 != 0) goto LAB_1001a0cf;
          pcVar25 = "1#IND";
        }
        eVar7 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
        if (eVar7 == 0) {
          *(undefined1 *)((int)param_6 + 3) = 5;
          goto LAB_1001a0ea;
        }
      } while( true );
    }
    *(undefined1 *)((int)param_6 + 3) = 6;
LAB_1001a0ea:
    iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
    iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
    uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
    goto LAB_1001a85c;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  local_24._0_2_ = 0;
  uVar16 = -(int)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  auStack_20._2_2_ = (undefined2)param_2;
  uStack_1c = (ushort)(param_2 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_6c = &PTR_DAT_10027ef0;
  if (uVar16 != 0) {
    iVar1 = iVar5;
    iVar22 = iVar11;
    iVar3 = iVar6;
    if ((int)uVar16 < 0) {
      local_6c = (undefined **)&DAT_10028050;
      uVar16 = (int)local_50;
    }
joined_r0x1001a153:
    if (uVar16 != 0) {
      auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
      local_24._2_2_ = (ushort)param_1;
      uStack_1c = (ushort)(param_2 >> 0x10);
      auStack_20._2_2_ = (undefined2)param_2;
      local_6c = local_6c + 0x15;
      uVar17 = (int)uVar16 >> 3;
      uVar14 = uVar16 & 7;
      uVar16 = uVar17;
      if (uVar14 != 0) {
        ppuVar8 = local_6c + uVar14 * 3;
        if (0x7fff < *(ushort *)ppuVar8) {
          local_40 = SUB42(*ppuVar8,0);
          uStack_3e._0_2_ = (undefined2)((uint)*ppuVar8 >> 0x10);
          ppuVar2 = ppuVar8 + 2;
          uStack_3e._2_2_ = SUB42(ppuVar8[1],0);
          uStack_3a = (ushort)((uint)ppuVar8[1] >> 0x10);
          ppuVar8 = (undefined **)&local_40;
          local_38 = *ppuVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        iVar22 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        iVar3 = 0;
        uStack_a = 0;
        uVar12 = (*(ushort *)((int)ppuVar8 + 10) ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar10 = *(ushort *)((int)ppuVar8 + 10) & 0x7fff;
        uVar20 = uVar10 + uVar13;
        if (((uVar13 < 0x7fff) && (uVar10 < 0x7fff)) && (uVar20 < 0xbffe)) {
          if (0x3fbf < uVar20) {
            if (((uVar13 == 0) &&
                (uVar20 = uVar20 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((CONCAT22(auStack_20._2_2_,auStack_20._0_2_) == 0 &&
                (CONCAT22(local_24._2_2_,(undefined2)local_24) == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto joined_r0x1001a153;
            }
            if (((uVar10 != 0) || (uVar20 = uVar20 + 1, ((uint)ppuVar8[2] & 0x7fffffff) != 0)) ||
               ((ppuVar8[1] != (undefined *)0x0 || (*ppuVar8 != (undefined *)0x0)))) {
              local_58 = 0;
              psVar21 = (short *)((int)&uStack_12 + 2);
              local_44 = 5;
              do {
                local_54 = local_44;
                if (0 < local_44) {
                  puVar9 = (ushort *)(auStack_20 + local_58 * 2 + -4);
                  local_70 = ppuVar8 + 2;
                  do {
                    bVar4 = false;
                    uVar14 = *(uint *)(psVar21 + -2) + (uint)*puVar9 * (uint)*(ushort *)local_70;
                    if ((uVar14 < *(uint *)(psVar21 + -2)) ||
                       (uVar14 < (uint)*puVar9 * (uint)*(ushort *)local_70)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar21 + -2) = uVar14;
                    if (bVar4) {
                      *psVar21 = *psVar21 + 1;
                    }
                    puVar9 = puVar9 + 1;
                    local_70 = (undefined **)((int)local_70 + -2);
                    local_54 = local_54 + -1;
                  } while (0 < local_54);
                }
                psVar21 = psVar21 + 1;
                local_58 = local_58 + 1;
                local_44 = local_44 + -1;
              } while (0 < local_44);
              uVar20 = uVar20 + 0xc002;
              if ((short)uVar20 < 1) {
LAB_1001a306:
                uVar20 = uVar20 - 1;
                if ((short)uVar20 < 0) {
                  uVar14 = (uint)(ushort)-uVar20;
                  uVar20 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_4c = local_4c + 1;
                    }
                    iVar11 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar17 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ =
                         (ushort)uStack_e >> 1 | (ushort)((uint)(iVar11 << 0x1f) >> 0x10);
                    uVar23 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
                    uVar14 = uVar14 - 1;
                    uStack_12._2_2_ = (ushort)(uVar17 >> 1);
                    local_14 = (byte)uVar23;
                    uStack_13 = (undefined1)(uVar23 >> 8);
                  } while (uVar14 != 0);
                  if (local_4c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar13 = (ushort)uStack_e;
                  uVar10 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar22;
                  uStack_13 = (undefined1)((uint)iVar22 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar22 >> 0x10);
                  iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar22 | uVar10 >> 0xf;
                  uStack_e._0_2_ = (ushort)((uint)iVar22 >> 0x10);
                  iVar22 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar22 | uVar13 >> 0xf;
                  uVar20 = uVar20 - 1;
                  uStack_a = (ushort)((uint)iVar22 >> 0x10);
                } while (0 < (short)uVar20);
                if ((short)uVar20 < 1) goto LAB_1001a306;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  iVar22 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar20 = uVar20 + 1;
                      iVar3 = 0;
                      iVar22 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      iVar3 = 0;
                      iVar22 = 0;
                    }
                  }
                  else {
                    iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  iVar22 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              uStack_12._2_2_ = (ushort)((uint)iVar22 >> 0x10);
              uStack_12._0_2_ = (ushort)iVar22;
              uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
              uStack_e._0_2_ = (ushort)iVar3;
              if (uVar20 < 0x7fff) {
                bStack_19 = (byte)(uVar20 >> 8) | (byte)(uVar12 >> 8);
                local_24._0_2_ = (ushort)uStack_12;
                local_24._2_2_ = uStack_12._2_2_;
                param_1 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                auStack_20 = (undefined1  [4])iVar3;
                uStack_1c = uStack_a;
                param_2 = CONCAT22(uStack_a,uStack_e._2_2_);
                local_1a = (undefined1)uVar20;
              }
              else {
                auStack_20._0_2_ = 0;
                auStack_20._2_2_ = 0;
                local_24._0_2_ = 0;
                local_24._2_2_ = 0;
                param_1 = 0;
                iVar11 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack_1c = (ushort)iVar11;
                param_2 = 0x80000000;
                local_1a = (undefined1)((uint)iVar11 >> 0x10);
                bStack_19 = (byte)((uint)iVar11 >> 0x18);
              }
              goto joined_r0x1001a153;
            }
          }
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar22 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar22;
          local_1a = (undefined1)((uint)iVar22 >> 0x10);
          bStack_19 = (byte)((uint)iVar22 >> 0x18);
        }
        auStack_20._0_2_ = 0;
        auStack_20._2_2_ = 0;
        param_2 = (uint)uStack_1c << 0x10;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        param_1 = 0;
        iVar22 = 0;
        iVar3 = 0;
      }
      goto joined_r0x1001a153;
    }
  }
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uStack_1c = (ushort)(param_2 >> 0x10);
  auStack_20._2_2_ = (undefined2)param_2;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  iVar11 = iVar22;
  iVar6 = iVar3;
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    iVar11 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    iVar6 = 0;
    uStack_a = 0;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar22 = uVar16 + 0x3ffb;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar22 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar22) {
        if (((((ushort)uVar16 == 0) &&
             (iVar22 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(auStack_20._2_2_,auStack_20._0_2_) == 0)) &&
           (CONCAT22(local_24._2_2_,(undefined2)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_1001a694;
        }
        local_58 = 0;
        psVar21 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = local_2c;
            puVar9 = (ushort *)(auStack_20 + local_58 * 2 + -4);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar21 + -2) + (uint)*local_5c * (uint)*puVar9;
              if ((uVar16 < *(uint *)(psVar21 + -2)) || (uVar16 < (uint)*local_5c * (uint)*puVar9))
              {
                bVar4 = true;
              }
              *(uint *)(psVar21 + -2) = uVar16;
              if (bVar4) {
                *psVar21 = *psVar21 + 1;
              }
              local_5c = local_5c + -1;
              puVar9 = puVar9 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar21 = psVar21 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar22 = iVar22 + 0xc002;
        if ((short)iVar22 < 1) {
LAB_1001a58f:
          uVar20 = (ushort)(iVar22 + 0xffff);
          if ((short)uVar20 < 0) {
            uVar16 = -(iVar22 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar20 = uVar20 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar11 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar16 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar22 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar11 << 0x1f) >> 0x10);
              uVar17 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              uStack_12._2_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar17;
              uStack_13 = (undefined1)(uVar17 >> 8);
            } while (uVar14 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar10 = (ushort)uStack_e;
            uVar20 = (ushort)uStack_12;
            if ((short)uStack_a < 0) break;
            iVar11 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar11;
            uStack_13 = (undefined1)((uint)iVar11 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar11 >> 0x10);
            iVar11 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar11 | uVar20 >> 0xf;
            uStack_e._0_2_ = (ushort)((uint)iVar11 >> 0x10);
            iVar11 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar11 | uVar10 >> 0xf;
            iVar22 = iVar22 + 0xffff;
            uStack_a = (ushort)((uint)iVar11 >> 0x10);
          } while (0 < (short)iVar22);
          uVar20 = (ushort)iVar22;
          if ((short)uVar20 < 1) goto LAB_1001a58f;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            iVar11 = 0;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar20 = uVar20 + 1;
                iVar6 = 0;
                iVar11 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                iVar6 = 0;
                iVar11 = 0;
              }
            }
            else {
              iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            iVar11 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            iVar6 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        uStack_12._2_2_ = (ushort)((uint)iVar11 >> 0x10);
        uStack_12._0_2_ = (ushort)iVar11;
        uStack_e._2_2_ = (ushort)((uint)iVar6 >> 0x10);
        uStack_e._0_2_ = (ushort)iVar6;
        if (uVar20 < 0x7fff) {
          bStack_19 = (byte)(uVar20 >> 8) | bStack_19 & 0x80;
          local_24._0_2_ = (ushort)uStack_12;
          param_1 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
          param_2 = CONCAT22(uStack_a,uStack_e._2_2_);
          local_1a = (undefined1)uVar20;
        }
        else {
          local_24._0_2_ = 0;
          param_1 = 0;
          iVar22 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          param_2 = 0x80000000;
          local_1a = (undefined1)((uint)iVar22 >> 0x10);
          bStack_19 = (byte)((uint)iVar22 >> 0x18);
        }
        goto LAB_1001a694;
      }
      iVar22 = 0;
    }
    else {
      iVar22 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    param_1 = 0;
    local_24._0_2_ = 0;
    param_2 = iVar22 << 0x10;
    local_1a = (undefined1)((uint)iVar22 >> 0x10);
    bStack_19 = (byte)((uint)iVar22 >> 0x18);
    iVar11 = 0;
    iVar6 = 0;
  }
LAB_1001a694:
  auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar22 = CONCAT11(bStack_19,local_1a) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    do {
      uStack_1c = (ushort)(param_2 >> 0x10);
      auStack_20._2_2_ = (undefined2)param_2;
      auStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
      local_24._2_2_ = (ushort)param_1;
      uVar10 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(undefined2)local_24) << 1;
      local_24._0_2_ = (undefined2)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_) * 2;
      uVar20 = (ushort)auStack_20._2_2_ >> 0xf;
      uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      local_48 = local_48 + -1;
      auStack_20._0_2_ = (undefined2)(uVar16 | uVar10 >> 0xf);
      param_1 = CONCAT22(auStack_20._0_2_,local_24._2_2_);
      auStack_20._2_2_ = (undefined2)(uVar16 >> 0x10);
      uStack_1c = (ushort)(uVar14 | uVar20);
      param_2 = CONCAT22(uStack_1c,auStack_20._2_2_);
      local_1a = (undefined1)(uVar14 >> 0x10);
      bStack_19 = (byte)(uVar14 >> 0x18);
    } while (local_48 != 0);
    if ((iVar22 < 0) && (uVar16 = -iVar22 & 0xff, uVar16 != 0)) {
      do {
        iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar17 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_);
        iVar22 = CONCAT22(auStack_20._2_2_,auStack_20._0_2_);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        auStack_20._2_2_ = (ushort)auStack_20._2_2_ >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(undefined2)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar22 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        auStack_20._0_2_ = (undefined2)(uVar17 >> 1);
        local_24._0_2_ = (undefined2)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(undefined2)local_24);
    psVar21 = param_6 + 2;
    psVar18 = psVar21;
    uVar20 = auStack_20._2_2_;
    for (iVar22 = param_4 + 1; 0 < iVar22; iVar22 = iVar22 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (undefined2)uVar16;
      iVar1 = CONCAT22(auStack_20._0_2_,local_24._2_2_);
      local_38 = (undefined *)CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar17 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar20 >> 0xf)) * 2 |
               (CONCAT22(uVar20,auStack_20._0_2_) & 0x7fffffff) >> 0x1e;
      uVar23 = (CONCAT22(uVar20,auStack_20._0_2_) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar16 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar24 = uVar23, uVar14 < uVar16)) {
        uVar24 = uVar23 + 1;
        bVar4 = false;
        if ((uVar24 < uVar23) || (uVar24 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar17 = uVar17 + 1;
        }
      }
      uVar23 = CONCAT22(uVar20,auStack_20._0_2_) + uVar24;
      if ((uVar23 < uVar24) || (uVar23 < CONCAT22(uVar20,auStack_20._0_2_))) {
        uVar17 = uVar17 + 1;
      }
      iVar3 = (int)(local_38 + uVar17) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar23 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      auStack_20._0_2_ = (ushort)(uVar23 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar3 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      auStack_20._2_2_ = (undefined2)(uVar23 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (undefined2)local_24;
      uStack_3a = uVar20;
      uVar20 = auStack_20._2_2_;
    }
    param_2 = CONCAT22(uStack_1c,uVar20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar21 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1)
          ) {
      }
      if (psVar19 < psVar21) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar21 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_1001a85c;
      }
    }
    else {
      for (; (psVar21 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1)
          ) {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar21) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_1001a85c:
  uStack_3e = iVar1;
  local_24 = uVar16;
  uStack_12 = iVar11;
  uStack_e = iVar6;
  unique0x10000a63 = param_2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_1001a0cf:
  pcVar25 = "1#QNAN";
  goto LAB_1001a0d4;
}

