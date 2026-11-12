// rea decompile_all
// name: FUN_50100e40
// address: 0x50100e40
// body: available
// range: 0x50100e40-0x501010b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_50100e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    return;
  }
  if ((*(int *)(*param_1 + 0x74) != 0) || (DAT_5015d1ec == 0)) goto LAB_50100fc9;
  if (*(int *)(param_2 + 0x30) == DAT_5015d1ec) {
    iVar1 = (*DAT_5015cb24)(1,2);
LAB_50100e8e:
    if (iVar1 == 1) {
      FUN_50083fb0(DAT_5015d1ec,(float *)&DAT_501557a0,(float *)&DAT_5018bf0c);
    }
    else if (iVar1 == 2) {
      fVar3 = (float10)(*DAT_5015cb20)(0x3dcccccd,0x3e800000,0);
      iVar1 = (*DAT_5015cb24)(0,2,0x3f800000,0,(float)fVar3);
      (*DAT_5015ca48)(DAT_5015d1ec,0,*(undefined4 *)(&DAT_5018c260 + iVar1 * 4));
    }
  }
  else {
    iVar1 = FUN_500c4530((float *)(param_1 + 1),(float *)(param_2 + 8),(float *)(DAT_5015d1ec + 4),
                         128.0);
    if ((iVar1 == 0) && (*(int *)(param_2 + 0x30) != DAT_5015d1ec)) {
      fVar3 = (float10)(*DAT_5015cb20)(0,0x3f800000);
      if ((float10)0.3 <= fVar3) goto LAB_50100fc9;
      iVar1 = (*DAT_5015cb24)(0,5,0x3f800000,0x3f000000,0,0);
      uVar5 = *(undefined4 *)(&DAT_5018c26c + iVar1 * 4);
    }
    else {
      FUN_500bd3f0(DAT_5015d1ec);
      iVar1 = (*DAT_5015cb24)(1,3);
      iVar1 = iVar1 + -1;
      if (iVar1 != 0) goto LAB_50100e8e;
      iVar1 = (*DAT_5015cb24)(0,5,0x3f800000,0x3f000000,0,0);
      uVar5 = *(undefined4 *)(&DAT_5018c26c + iVar1 * 4);
    }
    (*DAT_5015ca4c)((float *)(param_2 + 8),DAT_5015cca0,0,uVar5);
  }
LAB_50100fc9:
  if (*(int *)(param_2 + 0x30) == DAT_5015cca0) {
    if ((*(int *)(*param_1 + 0x74) == 0) || (iVar1 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar1 != 0)
       ) {
      iVar1 = FUN_50065940(param_1[8]);
      if ((iVar1 != 0) && (iVar1 = (*DAT_5015cb24)(0,3), iVar1 == 0)) {
        _DAT_5015c524 = *(undefined4 *)(param_2 + 8);
        iVar1 = 0;
        _DAT_5015c528 = *(undefined4 *)(param_2 + 0xc);
        _DAT_5015c52c = *(undefined4 *)(param_2 + 0x10);
        DAT_5015c51c = DAT_5015c51c | 4;
        uVar5 = 1;
        if (param_1[0xe] == 0) {
          piVar4 = param_1 + 1;
        }
        else {
          piVar4 = param_1 + 0xf;
        }
        iVar2 = FUN_50065940(param_1[8]);
        FUN_500852e0(&DAT_5015c518,iVar2,piVar4,uVar5,iVar1);
      }
    }
    else {
      FUN_501008f0();
    }
  }
  if (*(float *)(param_2 + 4) < 1.0) {
    FUN_50065880(param_1[8]);
    FUN_500f8fe0();
  }
  return;
}

