// rea decompile_all
// name: _fputs
// address: 0x1000c02b
// body: available
// range: 0x1000c02b-0x1000c125 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fputs
   
   Library: Visual Studio 2010 Release */

int __cdecl _fputs(char *_Str,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  size_t _Count;
  int _Flag;
  size_t sVar3;
  undefined *puVar4;
  
  if ((_Str != (char *)0x0) && (_File != (FILE *)0x0)) {
    if ((_File->_flag & 0x40) != 0) {
LAB_1000c0ce:
      _Count = _strlen(_Str);
      __lock_file(_File);
      _Flag = __stbuf(_File);
      sVar3 = __fwrite_nolock(_Str,1,_Count,_File);
      __ftbuf(_Flag,_File);
      FUN_1000c129();
      return (sVar3 == _Count) - 1;
    }
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_10027450;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_10029aa0)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &DAT_10027450;
      }
      else {
        puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_10029aa0)[(int)uVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_1000c0ce;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_1000d7dd();
  return -1;
}

