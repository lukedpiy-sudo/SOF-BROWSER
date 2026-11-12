// rea decompile_all
// name: FUN_2004f450
// address: 0x2004f450
// body: available
// range: 0x2004f450-0x2004f5a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004f450(void)

{
  int iVar1;
  
  iVar1 = Ordinal_115(0x101,&DAT_2038ff30);
  if (iVar1 != 0) {
    Com_Error(0,s_Winsock_initialization_failed__201370dc);
  }
  Com_Printf(s_Winsock_Initialized_201370c4);
  DAT_20390140 = Cvar_Get(s_noudp_2011da74,&DAT_2011c4ac,8,0);
  DAT_20390138 = Cvar_Get(s_noipx_2011da6c,&DAT_2011c4ac,8,0);
  DAT_2036fef4 = Cvar_Get(s_ipxfix_201370bc,&DAT_2011d31c,0,0);
  DAT_20390120 = Cvar_Get(s_net_mainip_201370b0,&DAT_2011d47c,9,0);
  DAT_20390128 = Cvar_Get(s_net_ttl_201370a8,&DAT_2011c4ac,1,0);
  FUN_2004e450();
  DAT_20390134 = Cvar_Get(s_net_socksEnabled_20137094,&DAT_2011c4ac,1,0);
  *(undefined4 *)(DAT_20390134 + 0x10) = 0x2004f3a0;
  DAT_20390130 = Cvar_Get(s_net_socksServer_20137084,&DAT_2015ee44,1,0);
  DAT_2039013c = Cvar_Get(s_net_socksPort_2013706c,&DAT_2013707c,1,0);
  DAT_2039012c = Cvar_Get(s_net_socksUsername_20137058,&DAT_2015ee44,1,0);
  DAT_20390154 = Cvar_Get(s_net_socksPassword_20137044,&DAT_2015ee44,1,0);
  Cmd_AddCommand(s_ip_list_2013703c,FUN_2004e450);
  _DAT_2036fef8 = Cvar_Get(s_net_shownet_20137030,&DAT_2011c4ac,0,0);
  return;
}

