// rea decompile_all
// name: FUN_2009fe10
// address: 0x2009fe10
// body: available
// range: 0x2009fe10-0x2009ff59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009fe10(int param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if (in_ECX != param_1) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    if (puVar1 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1;
    }
    puVar5 = *(undefined1 **)(in_ECX + 4);
    if (puVar5 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(in_ECX + 8) - (int)puVar5;
    }
    if (uVar6 <= uVar2) {
      puVar4 = *(undefined1 **)(param_1 + 8);
      for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
        return;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4));
      return;
    }
    if (puVar1 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1;
    }
    if (puVar5 == (undefined1 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(in_ECX + 0xc) - (int)puVar5;
    }
    if (uVar6 <= uVar2) {
      if (puVar5 == (undefined1 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 8) - (int)puVar5;
      }
      puVar4 = puVar1 + iVar3;
      for (; puVar1 != puVar4; puVar1 = puVar1 + 1) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = *(undefined1 **)(param_1 + 8);
      puVar5 = *(undefined1 **)(in_ECX + 8);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
        return;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4));
      return;
    }
    FUN_200f9f75(puVar5);
    if (*(int *)(param_1 + 4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    }
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
    puVar4 = operator_new(uVar6);
    *(undefined1 **)(in_ECX + 4) = puVar4;
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (puVar5 = *(undefined1 **)(param_1 + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined1 **)(in_ECX + 8) = puVar4;
    *(undefined1 **)(in_ECX + 0xc) = puVar4;
  }
  return;
}

