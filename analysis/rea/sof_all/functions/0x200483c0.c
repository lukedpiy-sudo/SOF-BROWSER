// rea decompile_all
// name: FUN_200483c0
// address: 0x200483c0
// body: available
// range: 0x200483c0-0x20048450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200483c0(uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 8);
  if ((uVar1 < param_1) || (*(int *)(in_ECX + 4) == 0)) {
    return &DAT_201116cc;
  }
  if (*(char *)(*(int *)(in_ECX + 4) + -1) == '\0') goto LAB_2004842f;
  if (0xfffffffd < uVar1) {
    FUN_201075d0();
  }
  if (uVar1 < *(uint *)(in_ECX + 8)) {
    *(uint *)(in_ECX + 8) = uVar1;
  }
  puVar2 = *(undefined1 **)(in_ECX + 4);
  if ((puVar2 == (undefined1 *)0x0) || (puVar2[-1] == '\0')) {
    if (uVar1 == 0) {
      if (puVar2 != (undefined1 *)0x0) {
        *(undefined4 *)(in_ECX + 8) = 0;
        *puVar2 = 0;
      }
      goto LAB_2004842f;
    }
    if (uVar1 <= *(uint *)(in_ECX + 0xc)) goto LAB_2004842f;
  }
  else if (uVar1 == 0) {
    puVar2[-1] = puVar2[-1] + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    goto LAB_2004842f;
  }
  FUN_2000a840(uVar1);
LAB_2004842f:
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0;
  }
  return (undefined1 *)(*(int *)(in_ECX + 4) + param_1);
}

