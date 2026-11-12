// rea decompile_all
// name: FUN_500bfde0
// address: 0x500bfde0
// body: available
// range: 0x500bfde0-0x500bfe76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bfde0(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c8) == 0) {
    iVar3 = param_1 + 4;
    puVar1 = FUN_500c33f0();
    (*DAT_5015ca24)(s_untargeted__s_at__s_501505d4,*(undefined4 *)(param_1 + 0x1b4),puVar1,iVar3);
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    *(undefined4 *)(param_1 + 0x318) = 5;
  }
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x43480000;
  }
  *(code **)(param_1 + 0x2b8) = FUN_500bfc80;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500bfda0;
  uVar2 = (*DAT_5015c9f4)(s_world_quake_wav_501505c4);
  *(undefined4 *)(param_1 + 0x350) = uVar2;
  return;
}

