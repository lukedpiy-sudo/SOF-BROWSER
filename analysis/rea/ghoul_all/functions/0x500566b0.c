// rea decompile_all
// name: FUN_500566b0
// address: 0x500566b0
// body: available
// range: 0x500566b0-0x5005684d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500566b0(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  ulonglong uVar4;
  
  if ((param_1 == 0.0) || (*(int *)((int)param_1 + 0x45c) == 0)) {
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    uVar2 = FUN_50096c00();
    return uVar2 & 0xffffff00;
  }
  FUN_50096c00();
  FUN_500565c0(param_1,(undefined1 *)param_2);
  FUN_50096c00();
  FUN_50096c00();
  FUN_50054940((int)param_1);
  FUN_50096c00();
  FUN_50096c00();
  uVar4 = FUN_50054c00(extraout_ECX,extraout_EDX,(int)param_1,(int)param_2);
  if ((char)uVar4 != '\0') {
    FUN_50096c00();
    uVar1 = FUN_50096c00();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  FUN_50096c00();
  FUN_50096c00();
  FUN_50054e80((int)param_1);
  FUN_50096c00();
  FUN_50096c00();
  uVar1 = FUN_50054fc0((int)param_1,(int)param_2);
  if ((char)uVar1 != '\0') {
    FUN_50096c00();
    uVar1 = FUN_50096c00();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  FUN_50096c00();
  uVar1 = FUN_50055280((int)param_1,(int)param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_50096c00();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  FUN_50096c00();
  if (*(float *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x40c) + 8) < DAT_5015ccdc) {
    uVar1 = FUN_50055780(param_1,(int)param_2);
    if ((char)uVar1 != '\0') {
      FUN_50096c00();
      uVar1 = FUN_50096c00();
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  FUN_50096c00();
  FUN_50096c00();
  FUN_500561c0((int)param_1,(int)param_2);
  FUN_50096c00();
  uVar1 = FUN_50096c00();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

