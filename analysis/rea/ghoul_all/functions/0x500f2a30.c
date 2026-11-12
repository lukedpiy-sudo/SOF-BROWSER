// rea decompile_all
// name: FUN_500f2a30
// address: 0x500f2a30
// body: available
// range: 0x500f2a30-0x500f2ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f2a30(int param_1,int param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  float10 fVar6;
  char *pcVar7;
  
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x19c) = 7;
  *(undefined4 *)(param_1 + 0x158) = 5;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xc1000000;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 2;
  if (*(int *)(param_1 + 0x2f8) != 0) goto LAB_500f2c86;
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar4 == 0) {
    *(float *)(*(int *)(param_1 + 0x74) + 0x560) = DAT_5015ccdc + 4.0;
  }
  else {
    *(float *)(*(int *)(param_1 + 0x74) + 0x560) = DAT_5015ccdc + 1.0;
  }
  if (*(int *)(param_1 + 0x458) == 0) {
    if (((param_3 == 0) || (param_3 == DAT_5015cca0)) || (param_3 == param_1)) {
      if (((param_2 == 0) || (param_2 == DAT_5015cca0)) || (param_2 == param_1)) {
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4ac) = *(undefined4 *)(param_1 + 0x14);
        goto LAB_500f2b3c;
      }
      fVar6 = (float10)*(float *)(param_2 + 4) - (float10)*(float *)(param_1 + 4);
      fVar1 = *(float *)(param_2 + 8);
    }
    else {
      fVar6 = (float10)*(float *)(param_3 + 4) - (float10)*(float *)(param_1 + 4);
      fVar1 = *(float *)(param_3 + 8);
    }
    fVar6 = (float10)fpatan((float10)fVar1 - (float10)*(float *)(param_1 + 8),fVar6);
    *(float *)(*(int *)(param_1 + 0x74) + 0x4ac) = (float)(fVar6 * (float10)57.29577951308232);
  }
LAB_500f2b3c:
  **(undefined4 **)(param_1 + 0x74) = 3;
  iVar4 = param_1;
  (**(code **)(*DAT_5015c4d8 + 0xbc))(param_1,param_2,param_3);
  piVar2 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  (**(code **)(*DAT_5015c4d8 + 0x98))(param_1);
  (**(code **)(*piVar2 + 0xf4))(unaff_EDI);
  piVar2 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  if (param_3 == 0) {
    param_3 = param_1;
  }
  if (param_2 == 0) {
    param_2 = param_1;
  }
  (**(code **)(*DAT_5015c4d8 + 0x94))(param_1,param_2,param_3);
  (**(code **)(*piVar2 + 0xf4))(iVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x544) = 5;
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar4 == 0) goto LAB_500f2c86;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x74) != 0)) {
    FUN_50053580(param_1,param_3);
    if (param_3 == param_1) {
LAB_500f2c12:
      if (*(int *)(param_3 + 0x458) != 0) goto LAB_500f2c73;
      pcVar7 = s_dm_selffrag_wav_50144c98;
    }
    else {
      bVar3 = FUN_500887e0(param_3,param_1);
      if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_500f2c12;
      if ((*(int *)(DAT_5015c8c8 + 0x18) == 0x40000000) || (*(int *)(param_3 + 0x458) != 0))
      goto LAB_500f2c73;
      pcVar7 = s_dm_frag_wav_50144ca8;
    }
    uVar5 = (*DAT_5015c9f4)(pcVar7,0x3f800000,0x40400000,0,1);
    (*DAT_5015ca48)(param_3,2,uVar5);
  }
LAB_500f2c73:
  if (*(int *)(param_1 + 0x458) == 0) {
    FUN_500f6710(param_1);
  }
LAB_500f2c86:
  *(undefined4 *)(param_1 + 0x2f8) = 2;
  (*DAT_5015cb28)(param_1);
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  return;
}

