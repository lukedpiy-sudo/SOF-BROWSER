// rea decompile_all
// name: FUN_500b8220
// address: 0x500b8220
// body: available
// range: 0x500b8220-0x500b87b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500b8220(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  float local_110;
  float local_10c;
  float local_108;
  int local_104;
  int iStack_100;
  float local_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0 [4];
  float fStack_e0;
  float fStack_dc;
  float local_d8 [4];
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  undefined1 uStack_a8;
  char cStack_a7;
  undefined1 uStack_70;
  char cStack_6f;
  undefined1 uStack_38;
  char cStack_37;
  
  iVar6 = 3;
  pfVar1 = param_2;
  pfVar3 = (float *)((int)param_1 + 0x140);
  do {
    pfVar2 = pfVar1 + 1;
    iVar6 = iVar6 + -1;
    *(float *)(((int)&fStack_dc - (int)param_2) + (int)pfVar2) = pfVar3[-3] + *pfVar1;
    *(float *)(((int)&fStack_f4 - (int)param_2) + (int)pfVar2) = *pfVar1 + *pfVar3;
    pfVar1 = pfVar2;
    pfVar3 = pfVar3 + 1;
  } while (iVar6 != 0);
  local_110 = DAT_5018bf0c - *param_3;
  local_10c = DAT_5018bf10 - param_3[1];
  local_108 = DAT_5018bf14 - param_3[2];
  FUN_500fdd70(&local_110,&local_fc,local_f0 + 3,local_d8 + 3);
  *DAT_5015db30 = param_1;
  pfVar1 = DAT_5015db30;
  DAT_5015db30[1] = *(float *)((int)param_1 + 4);
  pfVar1[2] = *(float *)((int)param_1 + 8);
  pfVar1[3] = *(float *)((int)param_1 + 0xc);
  pfVar1 = DAT_5015db30;
  DAT_5015db30[4] = *(float *)((int)param_1 + 0x10);
  pfVar1[5] = *(float *)((int)param_1 + 0x14);
  pfVar1[6] = *(float *)((int)param_1 + 0x18);
  if (*(int *)((int)param_1 + 0x74) != 0) {
    local_104 = (int)*(short *)(*(int *)((int)param_1 + 0x74) + 0x16);
    DAT_5015db30[7] = (float)local_104;
  }
  DAT_5015db30 = DAT_5015db30 + 8;
  *(float *)((int)param_1 + 4) = *param_2 + *(float *)((int)param_1 + 4);
  *(float *)((int)param_1 + 8) = *(float *)((int)param_1 + 8) + param_2[1];
  *(float *)((int)param_1 + 0xc) = *(float *)((int)param_1 + 0xc) + param_2[2];
  *(float *)((int)param_1 + 0x10) = *(float *)((int)param_1 + 0x10) + *param_3;
  *(float *)((int)param_1 + 0x14) = *(float *)((int)param_1 + 0x14) + param_3[1];
  *(float *)((int)param_1 + 0x18) = *(float *)((int)param_1 + 0x18) + param_3[2];
  (*DAT_5015cb28)(param_1);
  local_104 = 1;
  pfVar1 = DAT_5015db30;
  if (1 < DAT_5015c938) {
    pfVar3 = (float *)((int)DAT_5015cca0 + 0x46c);
    fVar5 = DAT_5015cca0;
    do {
      fVar5 = (float)((int)fVar5 + 0x464);
      if (((((pfVar3[0x1c] != 0.0) && (fVar4 = pfVar3[0x65], fVar4 != 2.8026e-45)) &&
           (fVar4 != 4.2039e-45)) && ((fVar4 != 0.0 && (fVar4 != 1.4013e-45)))) &&
         ((pfVar3[0xc] != 0.0 && ((*(short *)((int)pfVar3 + 0x296) == 0 && (pfVar3[0x1e] != 0.0)))))
         ) {
        if (pfVar3[0xca] == param_1) {
LAB_500b84ba:
          if ((*(int *)((int)param_1 + 0x19c) != 2) && (pfVar3[0xca] != param_1)) {
LAB_500b8736:
            pfVar1 = DAT_5015db30 + -8;
            DAT_50165b38 = fVar5;
            if ((float *)0x5015db37 < pfVar1) {
              pfVar3 = DAT_5015db30 + -5;
              do {
                fVar5 = *pfVar1;
                *(float *)((int)fVar5 + 4) = pfVar3[-2];
                *(float *)((int)fVar5 + 8) = pfVar3[-1];
                *(float *)((int)fVar5 + 0xc) = *pfVar3;
                fVar5 = *pfVar1;
                *(float *)((int)fVar5 + 0x10) = pfVar3[1];
                *(float *)((int)fVar5 + 0x14) = pfVar3[2];
                *(float *)((int)fVar5 + 0x18) = pfVar3[3];
                iVar6 = *(int *)((int)*pfVar1 + 0x74);
                if (iVar6 != 0) {
                  lVar7 = __ftol();
                  *(short *)(iVar6 + 0x16) = (short)lVar7;
                }
                (*DAT_5015cb28)(*pfVar1);
                pfVar1 = pfVar1 + -8;
                pfVar3 = pfVar3 + -8;
              } while ((float *)0x5015db37 < pfVar1);
            }
            return 0;
          }
          pfVar1 = pfVar3 + -1;
          *DAT_5015db30 = fVar5;
          pfVar2 = DAT_5015db30;
          DAT_5015db30[1] = *pfVar1;
          pfVar2[2] = *pfVar3;
          pfVar2[3] = pfVar3[1];
          pfVar2 = DAT_5015db30;
          DAT_5015db30[4] = pfVar3[2];
          pfVar2[5] = pfVar3[3];
          pfVar2[6] = pfVar3[4];
          DAT_5015db30 = DAT_5015db30 + 8;
          *pfVar1 = *pfVar1 + *param_2;
          *pfVar3 = *pfVar3 + param_2[1];
          pfVar3[1] = pfVar3[1] + param_2[2];
          fVar4 = pfVar3[0x1b];
          if (fVar4 != 0.0) {
            iStack_100 = (int)*(short *)((int)fVar4 + 0x16);
            lVar7 = __ftol();
            *(short *)((int)fVar4 + 0x16) = (short)lVar7;
          }
          local_110 = *pfVar1 - *(float *)((int)param_1 + 4);
          local_10c = *pfVar3 - *(float *)((int)param_1 + 8);
          local_108 = pfVar3[1] - *(float *)((int)param_1 + 0xc);
          fStack_b8 = local_d8[3] * local_110 + fStack_c8 * local_10c + fStack_c4 * local_108;
          fStack_b4 = (local_fc * local_110 + fStack_f8 * local_10c + fStack_f4 * local_108) -
                      local_110;
          *pfVar1 = fStack_b4 + *pfVar1;
          *pfVar3 = (-(local_f0[3] * local_110 + fStack_e0 * local_10c + fStack_dc * local_108) -
                    local_10c) + *pfVar3;
          pfVar3[1] = (fStack_b8 - local_108) + pfVar3[1];
          if (pfVar3[0xca] != param_1) {
            pfVar3[0xca] = 0.0;
          }
          fVar4 = pfVar3[0x55];
          if (fVar4 == 0.0) {
            fVar4 = 4.2039e-45;
          }
          (*DAT_5015cac0)(pfVar1,pfVar3 + 0x45,pfVar3 + 0x48,pfVar1,fVar5,fVar4,&uStack_70);
          if ((cStack_6f == '\0') || (DAT_5015cca0 == 0.0)) {
            (*DAT_5015cb28)(fVar5);
          }
          else {
            *pfVar1 = *pfVar1 - *param_2;
            *pfVar3 = *pfVar3 - param_2[1];
            pfVar3[1] = pfVar3[1] - param_2[2];
            fVar4 = pfVar3[0x55];
            if (fVar4 == 0.0) {
              fVar4 = 4.2039e-45;
            }
            (*DAT_5015cac0)(pfVar1,pfVar3 + 0x45,pfVar3 + 0x48,pfVar1,fVar5,fVar4,&uStack_38);
            if ((cStack_37 != '\0') && (DAT_5015cca0 != 0.0)) goto LAB_500b8736;
            DAT_5015db30 = DAT_5015db30 + -8;
          }
        }
        else if ((((pfVar3[0x4b] < local_f0[0]) && (pfVar3[0x4c] < local_f0[1])) &&
                 (pfVar3[0x4d] < local_f0[2])) &&
                (((pfVar3[0x4e] < local_d8[0] == (pfVar3[0x4e] == local_d8[0]) &&
                  (pfVar3[0x4f] < local_d8[1] == (pfVar3[0x4f] == local_d8[1]))) &&
                 (pfVar3[0x50] < local_d8[2] == (pfVar3[0x50] == local_d8[2]))))) {
          fVar4 = pfVar3[0x55];
          if (fVar4 == 0.0) {
            fVar4 = 4.2039e-45;
          }
          (*DAT_5015cac0)(pfVar3 + -1,pfVar3 + 0x45,pfVar3 + 0x48,pfVar3 + -1,fVar5,fVar4,&uStack_a8
                         );
          if ((cStack_a7 != '\0') && (DAT_5015cca0 != 0.0)) goto LAB_500b84ba;
        }
      }
      local_104 = local_104 + 1;
      pfVar3 = pfVar3 + 0x119;
      pfVar1 = DAT_5015db30;
    } while (local_104 < DAT_5015c938);
  }
  while ((float *)0x5015db37 < pfVar1 + -8) {
    FUN_500c3a90();
    pfVar1 = pfVar1 + -8;
  }
  return 1;
}

