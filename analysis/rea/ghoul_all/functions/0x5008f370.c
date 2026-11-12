// rea decompile_all
// name: FUN_5008f370
// address: 0x5008f370
// body: available
// range: 0x5008f370-0x5008f434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008f370(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_c [3];
  
  iVar1 = param_1[0xc6];
  if (iVar1 == -1000) {
    FUN_500c3880(param_1);
    return;
  }
  FUN_500fdd70((float *)(param_1 + 4),local_c,(float *)0x0,(float *)0x0);
  if (iVar1 < 0) {
    iVar1 = (*DAT_5015cb24)(3,7);
  }
  FUN_50084270(param_1 + 1,local_c,(char)iVar1,1,' ',0,0,0,0x23);
  if (0 < param_1[0xc6]) {
    param_1[0xc6] = -1000;
    param_1[0xad] = (int)(DAT_5015ccdc + 3.0);
    return;
  }
  fVar2 = (float10)(*DAT_5015cb20)(0xbe4ccccd,0x3e4ccccd);
  param_1[0xad] = (int)(float)(((float10)DAT_5015ccdc - (float10)param_1[0xc6]) + fVar2);
  return;
}

