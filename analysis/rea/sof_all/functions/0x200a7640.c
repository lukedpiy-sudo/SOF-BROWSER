// rea decompile_all
// name: FUN_200a7640
// address: 0x200a7640
// body: available
// range: 0x200a7640-0x200a7708 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a7640(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    if (*(int *)(in_ECX + 0xc4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 2;
    }
    *(int *)(in_ECX + 0x4c) = iVar1;
    if (*(int *)(in_ECX + 0x84) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x84) >> 2;
    }
    puVar2 = operator_new((iVar1 + 1) * iVar3 * 8);
    *(undefined4 **)(in_ECX + 0x54) = puVar2;
    if (*(int *)(in_ECX + 0x84) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x88) - *(int *)(in_ECX + 0x84) >> 2;
    }
    for (iVar1 = ((*(int *)(in_ECX + 0x4c) + 1) * iVar1 & 0x1fffffffU) << 1; iVar1 != 0;
        iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    puVar2 = operator_new(*(int *)(in_ECX + 0x4c) << 2);
    *(undefined4 **)(in_ECX + 0x50) = puVar2;
    for (uVar4 = *(uint *)(in_ECX + 0x4c) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 1;
  return;
}

