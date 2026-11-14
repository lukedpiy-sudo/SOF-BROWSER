// rea decompile_all
// name: _asctime_s
// address: 0x1001077c
// body: available
// range: 0x1001077c-0x1001094a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _asctime_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _asctime_s(char *_Buf,size_t _SizeInBytes,tm *_Tm)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  
  if ((((_Buf == (char *)0x0) || (_SizeInBytes == 0)) || (*_Buf = '\0', _SizeInBytes < 0x1a)) ||
     ((_Tm == (tm *)0x0 || (_Tm->tm_year < 0)))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1000d7dd();
    return 0x16;
  }
  iVar6 = _Tm->tm_mon;
  if ((((iVar6 < 0) || (0xb < iVar6)) ||
      ((_Tm->tm_hour < 0 || (((0x17 < _Tm->tm_hour || (_Tm->tm_min < 0)) || (0x3b < _Tm->tm_min)))))
      ) || ((_Tm->tm_sec < 0 || (0x3b < _Tm->tm_sec)))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1000d7dd();
    return 0x16;
  }
  if (0 < _Tm->tm_mday) {
    if ((&DAT_10027e60)[iVar6] - *(int *)(&DAT_10027e5c + iVar6 * 4) < _Tm->tm_mday) {
      uVar4 = _Tm->tm_year + 0x76c;
      uVar8 = uVar4 & 0x80000003;
      bVar9 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar9 = (uVar8 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar9) || ((int)uVar4 % 100 == 0)) && ((int)uVar4 % 400 != 0)) ||
         ((iVar6 != 1 || (0x1d < _Tm->tm_mday)))) goto LAB_1001086b;
    }
    iVar1 = _Tm->tm_wday;
    if ((-1 < iVar1) && (iVar1 < 7)) {
      iVar5 = 0;
      pcVar2 = _Buf;
      do {
        pcVar7 = pcVar2;
        *pcVar7 = "SunMonTueWedThuFriSat"[iVar5 + iVar1 * 3];
        _Buf[iVar5 + 4] = "JanFebMarAprMayJunJulAugSepOctNovDec"[iVar5 + iVar6 * 3];
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar7 + 1;
      } while (iVar5 < 3);
      pcVar7[1] = ' ';
      pcVar7[5] = ' ';
      iVar6 = _Tm->tm_mday;
      pcVar7[6] = (char)(iVar6 / 10) + '0';
      pcVar7[7] = (char)(iVar6 % 10) + '0';
      pcVar7[8] = ' ';
      iVar6 = _Tm->tm_hour;
      pcVar7[9] = (char)(iVar6 / 10) + '0';
      pcVar7[10] = (char)(iVar6 % 10) + '0';
      pcVar7[0xb] = ':';
      iVar6 = _Tm->tm_min;
      pcVar7[0xc] = (char)(iVar6 / 10) + '0';
      pcVar7[0xd] = (char)(iVar6 % 10) + '0';
      pcVar7[0xe] = ':';
      iVar6 = _Tm->tm_sec;
      pcVar7[0xf] = (char)(iVar6 / 10) + '0';
      pcVar7[0x10] = (char)(iVar6 % 10) + '0';
      pcVar7[0x11] = ' ';
      iVar6 = _Tm->tm_year / 100 + 0x13;
      pcVar7[0x12] = (char)(iVar6 / 10) + '0';
      pcVar7[0x13] = (char)(iVar6 % 10) + '0';
      iVar6 = _Tm->tm_year % 100;
      pcVar7[0x14] = (char)(iVar6 / 10) + '0';
      pcVar7[0x15] = (char)(iVar6 % 10) + '0';
      pcVar7[0x16] = '\n';
      pcVar7[0x17] = '\0';
      return 0;
    }
  }
LAB_1001086b:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_1000d7dd();
  return 0x16;
}

