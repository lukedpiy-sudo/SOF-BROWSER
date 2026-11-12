// rea decompile_all
// name: FUN_200cbde0
// address: 0x200cbde0
// body: available
// range: 0x200cbde0-0x200cbe24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_200cbde0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 4) = *puVar1;
    FUN_200c9b10();
    FUN_200f9f75(puVar1);
    (*DAT_20390d4c)();
    if (*(int *)(in_ECX + 4) != 0) {
      FUN_200ca110();
    }
  }
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
  return *(int *)(in_ECX + 4) != 0;
}

