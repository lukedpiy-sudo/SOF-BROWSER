// rea decompile_all
// name: FUN_50057040
// address: 0x50057040
// body: available
// range: 0x50057040-0x500570d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500570d0 to 0x50059630 FUN_50059630 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_50057040(void)

{
  if (DAT_50159a88 != '\0') {
    _DAT_50159678 = DAT_5015ccdc;
    if ((*(float *)(DAT_5015c978 + 0x18) != 0.0) && (*(float *)(DAT_5015d9ac + 0x18) != 0.0)) {
      FUN_50061c00(&DAT_50159a60,DAT_5015cca0 + 0x464);
    }
    FUN_50061dc0(&DAT_50159a60);
    FUN_5005f3e0(&DAT_50159a60);
    if ((DAT_50159a8c == 1) || (*(float *)(DAT_5015c9d4 + 0x18) == 0.0)) {
      FUN_50059630(&DAT_50159680);
      return;
    }
  }
  return;
}

