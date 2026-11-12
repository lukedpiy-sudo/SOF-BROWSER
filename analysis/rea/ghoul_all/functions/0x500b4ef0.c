// rea decompile_all
// name: FUN_500b4ef0
// address: 0x500b4ef0
// body: available
// range: 0x500b4ef0-0x500b500e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b4ef0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  local_8 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  local_4 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  FUN_500fe050(&local_c);
  fVar2 = (float10)FUN_500fe0a0(360.0 - *(float *)(param_1 + 0x1c));
  fVar3 = (float10)fsin((float10)(float)(fVar2 * (float10)0.01745329252));
  fVar2 = (float10)fcos((float10)(float)(fVar2 * (float10)0.01745329252));
  *(float *)(param_1 + 600) =
       (float)(((float10)local_8 * (float10)70.0 * fVar3 + (float10)local_c * (float10)-70.0 * fVar2
               ) * (float10)-1.0);
  *(float *)(param_1 + 0x260) =
       (float)(((float10)local_8 * (float10)70.0 * fVar2 - (float10)local_c * (float10)-70.0 * fVar3
               ) * (float10)-1.0);
  fVar1 = (float)(param_3 * 6);
  *(float *)(param_1 + 0x24c) = local_c * fVar1;
  *(float *)(param_1 + 0x250) = local_8 * fVar1;
  *(float *)(param_1 + 0x254) = local_4 * fVar1;
  *(undefined4 *)(param_1 + 0x254) = 0x43160000;
  *(undefined4 *)(param_1 + 0x294) = 0x3f333333;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500b4dc0;
  fVar1 = DAT_5015ccdc + 0.1;
  *(undefined4 *)(param_1 + 0x294) = 0x3f333333;
  *(float *)(param_1 + 0x2b4) = fVar1;
  return;
}

