// rea decompile_all
// name: ___crtMessageBoxW
// address: 0x100184b2
// body: available
// range: 0x100184b2-0x1001861d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtMessageBoxW
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_28 [4];
  LPCWSTR local_24;
  LPCWSTR local_20;
  PVOID local_1c;
  int local_18;
  undefined1 local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  local_24 = _LpText;
  local_20 = _LpCaption;
  local_1c = (PVOID)FUN_10011b6b();
  local_18 = 0;
  if (DAT_100290ec == (PVOID)0x0) {
    hModule = LoadLibraryW(L"USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxW"), pFVar1 == (FARPROC)0x0)) goto LAB_1001860f;
    DAT_100290ec = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_100290f0 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_100290f4 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_100290fc = EncodePointer(pFVar1);
    if (DAT_100290fc != (PVOID)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_100290f8 = EncodePointer(pFVar1);
    }
  }
  if ((DAT_100290f8 == local_1c) || (DAT_100290fc == local_1c)) {
LAB_100185be:
    if ((((DAT_100290f0 != local_1c) &&
         (pcVar2 = DecodePointer(DAT_100290f0), pcVar2 != (code *)0x0)) &&
        (local_18 = (*pcVar2)(), local_18 != 0)) &&
       ((DAT_100290f4 != local_1c && (pcVar2 = DecodePointer(DAT_100290f4), pcVar2 != (code *)0x0)))
       ) {
      local_18 = (*pcVar2)(local_18);
    }
  }
  else {
    pcVar2 = DecodePointer(DAT_100290f8);
    pcVar3 = DecodePointer(DAT_100290fc);
    if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) ||
       (((iVar4 = (*pcVar2)(), iVar4 != 0 &&
         (iVar4 = (*pcVar3)(iVar4,1,local_14,0xc,local_28), iVar4 != 0)) && ((local_c & 1) != 0))))
    goto LAB_100185be;
    _UType = _UType | 0x200000;
  }
  pcVar2 = DecodePointer(DAT_100290ec);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_18,local_24,local_20,_UType);
  }
LAB_1001860f:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

