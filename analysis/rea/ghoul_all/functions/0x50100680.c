// rea decompile_all
// name: FUN_50100680
// address: 0x50100680
// body: available
// range: 0x50100680-0x5010079d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50100680(int param_1,float *param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(param_1 + 0x74);
  local_c = *(float *)(iVar2 + 0x1c);
  local_8 = *(float *)(iVar2 + 0x20);
  local_4 = *(float *)(iVar2 + 0x24);
  if (param_5 == 7) {
    local_c = local_c + *(float *)(iVar2 + 0x4b0);
    local_8 = local_8 + *(float *)(iVar2 + 0x4b4);
    local_4 = local_4 + *(float *)(iVar2 + 0x4b8);
    if (local_c < -90.0) {
      local_c = -90.0;
    }
  }
  fVar1 = (float)*(int *)(*(int *)(iVar2 + 0x34c) + 0x270) * param_3;
  if (param_4 < fVar1) {
    fVar1 = param_4;
  }
  iVar2 = (**(code **)(*DAT_5015c4d8 + 0x4c))();
  if ((iVar2 != 0) || (param_4 = fVar1, param_5 == 7)) {
    fVar3 = (float10)(**(code **)(*DAT_5015c4d8 + 0x8c))(param_1,param_5);
    param_4 = (float)(fVar3 + (float10)fVar1);
  }
  fVar1 = -param_4;
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,param_4);
  local_c = (float)(fVar3 + (float10)local_c);
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,param_4);
  local_8 = (float)(fVar3 + (float10)local_8);
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,param_4);
  local_4 = (float)(fVar3 + (float10)local_4);
  FUN_500fdd70(&local_c,param_2,(float *)0x0,(float *)0x0);
  return;
}

