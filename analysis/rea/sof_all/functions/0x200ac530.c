// rea decompile_all
// name: FUN_200ac530
// address: 0x200ac530
// body: available
// range: 0x200ac530-0x200acb51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ac530(int *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,int *param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int *in_ECX;
  undefined2 uVar11;
  int iVar12;
  short *psVar13;
  char local_111;
  float local_110;
  float local_10c;
  int local_108;
  float *local_104;
  int local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 local_b4;
  undefined1 local_b3;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  float local_64;
  float local_5c;
  int local_58;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  cVar7 = FUN_20067640(in_ECX + 0x16,0x3f800000);
  if (cVar7 != '\0') {
    local_f0 = *param_3 - *param_2;
    local_cc = *param_4;
    local_c8 = param_4[1];
    local_c4 = param_4[2];
    local_ec = param_3[1] - param_2[1];
    local_e8 = param_3[2] - param_2[2];
    FUN_200802f0(param_4 + 3);
    local_cc = local_cc + *param_2;
    local_b3 = *(undefined1 *)((int)param_4 + 0x19);
    local_b4 = *(undefined1 *)(param_4 + 6);
    local_c8 = local_c8 + param_2[1];
    local_c4 = local_c4 + param_2[2];
    FUN_20068220(param_2);
    local_e4 = 0;
    local_d8 = 0;
    if (in_ECX[0x42] == 0) {
      local_e4 = *(int *)(*param_1 * 4 + in_ECX[0x37]);
      if (local_e4 == 0) {
        return;
      }
      local_b0 = *(int *)(*param_1 * 4 + *(int *)(param_1[3] + 0x14)) * 3;
      local_d0 = param_1[1] * 3;
    }
    else {
      FUN_200b8210(param_1,&local_d8,&local_a8,local_6c,local_68);
    }
    *in_ECX = *in_ECX + 1;
    local_dc = 0;
    if (0 < in_ECX[2]) {
      local_108 = 0;
      do {
        local_ac = *(int *)(in_ECX[0x2c] + 8 + local_108);
        local_e0 = 0;
        if (0 < local_ac) {
          do {
            iVar9 = *(int *)(in_ECX[0x2c] + 4 + local_108) + local_e0;
            iVar12 = (int)*(short *)(in_ECX[0x30] + iVar9 * 6);
            iVar9 = in_ECX[0x30] + iVar9 * 6;
            if (((*(int *)(param_7[2] + iVar12 * 4) != *param_7) &&
                (local_d4 = iVar12, cVar7 = FUN_20090e10(param_1), cVar7 != '\0')) &&
               (uVar10 = FUN_20067640(*(int *)(*(int *)(param_9 + 4) + iVar12 * 4) + 0xec,0x3f800000
                                     ), (char)uVar10 != '\0')) {
              sVar8 = *(short *)(iVar9 + 4);
              psVar2 = (short *)(in_ECX[0x31] + *(short *)(iVar9 + 2) * 2);
              iVar9 = CONCAT22((short)((uint)uVar10 >> 0x10),sVar8);
              while (sVar8 != 0) {
                sVar8 = *psVar2;
                uVar11 = (undefined2)((uint)param_4 >> 0x10);
                local_104 = (float *)CONCAT22(uVar11,sVar8);
                psVar13 = psVar2 + 1;
                local_a4 = iVar9 + -1;
                bVar5 = false;
                bVar6 = false;
                if (sVar8 < 0) {
                  local_104 = (float *)-(int)local_104;
                  bVar5 = true;
                }
                else if (sVar8 == 0) {
                  local_104 = (float *)CONCAT22(uVar11,*psVar13);
                  psVar13 = psVar2 + 2;
                  local_a4 = iVar9 + -2;
                }
                else {
                  bVar6 = true;
                }
                local_a4 = local_a4 - (int)local_104;
                iVar9 = 0;
                local_100 = 0;
                param_4 = local_104;
                if (0 < (short)local_104) {
                  do {
                    sVar8 = *psVar13;
                    psVar13 = psVar13 + 1;
                    piVar1 = (int *)(in_ECX[0x43] + sVar8 * 0x4c);
                    if (*in_ECX != *piVar1) {
                      *piVar1 = *in_ECX;
                      iVar12 = piVar1[1];
                      if (-1 < iVar12) {
                        if (local_e4 == 0) {
                          piVar3 = (int *)(local_d8 + iVar12 * local_a8 * 0xc);
                          piVar1[2] = *piVar3;
                          piVar1[3] = piVar3[1];
                          piVar1[4] = piVar3[2];
                        }
                        else {
                          psVar2 = (short *)(local_e4 + (iVar12 * local_b0 + local_d0) * 2);
                          piVar1[2] = (int)(float)(int)*psVar2;
                          piVar1[3] = (int)(float)(int)psVar2[1];
                          local_110 = (float)(int)psVar2[2];
                          piVar1[4] = (int)(float)(int)local_110;
                          piVar1[2] = (int)((float)piVar1[2] * (float)in_ECX[0x20]);
                          piVar1[3] = (int)((float)in_ECX[0x21] * (float)piVar1[3]);
                          piVar1[4] = (int)((float)in_ECX[0x22] * (float)piVar1[4]);
                          piVar1[2] = (int)((float)in_ECX[0x23] + (float)piVar1[2]);
                          piVar1[3] = (int)((float)in_ECX[0x24] + (float)piVar1[3]);
                          piVar1[4] = (int)((float)in_ECX[0x25] + (float)piVar1[4]);
                        }
                      }
                    }
                    FUN_200a1410(local_3c + iVar9 * 0xc,piVar1 + 2);
                    if (bVar5) {
                      if ((short)local_100 < 2) {
                        iVar9 = iVar9 + 1;
                        goto LAB_200acaed;
                      }
                      iVar9 = 2 - (uint)(iVar9 != 1);
LAB_200ac8d8:
                      cVar7 = FUN_200acb60(local_3c,local_30,local_24,&local_f0,&local_cc,&local_111
                                           ,&local_10c,&local_fc,&local_80);
                      param_4 = local_104;
                      if (cVar7 != '\0') {
                        if (local_111 == '\0') {
                          fVar4 = SQRT(local_f0 * local_f0 +
                                       local_ec * local_ec + local_e8 * local_e8) * local_10c;
                          if (1.0 <= fVar4) {
                            local_10c = ((fVar4 - 1.0) / fVar4) * local_10c;
                          }
                          else {
                            local_10c = 0.0;
                          }
                        }
                        else {
                          local_10c = -1.0;
                        }
                        local_110 = SQRT(local_fc * local_fc +
                                         local_f8 * local_f8 + local_f4 * local_f4);
                        if (local_110 <= 1e-10) {
                          local_fc = 0.0;
                          local_f8 = 0.0;
                          local_f4 = 0.0;
                        }
                        else {
                          FUN_200c3870(local_110);
                        }
                        local_a0 = local_fc;
                        local_9c = local_f8;
                        local_98 = local_f4;
                        local_94 = local_80;
                        local_90 = local_7c;
                        local_8c = local_78;
                        local_64 = local_10c;
                        local_58 = local_d4;
                        local_5c = local_10c;
                        FUN_200802f0(local_18);
                        FUN_200802f0(local_c);
                        FUN_200ba440(local_88,&local_5c);
                        FUN_2008c5b0(local_88,local_84);
                        *(float *)(local_74 + 0x14) = local_a0;
                        *(float *)(local_74 + 0x18) = local_9c;
                        *(float *)(local_74 + 0x1c) = local_98;
                        *(undefined4 *)(local_74 + 0x20) = local_94;
                        *(undefined4 *)(local_74 + 0x24) = local_90;
                        *(undefined4 *)(local_74 + 0x28) = local_8c;
                        param_4 = local_104;
                      }
                    }
                    else {
                      iVar9 = iVar9 + 1;
                      if (bVar6) {
                        if (1 < (short)local_100) {
                          if (iVar9 != 3) goto LAB_200ac8d8;
LAB_200ac8d6:
                          iVar9 = 0;
                          goto LAB_200ac8d8;
                        }
                      }
                      else if (2 < iVar9) goto LAB_200ac8d6;
                    }
LAB_200acaed:
                    local_100 = local_100 + 1;
                  } while ((short)local_100 < (short)param_4);
                }
                psVar2 = psVar13;
                iVar9 = local_a4;
                sVar8 = (short)local_a4;
              }
            }
            local_e0 = local_e0 + 1;
          } while (local_e0 < local_ac);
        }
        local_dc = local_dc + 1;
        local_108 = local_108 + 0xc;
      } while (local_dc < in_ECX[2]);
    }
  }
  return;
}

