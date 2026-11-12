// rea decompile_all
// name: FUN_500d42f0
// address: 0x500d42f0
// body: available
// range: 0x500d42f0-0x500d43a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500d42f0(int param_1,float *param_2)

{
  if (*(int *)(param_1 + 0x450) != 0) {
    if (DAT_501525c8 <= *param_2) {
      if (DAT_501525cc < *param_2) {
        *param_2 = DAT_501525cc;
      }
    }
    else {
      *param_2 = DAT_501525c8;
    }
    if (DAT_501525d0 <= param_2[1]) {
      if (DAT_501525d4 < param_2[1]) {
        param_2[1] = DAT_501525d4;
      }
    }
    else {
      param_2[1] = DAT_501525d0;
    }
    if (param_2[2] < DAT_501525d8) {
      param_2[2] = DAT_501525d8;
      return;
    }
    if (_DAT_501525dc < param_2[2]) {
      param_2[2] = _DAT_501525dc;
    }
  }
  return;
}

