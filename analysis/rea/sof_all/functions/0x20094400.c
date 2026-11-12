// rea decompile_all
// name: FUN_20094400
// address: 0x20094400
// body: available
// range: 0x20094400-0x20094475 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20094400(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb8) != -1) {
    if (*(char *)(in_ECX + 0x130) == '\0') {
      (**(code **)(DAT_20403c04 + 0x24))(1,(undefined4 *)(in_ECX + 0xb8));
    }
    else {
      (**(code **)(DAT_20403c04 + 0x24))(0x10);
    }
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0xffffffff;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb0));
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb4));
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined1 *)(in_ECX + 0x131) = 0;
  return;
}

