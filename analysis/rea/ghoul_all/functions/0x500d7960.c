// rea decompile_all
// name: FUN_500d7960
// address: 0x500d7960
// body: available
// range: 0x500d7960-0x500d79fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d7960(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  lVar5 = __ftol();
  fVar1 = *(float *)(iVar3 + 400);
  piVar2 = *(int **)(param_1 + 0x450);
  iVar3 = (**(code **)(*piVar2 + 0x238))();
  uVar4 = *(uint *)(iVar3 + 0x194);
  *(uint *)(iVar3 + 0x194) = uVar4 | 0x80;
  if ((int)lVar5 == 0) {
    uVar4 = uVar4 & 0xfffffeff | 0x80;
  }
  else {
    uVar4 = uVar4 | 0x180;
  }
  *(uint *)(iVar3 + 0x194) = uVar4;
  *(float *)(iVar3 + 0x13c) = DAT_5015ccdc + fVar1;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  piVar2 = (int *)piVar2[99];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x90))(&LAB_500d4c00);
  }
  return;
}

