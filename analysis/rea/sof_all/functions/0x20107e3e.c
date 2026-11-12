// rea decompile_all
// name: FUN_20107e3e
// address: 0x20107e3e
// body: available
// range: 0x20107e3e-0x20107ed1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20107e3e(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  LPWSTR lpWideCharStr;
  
  if (DAT_20409ba4 != 0) {
    sVar1 = _strlen(param_1);
    pvVar2 = _malloc(sVar1 + 1);
    if (pvVar2 != (void *)0x0) {
      FUN_20101cf0(pvVar2,param_1);
      iVar3 = FUN_20105ad6(pvVar2,1);
      if ((iVar3 == 0) &&
         ((DAT_204083c4 == 0 ||
          ((((iVar3 = MultiByteToWideChar(1,0,param_1,-1,(LPWSTR)0x0,0), iVar3 != 0 &&
             (lpWideCharStr = _malloc(iVar3 * 2), lpWideCharStr != (LPWSTR)0x0)) &&
            (iVar3 = MultiByteToWideChar(1,0,param_1,-1,lpWideCharStr,iVar3), iVar3 != 0)) &&
           (iVar3 = FUN_2010879b(lpWideCharStr,0), iVar3 == 0)))))) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}

