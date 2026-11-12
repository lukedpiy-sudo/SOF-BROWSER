// rea decompile_all
// name: FUN_20063490
// address: 0x20063490
// body: available
// range: 0x20063490-0x2006352b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20063490(void)

{
  char *pcVar1;
  
  if (DAT_203a1f20 != 2) {
    DAT_20396ee8 = DAT_20396ee8 + 1;
    pcVar1 = (char *)FUN_20021760(s_nextserver_20139888);
    if (*pcVar1 == '\0') {
      if (DAT_203a1f20 == 3) {
        FUN_20018180(s_disconnect_2013a770);
        Cvar_Set(s_nextserver_20139888,&DAT_2015ee44);
        return;
      }
      FUN_20018180(s_killserver_201304f8);
      Cvar_Set(s_nextserver_20139888,&DAT_2015ee44);
      return;
    }
    FUN_20018180(pcVar1);
    FUN_20018180(&DAT_2011dd40);
    Cvar_Set(s_nextserver_20139888,&DAT_2015ee44);
  }
  return;
}

