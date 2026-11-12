// rea decompile_all
// name: FUN_200db420
// address: 0x200db420
// body: available
// range: 0x200db420-0x200db6dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200db420(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined1 auStack_bc [56];
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 **ppuStack_70;
  undefined1 **ppuStack_6c;
  undefined1 *local_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined1 local_4c [8];
  int iStack_44;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f228;
  local_c = ExceptionList;
  ppuStack_6c = (undefined1 **)0x1;
  ppuStack_70 = (undefined1 **)&DAT_2011f220;
  uStack_74 = 0x200db44e;
  ExceptionList = &local_c;
  FUN_200c5de0();
  ppuStack_6c = &local_50;
  ppuStack_70 = &local_58;
  local_4 = 0;
  uStack_74 = 0x200db465;
  cVar1 = FUN_200cf570();
  if (cVar1 == '\0') {
    ppuStack_6c = (undefined1 **)0x1;
    local_4 = 0xffffffff;
    ppuStack_70 = (undefined1 **)0x200db47c;
    FUN_2000a5b0();
    ppuStack_6c = (undefined1 **)0x1;
    ppuStack_70 = (undefined1 **)0x200db487;
    FUN_2000a5b0();
    ppuStack_6c = (undefined1 **)0x1;
    ppuStack_70 = (undefined1 **)0x200db492;
    FUN_2000a5b0();
    ExceptionList = local_c;
    return;
  }
  iVar3 = *(int *)(in_ECX + 4);
  ppuStack_6c = (undefined1 **)0x200db4af;
  iVar2 = FUN_200c66d0();
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(in_ECX + 0x68);
  }
  iVar3 = ((iVar2 + *(int *)(iVar3 + 0x80)) - iVar5) - *(int *)(in_ECX + 0x10);
  if (*(int *)(in_ECX + 0x24) < iVar3) {
    iVar3 = *(int *)(in_ECX + 0x24);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  ppuStack_70 = (undefined1 **)0x200db4e9;
  ppuStack_6c = (undefined1 **)(in_ECX + 0x8c);
  iVar2 = (*DAT_20403640)();
  puVar8 = local_50;
  uStack_54 = iVar3 / iVar2;
  puStack_78 = *(undefined1 **)(in_ECX + 0x20);
  ppuStack_70 = (undefined1 **)(in_ECX + 0x9c);
  uStack_74 = *(undefined4 *)(in_ECX + 0x24);
  puStack_7c = local_50;
  puStack_80 = local_58;
  uStack_84 = 0x200db513;
  (*DAT_204035e4)();
  bVar9 = *(int *)(in_ECX + 0xa8) != 0;
  if (bVar9) {
    ppuStack_70 = *(undefined1 ***)(in_ECX + 0x48);
    uStack_74 = *(undefined4 *)(in_ECX + 0x44);
    ppuStack_6c = (undefined1 **)CONCAT31((int3)(uStack_54 >> 8),uStack_54 == 0);
    puStack_78 = puVar8;
    puStack_7c = local_58;
    local_50 = auStack_bc;
    FUN_200db6e0(local_4c);
    FUN_200db210();
    ppuStack_70 = (undefined1 **)0x200db559;
    ppuStack_6c = (undefined1 **)(in_ECX + 0x8c);
    iVar3 = (*DAT_20403640)();
    puVar8 = puVar8 + iVar3;
  }
  uVar7 = (uint)bVar9;
  for (puVar6 = (undefined1 *)0x0;
      (*(int *)(in_ECX + 0xf4) != 0 &&
      (puVar6 < (undefined1 *)(*(int *)(in_ECX + 0xf8) - *(int *)(in_ECX + 0xf4) >> 6)));
      puVar6 = puVar6 + 1) {
    ppuStack_70 = *(undefined1 ***)(in_ECX + 0x48);
    ppuStack_6c = (undefined1 **)CONCAT31((int3)(uStack_54 >> 8),uVar7 == uStack_54);
    uStack_74 = *(undefined4 *)(in_ECX + 0x44);
    puStack_7c = local_58;
    uStack_84 = 0x200db59f;
    puStack_80 = puVar6;
    puStack_78 = puVar8;
    uVar4 = FUN_200e3400();
    local_50 = auStack_bc;
    FUN_200db6e0(uVar4);
    FUN_200db210();
    ppuStack_6c = (undefined1 **)(in_ECX + 0x8c);
    ppuStack_70 = (undefined1 **)0x200db5c2;
    iVar3 = (*DAT_20403640)();
    puVar8 = puVar8 + iVar3;
    uVar7 = uVar7 + 1;
  }
  for (puVar6 = (undefined1 *)0x0;
      (*(int *)(in_ECX + 0xe4) != 0 &&
      (puVar6 < (undefined1 *)(*(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) >> 6)));
      puVar6 = puVar6 + 1) {
    ppuStack_70 = *(undefined1 ***)(in_ECX + 0x3c);
    ppuStack_6c = (undefined1 **)CONCAT31((int3)(uStack_54 >> 8),uVar7 == uStack_54);
    uStack_74 = *(undefined4 *)(in_ECX + 0x38);
    puStack_7c = local_58;
    uStack_84 = 0x200db607;
    puStack_80 = puVar6;
    puStack_78 = puVar8;
    uVar4 = FUN_200e3400();
    local_50 = auStack_bc;
    FUN_200db6e0(uVar4);
    FUN_200db210();
    ppuStack_6c = (undefined1 **)(in_ECX + 0x8c);
    ppuStack_70 = (undefined1 **)0x200db62a;
    iVar3 = (*DAT_20403640)();
    puVar8 = puVar8 + iVar3;
    uVar7 = uVar7 + 1;
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    ppuStack_70 = (undefined1 **)0x200db640;
    FUN_200c48f0();
  }
  if (iStack_18 != 0) {
    ppuStack_6c = (undefined1 **)(iStack_18 + -1);
    if (*(char *)(iStack_18 + -1) == '\0') {
      ppuStack_70 = (undefined1 **)0x200db65c;
      FUN_200f9f75();
    }
    else {
      *(char *)ppuStack_6c = *(char *)(iStack_18 + -1) + -1;
    }
  }
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (iStack_28 != 0) {
    ppuStack_6c = (undefined1 **)(iStack_28 + -1);
    if (*(char *)(iStack_28 + -1) == '\0') {
      ppuStack_70 = (undefined1 **)0x200db689;
      FUN_200f9f75();
    }
    else {
      *(char *)ppuStack_6c = *(char *)(iStack_28 + -1) + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_44 != 0) {
    ppuStack_6c = (undefined1 **)(iStack_44 + -1);
    if (*(char *)(iStack_44 + -1) != '\0') {
      *(char *)ppuStack_6c = *(char *)(iStack_44 + -1) + -1;
      ExceptionList = local_c;
      return;
    }
    ppuStack_70 = (undefined1 **)0x200db6c7;
    FUN_200f9f75();
  }
  ExceptionList = local_c;
  return;
}

