// rea decompile_all
// name: FUN_500d4ef0
// address: 0x500d4ef0
// body: available
// range: 0x500d4ef0-0x500d4f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d4ef0(int param_1,float param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x450);
  iVar2 = (**(code **)(*piVar1 + 0x238))();
  uVar3 = *(uint *)(iVar2 + 0x194);
  *(uint *)(iVar2 + 0x194) = uVar3 | 0x80;
  if (param_3 == 0) {
    uVar3 = uVar3 & 0xfffffeff | 0x80;
  }
  else {
    uVar3 = uVar3 | 0x180;
  }
  *(uint *)(iVar2 + 0x194) = uVar3;
  *(float *)(iVar2 + 0x13c) = DAT_5015ccdc + param_2;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  piVar1 = (int *)piVar1[99];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(&LAB_500d4c00);
  }
  return;
}

