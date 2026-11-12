// rea decompile_all
// name: FUN_50109f21
// address: 0x50109f21
// body: available
// range: 0x50109f21-0x50109fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50109f21(undefined4 param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  DAT_5018c2f4 = (int *)FUN_5010fe5f();
  DAT_5018c2fc = DAT_5018c2f4[1] + -1;
  iVar1 = *DAT_5018c2f4;
  FUN_5010fde8(param_2 + (iVar1 == 0x2d),param_3,(int)DAT_5018c2f4);
  DAT_5018c300 = DAT_5018c2fc < DAT_5018c2f4[1] + -1;
  DAT_5018c2fc = DAT_5018c2f4[1] + -1;
  if ((DAT_5018c2fc < -4) || ((int)param_3 <= DAT_5018c2fc)) {
    FUN_50109fbc(param_1,param_2,param_3,param_4);
  }
  else {
    pcVar2 = param_2 + (iVar1 == 0x2d);
    if ((bool)DAT_5018c300) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_50109fe3(param_1,param_2,param_3);
  }
  return;
}

