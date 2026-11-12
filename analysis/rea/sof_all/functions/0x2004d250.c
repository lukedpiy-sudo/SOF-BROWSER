// rea decompile_all
// name: FUN_2004d250
// address: 0x2004d250
// body: available
// range: 0x2004d250-0x2004d2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004d250(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20055930();
  DAT_2036bee8 = Cvar_Get(s_showpackets_201368dc,&DAT_2011c4ac,0,0);
  DAT_20367eb4 = Cvar_Get(s_showdrop_201368d0,&DAT_2011c4ac,0,0);
  uVar2 = FUN_20055450(&DAT_2011ee58,uVar1,8,0);
  DAT_2036bed0 = Cvar_Get(s_qport_2011d794,uVar2);
  DAT_20367eb0 = Cvar_Get(s_net_sendrate_201368c0,&DAT_2011d31c,0,0);
  DAT_20367eb8 = Cvar_Get(s_net_receiverate_201368b0,&DAT_2011d31c,0,0);
  return;
}

