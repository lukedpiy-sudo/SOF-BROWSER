// rea decompile_all
// name: FUN_500b8970
// address: 0x500b8970
// body: available
// range: 0x500b8970-0x500b8ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b8970(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [5];
  float local_24 [2];
  float local_1c;
  float local_8;
  
  pfVar3 = param_1;
  FUN_500b7650((int)param_1);
  if (((uint)param_1[0x68] & 0x400) == 0) {
    if (0.0 < param_1[0x95]) {
      param_1[0xcc] = 0.0;
    }
    if ((param_1[0xcc] != 0.0) && (*(int *)((int)param_1[0xcc] + 0x78) == 0)) {
      param_1[0xcc] = 0.0;
    }
    if (param_1[0xcc] == 0.0) {
      pfVar1 = param_1 + 0x93;
      iVar7 = 3;
      pfVar4 = pfVar1;
      iVar6 = DAT_5015c96c;
      do {
        if (*pfVar4 <= *(float *)(iVar6 + 0x18)) {
          if (*pfVar4 < -*(float *)(iVar6 + 0x18)) {
            *pfVar4 = -*(float *)(iVar6 + 0x18);
            iVar6 = DAT_5015c96c;
          }
        }
        else {
          *pfVar4 = *(float *)(iVar6 + 0x18);
          iVar6 = DAT_5015c96c;
        }
        pfVar4 = pfVar4 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if ((param_1[0x67] != 8.40779e-45) && (param_1[0x67] != 1.12104e-44)) {
        fVar5 = *(float *)(DAT_5015c964 + 0x18);
        fVar2 = *(float *)(DAT_5015c960 + 0x18);
        *pfVar1 = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * *(float *)(DAT_5015c968 + 0x18)
                  * 0.1 + *pfVar1;
        param_1[0x94] =
             *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * fVar5 * 0.1 + param_1[0x94];
        fVar5 = param_1[0x95] - *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * fVar2 * 0.1;
        param_1[0x95] = fVar5;
        if (param_1[0xe3] == 1.4013e-45) {
          param_1[0x95] = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa4] * 0.1 + fVar5;
        }
      }
      param_1[4] = param_1[0x96] * 0.1 + param_1[4];
      param_1[5] = param_1[0x97] * 0.1 + param_1[5];
      param_1[6] = param_1[0x98] * 0.1 + param_1[6];
      local_44 = *pfVar1 * 0.1;
      local_40 = param_1[0x94] * 0.1;
      local_3c = param_1[0x95] * 0.1;
      pfVar4 = (float *)FUN_500b80e0(local_38,(int)param_1,&local_44);
      fVar5 = param_1[0x1e];
      pfVar8 = local_38;
      for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar8 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar8 = pfVar8 + 1;
      }
      if (fVar5 != 0.0) {
        if (local_38[1] < 1.0) {
          pfVar4 = param_1 + 0x67;
          param_1 = (float *)0x3fc00000;
          if (*pfVar4 != 1.26117e-44) {
            param_1 = (float *)0x3f800000;
          }
          FUN_500b7950(pfVar1,local_24,pfVar1,(float)param_1);
          if (0.7 < local_1c) {
            if ((pfVar3[0x95] < 30.0) || (pfVar3[0x67] != 1.26117e-44)) {
              pfVar3[0xcc] = local_8;
              fVar5 = *(float *)((int)local_8 + 0x7c);
              pfVar3[0x67] = 7.00649e-45;
              pfVar3[0xcd] = fVar5;
              pfVar3[0x95] = 0.0;
              FUN_500b8df0(pfVar3);
            }
            if (((pfVar3[0x1d] == 0.0) && (0 < (int)pfVar3[0xbb])) && (pfVar3[0x95] <= -100.0)) {
              if (pfVar3[0x95] <= -200.0) {
                if (pfVar3[0x95] <= -400.0) {
                  uVar9 = 0xc;
                }
                else {
                  uVar9 = 0xb;
                }
              }
              else {
                uVar9 = 10;
              }
              FUN_50083bb0((int)pfVar3,uVar9);
            }
          }
        }
        fVar5 = (float)(*DAT_5015cac8)(pfVar3 + 1);
        pfVar3[0xe2] = fVar5;
        if (((uint)fVar5 & 0x38) == 0) {
          pfVar3[0xe3] = 0.0;
        }
        else {
          pfVar3[0xe3] = 1.4013e-45;
        }
        for (fVar5 = pfVar3[0xcf]; fVar5 != 0.0; fVar5 = *(float *)((int)fVar5 + 0x33c)) {
          *(float *)((int)fVar5 + 4) = pfVar3[1];
          *(float *)((int)fVar5 + 8) = pfVar3[2];
          *(float *)((int)fVar5 + 0xc) = pfVar3[3];
          (*DAT_5015cb28)(fVar5);
        }
      }
    }
  }
  return;
}

