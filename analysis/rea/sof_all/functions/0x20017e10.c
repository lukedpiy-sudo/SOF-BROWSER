// rea decompile_all
// name: FUN_20017e10
// address: 0x20017e10
// body: available
// range: 0x20017e10-0x20017e44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20017e10(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_2023f2d4 = 0;
  piVar1 = &DAT_2011f93c;
  iVar2 = 0x16;
  do {
    if (*piVar1 != 0) {
      Z_Free(*piVar1);
      *piVar1 = 0;
      *(undefined1 *)(piVar1 + 9) = 0;
    }
    piVar1 = piVar1 + 0xb;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

