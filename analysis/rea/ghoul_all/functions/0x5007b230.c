// rea decompile_all
// name: FUN_5007b230
// address: 0x5007b230
// body: available
// range: 0x5007b230-0x5007b259 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5007b230(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)((int)this + 0x178) <= param_1) {
    return 0;
  }
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x174);
  if (0 < (int)param_1) {
    do {
      puVar1 = (undefined4 *)*puVar1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return puVar1[2];
}

