// rea decompile_all
// name: FUN_3002980f
// address: 0x3002980f
// body: available
// range: 0x3002980f-0x30029ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_3002980f(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar7 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_300aa794 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      _DAT_300aa4e0 = 0x16;
      DAT_300aa4e4 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) {
      _DAT_300aa4e0 = 0x16;
      DAT_300aa4e4 = 0;
      return 0xffffffff;
    }
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_3002992d;
      if (uVar2 != 0x300) {
        _DAT_300aa4e0 = 0x16;
        DAT_300aa4e4 = 0;
        return 0xffffffff;
      }
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_3002992d:
        local_c = 5;
        goto LAB_3002993d;
      }
      if (uVar2 != 0x700) {
        _DAT_300aa4e0 = 0x16;
        DAT_300aa4e4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_3002993d:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_300aa4e8 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_300295f5();
  if (uVar3 == 0xffffffff) {
    DAT_300aa4e4 = 0;
    _DAT_300aa4e0 = 0x18;
  }
  else {
    hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar4 = GetFileType(hFile);
      if (DVar4 != 0) {
        if (DVar4 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar4 == 3) {
          local_5 = local_5 | 8;
        }
        FUN_3002968a(uVar3,hFile);
        iVar6 = (uVar3 & 0x1f) * 8;
        param_1._3_1_ = local_5 & 0x48;
        *(byte *)((&DAT_300aba00)[(int)uVar3 >> 5] + 4 + iVar6) = local_5 | 1;
        if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
          local_14 = FUN_300292e9(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            if (DAT_300aa4e4 != 0x83) {
LAB_30029a9e:
              FUN_30025a5b(uVar3);
              return 0xffffffff;
            }
          }
          else {
            param_3 = param_3 & 0xffffff;
            iVar5 = FUN_3002ae55(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
            if ((((iVar5 == 0) && (param_3._3_1_ == '\x1a')) &&
                (iVar5 = FUN_3002ad0f(uVar3,local_14), iVar5 == -1)) ||
               (DVar4 = FUN_300292e9(uVar3,0,0), DVar4 == 0xffffffff)) goto LAB_30029a9e;
          }
        }
        if (param_1._3_1_ != 0) {
          return uVar3;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_300aba00)[(int)uVar3 >> 5] + 4 + iVar6);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar4 = GetLastError();
    FUN_30026dbc(DVar4);
  }
  return 0xffffffff;
}

