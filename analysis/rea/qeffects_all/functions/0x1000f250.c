// rea decompile_all
// name: __stbuf
// address: 0x1000f250
// body: available
// range: 0x1000f250-0x1000f2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_1000f09b();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_1000f09b();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_10028708 = _DAT_10028708 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_1002870c + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_1000f2d9;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_1000f2d9:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}

