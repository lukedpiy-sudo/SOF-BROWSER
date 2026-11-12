// rea decompile_all
// name: FUN_20025770
// address: 0x20025770
// body: available
// range: 0x20025770-0x200257d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200257d2 to 0x20055bb0 FUN_20055bb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20025770(void)

{
  char *pcVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  pcVar1 = (char *)FUN_20021760(s_gamedir_20131258);
  if (*pcVar1 == '\0') {
    pcVar1 = &DAT_20131250;
  }
  Com_sprintf(local_40,0x40,s__s__s_autoexec_cfg_2013123c,*(undefined4 *)(DAT_2026ab00 + 4),pcVar1);
  iVar2 = FUN_20055a40(local_40,0,0x16,0);
  if (iVar2 != 0) {
    FUN_20018180(s_exec_autoexec_cfg_20131228);
  }
  FUN_20055bb0();
  return;
}

