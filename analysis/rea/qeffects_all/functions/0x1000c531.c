// rea decompile_all
// name: __ctime64_s
// address: 0x1000c531
// body: available
// range: 0x1000c531-0x1000c5c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ctime64_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __ctime64_s(char *_Buf,size_t _SizeInBytes,__time64_t *_Time)

{
  int iVar1;
  int *piVar2;
  errno_t eVar3;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  if (((_Buf == (char *)0x0) || (_SizeInBytes == 0)) || (*_Buf = '\0', _Time == (__time64_t *)0x0))
  {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1000d7dd();
  }
  else {
    iVar1 = *(int *)((int)_Time + 4);
    if (((iVar1 < 1) && (iVar1 < 0)) ||
       ((6 < iVar1 && ((7 < iVar1 || (0x93406fff < (uint)*_Time)))))) {
      piVar2 = __errno();
      *piVar2 = 0x16;
    }
    else {
      eVar3 = FUN_1001094b(&local_2c,(uint *)_Time);
      if (eVar3 == 0) {
        _asctime_s(_Buf,_SizeInBytes,&local_2c);
      }
    }
  }
  eVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return eVar3;
}

