// rea decompile_all
// name: FUN_2000a930
// address: 0x2000a930
// body: available
// range: 0x2000a930-0x2000a9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a930(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) || (*(char *)(*(int *)(in_ECX + 4) + -1) == '\0'))
  goto LAB_2000a996;
  uVar1 = *(uint *)(in_ECX + 8);
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
      goto LAB_2000a996;
    }
    if (uVar1 <= *(uint *)(in_ECX + 0xc)) goto LAB_2000a996;
  }
  else if (uVar1 == 0) {
    puVar2[-1] = puVar2[-1] + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    goto LAB_2000a996;
  }
  FUN_2000a840(uVar1);
LAB_2000a996:
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 4) + -1) = 0;
  }
  return;
}

