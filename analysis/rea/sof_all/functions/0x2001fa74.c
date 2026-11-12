// rea decompile_all
// name: Catch@2001fa74
// address: 0x2001fa74
// body: available
// range: 0x2001fa74-0x2001fb02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Catch_2001fa74(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar1 == 0) {
    FUN_2000b2c0(0);
    FUN_20018180(s_menu_disconnect_2011d908);
    DAT_20249638 = 0;
  }
  else {
    if (iVar1 == 1) {
      FUN_2005fec0(s_Server_crashed_20121704,0);
      FUN_2000b2c0(1);
      DAT_20249638 = 0;
      return 0x2001fa17;
    }
    if (iVar1 == 2) {
      FUN_2005fec0(&DAT_2015ee44,0);
      FUN_2000b2c0(1);
      uVar2 = FUN_20058110(0x411);
      Cvar_Set(s_menu_won_error_2011dc48,uVar2);
      FUN_20018180(s_menu_wonerror_20121714);
      DAT_20249638 = 0;
      return 0x2001fa17;
    }
  }
  return 0x2001fa17;
}

