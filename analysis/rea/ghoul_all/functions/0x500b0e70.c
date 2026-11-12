// rea decompile_all
// name: FUN_500b0e70
// address: 0x500b0e70
// body: available
// range: 0x500b0e70-0x500b1007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_500b0e70(float param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  fVar1 = param_1;
  local_1c = 0.75;
  if (*(int **)((int)param_1 + 0x450) == (int *)0x0) {
    FUN_500fdd70((float *)((int)param_1 + 0x10),&local_c,(float *)0x0,(float *)0x0);
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x450) + 0x74))(&local_c);
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x450) + 0x78))(param_1);
    if (iVar2 == 0) {
      local_1c = 0.85;
    }
    else if (iVar2 == 1) {
      local_1c = 0.75;
    }
    else if (iVar2 == 2) {
      local_1c = -0.2;
    }
  }
  local_18 = *(float *)(param_2 + 4) - *(float *)((int)param_1 + 4);
  local_14 = *(float *)(param_2 + 8) - *(float *)((int)param_1 + 8);
  local_10 = *(float *)(param_2 + 0xc) - *(float *)((int)param_1 + 0xc);
  FUN_500fe050(&local_18);
  iVar2 = *(int *)(param_2 + 0x450);
  if (iVar2 != 0) {
    param_1 = *(float *)(iVar2 + 0xc) * *(float *)(iVar2 + 0xc) +
              *(float *)(iVar2 + 8) * *(float *)(iVar2 + 8) +
              *(float *)(iVar2 + 4) * *(float *)(iVar2 + 4);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    param_1 = *(float *)(param_2 + 0x254) * *(float *)(param_2 + 0x254) +
              *(float *)(param_2 + 0x250) * *(float *)(param_2 + 0x250) +
              *(float *)(param_2 + 0x24c) * *(float *)(param_2 + 0x24c);
  }
  if ((*(byte *)((int)fVar1 + 0x1b8) & 0x20) != 0) {
    param_1 = param_1 * 0.01;
    local_1c = local_1c + 0.225;
  }
  if ((10000.0 < param_1) && (local_1c = local_1c - 0.25, 40000.0 < param_1)) {
    local_1c = local_1c - 0.25;
  }
  if (local_c * local_18 + fStack_8 * local_14 + fStack_4 * local_10 <= local_1c) {
    return 0;
  }
  return 1;
}

