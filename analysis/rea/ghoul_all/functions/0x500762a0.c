// rea decompile_all
// name: FUN_500762a0
// address: 0x500762a0
// body: available
// range: 0x500762a0-0x500762e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500762a0(void)

{
  int *piVar1;
  undefined4 local_4;
  
  local_4 = DAT_5015c4e8;
  (*DAT_5015cb44)(0x53474e4d,&local_4,4);
  piVar1 = (int *)*DAT_5015c4e4;
  if (piVar1 != DAT_5015c4e4) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x30))(0);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_5015c4e4);
  }
  return;
}

