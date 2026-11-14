// rea decompile_all
// name: __mtinit
// address: 0x10011ed2
// body: available
// range: 0x10011ed2-0x1001204c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_100288a4 = GetProcAddress(hModule,"FlsAlloc");
  DAT_100288a8 = GetProcAddress(hModule,"FlsGetValue");
  DAT_100288ac = GetProcAddress(hModule,"FlsSetValue");
  DAT_100288b0 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_100288a4 == (FARPROC)0x0) || (DAT_100288a8 == (FARPROC)0x0)) ||
      (DAT_100288ac == (FARPROC)0x0)) || (DAT_100288b0 == (FARPROC)0x0)) {
    DAT_100288a8 = TlsGetValue_exref;
    DAT_100288a4 = (FARPROC)&LAB_10011b74;
    DAT_100288ac = TlsSetValue_exref;
    DAT_100288b0 = TlsFree_exref;
  }
  DAT_10027d48 = TlsAlloc();
  if ((DAT_10027d48 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10027d48,DAT_100288a8), BVar1 != 0))
  {
    __init_pointers();
    DAT_100288a4 = EncodePointer(DAT_100288a4);
    DAT_100288a8 = EncodePointer(DAT_100288a8);
    DAT_100288ac = EncodePointer(DAT_100288ac);
    DAT_100288b0 = EncodePointer(DAT_100288b0);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = DecodePointer(DAT_100288a4);
      DAT_10027d44 = (*pcVar3)(pcVar5);
      if ((DAT_10027d44 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_10027d44;
        p_Var6 = _Ptd;
        pcVar3 = DecodePointer(DAT_100288ac);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

