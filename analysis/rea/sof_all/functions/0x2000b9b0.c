// rea decompile_all
// name: FUN_2000b9b0
// address: 0x2000b9b0
// body: available
// range: 0x2000b9b0-0x2000b9f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000b9b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  (*DAT_20390d4c)();
  FUN_20030a40();
  FUN_2008edb0();
  FUN_20057f40(1);
  puVar2 = &DAT_201e7588;
  for (iVar1 = 0xf6b0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_2015eef8;
  for (iVar1 = 0x18c00; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_2001e730(&DAT_201c2400);
  FUN_20012db0(0);
  return;
}

