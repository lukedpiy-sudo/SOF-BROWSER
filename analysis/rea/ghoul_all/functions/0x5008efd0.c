// rea decompile_all
// name: FUN_5008efd0
// address: 0x5008efd0
// body: available
// range: 0x5008efd0-0x5008f0d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008efd0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x158) != 1) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0x2030003;
  *(undefined4 *)(param_1 + 0x11c) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0e00000;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_500b2c20(param_1);
  (*DAT_5015cb28)(param_1);
  *(code **)(param_1 + 0x2b8) = FUN_5008ef80;
  if (*(float *)(param_1 + 0x364) == 0.0) {
    fVar1 = 10.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x364);
  }
  iVar2 = *(int *)(param_1 + 0x2ec);
  *(float *)(param_1 + 0x364) = fVar1;
  if (iVar2 == 0) {
    iVar2 = 5;
  }
  *(int *)(param_1 + 0x2ec) = iVar2;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_5008eee0;
  if (iVar2 == -1) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    return;
  }
  fVar3 = (float10)(*DAT_5015cb20)(fVar1 * 0.8,fVar1 * 1.2);
  *(float *)(param_1 + 0x2b4) = (float)(fVar3 + (float10)DAT_5015ccdc);
  return;
}

