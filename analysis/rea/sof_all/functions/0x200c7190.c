// rea decompile_all
// name: FUN_200c7190
// address: 0x200c7190
// body: available
// range: 0x200c7190-0x200c71d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c7190(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *puVar2;
  
  if ((*(int *)(in_ECX + 8) == 0) || (*(float *)(*(int *)(in_ECX + 8) + 0x18) == 0.0)) {
    puVar2 = *(undefined1 **)(in_ECX + 0x10);
  }
  else {
    puVar2 = *(undefined1 **)(in_ECX + 0x20);
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_201116cc;
  }
  uVar1 = FUN_20055450(&DAT_2011d990,puVar2,0);
  FUN_200c79c0(uVar1);
  return;
}

