// rea decompile_all
// name: FUN_30016e70
// address: 0x30016e70
// body: available
// range: 0x30016e70-0x30016ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __fastcall FUN_30016e70(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(param_1 + 0x28));
  fVar1 = *(float *)(param_1 + 0x30);
  fVar4 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(param_1 + 0x24));
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar5 = (float10)(*DAT_3008fe28)(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return fVar5 + (float10)(float)(fVar4 * (float10)fVar2 + fVar3 * (float10)fVar1);
}

