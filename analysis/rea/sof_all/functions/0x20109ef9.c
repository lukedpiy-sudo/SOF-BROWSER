// rea decompile_all
// name: FUN_20109ef9
// address: 0x20109ef9
// body: available
// range: 0x20109ef9-0x20109f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20109ef9(void)

{
  LPCSTR lpMultiByteStr;
  int iVar1;
  LPWSTR lpWideCharStr;
  undefined4 *puVar2;
  
  lpMultiByteStr = (LPCSTR)*DAT_204083bc;
  puVar2 = DAT_204083bc;
  while( true ) {
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(1,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
    if (((iVar1 == 0) || (lpWideCharStr = _malloc(iVar1 * 2), lpWideCharStr == (LPWSTR)0x0)) ||
       (iVar1 = MultiByteToWideChar(1,0,(LPCSTR)*puVar2,-1,lpWideCharStr,iVar1), iVar1 == 0)) break;
    FUN_2010879b(lpWideCharStr,0);
    lpMultiByteStr = (LPCSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}

