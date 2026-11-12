// rea decompile_all
// name: FUN_2008ce10
// address: 0x2008ce10
// body: available
// range: 0x2008ce10-0x2008d0a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008ce10(int param_1,uint param_2,undefined4 param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *pvVar7;
  
  iVar5 = *(int *)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - iVar5 >> 4)) {
    if (param_2 <= (uint)(iVar5 - param_1 >> 4)) {
      if (param_2 != 0) {
        iVar3 = iVar5;
        for (iVar6 = iVar5 + param_2 * -0x10; iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
          FUN_200279a0(iVar3,iVar6);
          iVar3 = iVar3 + 0x10;
        }
        iVar5 = *(int *)(in_ECX + 8) + param_2 * -0x10;
        while (param_1 != iVar5) {
          iVar5 = iVar5 + -0x10;
          FUN_2000a3a0(iVar5,0,0xffffffff);
        }
        iVar5 = param_1 + param_2 * 0x10;
        for (; param_1 != iVar5; param_1 = param_1 + 0x10) {
          FUN_2000a3a0(param_3,0,0xffffffff);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
      }
      return;
    }
    for (iVar3 = param_1; iVar3 != iVar5; iVar3 = iVar3 + 0x10) {
      FUN_200279a0(param_2 * 0x10 + iVar3,iVar3);
    }
    iVar5 = *(int *)(in_ECX + 8);
    for (iVar3 = param_2 - (iVar5 - param_1 >> 4); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_200279a0(iVar5,param_3);
      iVar5 = iVar5 + 0x10;
    }
    iVar5 = *(int *)(in_ECX + 8);
    for (; param_1 != iVar5; param_1 = param_1 + 0x10) {
      FUN_2000a3a0(param_3,0,0xffffffff);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x10;
    return;
  }
  iVar3 = *(int *)(in_ECX + 4);
  if ((iVar3 == 0) || (uVar2 = iVar5 - iVar3 >> 4, uVar2 <= param_2)) {
    uVar2 = param_2;
  }
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 - iVar3 >> 4;
  }
  iVar5 = uVar2 + iVar5;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 4);
  pvVar7 = pvVar4;
  for (iVar3 = *(int *)(in_ECX + 4); uVar2 = param_2, pvVar1 = pvVar7, iVar3 != param_1;
      iVar3 = iVar3 + 0x10) {
    FUN_200279a0(pvVar7,iVar3);
    pvVar7 = (void *)((int)pvVar7 + 0x10);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_200279a0(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x10);
  }
  iVar3 = *(int *)(in_ECX + 8);
  if (param_1 != iVar3) {
    iVar6 = param_2 * 0x10 - param_1;
    do {
      FUN_200279a0((int)pvVar7 + param_1 + iVar6,param_1);
      param_1 = param_1 + 0x10;
    } while (param_1 != iVar3);
  }
  iVar3 = *(int *)(in_ECX + 8);
  for (iVar6 = *(int *)(in_ECX + 4); iVar6 != iVar3; iVar6 = iVar6 + 0x10) {
    FUN_2000a5b0(1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar3 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)(iVar5 * 0x10 + (int)pvVar4);
  if (iVar3 != 0) {
    *(void **)(in_ECX + 4) = pvVar4;
    *(void **)(in_ECX + 8) =
         (void *)(((*(int *)(in_ECX + 8) - iVar3 >> 4) + param_2) * 0x10 + (int)pvVar4);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar4;
  *(void **)(in_ECX + 8) = (void *)(param_2 * 0x10 + (int)pvVar4);
  return;
}

