// rea decompile_all
// name: FUN_2010a923
// address: 0x2010a923
// body: available
// range: 0x2010a923-0x2010aa24 inclusive
// range: 0x2010aa31-0x2010aaa1 inclusive
// range: 0x2010aab4-0x2010ab2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_2010a923(LCID param_1,uint param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                   size_t param_6,UINT param_7)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_20114428;
  puStack_10 = &LAB_20101b04;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_20408824 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_20408824 = 2;
    }
    else {
      DAT_20408824 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_2010a5b7(param_3,param_4);
  }
  if (DAT_20408824 == 1) {
    sVar2 = LCMapStringW(param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_14;
    return sVar2;
  }
  if (DAT_20408824 == 2) {
    if (param_7 == 0) {
      param_7 = DAT_20408480;
    }
    iVar1 = WideCharToMultiByte(param_7,0x220,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_200fa720();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar3 = WideCharToMultiByte(param_7,0x220,param_3,param_4,&stack0xffffffc4,iVar1,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar3 != 0)) {
        sVar2 = LCMapStringA(param_1,param_2,&stack0xffffffc4,iVar1,(LPSTR)0x0,0);
        if (sVar2 != 0) {
          local_8 = 1;
          FUN_200fa720();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x3c) &&
             (iVar1 = LCMapStringA(param_1,param_2,&stack0xffffffc4,iVar1,&stack0xffffffc4,sVar2),
             iVar1 != 0)) {
            if ((param_2 & 0x400) != 0) {
              if (param_6 != 0) {
                if ((int)sVar2 <= (int)param_6) {
                  param_6 = sVar2;
                }
                _strncpy((char *)param_5,&stack0xffffffc4,param_6);
                ExceptionList = local_14;
                return sVar2;
              }
              ExceptionList = local_14;
              return sVar2;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            sVar2 = MultiByteToWideChar(param_7,1,&stack0xffffffc4,sVar2,param_5,param_6);
            if (sVar2 != 0) {
              ExceptionList = local_14;
              return sVar2;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}

