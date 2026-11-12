// rea decompile_all
// name: FUN_5010e6c7
// address: 0x5010e6c7
// body: available
// range: 0x5010e6c7-0x5010e924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5010e6c7(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_4;
  
  DAT_5018c3a0 = 0;
  DAT_50158918 = 0xffffffff;
  DAT_50158908 = 0xffffffff;
  _Str1 = (uint *)FUN_50111285("TZ");
  if (_Str1 == (uint *)0x0) {
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_5018c3a8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_50158870 = (void *)(DAT_5018c3a8 * 0x3c);
    DAT_5018c3a0 = 1;
    if (DAT_5018c3ee != 0) {
      DAT_50158870 = (void *)((int)DAT_50158870 + DAT_5018c3fc * 0x3c);
    }
    if ((DAT_5018c442 == 0) || (DAT_5018c450 == 0)) {
      DAT_50158874 = 0;
      DAT_50158878 = 0;
    }
    else {
      DAT_50158874 = 1;
      DAT_50158878 = (DAT_5018c450 - DAT_5018c3fc) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_5018c36c,0x220,(LPCWSTR)&DAT_5018c3ac,-1,PTR_DAT_501588fc,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 == 0) || (local_4 != 0)) {
      *PTR_DAT_501588fc = 0;
    }
    else {
      PTR_DAT_501588fc[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_5018c36c,0x220,(LPCWSTR)&DAT_5018c400,-1,PTR_DAT_50158900,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      PTR_DAT_50158900[0x3f] = 0;
      return;
    }
  }
  else {
    if ((char)*_Str1 == '\0') {
      return;
    }
    if ((DAT_5018c454 != (uint *)0x0) &&
       (iVar4 = _strcmp((char *)_Str1,(char *)DAT_5018c454), iVar4 == 0)) {
      return;
    }
    FUN_5010880b((undefined *)DAT_5018c454);
    sVar5 = _strlen((char *)_Str1);
    DAT_5018c454 = _malloc(sVar5 + 1);
    if (DAT_5018c454 == (uint *)0x0) {
      return;
    }
    FUN_5010c140(DAT_5018c454,_Str1);
    _strncpy(PTR_DAT_501588fc,(char *)_Str1,3);
    _Source = (uint *)((int)_Str1 + 3);
    PTR_DAT_501588fc[3] = 0;
    cVar1 = *(char *)_Source;
    if (cVar1 == '-') {
      _Source = _Str1 + 1;
    }
    iVar4 = FUN_50108313(this,(byte *)_Source);
    DAT_50158870 = (void *)(iVar4 * 0xe10);
    for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        _Source = (uint *)((int)_Source + 1)) {
    }
    if ((char)*_Source == ':') {
      _Source = (uint *)((int)_Source + 1);
      iVar4 = FUN_50108313(DAT_50158870,(byte *)_Source);
      DAT_50158870 = (void *)((int)DAT_50158870 + iVar4 * 0x3c);
      for (; ('/' < (char)*_Source && ((char)*_Source < ':')); _Source = (uint *)((int)_Source + 1))
      {
      }
      if ((char)*_Source == ':') {
        _Source = (uint *)((int)_Source + 1);
        iVar4 = FUN_50108313(DAT_50158870,(byte *)_Source);
        DAT_50158870 = (void *)((int)DAT_50158870 + iVar4);
        for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
            _Source = (uint *)((int)_Source + 1)) {
        }
      }
    }
    if (cVar1 == '-') {
      DAT_50158870 = (void *)-(int)DAT_50158870;
    }
    DAT_50158874 = (int)(char)*_Source;
    if (DAT_50158874 != 0) {
      _strncpy(PTR_DAT_50158900,(char *)_Source,3);
      PTR_DAT_50158900[3] = 0;
      return;
    }
  }
  *PTR_DAT_50158900 = 0;
  return;
}

