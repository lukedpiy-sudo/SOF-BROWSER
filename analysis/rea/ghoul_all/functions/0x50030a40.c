// rea decompile_all
// name: FUN_50030a40
// address: 0x50030a40
// body: available
// range: 0x50030a40-0x50030a6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50030a40(int param_1)

{
  void *pvVar1;
  
  if (*(undefined **)(param_1 + 100) != (undefined *)0x0) {
    FUN_50106b60(*(undefined **)(param_1 + 100));
  }
  *(undefined4 *)(param_1 + 0x60) = 0x1a;
  pvVar1 = operator_new(0x4e0);
  *(void **)(param_1 + 100) = pvVar1;
  return;
}

