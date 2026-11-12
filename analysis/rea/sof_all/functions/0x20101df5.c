// rea decompile_all
// name: FUN_20101df5
// address: 0x20101df5
// body: available
// range: 0x20101df5-0x20102052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20101df5(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_4;
  
  DAT_20408488 = 0;
  DAT_2015d718 = 0xffffffff;
  DAT_2015d708 = 0xffffffff;
  _Str1 = (char *)FUN_200fa74f(&DAT_20113690);
  if (_Str1 == (char *)0x0) {
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_20408490);
    if (DVar3 == 0xffffffff) {
      return;
    }
    _DAT_2015d670 = DAT_20408490 * 0x3c;
    DAT_20408488 = 1;
    if (DAT_204084d6 != 0) {
      _DAT_2015d670 = _DAT_2015d670 + DAT_204084e4 * 0x3c;
    }
    if ((DAT_2040852a == 0) || (DAT_20408538 == 0)) {
      DAT_2015d674 = 0;
      DAT_2015d678 = 0;
    }
    else {
      DAT_2015d674 = 1;
      DAT_2015d678 = (DAT_20408538 - DAT_204084e4) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_20408480,0x220,(LPCWSTR)&DAT_20408494,-1,PTR_DAT_2015d6fc,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 == 0) || (local_4 != 0)) {
      *PTR_DAT_2015d6fc = 0;
    }
    else {
      PTR_DAT_2015d6fc[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_20408480,0x220,(LPCWSTR)&DAT_204084e8,-1,PTR_DAT_2015d700,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      PTR_DAT_2015d700[0x3f] = 0;
      return;
    }
  }
  else {
    if (*_Str1 == '\0') {
      return;
    }
    if ((DAT_2040853c != (char *)0x0) && (iVar4 = _strcmp(_Str1,DAT_2040853c), iVar4 == 0)) {
      return;
    }
    FUN_200f9d32(DAT_2040853c);
    sVar5 = _strlen(_Str1);
    DAT_2040853c = _malloc(sVar5 + 1);
    if (DAT_2040853c == (char *)0x0) {
      return;
    }
    FUN_20101cf0(DAT_2040853c,_Str1);
    _strncpy(PTR_DAT_2015d6fc,_Str1,3);
    _Source = _Str1 + 3;
    PTR_DAT_2015d6fc[3] = 0;
    cVar1 = *_Source;
    if (cVar1 == '-') {
      _Source = _Str1 + 4;
    }
    _DAT_2015d670 = FUN_200f9e13(_Source);
    _DAT_2015d670 = _DAT_2015d670 * 0xe10;
    for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        _Source = _Source + 1) {
    }
    if (*_Source == ':') {
      _Source = _Source + 1;
      iVar4 = FUN_200f9e13(_Source);
      _DAT_2015d670 = _DAT_2015d670 + iVar4 * 0x3c;
      for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
      }
      if (*_Source == ':') {
        _Source = _Source + 1;
        iVar4 = FUN_200f9e13(_Source);
        _DAT_2015d670 = _DAT_2015d670 + iVar4;
        for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      _DAT_2015d670 = -_DAT_2015d670;
    }
    DAT_2015d674 = (int)*_Source;
    if (DAT_2015d674 != 0) {
      _strncpy(PTR_DAT_2015d700,_Source,3);
      PTR_DAT_2015d700[3] = 0;
      return;
    }
  }
  *PTR_DAT_2015d700 = 0;
  return;
}

