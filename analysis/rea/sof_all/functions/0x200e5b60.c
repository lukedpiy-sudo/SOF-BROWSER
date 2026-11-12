// rea decompile_all
// name: FUN_200e5b60
// address: 0x200e5b60
// body: available
// range: 0x200e5b60-0x200e5bf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200e5b60(undefined4 param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  
  switch(param_1) {
  case 0:
    puVar1 = &DAT_201116cc;
    if (*(undefined1 **)(in_ECX + 0x18) != (undefined1 *)0x0) {
      return *(undefined1 **)(in_ECX + 0x18);
    }
    break;
  case 1:
    puVar1 = &DAT_201116cc;
    if (*(undefined1 **)(in_ECX + 0x28) != (undefined1 *)0x0) {
      return *(undefined1 **)(in_ECX + 0x28);
    }
    break;
  case 2:
    puVar1 = &DAT_201116cc;
    if (*(undefined1 **)(in_ECX + 0x38) != (undefined1 *)0x0) {
      return *(undefined1 **)(in_ECX + 0x38);
    }
    break;
  case 3:
    puVar1 = &DAT_201116cc;
    if (*(undefined1 **)(in_ECX + 0x50) != (undefined1 *)0x0) {
      return *(undefined1 **)(in_ECX + 0x50);
    }
    break;
  case 4:
    puVar1 = &DAT_201116cc;
    if (*(undefined1 **)(in_ECX + 100) != (undefined1 *)0x0) {
      return *(undefined1 **)(in_ECX + 100);
    }
    break;
  case 5:
    if ((*(byte *)(in_ECX + 0x5c) & 0x20) == 0) {
      puVar1 = (undefined1 *)FUN_20058110(0xd088);
      return puVar1;
    }
    puVar1 = (undefined1 *)FUN_20058110(0xd087);
    return puVar1;
  default:
    puVar1 = &DAT_2015ee44;
  }
  return puVar1;
}

