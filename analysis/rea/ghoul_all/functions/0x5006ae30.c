// rea decompile_all
// name: FUN_5006ae30
// address: 0x5006ae30
// body: available
// range: 0x5006ae30-0x5006aea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5006ae30(int param_1)

{
  int *piVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2;
  }
  (*DAT_5015cb44)(0x504c4e4d,&local_4,4);
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != *(int **)(param_1 + 0xac)) {
    do {
      FUN_5006ab10(*piVar1);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0xac));
  }
  (*DAT_5015cb44)(0x504c5741,param_1 + 0xb8,1);
  return;
}

