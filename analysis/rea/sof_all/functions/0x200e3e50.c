// rea decompile_all
// name: FUN_200e3e50
// address: 0x200e3e50
// body: available
// range: 0x200e3e50-0x200e414c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e3e50(int param_1,uint param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = *(int *)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - iVar4) / 0x14)) {
    if (param_2 <= (uint)((iVar4 - param_1) / 0x14)) {
      if (param_2 != 0) {
        iVar2 = iVar4;
        for (iVar6 = iVar4 + param_2 * -0x14; iVar6 != iVar4; iVar6 = iVar6 + 0x14) {
          FUN_200e50e0(iVar2,iVar6);
          iVar2 = iVar2 + 0x14;
        }
        iVar4 = *(int *)(in_ECX + 8);
        iVar2 = *(int *)(in_ECX + 8) + param_2 * -0x14;
        while (param_1 != iVar2) {
          FUN_2000a3a0(iVar2 + -0x14,0,0xffffffff);
          *(undefined4 *)(iVar4 + -4) = *(undefined4 *)(iVar2 + -4);
          iVar4 = iVar4 + -0x14;
          iVar2 = iVar2 + -0x14;
        }
        iVar4 = param_2 * 0x14 + param_1;
        for (; param_1 != iVar4; param_1 = param_1 + 0x14) {
          FUN_2000a3a0(param_3,0,0xffffffff);
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
      }
      return;
    }
    for (iVar2 = param_1; iVar2 != iVar4; iVar2 = iVar2 + 0x14) {
      FUN_200e50e0(param_2 * 0x14 + iVar2,iVar2);
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar4 - param_1) / 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200e50e0(iVar4,param_3);
      iVar4 = iVar4 + 0x14;
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (; param_1 != iVar4; param_1 = param_1 + 0x14) {
      FUN_2000a3a0(param_3,0,0xffffffff);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar7 = (iVar4 - iVar2) / 0x14, uVar7 <= param_2)) {
    uVar7 = param_2;
  }
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (iVar4 - iVar2) / 0x14;
  }
  iVar4 = iVar4 + uVar7;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x14);
  pvVar5 = pvVar3;
  for (iVar2 = *(int *)(in_ECX + 4); uVar7 = param_2, pvVar1 = pvVar5, iVar2 != param_1;
      iVar2 = iVar2 + 0x14) {
    FUN_200e50e0(pvVar5,iVar2);
    pvVar5 = (void *)((int)pvVar5 + 0x14);
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    FUN_200e50e0(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x14);
  }
  iVar2 = *(int *)(in_ECX + 8);
  if (param_1 != iVar2) {
    iVar6 = param_2 * 0x14 - param_1;
    do {
      FUN_200e50e0((int)pvVar5 + param_1 + iVar6,param_1);
      param_1 = param_1 + 0x14;
    } while (param_1 != iVar2);
  }
  iVar2 = *(int *)(in_ECX + 8);
  for (iVar6 = *(int *)(in_ECX + 4); iVar6 != iVar2; iVar6 = iVar6 + 0x14) {
    FUN_2004fa40();
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x14);
  if (iVar2 != 0) {
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) =
         (void *)((int)pvVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0x14) * 0x14);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar3;
  *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + param_2 * 0x14);
  return;
}

