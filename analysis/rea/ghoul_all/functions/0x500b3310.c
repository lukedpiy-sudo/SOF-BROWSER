// rea decompile_all
// name: FUN_500b3310
// address: 0x500b3310
// body: available
// range: 0x500b3310-0x500b33da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b3310(int *param_1,int param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = param_3;
  piVar2 = param_1;
  pfVar1 = (float *)(param_1 + 1);
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 1.0;
  FUN_50084b40(pfVar1,0);
  if (param_3 == 0) {
    if (param_2 == 0) goto LAB_500b3385;
    local_c = *(float *)(param_2 + 4) - *pfVar1;
    local_8 = *(float *)(param_2 + 8) - (float)param_1[2];
    local_4 = *(float *)(param_2 + 0xc);
  }
  else {
    local_c = *(float *)(param_3 + 4) - *pfVar1;
    local_8 = *(float *)(param_3 + 8) - (float)param_1[2];
    local_4 = *(float *)(param_3 + 0xc);
  }
  local_4 = local_4 - (float)param_1[3];
LAB_500b3385:
  FUN_500fe050(&local_c);
  FUN_50084b80(pfVar1,&local_c,100,0);
  if (param_1[0xab] != 0) {
    param_3 = (uint)*(byte *)(param_1[0xab] + 0x1c);
    lVar4 = __ftol();
    param_1 = (int *)(uint)(byte)lVar4;
  }
  FUN_500b30a0(piVar2,(byte)param_3,(char)param_1,uVar3);
  return;
}

