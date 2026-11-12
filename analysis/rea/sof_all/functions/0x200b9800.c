// rea decompile_all
// name: FUN_200b9800
// address: 0x200b9800
// body: available
// range: 0x200b9800-0x200b9a14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200b9800(undefined4 *param_1,undefined4 *param_2)

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
  if (iVar6 / 0xc + iVar1 == iVar1) {
    if ((iVar7 == 0) || (uVar9 = (iVar3 - iVar7) / 0xc, uVar9 < 2)) {
      uVar9 = 1;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar3 - iVar7) / 0xc;
    }
    iVar7 = iVar7 + uVar9;
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 * 0xc);
    pvVar10 = pvVar4;
    for (puVar8 = *(undefined4 **)(in_ECX + 4); puVar8 != param_1; puVar8 = puVar8 + 3) {
      FUN_20087660(pvVar10,puVar8);
      pvVar10 = (void *)((int)pvVar10 + 0xc);
    }
    FUN_20087660(pvVar10,param_2);
    FUN_200b9de0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar10 + 0xc);
    FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar4 + iVar7 * 0xc);
    iVar7 = FUN_200b93c0();
    *(void **)(in_ECX + 4) = pvVar4;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar4 + (iVar7 + 1) * 0xc);
  }
  else {
    iVar7 = iVar3 - (int)param_1 >> 0x1f;
    if ((iVar3 - (int)param_1) / 0xc + iVar7 == iVar7) {
      FUN_200b9de0(param_1,iVar3,param_1 + 3);
      FUN_200b9e20(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1) / 0xc,param_2);
      puVar8 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar8; param_1 = param_1 + 3) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
      }
    }
    else {
      FUN_200b9de0(iVar3 + -0xc,iVar3,iVar3);
      puVar8 = *(undefined4 **)(in_ECX + 8);
      puVar2 = *(undefined4 **)(in_ECX + 8) + -3;
      while (param_1 != puVar2) {
        puVar8[-3] = puVar2[-3];
        puVar8[-2] = puVar2[-2];
        puVar8[-1] = puVar2[-1];
        puVar8 = puVar8 + -3;
        puVar2 = puVar2 + -3;
      }
      puVar8 = param_1 + 3;
      for (; param_1 != puVar8; param_1 = param_1 + 3) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0xc;
  }
  return *(int *)(in_ECX + 4) + (iVar5 / 0xc) * 0xc;
}

