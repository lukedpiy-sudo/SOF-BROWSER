// rea decompile_all
// name: FUN_500b4a80
// address: 0x500b4a80
// body: available
// range: 0x500b4a80-0x500b4b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500b4a80(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  uint3 uVar3;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_500fdd70((float *)(param_1 + 0x10),&local_c,(float *)0x0,(float *)0x0);
  local_4 = 0.0;
  local_18 = *param_2 - *(float *)(param_1 + 4);
  local_14 = param_2[1] - *(float *)(param_1 + 8);
  local_10 = param_2[2] - *(float *)(param_1 + 0xc);
  FUN_500fe050(&local_c);
  local_10 = 0.0;
  FUN_500fe050(&local_18);
  fVar2 = local_10 * local_4 + local_c * local_18 + local_8 * local_14;
  fVar4 = (float10)fcos((float10)param_3 * (float10)0.01745329252);
  fVar1 = (float)fVar4;
  FUN_500adb20((byte *)s_Threshold__f_Dot__f_5014d4ec);
  uVar3 = (uint3)(CONCAT22(extraout_var,
                           (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe) >> 8);
  if (fVar2 < fVar1) {
    return (uint)uVar3 << 8;
  }
  return CONCAT31(uVar3,1);
}

