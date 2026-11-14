// rea decompile_all
// name: FUN_30023157
// address: 0x30023157
// body: available
// range: 0x30023157-0x300231f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30023157(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_300aa4d0 = (int *)FUN_3002811c();
  DAT_300aa4d8 = DAT_300aa4d0[1] + -1;
  iVar1 = *DAT_300aa4d0;
  FUN_300280a5(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_300aa4d0);
  DAT_300aa4dc = DAT_300aa4d8 < DAT_300aa4d0[1] + -1;
  DAT_300aa4d8 = DAT_300aa4d0[1] + -1;
  if ((DAT_300aa4d8 < -4) || ((int)param_3 <= DAT_300aa4d8)) {
    FUN_300231f2(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_300aa4dc) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_30023219(param_1,param_2,param_3);
  }
  return;
}

