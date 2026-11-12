// rea decompile_all
// name: FUN_2000dd20
// address: 0x2000dd20
// body: available
// range: 0x2000dd20-0x2000ddd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2000ddd0 to 0x20018530 FUN_20018530 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000dd20(void)

{
  if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
    FUN_20057ca0(s_items_2011e740,8);
    FUN_20057ca0(s_weapons_2011e738,8);
    FUN_20057ca0(s_general_2011e730,8);
    FUN_20057ca0(s_dm_generic_2011e724,8);
    FUN_200208e0();
    FUN_20067350();
    FUN_20055c20();
    (*DAT_20390d9c)();
    FUN_20017170();
    DAT_20367ec0 = &DAT_20367ed0;
    _DAT_20367ec4 = DAT_20136a0c;
    FUN_200c8400();
    FUN_200134c0();
    _DAT_201c1f18 = 0x40490fdb;
    FUN_200015d0();
    FUN_2000cac0();
    FUN_2004a5e0();
    FUN_20031600();
    FUN_200eba20(1);
    FUN_20025770();
    FUN_20018530();
    return;
  }
  return;
}

