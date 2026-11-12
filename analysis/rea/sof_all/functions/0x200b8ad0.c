// rea decompile_all
// name: FUN_200b8ad0
// address: 0x200b8ad0
// body: available
// range: 0x200b8ad0-0x200b8dfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200b8ad0(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int in_ECX;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  int local_48;
  int *local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  FUN_20068e30(param_1);
  FUN_20068e30(piVar1,in_ECX + 4);
  FUN_20068e30(piVar1,&param_1);
  local_40 = param_1;
  if (*(int *)(in_ECX + 0x14) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x14) >> 2);
  }
  if (piVar3 < param_1) {
    piVar3 = param_1;
    if ((int)param_1 < 0) {
      piVar3 = (int *)0x0;
    }
    pvVar2 = operator_new((int)piVar3 * 4);
    iVar5 = *(int *)(in_ECX + 0x18);
    pvVar4 = pvVar2;
    for (iVar6 = *(int *)(in_ECX + 0x14); iVar6 != iVar5; iVar6 = iVar6 + 4) {
      FUN_200a9420(pvVar4,iVar6);
      pvVar4 = (void *)((int)pvVar4 + 4);
    }
    FUN_2008c730(*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x14));
    *(void **)(in_ECX + 0x1c) = (void *)((int)pvVar2 + (int)local_40 * 4);
    iVar6 = FUN_2008c740();
    *(void **)(in_ECX + 0x14) = pvVar2;
    *(void **)(in_ECX + 0x18) = (void *)((int)pvVar2 + iVar6 * 4);
  }
  local_4c = 0;
  if (0 < (int)param_1) {
    do {
      FUN_20068e30(piVar1,local_3c);
      FUN_200a8890(*(undefined4 *)(in_ECX + 0x18),1,local_3c);
      local_4c = local_4c + 1;
    } while (local_4c < (int)param_1);
  }
  FUN_20068e30(piVar1,in_ECX + 8);
  iVar6 = piVar1[1];
  FUN_200bb490(&local_40,1);
  *(int *)(in_ECX + 0x34) = *(int *)(iVar6 + 0x14) + (int)local_40;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  FUN_20068e30(piVar1,&param_1);
  local_40 = param_1;
  if (*(int *)(in_ECX + 0x24) == 0) {
    piVar3 = (int *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x24);
    piVar3 = (int *)(iVar6 / 0x38);
    iVar6 = -(iVar6 >> 0x1f);
  }
  if (piVar3 < param_1) {
    piVar3 = param_1;
    if ((int)param_1 < 0) {
      piVar3 = (int *)0x0;
    }
    pvVar4 = operator_new((int)piVar3 * 0x38);
    FUN_200b9da0(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28),pvVar4);
    FUN_2008c730(*(undefined4 *)(in_ECX + 0x24),*(undefined4 *)(in_ECX + 0x28));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0x24));
    *(void **)(in_ECX + 0x2c) = (void *)((int)pvVar4 + (int)local_40 * 0x38);
    if (*(int *)(in_ECX + 0x24) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24)) / 0x38;
    }
    *(void **)(in_ECX + 0x24) = pvVar4;
    iVar6 = iVar5 * 7;
    *(void **)(in_ECX + 0x28) = (void *)((int)pvVar4 + iVar5 * 0x38);
  }
  local_4c = 0;
  if (0 < (int)param_1) {
    local_48 = 0;
    do {
      local_4 = 0;
      local_38 = 0;
      local_34 = 0;
      local_10 = 0;
      local_8 = 0;
      FUN_200b9e60(*(undefined4 *)(in_ECX + 0x28),1,&local_38);
      iVar6 = *(int *)(in_ECX + 0x34);
      iVar7 = *(int *)(in_ECX + 0x24) + local_48;
      FUN_20068e30(piVar1,iVar7);
      FUN_20068e30(piVar1,iVar7 + 4);
      FUN_20068f80(piVar1,iVar7 + 8);
      FUN_20068f80(piVar1,iVar7 + 0x14);
      FUN_20068e90(piVar1,iVar7 + 0x20);
      FUN_20068e90(piVar1,iVar7 + 0x21);
      FUN_20068e90(piVar1,iVar7 + 0x22);
      local_40 = (int *)(iVar7 + 0x24);
      FUN_20068e30(piVar1,local_40);
      iVar5 = *local_40;
      local_40 = (int *)(iVar7 + 0x2c);
      *(int *)(iVar7 + 0x28) = iVar5 + iVar6;
      FUN_20068e30(piVar1,local_40);
      local_48 = local_48 + 0x38;
      *(int *)(iVar7 + 0x30) = *local_40 + iVar6;
      iVar6 = local_4c + 1;
      local_4c = iVar6;
    } while (iVar6 < (int)param_1);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

