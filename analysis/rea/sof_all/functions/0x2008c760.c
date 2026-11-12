// rea decompile_all
// name: FUN_2008c760
// address: 0x2008c760
// body: available
// range: 0x2008c760-0x2008c95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2008c760(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *pvVar10;
  
  iVar7 = *(int *)(in_ECX + 4);
  iVar5 = (int)param_1 - iVar7;
  iVar3 = *(int *)(in_ECX + 8);
  iVar6 = *(int *)(in_ECX + 0xc) - iVar3;
  iVar1 = iVar6 >> 0x1f;
  if (iVar6 / 6 + iVar1 == iVar1) {
    if ((iVar7 == 0) || (uVar9 = (iVar3 - iVar7) / 6, uVar9 < 2)) {
      uVar9 = 1;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar3 - iVar7) / 6;
    }
    iVar7 = iVar7 + uVar9;
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 * 6);
    pvVar10 = pvVar4;
    for (puVar8 = *(undefined4 **)(in_ECX + 4); puVar8 != param_1;
        puVar8 = (undefined4 *)((int)puVar8 + 6)) {
      FUN_2008e4d0(pvVar10,puVar8);
      pvVar10 = (void *)((int)pvVar10 + 6);
    }
    FUN_2008e4d0(pvVar10,param_2);
    FUN_2008c980(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar10 + 6);
    FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar4 + iVar7 * 6);
    iVar7 = FUN_2008c960();
    *(void **)(in_ECX + 4) = pvVar4;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar4 + (iVar7 + 1) * 6);
  }
  else {
    iVar7 = iVar3 - (int)param_1 >> 0x1f;
    if ((iVar3 - (int)param_1) / 6 + iVar7 == iVar7) {
      FUN_2008c980(param_1,iVar3,(int)param_1 + 6);
      FUN_2008de60(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1) / 6,param_2);
      puVar8 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar8; param_1 = (undefined4 *)((int)param_1 + 6)) {
        *param_1 = *param_2;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
      }
    }
    else {
      FUN_2008c980(iVar3 + -6,iVar3,iVar3);
      puVar8 = *(undefined4 **)(in_ECX + 8);
      puVar2 = (undefined4 *)((int)*(undefined4 **)(in_ECX + 8) + -6);
      while (param_1 != puVar2) {
        *(undefined4 *)((int)puVar8 + -6) = *(undefined4 *)((int)puVar2 + -6);
        *(undefined2 *)((int)puVar8 + -2) = *(undefined2 *)((int)puVar2 + -2);
        puVar8 = (undefined4 *)((int)puVar8 + -6);
        puVar2 = (undefined4 *)((int)puVar2 + -6);
      }
      puVar8 = (undefined4 *)((int)param_1 + 6);
      for (; param_1 != puVar8; param_1 = (undefined4 *)((int)param_1 + 6)) {
        *param_1 = *param_2;
        *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 6;
  }
  return *(int *)(in_ECX + 4) + (iVar5 / 6) * 6;
}

