// rea decompile_all
// name: FUN_20065e60
// address: 0x20065e60
// body: available
// range: 0x20065e60-0x20065ec0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_20065e60(void)

{
  char cVar1;
  BOOL BVar2;
  HANDLE hMem;
  char *pcVar3;
  SIZE_T SVar4;
  int iVar5;
  void *pvVar6;
  
  pvVar6 = (void *)0x0;
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 != 0) {
    hMem = GetClipboardData(1);
    if (hMem != (HANDLE)0x0) {
      pcVar3 = GlobalLock(hMem);
      if (pcVar3 != (char *)0x0) {
        SVar4 = GlobalSize(hMem);
        pvVar6 = _malloc(SVar4 + 1);
        iVar5 = (int)pvVar6 - (int)pcVar3;
        do {
          cVar1 = *pcVar3;
          pcVar3[iVar5] = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        GlobalUnlock(hMem);
      }
    }
    CloseClipboard();
  }
  return pvVar6;
}

