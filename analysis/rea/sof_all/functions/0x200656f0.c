// rea decompile_all
// name: FUN_200656f0
// address: 0x200656f0
// body: available
// range: 0x200656f0-0x20065857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200656f0(void)

{
  BOOL BVar1;
  uint uVar2;
  _OSVERSIONINFOA local_128;
  undefined1 local_94 [148];
  
  timeBeginPeriod(1);
  local_128.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_128);
  if (BVar1 == 0) {
    Sys_Error(s_Couldn_t_get_OS_info_2013a998);
  }
  if (local_128.dwMajorVersion < 4) {
    Sys_Error(s_SoF_requires_windows_version_4_o_2013a96c);
  }
  if (local_128.dwPlatformId == 0) {
    Sys_Error(s_SoF_doesn_t_run_on_Win32s_2013a950);
  }
  else if (local_128.dwPlatformId == 1) {
    DAT_20403538 = 1;
  }
  if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
    uVar2 = __ftol();
    if ((uVar2 & 2) == 0) goto LAB_200657f1;
  }
  BVar1 = AllocConsole();
  if (BVar1 == 0) {
    Sys_Error(s_Couldn_t_create_dedicated_server_2013a924);
  }
  DAT_2040350c = FUN_200fb79b(s_CONOUT__20137468,&DAT_2011de68,&DAT_2015ac50);
  DAT_20403500 = FUN_200fb79b(s_CONOUT__20137468,&DAT_2011de68,&DAT_2015ac70);
  DAT_20403518 = FUN_200fb79b(s_CONIN__2013745c,&DAT_20137464,&PTR_DAT_2015ac30);
  SetConsoleCtrlHandler((PHANDLER_ROUTINE)0x200656b0,1);
LAB_200657f1:
  FUN_200196b0();
  FUN_20021260(local_94);
  DAT_20390c18 = Cvar_Get(s_use_amd3d_2013a918,&DAT_2011d31c,0,0);
  _DAT_20390b04 = Cvar_Get(s_use_mmx_2013a910,&DAT_2011d31c,0,0);
  Cmd_AddCommand(s_minimise_2013a904,&LAB_20065520);
  Cmd_AddCommand(s_winstart_2013a8f8,&LAB_20065550);
  return;
}

