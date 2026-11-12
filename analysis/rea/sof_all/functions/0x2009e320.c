// rea decompile_all
// name: FUN_2009e320
// address: 0x2009e320
// body: available
// range: 0x2009e320-0x2009e4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_2009e320(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *(int *)(in_ECX + 4);
  iVar7 = (int)param_1 - iVar3 >> 2;
  if (*(int *)(in_ECX + 0xc) - iVar2 >> 2 != 0) {
    if (iVar2 - (int)param_1 >> 2 == 0) {
      FUN_2008dea0(param_1,iVar2,param_1 + 1);
      FUN_200a9240(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1 >> 2),param_2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_2008dea0(iVar2 + -4,iVar2,iVar2);
      puVar6 = *(undefined4 **)(in_ECX + 8);
      puVar1 = puVar6;
      while (param_1 != puVar1 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar1[-2];
        puVar1 = puVar1 + -1;
      }
      puVar6 = param_1 + 1;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 4;
    return (void *)(*(int *)(in_ECX + 4) + iVar7 * 4);
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 2, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 2;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 4);
  pvVar8 = pvVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); puVar6 != param_1; puVar6 = puVar6 + 1) {
    FUN_200a9420(pvVar8,puVar6);
    pvVar8 = (void *)((int)pvVar8 + 4);
  }
  FUN_200a9420(pvVar8,param_2);
  FUN_2008dea0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar8 + 4);
  FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar4 + iVar2 * 4);
  iVar2 = FUN_2008c740();
  *(void **)(in_ECX + 4) = pvVar4;
  *(int *)(in_ECX + 8) = (int)pvVar4 + iVar2 * 4 + 4;
  return (void *)((int)pvVar4 + iVar7 * 4);
}

