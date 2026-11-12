// rea decompile_all
// name: FUN_20068790
// address: 0x20068790
// body: available
// range: 0x20068790-0x20068a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20068790(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0xc)) {
    if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0xc)) {
      if (param_2 != 0) {
        puVar7 = puVar8;
        for (puVar9 = puVar8 + param_2 * -3; puVar9 != puVar8; puVar9 = puVar9 + 3) {
          FUN_20087660(puVar7,puVar9);
          puVar7 = puVar7 + 3;
        }
        puVar8 = *(undefined4 **)(in_ECX + 8);
        for (puVar7 = *(undefined4 **)(in_ECX + 8) + param_2 * -3; param_1 != puVar7;
            puVar7 = puVar7 + -3) {
          puVar8[-3] = puVar7[-3];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = puVar7[-1];
          puVar8 = puVar8 + -3;
        }
        puVar8 = param_1 + param_2 * 3;
        for (; param_1 != puVar8; param_1 = param_1 + 3) {
          *param_1 = *param_3;
          param_1[1] = param_3[1];
          param_1[2] = param_3[2];
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xc;
      }
      return;
    }
    for (puVar7 = param_1; puVar7 != puVar8; puVar7 = puVar7 + 3) {
      FUN_20087660(puVar7 + param_2 * 3,puVar7);
    }
    iVar5 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar5 - (int)param_1) / 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_20087660(iVar5,param_3);
      iVar5 = iVar5 + 0xc;
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar8; param_1 = param_1 + 3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xc;
    return;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0xc, uVar4 <= param_2)) {
    uVar4 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar8 - iVar5) / 0xc;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0xc);
  pvVar6 = pvVar3;
  for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, pvVar1 = pvVar6, puVar8 != param_1;
      puVar8 = puVar8 + 3) {
    FUN_20087660(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0xc);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_20087660(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0xc);
  }
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar8) {
    iVar2 = param_2 * 0xc - (int)param_1;
    do {
      FUN_20087660((int)pvVar6 + iVar2 + (int)param_1,param_1);
      param_1 = param_1 + 3;
    } while (param_1 != puVar8);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0xc);
  if (iVar2 != 0) {
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) =
         (void *)((int)pvVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0xc) * 0xc);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar3;
  *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + param_2 * 0xc);
  return;
}

