// rea decompile_all
// name: FUN_20027e40
// address: 0x20027e40
// body: available
// range: 0x20027e40-0x20027f1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20027e40(uint param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 8) < param_1) {
    FUN_201077fc();
  }
  uVar2 = *(int *)(in_ECX + 8) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + -1) != '\0')) {
    FUN_2000a6c0(*(int *)(in_ECX + 8),0);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0;
  }
  iVar3 = *(int *)(in_ECX + 4) + param_1;
  FUN_200fa360(iVar3,iVar3 + param_2,(*(int *)(in_ECX + 8) - param_1) - param_2);
  param_2 = *(int *)(in_ECX + 8) - param_2;
  if (0xfffffffd < param_2) {
    FUN_201075d0();
  }
  if (param_2 < *(uint *)(in_ECX + 8)) {
    *(uint *)(in_ECX + 8) = param_2;
  }
  puVar1 = *(undefined1 **)(in_ECX + 4);
  if ((puVar1 == (undefined1 *)0x0) || (puVar1[-1] == '\0')) {
    if (param_2 == 0) {
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      *puVar1 = 0;
      return;
    }
    if (param_2 <= *(uint *)(in_ECX + 0xc)) goto LAB_20027f0b;
  }
  else if (param_2 == 0) {
    puVar1[-1] = puVar1[-1] + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return;
  }
  FUN_2000a840(param_2);
LAB_20027f0b:
  *(uint *)(in_ECX + 8) = param_2;
  *(undefined1 *)(param_2 + *(int *)(in_ECX + 4)) = 0;
  return;
}

