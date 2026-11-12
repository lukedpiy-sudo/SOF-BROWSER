// rea decompile_all
// name: FUN_200a01d0
// address: 0x200a01d0
// body: available
// range: 0x200a01d0-0x200a03f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200a01d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  if (in_ECX != param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (*(int *)(param_1 + 8) - (int)puVar1) / 0x44;
    }
    puVar2 = *(undefined4 **)(in_ECX + 4);
    if (puVar2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(int *)(in_ECX + 8) - (int)puVar2) / 0x44;
    }
    if (uVar6 < uVar8) {
      if (puVar1 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (*(int *)(param_1 + 8) - (int)puVar1) / 0x44;
      }
      if (puVar2 == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - (int)puVar2) / 0x44;
      }
      if (uVar8 <= uVar6) {
        if (puVar2 == (undefined4 *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(in_ECX + 8) - (int)puVar2) / 0x44;
        }
        puVar10 = puVar1 + iVar5 * 0x11;
        while (puVar1 != puVar10) {
          puVar3 = puVar1 + 0x11;
          puVar7 = puVar2 + 0x11;
          puVar9 = puVar1;
          puVar12 = puVar2;
          for (iVar5 = 0x11; puVar1 = puVar3, puVar2 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        puVar1 = *(undefined4 **)(param_1 + 8);
        iVar5 = *(int *)(in_ECX + 8);
        for (; puVar10 != puVar1; puVar10 = puVar10 + 0x11) {
          FUN_20093840(iVar5,puVar10);
          iVar5 = iVar5 + 0x44;
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + iVar5 * 0x44;
        return in_ECX;
      }
      FUN_200f9f75(puVar2);
      if (*(int *)(param_1 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar4 = operator_new(iVar5 * 0x44);
      *(void **)(in_ECX + 4) = pvVar4;
      iVar5 = *(int *)(param_1 + 8);
      for (iVar11 = *(int *)(param_1 + 4); iVar11 != iVar5; iVar11 = iVar11 + 0x44) {
        FUN_20093840(pvVar4,iVar11);
        pvVar4 = (void *)((int)pvVar4 + 0x44);
      }
      *(void **)(in_ECX + 8) = pvVar4;
      *(void **)(in_ECX + 0xc) = pvVar4;
      return in_ECX;
    }
    puVar10 = *(undefined4 **)(param_1 + 8);
    while (puVar1 != puVar10) {
      puVar3 = puVar1 + 0x11;
      puVar7 = puVar2 + 0x11;
      puVar9 = puVar1;
      puVar12 = puVar2;
      for (iVar5 = 0x11; puVar1 = puVar3, puVar2 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + iVar5 * 0x44;
  }
  return in_ECX;
}

