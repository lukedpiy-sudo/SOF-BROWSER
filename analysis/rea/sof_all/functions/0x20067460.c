// rea decompile_all
// name: FUN_20067460
// address: 0x20067460
// body: available
// range: 0x20067460-0x200674a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20067460(void)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_20403664 != '\0') {
    (*DAT_20403578)();
    BVar1 = FreeLibrary(DAT_20403560);
    if (BVar1 == 0) {
      Com_Error(0,s_Reflib_FreeLibrary_failed_2013ac5c);
    }
    puVar3 = &DAT_20403570;
    for (iVar2 = 0x37; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_20403560 = (HMODULE)0x0;
    DAT_20403664 = '\0';
  }
  return;
}

