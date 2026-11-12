// rea decompile_all
// name: FUN_20020880
// address: 0x20020880
// body: available
// range: 0x20020880-0x200208d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200208ce to 0x20020720 FUN_20020720 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20020880(void)

{
  int iVar1;
  
  if ((*(int *)(DAT_2024afc0 + 0x14) == 0) && (*(int *)(DAT_2024afb4 + 0x14) == 0)) {
    iVar1 = (DAT_2040365c >> 3) + -2;
    if (iVar1 != DAT_2024af98) {
      _DAT_2024afa4 = 0;
      _DAT_2024afa8 = 0;
      _DAT_2024afac = 0;
      _DAT_2024afb0 = 0;
      DAT_2024af98 = iVar1;
    }
    return;
  }
  FUN_20020720();
  return;
}

