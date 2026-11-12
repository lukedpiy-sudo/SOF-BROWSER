// rea decompile_all
// name: FUN_20106b41
// address: 0x20106b41
// body: available
// range: 0x20106b41-0x20106bc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20106b41(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_204086d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_204086d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_204086d4 != (FARPROC)0x0) {
        DAT_204086d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_204086dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_20106b90;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_20106b90:
    if (DAT_204086d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_204086d8)();
      if ((iVar1 != 0) && (DAT_204086dc != (FARPROC)0x0)) {
        iVar1 = (*DAT_204086dc)(iVar1);
      }
    }
    iVar1 = (*DAT_204086d4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

