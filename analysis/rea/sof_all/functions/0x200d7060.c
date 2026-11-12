// rea decompile_all
// name: FUN_200d7060
// address: 0x200d7060
// body: available
// range: 0x200d7060-0x200d711c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7060(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0xac);
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x104) = 0;
  *(undefined2 *)(in_ECX + 0x94) = 0;
  *(undefined2 *)(in_ECX + 0x96) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined1 *)(in_ECX + 0xb8) = 1;
  *(undefined4 *)(in_ECX + 0xc0) = 2;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined1 *)(in_ECX + 0xb9) = 0;
  *(undefined1 *)(in_ECX + 0xba) = 0;
  *(undefined1 *)(in_ECX + 0xbb) = 0;
  *(undefined1 *)(in_ECX + 0xbc) = 0;
  *(undefined1 *)(in_ECX + 99) = 1;
  *(undefined1 *)(in_ECX + 100) = 1;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  return;
}

