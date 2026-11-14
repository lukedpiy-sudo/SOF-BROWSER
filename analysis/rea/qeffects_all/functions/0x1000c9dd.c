// rea decompile_all
// name: __atof_l
// address: 0x1000c9dd
// body: available
// range: 0x1000c9dd-0x1000ca87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2010 Release */

double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  localeinfo_struct local_30;
  int local_28;
  char local_24;
  _flt local_20;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_30,_Locale);
  if (_String == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1000d7dd();
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  else {
    while( true ) {
      if ((int)(local_30.locinfo)->locale_name[3] < 2) {
        uVar2 = *(ushort *)(local_30.locinfo[1].lc_category[0].locale + (uint)(byte)*_String * 2) &
                8;
      }
      else {
        uVar2 = __isctype_l((uint)(byte)*_String,8,&local_30);
      }
      if (uVar2 == 0) break;
      _String = _String + 1;
    }
    __fltin2(&local_20,_String,&local_30);
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  fVar3 = (float10)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)fVar3;
}

