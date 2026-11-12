// rea decompile_all
// name: FUN_50084f00
// address: 0x50084f00
// body: available
// range: 0x50084f00-0x50084fc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_50084f00(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x5c);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  *(undefined2 *)(param_1 + 0x5c) = 999;
  lVar4 = __ftol();
  *(short *)(param_1 + 0x5e) = (short)lVar4;
  lVar4 = __ftol();
  *(short *)(param_1 + 0x60) = (short)lVar4;
  lVar4 = __ftol();
  *(short *)(param_1 + 0x62) = (short)lVar4;
  if (param_3 == (int *)0x0) {
    *(undefined2 *)(param_1 + 100) = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x9c))();
    *(undefined2 *)(param_1 + 100) = uVar1;
  }
  if (param_4 == (int *)0x0) {
    *(undefined2 *)(param_1 + 0x66) = 0;
  }
  else {
    uVar1 = (**(code **)(*param_4 + 0x9c))();
    *(undefined2 *)(param_1 + 0x66) = uVar1;
  }
  if (param_5 == (int *)0x0) {
    *(undefined2 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0x9c))();
    *(undefined2 *)(param_1 + 0x68) = uVar1;
  }
  if (param_6 != (int *)0x0) {
    uVar1 = (**(code **)(*param_6 + 0x9c))();
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0x6a) = 0;
  return;
}

