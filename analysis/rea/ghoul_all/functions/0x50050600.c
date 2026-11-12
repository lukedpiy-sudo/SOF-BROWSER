// rea decompile_all
// name: FUN_50050600
// address: 0x50050600
// body: available
// range: 0x50050600-0x500506f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50050600(int param_1)

{
  int iVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 0x30);
    local_18 = *(float *)(iVar1 + 4);
    local_14 = *(float *)(iVar1 + 8);
    local_4 = *(float *)(iVar1 + 0xc) - 10.0;
    if ((*(byte *)(*(int *)(iVar1 + 0x74) + 0x10) & 1) != 0) {
      local_4 = local_4 - 20.0;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0x2c) == 10) {
      local_4 = *(float *)(iVar1 + 0xc) - 30.0;
    }
    local_c = local_18 - *(float *)(param_1 + 4);
    local_8 = local_14 - *(float *)(param_1 + 8);
    local_4 = local_4 - *(float *)(param_1 + 0xc);
    FUN_500c3570(&local_c,&local_18);
    FUN_50050380(param_1);
    *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = local_18;
    iVar1 = *(int *)(param_1 + 0x45c);
    iVar2 = *(int *)(iVar1 + 0x1c);
    if (iVar2 < 0) {
      *(float *)(iVar1 + 0x24) = local_14 - (float)iVar2;
    }
    else if (iVar2 < 1) {
      *(float *)(iVar1 + 0x24) = local_14;
    }
    else {
      *(float *)(iVar1 + 0x24) = (float)iVar2 + local_14;
    }
    FUN_500504d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x20c),param_1);
  }
  return;
}

