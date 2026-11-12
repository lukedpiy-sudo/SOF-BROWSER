// rea decompile_all
// name: FUN_200cd650
// address: 0x200cd650
// body: available
// range: 0x200cd650-0x200cd84d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200cd650(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar5 = *(int *)(in_ECX + 8);
  iVar4 = *(int *)(in_ECX + 0xc) - iVar5;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x84 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar5 - iVar1) / 0x84, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar1) / 0x84;
    }
    iVar5 = iVar5 + uVar6;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x84);
    pvVar7 = pvVar3;
    for (iVar2 = *(int *)(in_ECX + 4); iVar2 != param_1; iVar2 = iVar2 + 0x84) {
      FUN_200ce050(pvVar7,iVar2);
      pvVar7 = (void *)((int)pvVar7 + 0x84);
    }
    FUN_200ce050(pvVar7,param_2);
    FUN_200cd8b0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar7 + 0x84);
    FUN_200cd880(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x84);
    iVar5 = FUN_200cd850();
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (iVar5 + 1) * 0x84);
  }
  else {
    iVar2 = iVar5 - param_1 >> 0x1f;
    if ((iVar5 - param_1) / 0x84 + iVar2 == iVar2) {
      FUN_200cd8b0(param_1,iVar5,param_1 + 0x84);
      FUN_200cd8f0(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - param_1) / 0x84,param_2);
      FUN_200cdba0(param_1,*(undefined4 *)(in_ECX + 8),param_2);
    }
    else {
      FUN_200cd8b0(iVar5 + -0x84,iVar5,iVar5);
      FUN_200cdde0(param_1,*(int *)(in_ECX + 8) + -0x84,*(int *)(in_ECX + 8));
      FUN_200cdba0(param_1,param_1 + 0x84,param_2);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x84;
  }
  return *(int *)(in_ECX + 4) + ((param_1 - iVar1) / 0x84) * 0x84;
}

