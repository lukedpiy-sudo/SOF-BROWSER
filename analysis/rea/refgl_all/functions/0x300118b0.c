// rea decompile_all
// name: FUN_300118b0
// address: 0x300118b0
// body: available
// range: 0x300118b0-0x30011910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300118b0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(float *)(DAT_3008ff28 + 0x18) == 0.0) {
    (*DAT_300a45b4)(param_1,param_2);
  }
  else {
    iVar1 = 0;
    if (0 < param_1) {
      do {
        *(int *)(param_2 + iVar1 * 4) = DAT_3002ed14;
        DAT_3002ed14 = DAT_3002ed14 + 1;
        if (0x3fffffff < DAT_3002ed14) {
          DAT_3002ed14 = 0x1000;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1);
      return;
    }
  }
  return;
}

