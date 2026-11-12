// rea decompile_all
// name: FUN_500d3230
// address: 0x500d3230
// body: available
// range: 0x500d3230-0x500d33de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float __cdecl FUN_500d3230(int param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [3];
  int iStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if (*(int *)(iVar2 + 0x44) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x44) + 0x1c);
  }
  sVar1 = *(short *)(iVar2 + 0x70);
  FUN_500b5750(&iStack_40);
  if ((iVar3 != 0) && (sVar1 != 0)) {
    if (param_3 != 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_58 = *param_2;
      FUN_50003c80((undefined4 *)(iVar3 + 0x8c),auStack_4c);
      if (*(int *)(iVar3 + 0x4c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar3 + 0x4c) + 0x1c);
      }
      FUN_500d1fc0(param_1,&uStack_58,iVar5,*(short *)(iVar3 + 0x74));
    }
    iStack_40 = param_1;
    if (*(int *)(iVar2 + 0x48) == 0) {
      uStack_3c = 0;
    }
    else {
      uStack_3c = *(undefined4 *)(*(int *)(iVar2 + 0x48) + 0x1c);
    }
    uStack_34 = *(undefined4 *)(param_1 + 0x164);
    uStack_38 = *(undefined2 *)(iVar2 + 0x72);
    uStack_2c = *param_2;
    uStack_28 = param_2[1];
    uStack_24 = param_2[2];
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0xbf800000;
    uStack_14 = 0x3f800000;
    uStack_10 = 0x3ea0d97c;
    uStack_4 = 0;
    uStack_3 = 1;
    uStack_2 = 1;
    FUN_500b5790(&iStack_40);
    uStack_34 = uStack_3c;
    uStack_30 = uStack_38;
    if (*(int *)(iVar2 + 0x44) == 0) {
      uStack_3c = 0;
    }
    else {
      uStack_3c = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x1c);
    }
    uStack_38 = *(undefined2 *)(iVar2 + 0x70);
    uStack_20 = 0xbec90fdb;
    uStack_1c = 0x3f490fdb;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x3ea0d97c;
    uStack_4 = 1;
    uStack_3 = 0;
    uStack_2 = 1;
    fVar4 = FUN_500b5790(&iStack_40);
    return fVar4;
  }
  return 4.2039e-45;
}

