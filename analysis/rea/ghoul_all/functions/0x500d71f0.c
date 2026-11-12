// rea decompile_all
// name: FUN_500d71f0
// address: 0x500d71f0
// body: available
// range: 0x500d71f0-0x500d72b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d71f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x450);
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  iVar2 = (**(code **)(*piVar1 + 0x238))();
  uVar5 = *(uint *)(iVar2 + 0x158);
  switch(uVar5) {
  case 0:
    FUN_500d63f0(param_1);
    break;
  case 1:
    FUN_500d6960(param_1);
    break;
  case 2:
    FUN_500d6bd0(param_1);
    break;
  case 3:
    FUN_500d6e60(param_1);
  }
  if (*(int *)(iVar2 + 0x158) == -1) {
    iVar3 = FUN_500d72d0(param_1);
    *(int *)(iVar2 + 0x1a0) = iVar3;
    uVar4 = (*DAT_5015cb24)(0,4);
    uVar4 = uVar4 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(iVar2 + 0x158) = uVar4;
    if (uVar4 == uVar5) {
      uVar5 = uVar4 + 1 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(iVar2 + 0x158) = uVar5;
    }
    *(undefined4 *)(iVar2 + 0x15c) = 0;
    piVar1[0x9c] = 1;
  }
  return;
}

