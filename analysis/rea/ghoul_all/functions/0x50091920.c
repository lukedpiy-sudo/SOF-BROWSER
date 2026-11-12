// rea decompile_all
// name: FUN_50091920
// address: 0x50091920
// body: available
// range: 0x50091920-0x50091a25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091920(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x19c) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 700) = FUN_500913c0;
  if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
    if (*(int *)(param_1 + 0x310) == 0) {
      *(undefined4 *)(param_1 + 0x310) = 100;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  *(undefined4 *)(param_1 + 0x158) = 3;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x42c80000;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x21c);
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_50091830;
  *(undefined4 *)(param_1 + 0x414) = uVar1;
  *(undefined4 *)(param_1 + 0x418) = uVar1;
  *(undefined4 *)(param_1 + 0x410) = uVar1;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  (*DAT_5015cb28)(param_1);
  if (*(int *)(param_1 + 0x1c4) != 0) {
    fVar2 = DAT_5015ccdc + 0.1;
    *(code **)(param_1 + 0x2b8) = FUN_50091730;
    *(float *)(param_1 + 0x2b4) = fVar2;
    return;
  }
  iVar4 = param_1 + 0x134;
  puVar3 = FUN_500c33f0();
  (*DAT_5015ca24)(s_func_train_without_a_target_at___5014792c,puVar3,iVar4);
  return;
}

