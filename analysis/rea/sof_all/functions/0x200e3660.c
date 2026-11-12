// rea decompile_all
// name: FUN_200e3660
// address: 0x200e3660
// body: available
// range: 0x200e3660-0x200e37d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200e3660(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  uint uVar5;
  void *pvVar6;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 4 == 0) {
    if ((iVar1 == 0) || (uVar5 = iVar2 - iVar1 >> 4, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 - iVar1 >> 4;
    }
    iVar2 = iVar2 + uVar5;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 << 4);
    pvVar6 = pvVar4;
    for (iVar3 = *(int *)(in_ECX + 4); iVar3 != param_1; iVar3 = iVar3 + 0x10) {
      FUN_200279a0(pvVar6,iVar3);
      pvVar6 = (void *)((int)pvVar6 + 0x10);
    }
    FUN_200279a0(pvVar6,param_2);
    FUN_200cd610(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar6 + 0x10);
    FUN_200716d0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)(iVar2 * 0x10 + (int)pvVar4);
    iVar2 = FUN_200e33d0();
    pvVar6 = (void *)((iVar2 + 1) * 0x10 + (int)pvVar4);
    *(void **)(in_ECX + 4) = pvVar4;
  }
  else {
    if (iVar2 - param_1 >> 4 == 0) {
      FUN_200cd610(param_1,iVar2,param_1 + 0x10);
      FUN_200e4770(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1 >> 4),param_2);
      FUN_200e4a60(param_1,*(undefined4 *)(in_ECX + 8),param_2);
    }
    else {
      FUN_200cd610(iVar2 + -0x10,iVar2,iVar2);
      FUN_200e4bb0(param_1,*(int *)(in_ECX + 8) + -0x10,*(int *)(in_ECX + 8));
      FUN_200e4a60(param_1,param_1 + 0x10,param_2);
    }
    pvVar6 = (void *)(*(int *)(in_ECX + 8) + 0x10);
  }
  *(void **)(in_ECX + 8) = pvVar6;
  return (param_1 - iVar1 >> 4) * 0x10 + *(int *)(in_ECX + 4);
}

