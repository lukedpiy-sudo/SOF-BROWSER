// rea decompile_all
// name: FUN_200e5730
// address: 0x200e5730
// body: available
// range: 0x200e5730-0x200e58ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e5730(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (in_ECX != param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
    }
    puVar5 = *(undefined4 **)(in_ECX + 4);
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_ECX + 8) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      puVar2 = *(undefined4 **)(param_1 + 8);
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
        return;
      }
      *(int *)(in_ECX + 8) =
           *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
      return;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 2;
    }
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_ECX + 0xc) - (int)puVar5 >> 2;
    }
    if (uVar6 <= uVar3) {
      if (puVar5 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX + 8) - (int)puVar5 >> 2;
      }
      puVar2 = puVar1 + iVar4;
      for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = *(undefined4 **)(param_1 + 8);
      puVar5 = *(undefined4 **)(in_ECX + 8);
      for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
        return;
      }
      *(int *)(in_ECX + 8) =
           *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
      return;
    }
    FUN_200f9f75(puVar5);
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 4);
    *(undefined4 **)(in_ECX + 4) = puVar2;
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar2;
    *(undefined4 **)(in_ECX + 8) = puVar2;
  }
  return;
}

