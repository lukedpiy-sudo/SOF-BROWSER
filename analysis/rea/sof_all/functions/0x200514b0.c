// rea decompile_all
// name: FUN_200514b0
// address: 0x200514b0
// body: available
// range: 0x200514b0-0x200515a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200514b0(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_400 [256];
  
  BVar1 = AllocConsole();
  if (BVar1 == 0) {
    Sys_Error(s_Couldn_t_create_console_20137470);
  }
  uVar2 = FUN_200fb79b(s_CONOUT__20137468,&DAT_2011de68,&DAT_2015ac50);
  uVar3 = FUN_200fb79b(s_CONOUT__20137468,&DAT_2011de68,&DAT_2015ac70);
  uVar4 = FUN_200fb79b(s_CONIN__2013745c,&DAT_20137464,&PTR_DAT_2015ac30);
  SetConsoleCtrlHandler((PHANDLER_ROUTINE)0x20051580,1);
  FUN_2005227b();
  FUN_200fb751(local_400);
  FUN_2005229d(local_400);
  SetConsoleCtrlHandler((PHANDLER_ROUTINE)0x20051580,0);
  FUN_200fa9ae(uVar2);
  FUN_200fa9ae(uVar3);
  FUN_200fa9ae(uVar4);
  FreeConsole();
  FUN_200fb67c(0);
  switch(local_400[0]) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    DAT_2039021e = 1;
  }
  return 1;
}

