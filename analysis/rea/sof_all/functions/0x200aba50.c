// rea decompile_all
// name: FUN_200aba50
// address: 0x200aba50
// body: available
// range: 0x200aba50-0x200abf74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200aba50(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  short *psVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  int *in_ECX;
  short *psVar13;
  undefined2 uVar14;
  int local_98;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  undefined4 local_5c;
  short *local_58;
  short local_54 [4];
  int local_4c;
  int local_48;
  float local_44;
  int local_40;
  undefined1 local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_c [4];
  int local_8 [2];
  
  cVar9 = FUN_20067860(param_2,param_3,local_3c);
  if (cVar9 != '\0') {
    local_78 = 0;
    local_74 = 0;
    if (in_ECX[0x42] == 0) {
      local_78 = *(int *)(*param_1 * 4 + in_ECX[0x37]);
      if (local_78 == 0) {
        return;
      }
      local_30 = param_1[1] * 3;
      local_4c = *(int *)(*param_1 * 4 + *(int *)(param_1[3] + 0x14)) * 3;
    }
    else {
      FUN_200b8210(param_1,&local_74,&local_34,local_18,local_c);
    }
    *in_ECX = *in_ECX + 1;
    local_70 = 0;
    if (0 < in_ECX[2]) {
      local_7c = 0;
      do {
        local_48 = *(int *)(local_7c + 8 + in_ECX[0x2c]);
        local_60 = 0;
        if (0 < local_48) {
          do {
            iVar11 = *(int *)(local_7c + 4 + in_ECX[0x2c]) + local_60;
            local_40 = (int)*(short *)(in_ECX[0x30] + iVar11 * 6);
            local_90 = in_ECX[0x30] + iVar11 * 6;
            if (((*(int *)(param_4[2] + local_40 * 4) != *param_4) &&
                (cVar9 = FUN_20090e10(param_1), cVar9 != '\0')) &&
               (uVar12 = FUN_20067860(param_2,param_3,local_3c), (char)uVar12 != '\0')) {
              sVar10 = *(short *)(local_90 + 4);
              psVar13 = (short *)(in_ECX[0x31] + *(short *)(local_90 + 2) * 2);
              iVar11 = CONCAT22((short)((uint)uVar12 >> 0x10),sVar10);
              psVar8 = local_58;
              while (local_58 = psVar8, sVar10 != 0) {
                sVar10 = *psVar13;
                uVar14 = (undefined2)((uint)local_90 >> 0x10);
                local_90 = CONCAT22(uVar14,sVar10);
                local_58 = psVar13 + 1;
                local_38 = iVar11 + -1;
                bVar6 = false;
                bVar7 = false;
                if (sVar10 < 0) {
                  local_90 = -local_90;
                  bVar6 = true;
                }
                else if (sVar10 == 0) {
                  sVar10 = *local_58;
                  local_58 = psVar13 + 2;
                  local_90 = CONCAT22(uVar14,sVar10);
                  local_38 = iVar11 + -2;
                }
                else {
                  bVar7 = true;
                }
                local_38 = local_38 - local_90;
                local_98 = 0;
                local_80 = 0;
                psVar13 = local_58;
                if (0 < (short)local_90) {
                  do {
                    sVar10 = *local_58;
                    local_58 = local_58 + 1;
                    local_54[local_98] = sVar10;
                    piVar4 = (int *)(in_ECX[0x43] + sVar10 * 0x4c);
                    if (*in_ECX != *piVar4) {
                      *piVar4 = *in_ECX;
                      iVar11 = piVar4[1];
                      if (-1 < iVar11) {
                        if (local_78 == 0) {
                          piVar5 = (int *)(local_74 + iVar11 * local_34 * 0xc);
                          piVar4[2] = *piVar5;
                          piVar4[3] = piVar5[1];
                          piVar4[4] = piVar5[2];
                        }
                        else {
                          psVar13 = (short *)(local_78 + (iVar11 * local_4c + local_30) * 2);
                          piVar4[2] = (int)(float)(int)*psVar13;
                          piVar4[3] = (int)(float)(int)psVar13[1];
                          piVar4[4] = (int)(float)(int)psVar13[2];
                          piVar4[2] = (int)((float)piVar4[2] * (float)in_ECX[0x20]);
                          piVar4[3] = (int)((float)in_ECX[0x21] * (float)piVar4[3]);
                          piVar4[4] = (int)((float)in_ECX[0x22] * (float)piVar4[4]);
                          piVar4[2] = (int)((float)in_ECX[0x23] + (float)piVar4[2]);
                          piVar4[3] = (int)((float)in_ECX[0x24] + (float)piVar4[3]);
                          piVar4[4] = (int)((float)in_ECX[0x25] + (float)piVar4[4]);
                        }
                      }
                    }
                    if (bVar6) {
                      if ((short)local_80 < 2) {
                        local_98 = local_98 + 1;
                        goto LAB_200abf13;
                      }
                      local_98 = 2 - (uint)(local_98 != 1);
LAB_200abd73:
                      iVar11 = in_ECX[0x43];
                      pfVar1 = (float *)(iVar11 + 8 + local_54[2] * 0x4c);
                      local_6c = *pfVar1 - *(float *)(iVar11 + 8 + local_54[1] * 0x4c);
                      pfVar2 = (float *)(iVar11 + 8 + local_54[1] * 0x4c);
                      local_68 = pfVar1[1] - pfVar2[1];
                      pfVar3 = (float *)(iVar11 + 8 + local_54[0] * 0x4c);
                      local_64 = pfVar1[2] - pfVar2[2];
                      local_8c = *pfVar3 - *pfVar2;
                      local_88 = pfVar3[1] - pfVar2[1];
                      local_84 = pfVar3[2] - pfVar2[2];
                      FUN_200c38a0(&local_6c);
                      local_5c = 0x7149f2ca;
                      cVar9 = FUN_200abf80(pfVar3,pfVar2,pfVar1,&local_8c,param_2,param_3,&local_5c,
                                           0);
                      if (cVar9 != '\0') {
                        local_44 = SQRT(local_8c * local_8c +
                                        local_88 * local_88 + local_84 * local_84);
                        if (local_44 <= 1e-10) {
                          local_8c = 0.0;
                          local_88 = 0.0;
                          local_84 = 0.0;
                        }
                        else {
                          FUN_200c3870(local_44);
                        }
                        local_14 = local_5c;
                        local_2c = local_5c;
                        local_24 = local_6c;
                        local_20 = local_68;
                        local_28 = local_40;
                        local_1c = local_64;
                        FUN_200ba1b0(local_8,&local_2c);
                        *(float *)(local_8[0] + 0x14) = local_8c;
                        *(float *)(local_8[0] + 0x18) = local_88;
                        *(float *)(local_8[0] + 0x1c) = local_84;
                      }
                    }
                    else {
                      local_98 = local_98 + 1;
                      if (bVar7) {
                        if (1 < (short)local_80) {
                          if (local_98 != 3) goto LAB_200abd73;
LAB_200abd6b:
                          local_98 = 0;
                          goto LAB_200abd73;
                        }
                      }
                      else if (2 < local_98) goto LAB_200abd6b;
                    }
LAB_200abf13:
                    local_80 = local_80 + 1;
                    psVar13 = local_58;
                    psVar8 = local_58;
                  } while ((short)local_80 < (short)local_90);
                }
                local_58 = psVar8;
                iVar11 = local_38;
                psVar8 = local_58;
                sVar10 = (short)local_38;
              }
            }
            local_60 = local_60 + 1;
          } while (local_60 < local_48);
        }
        local_70 = local_70 + 1;
        local_7c = local_7c + 0xc;
      } while (local_70 < in_ECX[2]);
    }
  }
  return;
}

