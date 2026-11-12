// rea decompile_all
// name: FUN_50050b50
// address: 0x50050b50
// body: available
// range: 0x50050b50-0x50050c9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50050b50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  int unaff_EDI;
  
  if ((*(int *)(param_1 + 0x45c) != 0) && (DAT_50159a58 == 0)) {
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x54))(7);
    if (iVar5 != 0) {
      return 1;
    }
    if (2 < *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210)) {
      if (*(int *)(param_1 + 0x2ec) <= DAT_50142e44) {
        return 1;
      }
      bVar4 = FUN_50050700(param_1,param_1);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        return 1;
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0xf4))(&stack0xffffffc8);
      fVar1 = *(float *)(param_1 + 4) - *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8) - *(float *)(param_1 + 8);
      fVar2 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xc);
      if ((*(int *)(unaff_EDI + 0x2c) == 0xc) &&
         (122500.0 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
        return 1;
      }
      if (((*(int *)(param_1 + 0x45c) != 0) &&
          (2 < *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210))) &&
         (iVar5 = FUN_50059510(&DAT_50159680,param_1,1024.0), iVar5 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

