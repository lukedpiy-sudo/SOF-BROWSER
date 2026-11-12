// rea decompile_all
// name: FUN_5010b15c
// address: 0x5010b15c
// body: available
// range: 0x5010b15c-0x5010b1ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_5010b15c(int param_1,double param_2)

{
  float10 fVar1;
  
  if (DAT_501589f0 == 0) {
    fVar1 = FUN_5010b711(1,param_1);
    return fVar1;
  }
  _DAT_5018c304 = 0x21;
  FUN_5010b984();
  return (float10)param_2;
}

