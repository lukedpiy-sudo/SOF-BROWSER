// rea decompile_all
// name: FUN_2009e740
// address: 0x2009e740
// body: available
// range: 0x2009e740-0x2009e997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009e740(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  char *in_ECX;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 local_15;
  void *local_14;
  char *local_10;
  uint local_c;
  void *local_8;
  uint local_4;
  
  local_10 = in_ECX;
  FUN_20068ef0(param_1);
  if (*in_ECX == '\0') {
    uVar3 = FUN_20068dc0(param_1);
    if (*(int *)(in_ECX + 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8);
    }
    pcVar8 = in_ECX;
    if (uVar6 < uVar3) {
      uVar6 = uVar3;
      if ((int)uVar3 < 0) {
        uVar6 = 0;
      }
      pvVar4 = operator_new(uVar6);
      uVar6 = *(uint *)(in_ECX + 8);
      local_c = *(uint *)(in_ECX + 0xc);
      local_14 = pvVar4;
      if (uVar6 != local_c) {
        do {
          FUN_200a0430(pvVar4,uVar6);
          pvVar4 = (void *)((int)pvVar4 + 1);
          uVar6 = uVar6 + 1;
        } while (uVar6 != local_c);
      }
      FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
      *(uint *)(in_ECX + 0x10) = (int)local_14 + uVar3;
      if (*(int *)(in_ECX + 8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8);
      }
      *(int *)(in_ECX + 0xc) = iVar7 + (int)local_14;
      *(void **)(in_ECX + 8) = local_14;
      pcVar8 = local_10;
    }
    iVar7 = *(int *)(in_ECX + 0xc);
    puVar10 = *(undefined1 **)(pcVar8 + 8);
    local_15 = 0;
    if ((uint)(*(int *)(in_ECX + 0x10) - iVar7) < uVar3) {
      iVar1 = *(int *)(in_ECX + 8);
      if ((iVar1 == 0) || (local_4 = iVar7 - iVar1, (uint)(iVar7 - iVar1) <= uVar3)) {
        local_4 = uVar3;
      }
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 - iVar1;
      }
      local_4 = iVar7 + local_4;
      uVar6 = local_4;
      if ((int)local_4 < 0) {
        uVar6 = 0;
      }
      local_14 = operator_new(uVar6);
      local_8 = local_14;
      for (puVar9 = *(undefined1 **)(in_ECX + 8); uVar2 = uVar3, pvVar4 = local_14, uVar6 = local_c,
          puVar9 != puVar10; puVar9 = puVar9 + 1) {
        FUN_200a0430(local_14,puVar9);
        local_14 = (void *)((int)local_14 + 1);
      }
      while (local_c = uVar2, local_c != 0) {
        FUN_200a0430(pvVar4,&local_15);
        pvVar4 = (void *)((int)pvVar4 + 1);
        uVar6 = local_c - 1;
        uVar2 = local_c - 1;
      }
      local_c = uVar6;
      FUN_200823d0(puVar10,*(undefined4 *)(in_ECX + 0xc),(int)local_14 + uVar3);
      FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
      *(uint *)(in_ECX + 0x10) = (int)local_8 + local_4;
      iVar7 = *(int *)(in_ECX + 8);
      pcVar8 = local_10;
      if (iVar7 == 0) {
        *(void **)(in_ECX + 8) = local_8;
        *(uint *)(in_ECX + 0xc) = (int)local_8 + uVar3;
      }
      else {
        *(void **)(in_ECX + 8) = local_8;
        *(uint *)(in_ECX + 0xc) = (int)local_8 + uVar3 + (*(int *)(in_ECX + 0xc) - iVar7);
      }
    }
    else if ((uint)(iVar7 - (int)puVar10) < uVar3) {
      FUN_200823d0(puVar10,iVar7,puVar10 + uVar3);
      FUN_20082400(*(int *)(in_ECX + 0xc),puVar10 + (uVar3 - *(int *)(in_ECX + 0xc)),&local_15);
      puVar9 = *(undefined1 **)(in_ECX + 0xc);
      for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
        *puVar10 = local_15;
      }
      *(uint *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + uVar3;
    }
    else if (uVar3 != 0) {
      FUN_200823d0(iVar7 - uVar3,iVar7,iVar7);
      puVar9 = *(undefined1 **)(in_ECX + 0xc);
      for (puVar5 = puVar9 + -uVar3; puVar10 != puVar5; puVar5 = puVar5 + -1) {
        puVar9 = puVar9 + -1;
        *puVar9 = puVar5[-1];
      }
      puVar9 = puVar10 + uVar3;
      for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
        *puVar10 = local_15;
      }
      *(uint *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + uVar3;
      pcVar8 = local_10;
    }
    FUN_20069200(param_1,*(undefined4 *)(pcVar8 + 8),uVar3);
    return 1;
  }
  FUN_20069200(param_1,in_ECX + 2,1);
  return 1;
}

