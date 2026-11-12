// rea decompile_all
// name: FUN_20004460
// address: 0x20004460
// body: available
// range: 0x20004460-0x2000455c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20004556 to 0x20030b70 FUN_20030b70 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20004460(void)

{
  if (DAT_201c1f00 == 8) {
    if (DAT_201e7e68 < DAT_201e8fc4) {
      if (*(float *)(DAT_20225058 + 0x18) != 0.0) {
        Com_Printf(s_high_clamp__i_2011c920,DAT_201e8fc4 - DAT_201e7e68);
      }
      DAT_201e8fc4 = DAT_201e7e68;
      DAT_201e8fd0 = 1.0;
    }
    else if (DAT_201e8fc4 < DAT_201e7e68 + -100) {
      if (*(float *)(DAT_20225058 + 0x18) != 0.0) {
        Com_Printf(s_low_clamp__i_2011c910,(DAT_201e7e68 - DAT_201e8fc4) + -100);
      }
      DAT_201e8fc4 = DAT_201e7e68 + -100;
      DAT_201e8fd0 = 0.0;
    }
    else {
      DAT_201e8fd0 = 1.0 - (float)(DAT_201e7e68 - DAT_201e8fc4) * 0.01;
    }
    if (*(float *)(DAT_201e7560 + 0x18) != 0.0) {
      DAT_201e8fd0 = 1.0;
    }
    FUN_200032c0(&DAT_201e7e60);
    FUN_20003dd0();
    FUN_20030b70();
    return;
  }
  return;
}

