// rea decompile_all
// name: FUN_300127d0
// address: 0x300127d0
// body: available
// range: 0x300127d0-0x30012896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300127d0(int param_1,float *param_2,float *param_3)

{
  short sVar1;
  int iVar2;
  
  *param_2 = 0.0;
  *param_3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x34);
  if ((*(byte *)(iVar2 + 0x20) & 0x40) != 0) {
    sVar1 = *(short *)(iVar2 + 0x3c);
    *param_2 = (float)(int)*(short *)(iVar2 + 0x3e) * DAT_3008fd38 * 0.01;
    *param_3 = (float)(int)sVar1 * DAT_3008fd38 * 0.01;
    if (*param_2 < -1.0) {
      *param_2 = *param_2 + 1.0;
    }
    if (*param_3 < -1.0) {
      *param_3 = *param_3 + 1.0;
    }
    if (1.0 < *param_2) {
      *param_2 = *param_2 - 1.0;
    }
    if (1.0 < *param_3) {
      *param_3 = *param_3 - 1.0;
    }
  }
  return;
}

