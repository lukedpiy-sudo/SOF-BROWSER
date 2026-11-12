// rea decompile_all
// name: FUN_50054e80
// address: 0x50054e80
// body: available
// range: 0x50054e80-0x50054fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50054e80(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  if ((((*(int *)(iVar1 + 0x30) == 0) || (iVar1 == 0)) ||
      ((*(int *)(iVar1 + 0x34) != 0 &&
       (*(float *)(iVar1 + 0x3c) < DAT_5015ccdc != (*(float *)(iVar1 + 0x3c) == DAT_5015ccdc))))) ||
     (iVar1 = FUN_50050980(param_1), iVar1 != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
    return;
  }
  FUN_50050600(param_1);
  iVar1 = FUN_50053cf0(param_1);
  if (iVar1 != 0) {
    *(float *)(*(int *)(param_1 + 0x45c) + 0x28) = DAT_5015ccdc + 0.1;
  }
  uVar2 = FUN_5004fb40(param_1,*(int *)(*(int *)(param_1 + 0x45c) + 0x30));
  if ((int)uVar2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
  }
  else {
    FUN_500501d0(param_1);
  }
  FUN_50053200(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x68) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x6c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x70) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x74) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x30) + 4);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x78) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x30) + 8);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x7c) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x30) + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x80) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x84) = 0;
  if (*(int *)(*(int *)(param_1 + 0x45c) + 0x40) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x40) = 0;
  return;
}

