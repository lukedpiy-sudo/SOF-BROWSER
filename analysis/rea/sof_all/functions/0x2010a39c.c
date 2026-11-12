// rea decompile_all
// name: FUN_2010a39c
// address: 0x2010a39c
// body: available
// range: 0x2010a39c-0x2010a4c0 inclusive
// range: 0x2010a4d6-0x2010a536 inclusive
// range: 0x2010a54b-0x2010a5b6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2010a39c(LCID param_1,DWORD param_2,PCNZWCH param_3,int param_4,LPCWSTR param_5,int param_6,
                UINT param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_201143f0;
  puStack_10 = &LAB_20101b04;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_20408818 == 0) {
    ExceptionList = &local_14;
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_20408818 = 2;
    }
    else {
      DAT_20408818 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_2010a5b7(param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_2010a5b7(param_5,param_6);
  }
  if ((param_4 != 0) && (param_6 != 0)) {
    if (DAT_20408818 == 1) {
      iVar1 = CompareStringW(param_1,param_2,param_3,param_4,param_5,param_6);
      ExceptionList = local_14;
      return iVar1;
    }
    if (DAT_20408818 == 2) {
      if (param_7 == 0) {
        param_7 = DAT_20408480;
      }
      iVar1 = WideCharToMultiByte(param_7,0x220,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_200fa720();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar2 = WideCharToMultiByte(param_7,0x220,param_3,param_4,&stack0xffffffc8,iVar1,
                                        (LPCSTR)0x0,(LPBOOL)0x0), iVar2 != 0)) {
          iVar2 = WideCharToMultiByte(param_7,0x220,param_5,param_6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (iVar2 != 0) {
            local_8 = 1;
            FUN_200fa720();
            local_8 = 0xffffffff;
            if ((&stack0x00000000 != (undefined1 *)0x38) &&
               (iVar3 = WideCharToMultiByte(param_7,0x220,param_5,param_6,&stack0xffffffc8,iVar2,
                                            (LPCSTR)0x0,(LPBOOL)0x0), iVar3 != 0)) {
              iVar1 = CompareStringA(param_1,param_2,&stack0xffffffc8,iVar1,&stack0xffffffc8,iVar2);
              ExceptionList = local_14;
              return iVar1;
            }
          }
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_4 != param_6) {
    ExceptionList = local_14;
    return ((-1 < param_4 - param_6) - 1 & 0xfffffffe) + 3;
  }
  ExceptionList = local_14;
  return 2;
}

