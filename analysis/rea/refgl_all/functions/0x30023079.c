// rea decompile_all
// name: FUN_30023079
// address: 0x30023079
// body: available
// range: 0x30023079-0x30023156 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_30023079(undefined4 param_1,char *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  piVar1 = DAT_300aa4d0;
  if (DAT_300aa4d4 == '\0') {
    piVar1 = (int *)FUN_3002811c();
    FUN_300280a5(param_2 + (*piVar1 == 0x2d),piVar1[1] + param_3,(int)piVar1);
  }
  else if (DAT_300aa4d8 == param_3) {
    iVar2 = (*DAT_300aa4d0 == 0x2d) + DAT_300aa4d8;
    param_2[iVar2] = '0';
    (param_2 + iVar2)[1] = '\0';
  }
  pcVar3 = param_2;
  if (*piVar1 == 0x2d) {
    *param_2 = '-';
    pcVar3 = param_2 + 1;
  }
  if (piVar1[1] < 1) {
    FUN_3002328d(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + piVar1[1];
  }
  if (0 < (int)param_3) {
    FUN_3002328d(pcVar3,1);
    *pcVar3 = DAT_300341f8;
    iVar2 = piVar1[1];
    if (iVar2 < 0) {
      if ((DAT_300aa4d4 != '\0') || (-iVar2 <= (int)param_3)) {
        param_3 = -iVar2;
      }
      FUN_3002328d(pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  return param_2;
}

