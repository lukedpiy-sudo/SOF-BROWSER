// rea decompile_all
// name: FUN_200b3be0
// address: 0x200b3be0
// body: available
// range: 0x200b3be0-0x200b5e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200b3be0(int param_1,int param_2,char param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  int *piVar13;
  float **ppfVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  undefined4 *puVar21;
  uint uVar22;
  char cVar23;
  int iVar24;
  undefined2 *puVar25;
  float *pfVar26;
  int *piVar27;
  float fVar28;
  float *pfVar29;
  void *pvVar30;
  float *local_cc;
  char local_c5;
  float *local_c4;
  float *local_c0;
  int *local_bc;
  float *local_b8;
  undefined4 *local_b4;
  float *local_b0;
  float *local_ac;
  float *local_a8;
  float *local_a4;
  float *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  void *local_94;
  int local_90;
  int *local_8c;
  float *local_88;
  void *local_84;
  void *local_80;
  int local_7c;
  int *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  float *local_6c;
  undefined4 *local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  float *local_4c;
  undefined4 *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  void *local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d96d;
  local_c = ExceptionList;
  local_58 = *(int *)(param_2 + 0x20);
  if ((*(int *)(param_6 + 4) == 0) ||
     (local_c0 = (float *)(*(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 2),
     local_c0 == (float *)0x0)) {
    iVar7 = 0;
  }
  else {
    ExceptionList = &local_c;
    pvVar8 = operator_new(0x114);
    if (pvVar8 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_200ab0b0();
    }
    if (*(int *)(param_6 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 2;
    }
    *(int *)(iVar7 + 4) = iVar9;
    fVar28 = 0.0;
    *(undefined1 *)(local_c4 + 6) = 1;
    *(undefined1 *)((int)local_c4 + 0x19) = 0;
    piVar13 = *(int **)(param_6 + 4);
    local_b0 = (float *)0x0;
    local_88 = (float *)0x0;
    local_cc = (float *)0x0;
    local_90 = iVar7;
    if (piVar13 != *(int **)(param_6 + 8)) {
      do {
        local_c0 = local_cc;
        local_b4 = *(undefined4 **)(param_7 + 4);
        FUN_2001fd60(&local_98,&local_c0);
        if (local_98 == local_b4) {
          FUN_200677e0(*piVar13 + 0x68);
        }
        iVar9 = *piVar13;
        fVar28 = (float)((int)fVar28 + *(int *)(iVar9 + 4));
        local_b0 = (float *)((int)local_b0 + *(int *)(iVar9 + 8));
        if (*(int *)(iVar9 + 0x3c) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) >> 5;
        }
        piVar13 = piVar13 + 1;
        local_88 = (float *)((int)local_88 + iVar9);
        local_cc = (float *)((int)local_cc + 1);
      } while (piVar13 != *(int **)(param_6 + 8));
    }
    if (*(int *)(param_5 + 4) == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)(*(int *)(param_5 + 8) - *(int *)(param_5 + 4) >> 2);
    }
    if (fVar28 != fVar10) {
      FUN_2008e9e0(s_vert_mismatch_20157c08);
    }
    if (*(int *)(param_5 + 0x14) == 0) {
      pfVar11 = (float *)0x0;
    }
    else {
      pfVar11 = (float *)(*(int *)(param_5 + 0x18) - *(int *)(param_5 + 0x14) >> 2);
    }
    if (local_b0 != pfVar11) {
      FUN_2008e9e0(s_tex_mismatch_20157bf8);
    }
    pfVar11 = local_c4;
    *(float *)(iVar7 + 0x58) = *local_c4;
    *(float *)(iVar7 + 0x5c) = local_c4[1];
    local_c0 = local_c4 + 3;
    *(float *)(iVar7 + 0x60) = local_c4[2];
    FUN_200802f0(local_c0);
    pfVar20 = local_88;
    *(undefined1 *)(iVar7 + 0x70) = *(undefined1 *)(pfVar11 + 6);
    *(undefined1 *)(iVar7 + 0x71) = *(undefined1 *)((int)pfVar11 + 0x19);
    fVar10 = *pfVar11;
    fVar1 = pfVar11[1];
    fVar2 = *local_c0;
    fVar3 = local_c0[1];
    local_3c = local_c0[2];
    local_30 = (void *)pfVar11[2];
    *(float *)(iVar7 + 0x74) = fVar2;
    *(float *)(iVar7 + 0x78) = fVar3;
    *(float *)(iVar7 + 0x7c) = local_3c;
    *(float *)(iVar7 + 0x74) = *(float *)(iVar7 + 0x74) - fVar10;
    *(float *)(iVar7 + 0x78) = *(float *)(iVar7 + 0x78) - fVar1;
    *(float *)(iVar7 + 0x7c) = *(float *)(iVar7 + 0x7c) - (float)local_30;
    if (*(float *)(iVar7 + 0x74) < 650.0) {
      *(undefined4 *)(iVar7 + 0x74) = 0x44228000;
    }
    if (*(float *)(iVar7 + 0x78) < 650.0) {
      *(undefined4 *)(iVar7 + 0x78) = 0x44228000;
    }
    if (*(float *)(iVar7 + 0x7c) < 650.0) {
      *(undefined4 *)(iVar7 + 0x7c) = 0x44228000;
    }
    *(float *)(iVar7 + 0x74) = 65520.0 / *(float *)(iVar7 + 0x74);
    *(float *)(iVar7 + 0x78) = 65520.0 / *(float *)(iVar7 + 0x78);
    *(float *)(iVar7 + 0x7c) = 65520.0 / *(float *)(iVar7 + 0x7c);
    *(float *)(iVar7 + 0x80) = 1.0 / *(float *)(iVar7 + 0x74);
    *(float *)(iVar7 + 0x84) = 1.0 / *(float *)(iVar7 + 0x78);
    *(float *)(iVar7 + 0x88) = 1.0 / *(float *)(iVar7 + 0x7c);
    *(float *)(iVar7 + 0x8c) = fVar2;
    *(float *)(iVar7 + 0x94) = local_3c;
    *(float *)(iVar7 + 0x90) = fVar3;
    *(float *)(iVar7 + 0x8c) = fVar10 + *(float *)(iVar7 + 0x8c);
    *(float *)(iVar7 + 0x90) = fVar1 + *(float *)(iVar7 + 0x90);
    *(float *)(iVar7 + 0x94) = (float)local_30 + *(float *)(iVar7 + 0x94);
    *(float *)(iVar7 + 0x8c) = *(float *)(iVar7 + 0x8c) * 0.5;
    *(float *)(iVar7 + 0x90) = *(float *)(iVar7 + 0x90) * 0.5;
    *(float *)(iVar7 + 0x94) = *(float *)(iVar7 + 0x94) * 0.5;
    *(undefined4 *)(iVar7 + 0x98) = 0x3b800000;
    *(undefined4 *)(iVar7 + 0x9c) = 0x3b800000;
    *(undefined4 *)(iVar7 + 0xa0) = 0x3b800000;
    local_80 = operator_new((int)local_88 * 0x30 + 0x20);
    pvVar8 = operator_new(((int)pfVar20 + 2) * 0x1c);
    local_84 = pvVar8;
    local_c0 = operator_new((int)fVar28 * 0x34 + 4);
    local_4 = 0;
    if (local_c0 == (float *)0x0) {
      local_a4 = (float *)0x0;
    }
    else {
      pfVar11 = local_c0 + 1;
      *local_c0 = fVar28;
      FUN_200fb5cd(pfVar11,0x34,fVar28,FUN_200b5e50,FUN_200b5ed0);
      local_a4 = pfVar11;
    }
    local_4 = 0xffffffff;
    local_b8 = operator_new((int)fVar28 * 4);
    pfVar11 = local_b8;
    if (fVar28 != 0.0) {
      for (; fVar28 != 0.0; fVar28 = (float)((int)fVar28 + -1)) {
        *pfVar11 = -NAN;
        pfVar11 = pfVar11 + 1;
      }
    }
    local_68 = (undefined4 *)0x0;
    iVar7 = (int)local_b0 + 2;
    local_50 = operator_new(iVar7 * 0x18);
    local_a8 = operator_new(iVar7 * 4);
    puVar15 = (undefined4 *)0x0;
    puVar21 = local_a8;
    if (iVar7 != 0) {
      for (; puVar15 = local_68, iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar21 = 0xffffffff;
        puVar21 = puVar21 + 1;
      }
    }
    local_48 = (undefined4 *)0x0;
    local_6c = (float *)0x0;
    local_7c = 0;
    FUN_200b94e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    local_c5 = '\0';
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
    }
    FUN_200b91a0(iVar7,&local_c5);
    local_cc = (float *)0x0;
    local_bc = *(int **)(param_6 + 4);
    if (local_bc != *(int **)(param_6 + 8)) {
      do {
        local_c0 = local_cc;
        puVar21 = *(undefined4 **)(param_7 + 4);
        FUN_2001fd60(&local_b4,&local_c0);
        if (local_b4 == puVar21) {
          iVar7 = *local_bc;
          iVar9 = *(int *)(iVar7 + 0x3c);
          if (iVar9 != *(int *)(iVar7 + 0x40)) {
            do {
              FUN_2009c880((uint)*(byte *)(iVar9 + 0x1c) * 0x10 + *(int *)(iVar7 + 0x5c));
              iVar9 = iVar9 + 0x20;
              iVar7 = *local_bc;
            } while (iVar9 != *(int *)(iVar7 + 0x40));
          }
        }
        local_bc = local_bc + 1;
        local_cc = (float *)((int)local_cc + 1);
      } while (local_bc != *(int **)(param_6 + 8));
    }
    FUN_2009c9e0();
    local_94 = (void *)0x0;
    while( true ) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
      }
      if (iVar7 <= (int)local_94) break;
      local_8c = (int *)0x0;
      local_ac = (float *)0x0;
      local_c4 = (float *)0x0;
      local_cc = (float *)0x0;
      piVar13 = *(int **)(param_6 + 4);
      local_bc = piVar13;
      if (piVar13 != *(int **)(param_6 + 8)) {
        do {
          local_c0 = local_cc;
          local_b4 = *(undefined4 **)(param_7 + 4);
          local_bc = piVar13;
          FUN_2001fd60(&local_98,&local_c0);
          piVar27 = piVar13;
          if (local_98 == local_b4) {
            local_c5 = '\0';
            if (param_3 != '\0') {
              local_c0 = local_cc;
              piVar13 = *(int **)(param_4 + 4);
              FUN_2001fd60(&local_78,&local_c0);
              if (local_78 != piVar13) {
                local_c5 = '\x01';
              }
            }
            iVar7 = *local_bc;
            puVar21 = *(undefined4 **)(iVar7 + 0x3c);
            local_9c = puVar21;
            if (puVar21 != *(undefined4 **)(iVar7 + 0x40)) {
              do {
                local_9c = puVar21;
                local_30 = (void *)FUN_2009c720((uint)*(byte *)(puVar21 + 7) * 0x10 +
                                                *(int *)(iVar7 + 0x5c));
                if (local_30 == local_94) {
                  local_70 = (undefined4 *)0x0;
                  *(void **)((int)pvVar8 + local_7c * 0x1c + 4) = local_30;
                  *(float **)((int)pvVar8 + local_7c * 0x1c + 8) = local_c4;
                  local_b0 = (float *)(puVar21 + 3);
                  *(undefined4 *)((int)pvVar8 + local_7c * 0x1c + 0xc) = puVar21[6];
                  local_74 = local_50 + (int)local_48 * 6 + 4;
                  pfVar11 = local_a4 + (int)puVar15 * 0xd + 5;
                  do {
                    iVar7 = *(int *)(*(int *)(param_5 + 4) + ((int)local_b0[-3] + (int)local_8c) * 4
                                    );
                    if (local_b8[iVar7] == -NAN) {
                      if (*(int *)(*(int *)(param_5 + 0x24) + iVar7 * 4) < 0) {
LAB_200b42e5:
                        FUN_2008e9e0(s_Internal_error_105_20157be4);
                      }
                      else {
                        if (*(int *)(param_6 + 4) == 0) {
                          uVar12 = 0;
                        }
                        else {
                          uVar12 = *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 2;
                        }
                        if (uVar12 <= *(uint *)(*(int *)(param_5 + 0x24) + iVar7 * 4))
                        goto LAB_200b42e5;
                      }
                      iVar9 = *(int *)(*(int *)(param_5 + 0x34) + iVar7 * 4);
                      if ((iVar9 < 0) ||
                         (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                           *(int *)(*(int *)(param_5 + 0x24) + iVar7 * 4) * 4) + 4)
                          <= iVar9)) {
                        FUN_2008e9e0(s_Internal_error_106_20157bd0);
                      }
                      pfVar11[-1] = *(float *)(*(int *)(param_5 + 0x24) + iVar7 * 4);
                      *pfVar11 = *(float *)(*(int *)(param_5 + 0x34) + iVar7 * 4);
                      *(undefined1 *)((int)pfVar11 + -6) =
                           *(undefined1 *)
                            (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                              *(int *)(*(int *)(param_5 + 0x24) + iVar7 * 4) * 4) +
                                     0x10) + *(int *)(*(int *)(param_5 + 0x34) + iVar7 * 4));
                      pfVar11[-5] = *(float *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                                *(int *)(*(int *)(param_5 + 0x24) +
                                                                        iVar7 * 4) * 4) + 0x30) +
                                              *(int *)(*(int *)(param_5 + 0x34) + iVar7 * 4) * 0xc);
                      pfVar11[-4] = *(float *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                                *(int *)(*(int *)(param_5 + 0x24) +
                                                                        iVar7 * 4) * 4) + 0x30) + 4
                                              + *(int *)(*(int *)(param_5 + 0x34) + iVar7 * 4) * 0xc
                                              );
                      pfVar11[-3] = *(float *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                                *(int *)(*(int *)(param_5 + 0x24) +
                                                                        iVar7 * 4) * 4) + 0x30) + 8
                                              + *(int *)(*(int *)(param_5 + 0x34) + iVar7 * 4) * 0xc
                                              );
                      local_b8[iVar7] = (float)local_68;
                      local_68 = (undefined4 *)((int)local_68 + 1);
                      pfVar11 = pfVar11 + 0xd;
                    }
                    local_38 = local_b8[iVar7];
                    if ((int)*local_b0 < 0) {
                      fVar28 = -NAN;
                    }
                    else {
                      iVar7 = *(int *)(*(int *)(param_5 + 0x14) +
                                      ((int)*local_b0 + (int)local_ac) * 4);
                      if (local_a8[iVar7] == -NAN) {
                        if (*(int *)(*(int *)(param_5 + 0x44) + iVar7 * 4) < 0) {
LAB_200b440f:
                          FUN_2008e9e0(s_Internal_error_105_20157be4);
                        }
                        else {
                          if (*(int *)(param_6 + 4) == 0) {
                            uVar12 = 0;
                          }
                          else {
                            uVar12 = *(int *)(param_6 + 8) - *(int *)(param_6 + 4) >> 2;
                          }
                          if (uVar12 <= *(uint *)(*(int *)(param_5 + 0x44) + iVar7 * 4))
                          goto LAB_200b440f;
                        }
                        iVar9 = *(int *)(*(int *)(param_5 + 0x54) + iVar7 * 4);
                        if ((iVar9 < 0) ||
                           (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                             *(int *)(*(int *)(param_5 + 0x44) + iVar7 * 4) * 4) + 8
                                    ) <= iVar9)) {
                          FUN_2008e9e0(s_Internal_error_106_20157bd0);
                        }
                        local_74[-1] = *(undefined4 *)(*(int *)(param_5 + 0x44) + iVar7 * 4);
                        *local_74 = *(undefined4 *)(*(int *)(param_5 + 0x54) + iVar7 * 4);
                        *(undefined1 *)(local_74 + -2) =
                             *(undefined1 *)
                              (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                *(int *)(*(int *)(param_5 + 0x44) + iVar7 * 4) * 4)
                                       + 0x20) + *(int *)(*(int *)(param_5 + 0x54) + iVar7 * 4));
                        local_74[-4] = *(undefined4 *)
                                        (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                          *(int *)(*(int *)(param_5 + 0x44) +
                                                                  iVar7 * 4) * 4) + 0x34) +
                                        *(int *)(*(int *)(param_5 + 0x54) + iVar7 * 4) * 8);
                        local_74[-3] = *(undefined4 *)
                                        (*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                          *(int *)(*(int *)(param_5 + 0x44) +
                                                                  iVar7 * 4) * 4) + 0x34) + 4 +
                                        *(int *)(*(int *)(param_5 + 0x54) + iVar7 * 4) * 8);
                        local_a8[iVar7] = (float)local_48;
                        local_48 = (undefined4 *)((int)local_48 + 1);
                        local_74 = local_74 + 6;
                      }
                      fVar28 = local_a8[iVar7];
                    }
                    puVar15 = local_70;
                    pfVar20 = (float *)0x0;
                    if (0 < (int)local_6c) {
                      piVar13 = (int *)((int)local_80 + 0xc);
                      do {
                        if (((((float)piVar13[-3] == local_38) && ((float)piVar13[-2] == fVar28)) &&
                            (*piVar13 == -1)) && ((void *)piVar13[-1] == local_30)) break;
                        pfVar20 = (float *)((int)pfVar20 + 1);
                        piVar13 = piVar13 + 4;
                      } while ((int)pfVar20 < (int)local_6c);
                    }
                    if (pfVar20 == local_6c) {
                      pfVar26 = (float *)((int)local_80 + (int)pfVar20 * 0x10);
                      *pfVar26 = local_38;
                      pfVar26[1] = fVar28;
                      pfVar26[2] = (float)local_30;
                      local_6c = (float *)((int)local_6c + 1);
                      pfVar26[3] = -NAN;
                    }
                    *(float **)((int)local_84 + (local_7c * 7 + (int)local_70) * 4 + 0x10) = pfVar20
                    ;
                    if (local_c5 == '\0') {
                      fVar28 = local_a4[(int)local_38 * 0xd + 7];
                      ppfVar14 = &local_a0;
                    }
                    else {
                      fVar28 = local_a4[(int)local_38 * 0xd + 10];
                      ppfVar14 = &local_4c;
                    }
                    FUN_2002ed20(ppfVar14,fVar28,&local_7c);
                    local_70 = (undefined4 *)((int)puVar15 + 1);
                    local_b0 = local_b0 + 1;
                  } while ((int)local_70 < 3);
                  local_7c = local_7c + 1;
                  pvVar8 = local_84;
                  puVar21 = local_9c;
                  puVar15 = local_68;
                }
                puVar21 = puVar21 + 8;
                iVar7 = *local_bc;
                local_9c = puVar21;
              } while (puVar21 != *(undefined4 **)(iVar7 + 0x40));
            }
            local_c4 = (float *)((int)local_c4 + 1);
            piVar27 = local_bc;
          }
          piVar13 = piVar27 + 1;
          local_8c = (int *)((int)local_8c + *(int *)(*piVar27 + 4));
          local_ac = (float *)((int)local_ac + *(int *)(*piVar27 + 8));
          local_cc = (float *)((int)local_cc + 1);
          local_bc = piVar13;
        } while (piVar13 != *(int **)(param_6 + 8));
      }
      local_94 = (void *)((int)local_94 + 1);
    }
    if (local_48 == (undefined4 *)0x0) {
      *(undefined1 *)(local_50 + 2) = 1;
      local_50[3] = 0xffffffff;
      local_50[4] = 0xffffffff;
      *local_50 = 0;
      local_50[1] = 0;
      local_48 = (undefined4 *)0x1;
    }
    FUN_200f9f75(local_b8);
    FUN_200f9f75(local_a8);
    local_bc = (undefined4 *)0x0;
    fVar28 = (float)((int)local_88 * 3 + 2);
    local_c0 = operator_new((int)fVar28 * 0x20 + 4);
    local_4 = 1;
    if (local_c0 == (float *)0x0) {
      local_88 = (float *)0x0;
    }
    else {
      pfVar11 = local_c0 + 1;
      *local_c0 = fVar28;
      FUN_200fb5cd(pfVar11,0x20,fVar28,&LAB_200b5f90,FUN_200b5fc0);
      local_88 = pfVar11;
    }
    pvVar30 = local_80;
    pvVar8 = local_84;
    local_4 = 0xffffffff;
    if (param_3 == '\0') {
      local_cc = (float *)0x0;
      if (puVar15 != (undefined4 *)0x0) {
        local_ac = local_a4 + 8;
        do {
          *(undefined1 *)(local_88 + (int)local_bc * 8 + 3) = 1;
          if (*local_ac != 0.0) {
            local_b8 = local_88 + (int)local_bc * 8 + 6;
            do {
              pfVar26 = local_ac;
              pfVar20 = local_b8;
              fVar28 = local_b8[-1];
              piVar13 = *(int **)local_ac[-1];
              local_c4 = (float *)piVar13[2];
              iVar7 = FUN_200ea4b0(fVar28,*(undefined4 *)((int)fVar28 + 4));
              *(int *)((int)fVar28 + 4) = iVar7;
              **(int **)(iVar7 + 4) = iVar7;
              FUN_200a9420(iVar7 + 8,&local_c4);
              *local_b8 = (float)((int)*local_b8 + 1);
              pfVar11 = (float *)*piVar13;
              *(float **)piVar13[1] = pfVar11;
              *(int *)(*piVar13 + 4) = piVar13[1];
              FUN_200f9f75(piVar13);
              *pfVar26 = (float)((int)*pfVar26 + -1);
              pfVar29 = local_c4;
              if (pfVar11 != (float *)pfVar26[-1]) {
                do {
                  local_c0 = (float *)*pfVar11;
                  uVar12 = *(uint *)((int)local_84 + (int)pfVar29 * 0x1c + 0xc);
                  if (((uVar12 == 0) ||
                      (uVar22 = *(uint *)((int)local_84 + (int)pfVar11[2] * 0x1c + 0xc), uVar22 == 0
                      )) || ((uVar12 & uVar22) != 0)) {
                    fVar28 = pfVar20[-1];
                    iVar7 = FUN_200ea4b0(fVar28,*(undefined4 *)((int)fVar28 + 4));
                    *(int *)((int)fVar28 + 4) = iVar7;
                    **(int **)(iVar7 + 4) = iVar7;
                    FUN_200a9420(iVar7 + 8,pfVar11 + 2);
                    *pfVar20 = (float)((int)*pfVar20 + 1);
                    *(float *)pfVar11[1] = *pfVar11;
                    *(float *)((int)*pfVar11 + 4) = pfVar11[1];
                    FUN_200f9f75(pfVar11);
                    *local_ac = (float)((int)*local_ac + -1);
                    pfVar29 = local_c4;
                  }
                  pfVar11 = local_c0;
                } while (local_c0 != (float *)local_ac[-1]);
              }
              local_b0 = *(float **)local_b8[-1];
              if (local_b0 != (float *)local_b8[-1]) {
                do {
                  iVar7 = 0;
                  do {
                    pfVar11 = (float *)(*(int *)((int)local_84 +
                                                ((int)local_b0[2] * 7 + iVar7) * 4 + 0x10) * 0x10 +
                                       (int)local_80);
                    if ((float *)*pfVar11 == local_cc) {
                      puVar15 = (undefined4 *)pfVar11[3];
                      if ((puVar15 == (undefined4 *)0xffffffff) || (puVar15 == local_bc)) {
                        pfVar11[3] = (float)local_bc;
                      }
                      else {
                        fVar28 = pfVar11[1];
                        fVar10 = pfVar11[2];
                        pfVar20 = (float *)0x0;
                        if (0 < (int)local_6c) {
                          pfVar26 = (float *)((int)local_80 + 0xc);
                          do {
                            if (((pfVar26[-3] == *pfVar11) && (pfVar26[-2] == fVar28)) &&
                               (((undefined4 *)*pfVar26 == local_bc && (pfVar26[-1] == fVar10))))
                            break;
                            pfVar20 = (float *)((int)pfVar20 + 1);
                            pfVar26 = pfVar26 + 4;
                          } while ((int)pfVar20 < (int)local_6c);
                        }
                        if (pfVar20 == local_6c) {
                          pfVar26 = (float *)((int)pfVar20 * 0x10 + (int)local_80);
                          *pfVar26 = *pfVar11;
                          pfVar26[1] = fVar28;
                          pfVar26[2] = fVar10;
                          pfVar26[3] = (float)local_bc;
                          local_6c = (float *)((int)local_6c + 1);
                        }
                        *(float **)((int)local_84 + ((int)local_b0[2] * 7 + iVar7) * 4 + 0x10) =
                             pfVar20;
                        local_2c = puVar15;
                      }
                    }
                    if (*(char *)((int)local_a4 +
                                 *(int *)(*(int *)((int)local_84 +
                                                  ((int)local_b0[2] * 7 + iVar7) * 4 + 0x10) * 0x10
                                         + (int)local_80) * 0x34 + 0xe) == '\0') {
                      *(undefined1 *)(local_b8 + -3) = 0;
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_b0 = (float *)*local_b0;
                } while (local_b0 != (float *)local_b8[-1]);
              }
              local_b8 = local_b8 + 8;
              local_bc = (int *)((int)local_bc + 1);
            } while (*local_ac != 0.0);
          }
          local_cc = (float *)((int)local_cc + 1);
          local_ac = local_ac + 0xd;
        } while (local_cc < local_68);
      }
    }
    else if (puVar15 != (undefined4 *)0x0) {
      local_cc = local_88 + 3;
      local_b8 = local_a4 + 7;
      do {
        *(undefined1 *)local_cc = 1;
        local_c4 = *(float **)*local_b8;
        if (local_c4 != (float *)*local_b8) {
          do {
            pfVar11 = local_c4 + 2;
            fVar28 = local_cc[2];
            iVar7 = FUN_200ea4b0(fVar28,*(undefined4 *)((int)fVar28 + 4));
            *(int *)((int)fVar28 + 4) = iVar7;
            **(int **)(iVar7 + 4) = iVar7;
            FUN_200a9420(iVar7 + 8,pfVar11);
            local_cc[3] = (float)((int)local_cc[3] + 1);
            iVar7 = 0;
            do {
              pfVar20 = (float *)(*(int *)((int)pvVar8 + ((int)*pfVar11 * 7 + iVar7) * 4 + 0x10) *
                                  0x10 + (int)pvVar30);
              if ((undefined4 *)*pfVar20 == local_bc) {
                pfVar20[3] = (float)local_bc;
              }
              if (*(char *)((int)local_a4 +
                           *(int *)(*(int *)((int)pvVar8 + ((int)*pfVar11 * 7 + iVar7) * 4 + 0x10) *
                                    0x10 + (int)pvVar30) * 0x34 + 0xe) == '\0') {
                *(undefined1 *)local_cc = 0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 3);
            local_c4 = (float *)*local_c4;
          } while (local_c4 != (float *)*local_b8);
        }
        pfVar11 = *(float **)local_b8[3];
        piVar13 = local_bc;
        if (pfVar11 != (float *)local_b8[3]) {
          do {
            if (local_b8[1] == 0.0) {
              local_c0 = (float *)local_cc[2];
              fVar28 = (float)FUN_200ea4b0(local_c0,local_c0[1]);
              local_c0[1] = fVar28;
              **(float **)((int)fVar28 + 4) = fVar28;
              FUN_200a9420((int)fVar28 + 8,pfVar11 + 2);
              local_cc[3] = (float)((int)local_cc[3] + 1);
              piVar13 = local_bc;
            }
            iVar7 = 0;
            do {
              pfVar20 = (float *)(*(int *)((int)pvVar8 + ((int)pfVar11[2] * 7 + iVar7) * 4 + 0x10) *
                                  0x10 + (int)pvVar30);
              if ((undefined4 *)*pfVar20 == piVar13) {
                pfVar20[3] = (float)piVar13;
              }
              if (*(char *)((int)local_a4 +
                           *(int *)(*(int *)((int)pvVar8 + ((int)pfVar11[2] * 7 + iVar7) * 4 + 0x10)
                                    * 0x10 + (int)pvVar30) * 0x34 + 0xe) == '\0') {
                *(undefined1 *)local_cc = 0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 3);
            pfVar11 = (float *)*pfVar11;
          } while (pfVar11 != (float *)local_b8[3]);
        }
        local_b8 = local_b8 + 0xd;
        local_bc = (int *)((int)piVar13 + 1);
        local_cc = local_cc + 8;
      } while (local_bc < local_68);
    }
    pvVar8 = local_80;
    pfVar11 = local_a4;
    local_54 = 0;
    local_cc = (float *)0x0;
    if (local_bc != (undefined4 *)0x0) {
      local_9c = local_bc;
      pfVar20 = local_88 + 5;
      do {
        if (*(char *)(pfVar20 + -2) == '\0') {
          *(short *)(pfVar20 + 2) = (short)local_cc;
          local_cc = (float *)((int)local_cc + 1);
        }
        else {
          sVar5 = (short)local_54;
          local_54 = local_54 + 1;
          *(short *)(pfVar20 + 2) = -1 - sVar5;
          local_64 = 0.0;
          local_60 = 0.0;
          local_5c = 0.0;
          piVar13 = *(int **)*pfVar20;
          if (piVar13 != (int *)*pfVar20) {
            do {
              iVar7 = piVar13[2];
              iVar9 = *(int *)(*(int *)((int)local_84 + iVar7 * 0x1c + 0x10) * 0x10 + (int)pvVar8);
              iVar24 = *(int *)(*(int *)((int)local_84 + iVar7 * 0x1c + 0x14) * 0x10 + (int)pvVar8);
              iVar7 = *(int *)(*(int *)((int)local_84 + iVar7 * 0x1c + 0x18) * 0x10 + (int)pvVar8);
              local_70 = (undefined4 *)pfVar11[iVar24 * 0xd + 2];
              local_74 = (undefined4 *)pfVar11[iVar24 * 0xd + 1];
              local_44 = pfVar11[iVar7 * 0xd] - pfVar11[iVar24 * 0xd];
              local_40 = pfVar11[iVar7 * 0xd + 1] - (float)local_74;
              local_3c = pfVar11[iVar7 * 0xd + 2] - (float)local_70;
              local_1c = pfVar11[iVar9 * 0xd] - pfVar11[iVar24 * 0xd];
              local_18 = pfVar11[iVar9 * 0xd + 1] - (float)local_74;
              local_14 = pfVar11[iVar9 * 0xd + 2] - (float)local_70;
              FUN_200c38a0(&local_1c);
              local_64 = local_44 + local_64;
              local_60 = local_60 + local_40;
              local_5c = local_5c + local_3c;
              piVar13 = (int *)*piVar13;
            } while (piVar13 != (int *)*pfVar20);
          }
          local_c0 = (float *)SQRT(local_64 * local_64 + local_60 * local_60 + local_5c * local_5c);
          if ((float)local_c0 <= 1e-10) {
            pfVar20[-5] = 0.0;
            local_5c = 0.0;
            pfVar20[-4] = 0.0;
            pfVar20[-3] = 0.0;
          }
          else {
            FUN_200c3870(local_c0);
            pfVar20[-5] = local_64;
            pfVar20[-4] = local_60;
            pfVar20[-3] = local_5c;
          }
        }
        pfVar20 = pfVar20 + 8;
        local_9c = (undefined4 *)((int)local_9c + -1);
      } while (local_9c != (undefined4 *)0x0);
    }
    puVar15 = (undefined4 *)0x0;
    pfVar20 = (float *)0x0;
    local_98 = (undefined4 *)0x0;
    local_c4 = (float *)0x0;
    if (local_68 != (undefined4 *)0x0) {
      pfVar11 = pfVar11 + 3;
      puVar21 = local_68;
      do {
        if (*(char *)((int)pfVar11 + 2) == '\0') {
          *(short *)pfVar11 = (short)pfVar20;
          pfVar20 = (float *)((int)pfVar20 + 1);
        }
        else {
          sVar5 = (short)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          *(short *)pfVar11 = -1 - sVar5;
        }
        pfVar11 = pfVar11 + 0xd;
        puVar21 = (undefined4 *)((int)puVar21 + -1);
        local_c4 = pfVar20;
        local_98 = puVar15;
      } while (puVar21 != (undefined4 *)0x0);
    }
    pfVar11 = (float *)0x0;
    puVar15 = (undefined4 *)0x0;
    local_a0 = (float *)0x0;
    local_b4 = (undefined4 *)0x0;
    if (local_48 != (undefined4 *)0x0) {
      psVar16 = (short *)(local_50 + 5);
      puVar21 = local_48;
      do {
        if ((char)psVar16[-6] == '\0') {
          *psVar16 = (short)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        else {
          sVar5 = (short)pfVar11;
          pfVar11 = (float *)((int)pfVar11 + 1);
          *psVar16 = -1 - sVar5;
        }
        psVar16 = psVar16 + 0xc;
        puVar21 = (undefined4 *)((int)puVar21 + -1);
        local_b4 = puVar15;
        local_a0 = pfVar11;
      } while (puVar21 != (undefined4 *)0x0);
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
    }
    pvVar8 = operator_new((iVar7 + 1) * 0x10);
    iVar9 = local_90;
    local_b0 = pvVar8;
    local_b8 = operator_new((*(int *)(local_90 + 4) * iVar7 + 1) * 0xc);
    local_70 = operator_new(local_7c * 0xc);
    local_74 = operator_new(local_7c * 0x10 + 0x28);
    local_ac = (float *)0x0;
    puVar15 = &DAT_20404aa0;
    for (iVar7 = 100; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    local_8c = (int *)((int)pvVar8 + 0xc);
    local_a8 = (float *)0x0;
    pvVar8 = (void *)0x0;
    while (pfVar11 = local_c4, (int)pvVar8 < local_7c) {
      piVar13 = (int *)((int)local_84 + (int)pvVar8 * 0x1c + 4);
      iVar7 = *piVar13;
      *local_8c = 0;
      local_8c[-3] = iVar7;
      local_8c[-2] = (int)local_a8;
      local_94 = pvVar8;
      if ((int)pvVar8 < local_7c) {
        iVar7 = *piVar13;
        do {
          if (iVar7 != *piVar13) break;
          local_94 = (void *)((int)local_94 + 1);
          piVar13 = piVar13 + 7;
        } while ((int)local_94 < local_7c);
      }
      piVar13 = (int *)((int)local_b8 + (int)local_a8 * 0xc + 4);
      while (local_78 = piVar13, (int)pvVar8 < (int)local_94) {
        piVar13[-1] = *(int *)((int)local_84 + (int)pvVar8 * 0x1c + 8);
        local_c0 = *(float **)((int)local_84 + (int)pvVar8 * 0x1c + 8);
        puVar15 = (undefined4 *)((int)local_84 + (int)pvVar8 * 0x1c + 8);
        pvVar30 = pvVar8;
        do {
          if (local_c0 != (float *)*puVar15) break;
          pvVar30 = (void *)((int)pvVar30 + 1);
          puVar15 = puVar15 + 7;
        } while ((int)pvVar30 < (int)local_94);
        if ((int)pvVar8 < (int)pvVar30) {
          local_9c = (undefined4 *)((int)local_84 + (int)pvVar8 * 0x1c + 0x10);
          local_4c = (float *)((int)pvVar30 - (int)pvVar8);
          puVar15 = local_70;
          do {
            iVar7 = 3;
            puVar21 = local_9c;
            do {
              uVar4 = *puVar21;
              puVar21 = puVar21 + 1;
              *puVar15 = uVar4;
              puVar15 = puVar15 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            local_9c = local_9c + 7;
            local_4c = (float *)((int)local_4c + -1);
          } while (local_4c != (float *)0x0);
          local_4c = (float *)0x0;
        }
        iVar7 = FUN_200b3330((int)pvVar30 - (int)pvVar8,local_70,local_74,&local_10);
        *piVar13 = iVar7;
        pvVar8 = operator_new(iVar7 * 2);
        piVar13[1] = (int)pvVar8;
        iVar7 = 0;
        if (0 < *piVar13) {
          do {
            *(undefined2 *)(piVar13[1] + iVar7 * 2) = *(undefined2 *)((int)local_74 + iVar7 * 4);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *piVar13);
        }
        local_a8 = (float *)((int)local_a8 + 1);
        piVar13 = piVar13 + 3;
        *local_8c = *local_8c + 1;
        pvVar8 = pvVar30;
      }
      local_ac = (float *)((int)local_ac + 1);
      local_8c = local_8c + 4;
      pvVar8 = local_94;
    }
    local_8c = (void *)0x0;
    local_c4 = (float *)0x0;
    if ((7 < local_58) && ((500 < (int)pfVar11 * local_58 || (500 < (int)local_cc * local_58)))) {
      piVar13 = operator_new(0x38);
      local_10 = piVar13;
      if (piVar13 == (int *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        *(char *)(piVar13 + 4) = local_c5;
        piVar13[5] = 0;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[9] = 0;
        *(char *)(piVar13 + 8) = local_c5;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        local_4 = 4;
        uVar12 = ((int)local_cc + (int)pfVar11 * 6) * local_58 + 100;
        piVar13[3] = uVar12;
        pvVar8 = operator_new(uVar12);
        piVar13[0xd] = (int)pvVar8;
        *piVar13 = (int)pfVar11;
        piVar13[1] = (int)local_cc;
        piVar13[2] = 0;
        *(undefined1 *)(piVar13 + 0xc) = 1;
      }
      *(int **)(iVar9 + 0x108) = piVar13;
      iVar7 = 0;
      local_4 = 0xffffffff;
      local_78 = *(int **)(param_2 + 0x14);
      for (uVar12 = 0;
          (local_78 != (int *)0x0 &&
          (uVar12 < (uint)(*(int *)(param_2 + 0x18) - (int)local_78 >> 2))); uVar12 = uVar12 + 1) {
        iVar24 = *(int *)(*(int *)(param_2 + 0x14) + uVar12 * 4);
        if (iVar7 < iVar24) {
          iVar7 = iVar24;
        }
      }
      local_8c = operator_new(iVar7 * (int)pfVar11 * 0xc);
      local_c4 = operator_new(iVar7 * (int)local_cc * 0xc);
    }
    pfVar20 = local_ac;
    *(float **)(iVar9 + 0x10) = local_a0;
    *(float **)(iVar9 + 0x18) = local_a8;
    *(float **)(iVar9 + 0x20) = local_6c;
    *(undefined4 **)(iVar9 + 0x28) = local_b4;
    *(undefined4 **)(iVar9 + 0xc) = local_98;
    *(int *)(iVar9 + 0x34) = (int)local_ac * 0xc;
    *(float **)(iVar9 + 8) = local_ac;
    iVar7 = (int)local_ac * 0xc + (int)local_98 * 0xc;
    *(int *)(iVar9 + 0x38) = iVar7;
    *(int *)(iVar9 + 0x14) = local_54;
    iVar7 = iVar7 + (int)local_a0 * 8;
    *(int *)(iVar9 + 0x3c) = iVar7;
    *(float **)(iVar9 + 0x24) = pfVar11;
    iVar7 = iVar7 + local_54 * 0xc;
    iVar24 = 0;
    *(float **)(iVar9 + 0x2c) = local_cc;
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(int *)(iVar9 + 0xa4) = iVar7;
    *(int *)(iVar9 + 0x40) = iVar7;
    if (local_ac != (float *)0x0) {
      piVar13 = (int *)((int)local_b0 + 0xc);
      pfVar11 = local_ac;
      do {
        iVar7 = *piVar13;
        piVar13[-1] = iVar24;
        iVar24 = iVar24 + iVar7;
        piVar13 = piVar13 + 4;
        pfVar11 = (float *)((int)pfVar11 + -1);
        *(int *)(iVar9 + 0xa4) = *(int *)(iVar9 + 0xa4) + iVar7 * 6;
      } while (pfVar11 != (float *)0x0);
    }
    iVar7 = 0;
    *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(iVar9 + 0xa4);
    if (local_ac != (float *)0x0) {
      local_b4 = local_ac;
      piVar13 = (int *)((int)local_b0 + 0xc);
      do {
        iVar24 = 0;
        if (0 < *piVar13) {
          do {
            iVar18 = *(int *)((int)local_b8 + (piVar13[-2] + iVar24) * 0xc + 4);
            iVar7 = iVar7 + iVar18;
            *(int *)(iVar9 + 0xa4) = *(int *)(iVar9 + 0xa4) + iVar18 * 2;
            iVar24 = iVar24 + 1;
          } while (iVar24 < *piVar13);
        }
        piVar13 = piVar13 + 4;
        local_b4 = (undefined4 *)((int)local_b4 + -1);
      } while (local_b4 != (undefined4 *)0x0);
      local_b4 = (undefined4 *)0x0;
    }
    *(int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0xa4);
    *(int *)(iVar9 + 0x1c) = iVar7;
    iVar7 = *(int *)(iVar9 + 0xa4) + *(int *)(iVar9 + 0x20) * 6;
    *(int *)(iVar9 + 0xa4) = iVar7;
    *(int *)(iVar9 + 0x4c) = iVar7;
    if (*(int *)(iVar9 + 0x108) == 0) {
      *(int *)(iVar9 + 0xa4) = iVar7 + *(int *)(iVar9 + 0x24) * local_58 * 6;
    }
    *(int *)(iVar9 + 0x50) = *(int *)(iVar9 + 0xa4);
    iVar7 = *(int *)(iVar9 + 0xa4) + *(int *)(iVar9 + 0x28) * local_58 * 4;
    *(int *)(iVar9 + 0xa4) = iVar7;
    *(int *)(iVar9 + 0x54) = iVar7;
    if (*(int *)(iVar9 + 0x108) == 0) {
      *(int *)(iVar9 + 0xa4) = *(int *)(iVar9 + 0x2c) * local_58 + iVar7;
    }
    pvVar8 = operator_new(*(uint *)(iVar9 + 0xa4));
    *(int *)(iVar9 + 0xb0) = *(int *)(iVar9 + 0x30) + (int)pvVar8;
    *(int *)(iVar9 + 0xb4) = *(int *)(iVar9 + 0x34) + (int)pvVar8;
    *(int *)(iVar9 + 0xb8) = *(int *)(iVar9 + 0x38) + (int)pvVar8;
    *(int *)(iVar9 + 0xbc) = *(int *)(iVar9 + 0x3c) + (int)pvVar8;
    *(int *)(iVar9 + 0xc0) = *(int *)(iVar9 + 0x40) + (int)pvVar8;
    *(int *)(iVar9 + 0xc4) = *(int *)(iVar9 + 0x44) + (int)pvVar8;
    *(int *)(iVar9 + 200) = *(int *)(iVar9 + 0x48) + (int)pvVar8;
    *(int *)(iVar9 + 0xcc) = *(int *)(iVar9 + 0x4c) + (int)pvVar8;
    *(void **)(iVar9 + 0xac) = pvVar8;
    *(int *)(iVar9 + 0xd0) = *(int *)(iVar9 + 0x50) + (int)pvVar8;
    *(int *)(iVar9 + 0xd4) = *(int *)(iVar9 + 0x54) + (int)pvVar8;
    if (pfVar20 != (float *)0x0) {
      iVar7 = 0;
      puVar15 = (undefined4 *)((int)local_b0 + 0xc);
      do {
        *(undefined4 *)(iVar7 + *(int *)(iVar9 + 0xb0)) = puVar15[-3];
        *(undefined4 *)(iVar7 + 4 + *(int *)(iVar9 + 0xb0)) = puVar15[-1];
        *(undefined4 *)(iVar7 + 8 + *(int *)(iVar9 + 0xb0)) = *puVar15;
        iVar7 = iVar7 + 0xc;
        pfVar20 = (float *)((int)pfVar20 + -1);
        puVar15 = puVar15 + 4;
      } while (pfVar20 != (float *)0x0);
    }
    local_54 = *(int *)(iVar9 + 0xcc);
    local_4c = *(float **)(iVar9 + 0xd0);
    local_58 = *(int *)(iVar9 + 0xd4);
    local_c0 = (float *)0x0;
    local_cc = (float *)0x0;
    for (local_9c = (undefined4 *)0x0;
        (*(int *)(param_2 + 4) != 0 &&
        (local_9c < (uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2)));
        local_9c = (undefined4 *)((int)local_9c + 1)) {
      puVar15 = *(undefined4 **)(*(int *)(param_2 + 0x14) + (int)local_9c * 4);
      if (local_68 != (undefined4 *)0x0) {
        local_98 = local_68;
        pfVar11 = local_a4 + 4;
        do {
          if (*(char *)((int)pfVar11 + -2) == '\0') {
            if (*(int *)(iVar9 + 0x108) == 0) {
              puVar25 = (undefined2 *)(local_54 + (int)*(short *)(pfVar11 + -1) * (int)puVar15 * 6);
              if (0 < (int)puVar15) {
                local_a0 = (float *)(*(int *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                               (int)*pfVar11 * 4) + 0x4c) + 4 +
                                             (int)local_cc) + (int)pfVar11[1] * (int)puVar15 * 0xc +
                                    8);
                local_b4 = puVar15;
                do {
                  iVar7 = 0;
                  local_64 = (local_a0[-2] - *(float *)(local_90 + 0x8c)) *
                             *(float *)(local_90 + 0x74);
                  local_60 = (local_a0[-1] - *(float *)(local_90 + 0x90)) *
                             *(float *)(local_90 + 0x78);
                  local_5c = (*local_a0 - *(float *)(local_90 + 0x94)) * *(float *)(local_90 + 0x7c)
                  ;
                  do {
                    uVar6 = __ftol();
                    *puVar25 = uVar6;
                    iVar7 = iVar7 + 1;
                    puVar25 = puVar25 + 1;
                  } while (iVar7 < 3);
                  local_a0 = local_a0 + 3;
                  local_b4 = (undefined4 *)((int)local_b4 + -1);
                } while (local_b4 != (undefined4 *)0x0);
                local_b4 = (undefined4 *)0x0;
                iVar9 = local_90;
              }
            }
            else {
              iVar7 = 0;
              if (0 < (int)puVar15) {
                do {
                  puVar21 = (undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(param_6 + 4) + (int)*pfVar11 * 4) +
                                              0x4c) + 4 + (int)local_cc) +
                            ((int)pfVar11[1] * (int)puVar15 + iVar7) * 0xc);
                  iVar24 = (int)*(short *)(pfVar11 + -1) * (int)puVar15 + iVar7;
                  iVar7 = iVar7 + 1;
                  puVar17 = (undefined4 *)((int)local_8c + iVar24 * 0xc);
                  *puVar17 = *puVar21;
                  puVar17[1] = puVar21[1];
                  puVar17[2] = puVar21[2];
                } while (iVar7 < (int)puVar15);
              }
            }
          }
          else {
            pfVar20 = (float *)(*(int *)(iVar9 + 0xb4) + (*(short *)(pfVar11 + -1) + 1) * -0xc);
            *pfVar20 = pfVar11[-4];
            pfVar20[1] = pfVar11[-3];
            pfVar20[2] = pfVar11[-2];
          }
          pfVar11 = pfVar11 + 0xd;
          local_98 = (undefined4 *)((int)local_98 + -1);
        } while (local_98 != (undefined4 *)0x0);
      }
      local_94 = operator_new((int)puVar15 * 0xc);
      if (local_bc != (undefined4 *)0x0) {
        local_a8 = local_88 + 5;
        local_b4 = local_bc;
        do {
          if (*(char *)(local_a8 + -2) == '\0') {
            if (0 < (int)puVar15) {
              puVar17 = (undefined4 *)((int)local_94 + 8);
              puVar21 = puVar15;
              do {
                puVar17[-2] = 0;
                puVar17[-1] = 0;
                *puVar17 = 0;
                puVar17 = puVar17 + 3;
                puVar21 = (undefined4 *)((int)puVar21 + -1);
              } while (puVar21 != (undefined4 *)0x0);
            }
            local_a0 = *(float **)*local_a8;
            if (local_a0 != (float *)*local_a8) {
              do {
                iVar7 = 0;
                if (0 < (int)puVar15) {
                  pfVar11 = local_a4;
                  pfVar20 = (float *)((int)local_94 + 8);
                  do {
                    pfVar26 = local_a4;
                    fVar28 = local_a0[2];
                    iVar9 = *(int *)(*(int *)((int)local_84 + (int)fVar28 * 0x1c + 0x10) * 0x10 +
                                    (int)local_80);
                    iVar18 = (int)pfVar11[iVar9 * 0xd + 5] * (int)puVar15 + iVar7;
                    iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                      (int)pfVar11[iVar9 * 0xd + 4] * 4) + 0x4c) + 4
                                    + (int)local_cc);
                    iVar24 = *(int *)(*(int *)((int)local_84 + (int)fVar28 * 0x1c + 0x14) * 0x10 +
                                     (int)local_80);
                    iVar19 = (int)local_a4[iVar24 * 0xd + 5] * (int)puVar15 + iVar7;
                    iVar24 = *(int *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                       (int)local_a4[iVar24 * 0xd + 4] * 4) + 0x4c)
                                      + 4 + (int)local_cc);
                    local_28 = *(float *)(iVar24 + iVar19 * 0xc);
                    local_40 = *(float *)(iVar24 + 4 + iVar19 * 0xc);
                    local_3c = *(float *)(iVar24 + iVar19 * 0xc + 8);
                    iVar24 = *(int *)(*(int *)((int)local_84 + (int)fVar28 * 0x1c + 0x18) * 0x10 +
                                     (int)local_80);
                    iVar19 = (int)local_a4[iVar24 * 0xd + 5] * (int)puVar15 + iVar7;
                    iVar24 = *(int *)(*(int *)(*(int *)(*(int *)(param_6 + 4) +
                                                       (int)local_a4[iVar24 * 0xd + 4] * 4) + 0x4c)
                                      + 4 + (int)local_cc);
                    pfVar11 = (float *)(iVar24 + iVar19 * 0xc);
                    local_38 = *pfVar11 - local_28;
                    local_34 = pfVar11[1] - local_40;
                    local_30 = (void *)(*(float *)(iVar24 + 8 + iVar19 * 0xc) - local_3c);
                    local_28 = *(float *)(iVar9 + iVar18 * 0xc) - local_28;
                    local_24 = *(float *)(iVar9 + 4 + iVar18 * 0xc) - local_40;
                    local_20 = *(float *)(iVar9 + 8 + iVar18 * 0xc) - local_3c;
                    FUN_200c38a0(&local_28);
                    iVar7 = iVar7 + 1;
                    pfVar20[-2] = local_38 + pfVar20[-2];
                    pfVar20[-1] = local_34 + pfVar20[-1];
                    *pfVar20 = (float)local_30 + *pfVar20;
                    pfVar11 = pfVar26;
                    pfVar20 = pfVar20 + 3;
                  } while (iVar7 < (int)puVar15);
                }
                local_a0 = (float *)*local_a0;
              } while (local_a0 != (float *)*local_a8);
            }
            pfVar11 = local_c4;
            if (*(int *)(local_90 + 0x108) == 0) {
              iVar9 = 0;
              iVar7 = (int)*(short *)(local_a8 + 2) * (int)puVar15 + local_58;
              if (0 < (int)puVar15) {
                pfVar11 = (float *)((int)local_94 + 4);
                do {
                  local_98 = (undefined4 *)
                             SQRT(*pfVar11 * *pfVar11 +
                                  pfVar11[1] * pfVar11[1] + pfVar11[-1] * pfVar11[-1]);
                  if ((float)local_98 <= 1e-10) {
                    pfVar11[-1] = 0.0;
                    *pfVar11 = 0.0;
                    pfVar11[1] = 0.0;
                  }
                  else {
                    FUN_200c3870(local_98);
                  }
                  local_78 = (int *)0x0;
                  local_c5 = '\0';
                  cVar23 = '\0';
                  pfVar20 = (float *)&DAT_20404c94;
                  do {
                    piVar13 = (int *)(*pfVar20 * *pfVar11 +
                                     pfVar20[-1] * pfVar11[-1] + pfVar20[1] * pfVar11[1]);
                    if ((float)local_78 < (float)piVar13) {
                      local_c5 = cVar23;
                      local_78 = piVar13;
                    }
                    pfVar20 = pfVar20 + 3;
                    cVar23 = cVar23 + '\x01';
                  } while ((int)pfVar20 < 0x20405894);
                  pfVar11 = pfVar11 + 3;
                  *(char *)(iVar9 + iVar7) = local_c5;
                  iVar9 = iVar9 + 1;
                } while (iVar9 < (int)puVar15);
              }
            }
            else {
              iVar7 = 0;
              if (0 < (int)puVar15) {
                pfVar20 = (float *)((int)local_94 + 8);
                pfVar26 = local_a8;
                do {
                  pfVar29 = pfVar11 + ((int)*(short *)(pfVar26 + 2) * (int)puVar15 + iVar7) * 3;
                  *pfVar29 = pfVar20[-2];
                  pfVar29[1] = pfVar20[-1];
                  pfVar29[2] = *pfVar20;
                  iVar9 = (int)*(short *)(pfVar26 + 2) * (int)puVar15 + iVar7;
                  pfVar29 = pfVar11 + iVar9 * 3;
                  local_98 = (undefined4 *)
                             SQRT(pfVar11[iVar9 * 3 + 2] * pfVar11[iVar9 * 3 + 2] +
                                  pfVar11[iVar9 * 3 + 1] * pfVar11[iVar9 * 3 + 1] +
                                  pfVar11[iVar9 * 3] * pfVar11[iVar9 * 3]);
                  if ((float)local_98 <= 1e-10) {
                    *pfVar29 = 0.0;
                    pfVar29[1] = 0.0;
                    pfVar29[2] = 0.0;
                  }
                  else {
                    FUN_200c3870(local_98);
                    pfVar26 = local_a8;
                  }
                  iVar7 = iVar7 + 1;
                  pfVar20 = pfVar20 + 3;
                } while (iVar7 < (int)puVar15);
              }
            }
          }
          else {
            pfVar11 = (float *)(*(int *)(local_90 + 0xbc) + (*(short *)(local_a8 + 2) + 1) * -0xc);
            *pfVar11 = local_a8[-5];
            pfVar11[1] = local_a8[-4];
            pfVar11[2] = local_a8[-3];
          }
          local_a8 = local_a8 + 8;
          local_b4 = (undefined4 *)((int)local_b4 + -1);
        } while (local_b4 != (undefined4 *)0x0);
      }
      FUN_200f9f75(local_94);
      pfVar11 = local_c0;
      if (*(int *)(local_90 + 0x108) == 0) {
        local_54 = local_54 + *(int *)(local_90 + 0x24) * (int)puVar15 * 6;
        local_58 = local_58 + *(int *)(local_90 + 0x2c) * (int)puVar15;
      }
      else {
        iVar7 = 0;
        if (0 < (int)puVar15) {
          do {
            iVar9 = (int)puVar15 - iVar7;
            if (8 < iVar9) {
              iVar9 = 8;
            }
            FUN_200b6220(pfVar11,iVar9,puVar15,(void *)((int)local_8c + iVar7 * 0xc),
                         local_c4 + iVar7 * 3);
            iVar7 = iVar7 + iVar9;
            pfVar11 = (float *)((int)pfVar11 + iVar9);
          } while (iVar7 < (int)puVar15);
        }
      }
      local_c0 = pfVar11;
      if (local_48 != (undefined4 *)0x0) {
        local_98 = local_48;
        local_a0 = (float *)(local_50 + 5);
        do {
          if (*(char *)(local_a0 + -3) == '\0') {
            pfVar11 = local_4c + (int)*(short *)local_a0 * (int)puVar15;
            puVar21 = puVar15;
            if (0 < (int)puVar15) {
              do {
                local_b4 = puVar21;
                iVar7 = 2;
                do {
                  iVar9 = __ftol();
                  if (iVar9 < -0x7fff) {
                    FUN_2008ea00(s_Out_of_range_texture_coordinates_20157bac,0);
                    iVar9 = -0x7fff;
                  }
                  else if (0x7fff < iVar9) {
                    FUN_2008ea00(s_Out_of_range_texture_coordinates_20157bac,0);
                    iVar9 = 0x7fff;
                  }
                  *(short *)pfVar11 = (short)iVar9;
                  pfVar11 = (float *)((int)pfVar11 + 2);
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                local_b4 = (undefined4 *)((int)local_b4 + -1);
                puVar21 = local_b4;
              } while (local_b4 != (undefined4 *)0x0);
            }
          }
          else {
            pfVar11 = (float *)(*(int *)(local_90 + 0xb8) - (*(short *)local_a0 * 8 + 8));
            *pfVar11 = local_a0[-5];
            pfVar11[1] = local_a0[-4];
          }
          local_a0 = local_a0 + 6;
          local_98 = (undefined4 *)((int)local_98 + -1);
        } while (local_98 != (undefined4 *)0x0);
      }
      local_4c = local_4c + *(int *)(local_90 + 0x28) * (int)puVar15;
      local_cc = (float *)((int)local_cc + 0xc);
      iVar9 = local_90;
    }
    if (local_8c != (void *)0x0) {
      FUN_200f9f75(local_8c);
    }
    if (local_c4 != (float *)0x0) {
      FUN_200f9f75(local_c4);
    }
    local_9c = (undefined4 *)0x0;
    local_c4 = (float *)0x0;
    if (local_ac != (float *)0x0) {
      local_b4 = local_ac;
      piVar13 = (int *)((int)local_b0 + 0xc);
      do {
        iVar7 = 0;
        if (0 < *piVar13) {
          local_c0 = (float *)((int)local_9c * 6);
          do {
            uVar12 = *(uint *)((int)local_b8 + (piVar13[-2] + iVar7) * 0xc + 4);
            *(undefined2 *)((int)local_c0 + *(int *)(local_90 + 0xc0)) =
                 *(undefined2 *)((int)local_b8 + (piVar13[-2] + iVar7) * 0xc);
            *(undefined2 *)((int)local_c0 + *(int *)(local_90 + 0xc0) + 2) = local_c4._0_2_;
            *(short *)((int)local_c0 + *(int *)(local_90 + 0xc0) + 4) = (short)uVar12;
            local_c0 = (float *)((int)local_c0 + 6);
            local_9c = (undefined4 *)((int)local_9c + 1);
            puVar15 = *(undefined4 **)((int)local_b8 + (piVar13[-2] + iVar7) * 0xc + 8);
            puVar21 = (undefined4 *)(*(int *)(local_90 + 0xc4) + (int)local_c4 * 2);
            for (uVar22 = (uVar12 & 0x7fffffff) >> 1; uVar22 != 0; uVar22 = uVar22 - 1) {
              *puVar21 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
            }
            local_c4 = (float *)((int)local_c4 + uVar12);
            for (uVar12 = uVar12 * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar21 = *(undefined1 *)puVar15;
              puVar15 = (undefined4 *)((int)puVar15 + 1);
              puVar21 = (undefined4 *)((int)puVar21 + 1);
            }
            FUN_200f9f75(*(undefined4 *)((int)local_b8 + (piVar13[-2] + iVar7) * 0xc + 8));
            iVar7 = iVar7 + 1;
          } while (iVar7 < *piVar13);
        }
        piVar13 = piVar13 + 4;
        local_b4 = (undefined4 *)((int)local_b4 + -1);
      } while (local_b4 != (undefined4 *)0x0);
    }
    puVar15 = local_50;
    iVar7 = local_90;
    pfVar11 = local_a4;
    if (local_6c != (float *)0x0) {
      iVar9 = 0;
      piVar13 = (int *)((int)local_80 + 4);
      local_c0 = local_6c;
      do {
        if (piVar13[-1] < 0) {
          *(undefined2 *)(iVar9 + *(int *)(local_90 + 200)) = 0xffff;
        }
        else {
          *(undefined2 *)(iVar9 + *(int *)(local_90 + 200)) =
               *(undefined2 *)(local_a4 + piVar13[-1] * 0xd + 3);
        }
        if (piVar13[2] < 0) {
          *(undefined2 *)(*(int *)(local_90 + 200) + 2 + iVar9) = 0xffff;
        }
        else {
          *(undefined2 *)(*(int *)(local_90 + 200) + 2 + iVar9) =
               *(undefined2 *)(local_88 + piVar13[2] * 8 + 7);
        }
        if (*piVar13 < 0) {
          *(undefined2 *)(*(int *)(local_90 + 200) + 4 + iVar9) = *(undefined2 *)(local_50 + 5);
        }
        else {
          *(undefined2 *)(*(int *)(local_90 + 200) + 4 + iVar9) =
               *(undefined2 *)(local_50 + *piVar13 * 6 + 5);
        }
        piVar13 = piVar13 + 4;
        iVar9 = iVar9 + 6;
        local_c0 = (float *)((int)local_c0 + -1);
      } while (local_c0 != (float *)0x0);
    }
    FUN_200ab360(param_2);
    if (pfVar11 != (float *)0x0) {
      FUN_200fb4ef(pfVar11,0x34,pfVar11[-1],FUN_200b5ed0);
      FUN_200f9f75(pfVar11 + -1);
    }
    FUN_200f9f75(puVar15);
    if (local_88 != (float *)0x0) {
      pfVar11 = local_88 + -1;
      FUN_200fb4ef(local_88,0x20,local_88[-1],FUN_200b5fc0);
      FUN_200f9f75(pfVar11);
    }
    FUN_200f9f75(local_80);
    FUN_200f9f75(local_84);
    FUN_200f9f75(local_b0);
    FUN_200f9f75(local_b8);
    FUN_200f9f75(local_70);
    FUN_200f9f75(local_74);
  }
  ExceptionList = local_c;
  return iVar7;
}

