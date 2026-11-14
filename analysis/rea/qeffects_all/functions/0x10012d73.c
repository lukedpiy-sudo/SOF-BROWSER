// rea decompile_all
// name: ___crtGetEnvironmentStringsA
// address: 0x10012d73
// body: available
// range: 0x10012d73-0x10012e09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2010 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  WCHAR WVar1;
  LPWCH lpWideCharStr;
  WCHAR *pWVar2;
  int iVar4;
  size_t _Size;
  LPSTR local_8;
  WCHAR *pWVar3;
  
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr == (LPWCH)0x0) {
    local_8 = (LPSTR)0x0;
  }
  else {
    WVar1 = *lpWideCharStr;
    pWVar2 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar3 = pWVar2;
        pWVar2 = pWVar3 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar3 + 2;
      WVar1 = *pWVar2;
    }
    iVar4 = ((int)pWVar2 - (int)lpWideCharStr >> 1) + 1;
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Size == 0) || (local_8 = __malloc_crt(_Size), local_8 == (LPSTR)0x0)) {
      FreeEnvironmentStringsW(lpWideCharStr);
      local_8 = (LPSTR)0x0;
    }
    else {
      iVar4 = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,local_8,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar4 == 0) {
        _free(local_8);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
    }
  }
  return local_8;
}

