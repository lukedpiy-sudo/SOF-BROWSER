// rea decompile_all
// name: FUN_2000a9d0
// address: 0x2000a9d0
// body: available
// range: 0x2000a9d0-0x2000aaec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2000aa92 to 0x2001c6e0 Com_Printf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a9d0(char *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *_Str1;
  char *pcVar5;
  
  bVar1 = true;
  if ((*param_1 < '0') || ('9' < *param_1)) {
    pcVar4 = (char *)0x0;
    _Str1 = &DAT_20221f1c;
    pcVar5 = &DAT_201ff68c;
    pcVar2 = param_1;
    do {
      if ((*pcVar5 != '\0') && (iVar3 = __strcmpi(_Str1,param_1), iVar3 == 0)) {
        bVar1 = false;
        pcVar2 = pcVar4;
      }
      pcVar5 = pcVar5 + 0x40;
      pcVar4 = pcVar4 + 1;
      _Str1 = _Str1 + 0x15c;
    } while ((int)pcVar5 < 0x201ffe8c);
    if (bVar1) {
      Com_Printf();
      return;
    }
  }
  else {
    pcVar2 = (char *)FUN_200f9e9e(param_1);
    if (((int)pcVar2 < 0) || (0x1f < (int)pcVar2)) {
      Com_Printf(s_Bad_client_slot___i_2011d588,pcVar2);
      return;
    }
    if ((&DAT_201ff68c)[(int)pcVar2 * 0x40] == '\0') {
      Com_Printf(s_Client__i_is_not_active_2011d5a0,pcVar2);
      return;
    }
  }
  if (param_2 == 0) {
    (&DAT_2015ee70)[(int)pcVar2] = 0;
    Com_Printf(s_Client__i_named__s_is_now_free_t_2011d514,pcVar2,
               &DAT_20221f1c + (int)pcVar2 * 0x15c);
    return;
  }
  (&DAT_2015ee70)[(int)pcVar2] = 1;
  Com_Printf(s_Client__i_named__s_is_now_ignore_2011d544,pcVar2,&DAT_20221f1c + (int)pcVar2 * 0x15c)
  ;
  return;
}

