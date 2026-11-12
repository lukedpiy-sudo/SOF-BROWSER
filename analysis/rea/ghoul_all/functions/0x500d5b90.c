// rea decompile_all
// name: FUN_500d5b90
// address: 0x500d5b90
// body: available
// range: 0x500d5b90-0x500d6372 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500d5b90(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  float afStack_30 [12];
  
  iVar2 = *(int *)(param_3 + 0x1a0);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x78) == 0)) || (*(int *)(iVar2 + 0x30c) == 0)) {
    return 0;
  }
  iVar2 = (*DAT_5015cb24)(0,10);
  if (*(float *)(param_3 + 0x1b4) <= (float)iVar2) {
    return 1;
  }
  iVar2 = (*DAT_5015cb24)(0,10);
  if (*(float *)(param_3 + 0x1b4) <= (float)iVar2) {
    iVar2 = *(int *)(param_3 + 0x1a0);
    fStack_68 = *(float *)(iVar2 + 4);
    uStack_64 = *(undefined4 *)(iVar2 + 8);
    fStack_60 = *(float *)(iVar2 + 0xc) + (float)*(int *)(iVar2 + 0x304);
    (*DAT_5015cac0)((float *)(param_1 + 4),0,0,&fStack_68,param_1,0x19,auStack_38);
    if ((fStack_34 != 1.0) ||
       (iVar2 = FUN_500d3160(afStack_30,(float *)(param_1 + 0x10),(float *)(param_1 + 4)),
       iVar2 == 0)) {
      return 1;
    }
  }
  iVar2 = (*DAT_5015cb24)(0,1);
  if (iVar2 == 0) {
    if (((*(byte *)(param_3 + 0x194) & 8) == 0) || (*(int *)(param_3 + 0x168) == 0)) {
      iVar2 = *(int *)(param_3 + 0x1a0);
      fStack_88 = *(float *)(iVar2 + 4);
      fStack_84 = *(float *)(iVar2 + 8);
      fStack_80 = (float)*(int *)(iVar2 + 0x304) + *(float *)(iVar2 + 0xc);
      fVar8 = (float10)(*DAT_5015cb20)(0x40000000,0x40800000);
      piVar5 = *(int **)(param_1 + 0x450);
      iVar2 = (**(code **)(*piVar5 + 0x238))();
      *(float *)(iVar2 + 0xe4) = fStack_88;
      *(float *)(iVar2 + 0xe8) = fStack_84;
      *(float *)(iVar2 + 0xec) = fStack_80;
      FUN_50003c80(&fStack_88,(undefined4 *)(iVar2 + 0x148));
      *(float *)(iVar2 + 0x134) = (float)fVar8;
      uVar1 = *(uint *)(iVar2 + 0x194);
      *(uint *)(iVar2 + 0x194) = uVar1 | 0x200;
      if (((uVar1 & 8) == 0) || ((*(int *)(iVar2 + 0x168) == 0 || ((uVar1 & 0x80080) == 0))))
      goto LAB_500d634c;
      iVar3 = (*DAT_5015cb24)(0,10);
    }
    else {
      fVar8 = (float10)(*DAT_5015cb20)(0xc1200000,0x41200000);
      fVar9 = (float10)(*DAT_5015cb20)(0xc1200000,0x41200000);
      iVar2 = *(int *)(param_3 + 0x1a0);
      fStack_88 = (float)(fVar9 + (float10)*(float *)(iVar2 + 4));
      fStack_84 = (float)fVar8 + *(float *)(iVar2 + 8);
      fStack_80 = (float)*(int *)(iVar2 + 0x304) + *(float *)(iVar2 + 0xc);
      iVar3 = (*DAT_5015cb24)(0,10);
      piVar5 = *(int **)(param_1 + 0x450);
      iVar2 = (**(code **)(*piVar5 + 0x238))();
      *(float *)(iVar2 + 0xe4) = fStack_88;
      *(float *)(iVar2 + 0xe8) = fStack_84;
      *(float *)(iVar2 + 0xec) = fStack_80;
      FUN_50003c80(&fStack_88,(undefined4 *)(iVar2 + 0x148));
      *(float *)(iVar2 + 0x134) = (float)(int)((4 < iVar3) - 2);
      uVar1 = *(uint *)(iVar2 + 0x194);
      *(uint *)(iVar2 + 0x194) = uVar1 | 0x200;
      if ((((uVar1 & 8) == 0) || (*(int *)(iVar2 + 0x168) == 0)) || ((uVar1 & 0x80080) == 0))
      goto LAB_500d634c;
      iVar3 = (*DAT_5015cb24)(0,10);
    }
    *(float *)(iVar2 + 0x134) = (float)(int)((iVar3 < 5) - 2);
  }
  else {
    if (iVar2 != 1) {
      return 2;
    }
    iVar2 = *(int *)(param_2 + 0x298);
    if ((iVar2 == 0) || (iVar3 = (*DAT_5015cb24)(0,10), *(float *)(param_3 + 0x1b4) <= (float)iVar3)
       ) {
LAB_500d6114:
      iVar2 = 1;
      fVar8 = (float10)(*DAT_5015cb20)(0x3f800000,0x40400000);
      FUN_500d4ef0(param_1,(float)fVar8,iVar2);
      return 2;
    }
    iVar3 = *(int *)(param_3 + 0x1a0);
    fStack_70 = 1e+06;
    fStack_74 = 1e+06;
    iStack_6c = 0;
    uStack_50 = *(undefined4 *)(iVar3 + 4);
    fStack_8c = 1e+06;
    uStack_4c = *(undefined4 *)(iVar3 + 8);
    fStack_5c = 0.0;
    uStack_58 = 0;
    fStack_48 = (float)*(int *)(iVar3 + 0x304) + *(float *)(iVar3 + 0xc);
    uStack_54 = 0;
    iStack_78 = 0;
    if (0 < iVar2) {
      do {
        if (((-1 < iStack_78) && (iStack_78 <= *(int *)(param_2 + 0x298))) &&
           (*(int *)(param_2 + 0x294) != 0)) {
          iVar6 = 0;
          for (iVar3 = *(int *)(param_2 + 0x290); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x28)) {
            iVar4 = FUN_500d6380(iVar3);
            if (iVar4 != 0) {
              if (iVar6 == iStack_78) {
                if (iVar3 != 0) {
                  iVar6 = *(int *)(param_3 + 0x1a0);
                  pfVar7 = (float *)(iVar3 + 4);
                  fStack_88 = *(float *)(iVar6 + 4) - *pfVar7;
                  fStack_84 = *(float *)(iVar6 + 8) - *(float *)(iVar3 + 8);
                  fStack_80 = *(float *)(iVar6 + 0xc) - *(float *)(iVar3 + 0xc);
                  fVar8 = FUN_500fe130(&fStack_88);
                  fStack_7c = (float)fVar8;
                  iVar6 = (*DAT_5015cac0)(pfVar7,0,0,&uStack_50,param_1,0x19,auStack_38);
                  if (iVar6 == 0) {
                    if (fStack_7c < fStack_70) {
                      fStack_44 = *pfVar7;
                      uStack_40 = *(undefined4 *)(iVar3 + 8);
                      fStack_70 = fStack_7c;
                      uStack_3c = *(undefined4 *)(iVar3 + 0xc);
                    }
                  }
                  else {
                    if (fStack_7c < fStack_74) {
                      fStack_68 = *pfVar7;
                      uStack_64 = *(undefined4 *)(iVar3 + 8);
                      fStack_74 = fStack_7c;
                      fStack_60 = *(float *)(iVar3 + 0xc);
                      iStack_6c = 1;
                    }
                    fStack_88 = *(float *)(param_1 + 4) - *pfVar7;
                    fStack_84 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 8);
                    fStack_80 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 0xc);
                    if ((((fStack_88 != 0.0) || (fStack_84 != 0.0)) || (fStack_80 != 0.0)) &&
                       (fVar8 = FUN_500fe130(&fStack_88), fVar8 < (float10)fStack_8c)) {
                      fStack_5c = *pfVar7;
                      uStack_58 = *(undefined4 *)(iVar3 + 8);
                      uStack_54 = *(undefined4 *)(iVar3 + 0xc);
                      fStack_8c = (float)fVar8;
                    }
                  }
                }
                break;
              }
              iVar6 = iVar6 + 1;
            }
          }
        }
        iStack_78 = iStack_78 + 1;
      } while (iStack_78 < iVar2);
    }
    iVar2 = *(int *)(param_3 + 0x1a0);
    fStack_88 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 4);
    fStack_84 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
    fStack_80 = *(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc);
    fVar8 = FUN_500fe130(&fStack_88);
    iVar2 = (*DAT_5015cac0)((float *)(param_1 + 4),0,0,&uStack_50,param_1,0x19,auStack_38);
    if (iVar2 == 0) {
      if (iStack_6c == 0) {
        if ((float)fVar8 <= fStack_70 + 800.0) goto LAB_500d6114;
        piVar5 = *(int **)(param_1 + 0x450);
        iVar2 = (**(code **)(*piVar5 + 0x238))();
        pfVar7 = (float *)(iVar2 + 0xf0);
        FUN_50003c80(&fStack_44,pfVar7);
        *(uint *)(iVar2 + 0x194) = *(uint *)(iVar2 + 0x194) | 0x400;
        FUN_500d4070(param_1,pfVar7,pfVar7);
      }
      else if (((fStack_88 == 0.0) && (fStack_84 == 0.0)) && (fStack_80 == 0.0)) {
        piVar5 = *(int **)(param_1 + 0x450);
        iVar2 = (**(code **)(*piVar5 + 0x238))();
        pfVar7 = (float *)(iVar2 + 0xf0);
        FUN_50003c80(&fStack_68,pfVar7);
        *(uint *)(iVar2 + 0x194) = *(uint *)(iVar2 + 0x194) | 0x400;
        FUN_500d4070(param_1,pfVar7,pfVar7);
      }
      else {
        piVar5 = *(int **)(param_1 + 0x450);
        iVar2 = (**(code **)(*piVar5 + 0x238))();
        pfVar7 = (float *)(iVar2 + 0xf0);
        *pfVar7 = fStack_5c;
        *(undefined4 *)(iVar2 + 0xf4) = uStack_58;
        *(undefined4 *)(iVar2 + 0xf8) = uStack_54;
        *(uint *)(iVar2 + 0x194) = *(uint *)(iVar2 + 0x194) | 0x400;
        FUN_500d4070(param_1,pfVar7,pfVar7);
      }
    }
    else {
      if ((iStack_6c == 0) || ((float)fVar8 <= fStack_74 + 800.0)) goto LAB_500d6114;
      piVar5 = *(int **)(param_1 + 0x450);
      iVar2 = (**(code **)(*piVar5 + 0x238))();
      pfVar7 = (float *)(iVar2 + 0xf0);
      *pfVar7 = fStack_68;
      *(undefined4 *)(iVar2 + 0xf4) = uStack_64;
      *(float *)(iVar2 + 0xf8) = fStack_60;
      *(uint *)(iVar2 + 0x194) = *(uint *)(iVar2 + 0x194) | 0x400;
      FUN_500d4070(param_1,pfVar7,pfVar7);
    }
  }
LAB_500d634c:
  FUN_500d04e0((int)piVar5);
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return 2;
}

