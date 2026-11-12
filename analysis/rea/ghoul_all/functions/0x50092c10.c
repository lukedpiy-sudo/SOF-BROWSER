// rea decompile_all
// name: FUN_50092c10
// address: 0x50092c10
// body: available
// range: 0x50092c10-0x50092d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50092c10(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  uVar7 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),0);
  *(undefined4 *)(param_1 + 0x404) = uVar7;
  uVar7 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),1);
  *(undefined4 *)(param_1 + 0x408) = uVar7;
  uVar7 = FUN_500bcfe0(*(char **)(param_1 + 0x1e8),2);
  *(undefined4 *)(param_1 + 0x40c) = uVar7;
  if ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0) {
    fVar3 = ABS(*(float *)(param_1 + 0x41c));
    for (iVar2 = *(int *)(param_1 + 0x33c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x33c)) {
      if (ABS(*(float *)(iVar2 + 0x41c)) < fVar3) {
        fVar3 = ABS(*(float *)(iVar2 + 0x41c));
      }
    }
    fVar1 = *(float *)(param_1 + 0x414);
    do {
      fVar4 = ABS(*(float *)(param_1 + 0x41c)) / (fVar3 / fVar1);
      fVar6 = fVar4 / *(float *)(param_1 + 0x414);
      fVar5 = fVar4;
      if (*(float *)(param_1 + 0x410) != *(float *)(param_1 + 0x414)) {
        fVar5 = fVar6 * *(float *)(param_1 + 0x410);
      }
      *(float *)(param_1 + 0x410) = fVar5;
      if (*(float *)(param_1 + 0x418) == *(float *)(param_1 + 0x414)) {
        *(float *)(param_1 + 0x418) = fVar4;
      }
      else {
        *(float *)(param_1 + 0x418) = fVar6 * *(float *)(param_1 + 0x418);
      }
      *(float *)(param_1 + 0x414) = fVar4;
      param_1 = *(int *)(param_1 + 0x33c);
    } while (param_1 != 0);
  }
  return;
}

