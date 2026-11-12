// rea decompile_all
// name: FUN_2000b040
// address: 0x2000b040
// body: available
// range: 0x2000b040-0x2000b0b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000b040(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)Cmd_Argv(0);
  if (((DAT_201c1f00 < 8) || (*pcVar1 == '-')) || (*pcVar1 == '+')) {
    Com_Printf(s_Unknown_command___s__2011d714,pcVar1);
  }
  else {
    FUN_2001cb00(&DAT_201c2400,4);
    FUN_2001e830(&DAT_201c2400,pcVar1);
    iVar2 = Cmd_Argc();
    if (1 < iVar2) {
      FUN_2001e830(&DAT_201c2400,&DAT_2011d72c);
      uVar3 = FUN_20018d50();
      FUN_2001e830(&DAT_201c2400,uVar3);
      return;
    }
  }
  return;
}

