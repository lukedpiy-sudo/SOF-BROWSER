// rea decompile_all
// name: __CRT_INIT@12
// address: 0x1000cb50
// body: available
// range: 0x1000cb50-0x1000cc26 inclusive
// range: 0x1000cc3f-0x1000ccb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2010 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  _ptiddata _Ptd;
  code *pcVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  if (param_2 == 1) {
    iVar1 = __heap_init();
    if (iVar1 != 0) {
      iVar1 = __mtinit();
      if (iVar1 != 0) {
        __RTC_Initialize();
        DAT_1002abd8 = GetCommandLineA();
        DAT_10028394 = ___crtGetEnvironmentStringsA();
        iVar1 = __ioinit();
        if (-1 < iVar1) {
          iVar1 = __setargv();
          if (((-1 < iVar1) && (iVar1 = FUN_10012a42(), -1 < iVar1)) &&
             (iVar1 = __cinit(0), iVar1 == 0)) {
            DAT_10028390 = DAT_10028390 + 1;
            return 1;
          }
          __ioterm();
        }
        __mtterm();
      }
      __heap_term();
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_10028390) {
      DAT_10028390 = DAT_10028390 + -1;
      if (DAT_100286fc == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      FUN_1000cc29();
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    ___set_flsgetvalue();
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_10027d44;
      p_Var5 = _Ptd;
      pcVar2 = DecodePointer(DAT_100288ac);
      iVar1 = (*pcVar2)(uVar4,p_Var5);
      if (iVar1 != 0) {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_tid = DVar3;
        _Ptd->_thandle = 0xffffffff;
        return 1;
      }
      _free(_Ptd);
    }
  }
  return 0;
}

