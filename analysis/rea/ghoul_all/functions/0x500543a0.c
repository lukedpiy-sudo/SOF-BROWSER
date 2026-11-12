// rea decompile_all
// name: FUN_500543a0
// address: 0x500543a0
// body: available
// range: 0x500543a0-0x500544cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500543a0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float local_4;
  
  local_4 = 262144.0;
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar1 = 0;
    uVar10 = 0;
    fVar6 = local_4;
    while( true ) {
      local_4 = fVar6;
      iVar9 = iVar1;
      uVar11 = uVar10 + 1;
      if (((((int)uVar10 < 0) || (DAT_5015c860 == 0)) ||
          ((uint)(DAT_5015c864 - DAT_5015c860 >> 2) <= uVar10)) ||
         (iVar1 = *(int *)(uVar10 * 4 + DAT_5015c860), iVar1 == 0)) break;
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = iVar9;
      uVar10 = uVar11;
      fVar6 = local_4;
      if (iVar2 != 0) {
        bVar7 = FUN_50054280(param_1,iVar2);
        if ((((CONCAT31(extraout_var,bVar7) != 0) &&
             (fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar2 + 4),
             fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar2 + 8),
             fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar2 + 0xc),
             fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4, fVar3 < local_4)) &&
            ((iVar1 = iVar2, fVar6 = fVar3, CONCAT31(extraout_var,bVar7) != 2 &&
             ((iVar1 = iVar9, fVar6 = local_4,
              *(float *)(iVar2 + 0xc) < *(float *)(param_1 + 0xc) !=
              (*(float *)(iVar2 + 0xc) == *(float *)(param_1 + 0xc)) && (iVar2 != param_1)))))) &&
           (iVar8 = FUN_50050d70(param_1,iVar2), iVar8 != 0)) {
          iVar1 = iVar2;
          fVar6 = fVar3;
        }
      }
    }
    if (iVar9 != 0) {
      *(int *)(*(int *)(param_1 + 0x45c) + 0x34) = iVar9;
      *(float *)(*(int *)(param_1 + 0x45c) + 0x38) = DAT_5015ccdc + 10.0;
    }
  }
  return;
}

