// rea decompile_all
// name: FUN_500c2770
// address: 0x500c2770
// body: available
// range: 0x500c2770-0x500c2981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_500c2770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,float param_6,float param_7,float param_8,undefined4 param_9,
                  float param_10)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  undefined4 *in_stack_00001030;
  float in_stack_00001034;
  int in_stack_00001038;
  undefined4 uVar9;
  
  FUN_501074f0();
  param_10 = in_stack_00001034 * in_stack_00001034;
  iVar8 = 0;
  extraout_ECX[0x400] = 0;
  param_3 = *in_stack_00001030;
  param_4 = in_stack_00001030[1];
  param_5 = in_stack_00001030[2];
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 4;
    *(float *)((int)&param_3 + iVar3) = *(float *)((int)&param_3 + iVar3) - in_stack_00001034;
    *(float *)(&stack0x00000000 + iVar3) = in_stack_00001034 + *(float *)(&stack0x00000000 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 < 0xc);
  if (in_stack_00001038 == 1) {
    uVar9 = 1;
  }
  else {
    if (in_stack_00001038 != 2) {
      if (in_stack_00001038 != 3) {
        return extraout_ECX;
      }
      iVar3 = (*DAT_5015cb30)(&param_3,&stack0x00000000,extraout_ECX,0x400,1);
      extraout_ECX[0x400] = iVar3;
      iVar8 = (*DAT_5015cb30)(&param_3,&stack0x00000000,&stack0x0000002c,0x400,2);
      goto LAB_500c2876;
    }
    uVar9 = 2;
  }
  iVar3 = (*DAT_5015cb30)(&param_3,&stack0x00000000,extraout_ECX,0x400,uVar9);
  extraout_ECX[0x400] = iVar3;
LAB_500c2876:
  iVar3 = 0;
  if (0 < iVar8) {
    do {
      iVar2 = iVar3 * 4;
      iVar5 = extraout_ECX[0x400] + iVar3;
      iVar3 = iVar3 + 1;
      extraout_ECX[iVar5] = *(int *)(&stack0x0000002c + iVar2);
    } while (iVar3 < iVar8);
  }
  iVar8 = extraout_ECX[0x400] + iVar8;
  iVar3 = 0;
  extraout_ECX[0x400] = iVar8;
  if (0 < iVar8) {
    do {
      if (*(int *)(extraout_ECX[iVar3] + 0x78) == 0) {
LAB_500c2918:
        extraout_ECX[iVar3] = 0;
        extraout_ECX[0x400] = extraout_ECX[0x400] + -1;
      }
      else {
        iVar2 = 0;
        pfVar6 = (float *)(extraout_ECX[iVar3] + 0x11c);
        do {
          pfVar1 = (float *)(in_stack_00001030 + iVar2);
          iVar2 = iVar2 + 1;
          (&param_5)[iVar2] = *pfVar1 - ((pfVar6[3] + *pfVar6) * 0.5 + pfVar6[-0x46]);
          pfVar6 = pfVar6 + 1;
        } while (iVar2 < 3);
        if (param_10 < param_6 * param_6 + param_7 * param_7 + param_8 * param_8) goto LAB_500c2918;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar8);
  }
  piVar7 = extraout_ECX + iVar8 + -1;
  piVar4 = extraout_ECX;
  do {
    iVar3 = *piVar4;
    for (; (iVar3 != 0 && (piVar4 < piVar7)); piVar4 = piVar4 + 1) {
      iVar3 = piVar4[1];
    }
    iVar3 = *piVar7;
    for (; (iVar3 == 0 && (piVar4 < piVar7)); piVar7 = piVar7 + -1) {
      iVar3 = piVar7[-1];
    }
    iVar3 = *piVar7;
    piVar7 = piVar7 + -1;
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while (piVar4 < piVar7);
  return extraout_ECX;
}

