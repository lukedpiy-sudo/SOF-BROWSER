// rea decompile_all
// name: FUN_1001493a
// address: 0x1001493a
// body: available
// range: 0x1001493a-0x1001506d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001506d with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_1001493a(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  uint *in_EAX;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  int *piVar7;
  DWORD DVar8;
  long lVar9;
  int iVar10;
  HANDLE pvVar11;
  byte bVar12;
  int unaff_EDI;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  _SECURITY_ATTRIBUTES local_34;
  uint local_28;
  HANDLE local_24;
  uint local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar13 = (param_3 & 0x80) == 0;
  local_28 = 0;
  local_6 = 0;
  local_c = 0;
  local_34.nLength = 0xc;
  local_34.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar13) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_34.bInheritHandle = (BOOL)bVar13;
  iVar4 = FUN_100192bd(&local_28);
  if (iVar4 != 0) {
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar5 = param_3 & 3;
  if (uVar5 == 0) {
    local_10 = 0x80000000;
  }
  else {
    if (uVar5 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_10 = 0x40000000;
        goto LAB_100149fc;
      }
    }
    else if (uVar5 != 2) goto LAB_100149bc;
    local_10 = 0xc0000000;
  }
LAB_100149fc:
  if (param_4 == 0x10) {
    local_18 = 0;
  }
  else if (param_4 == 0x20) {
    local_18 = 1;
  }
  else if (param_4 == 0x30) {
    local_18 = 2;
  }
  else if (param_4 == 0x40) {
    local_18 = 3;
  }
  else {
    if (param_4 != 0x80) {
LAB_100149bc:
      puVar6 = ___doserrno();
      *puVar6 = 0;
      *in_EAX = 0xffffffff;
      piVar7 = __errno();
      *piVar7 = 0x16;
      FUN_1000d7dd();
      return 0x16;
    }
    local_18 = (uint)(local_10 == 0x80000000);
  }
  uVar5 = param_3 & 0x700;
  if (uVar5 < 0x401) {
    if ((uVar5 == 0x400) || (uVar5 == 0)) {
      local_1c = 3;
    }
    else if (uVar5 == 0x100) {
      local_1c = 4;
    }
    else {
      if (uVar5 == 0x200) goto LAB_10014abe;
      if (uVar5 != 0x300) goto LAB_10014a9e;
      local_1c = 2;
    }
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_10014abe:
        local_1c = 5;
        goto LAB_10014ace;
      }
      if (uVar5 != 0x700) {
LAB_10014a9e:
        puVar6 = ___doserrno();
        *puVar6 = 0;
        *in_EAX = 0xffffffff;
        piVar7 = __errno();
        *piVar7 = 0x16;
        FUN_1000d7dd();
        return 0x16;
      }
    }
    local_1c = 1;
  }
LAB_10014ace:
  local_14 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_100286d0 & param_5))) {
    local_14 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_14 = local_14 | 0x4000000;
    local_10 = local_10 | 0x10000;
    local_18 = local_18 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = local_14 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_14 = local_14 | 0x10000000;
    }
  }
  else {
    local_14 = local_14 | 0x8000000;
  }
  uVar5 = __alloc_osfhnd();
  *in_EAX = uVar5;
  if (uVar5 == 0xffffffff) {
    puVar6 = ___doserrno();
    *puVar6 = 0;
    *in_EAX = 0xffffffff;
    piVar7 = __errno();
    *piVar7 = 0x18;
    piVar7 = __errno();
    return *piVar7;
  }
  *param_1 = 1;
  local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    if (((local_10 & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_10 = local_10 & 0x7fffffff;
      local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
      if (local_24 != (HANDLE)0xffffffff) goto LAB_10014bf6;
    }
    pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar8 = GetLastError();
    __dosmaperr(DVar8);
    goto LAB_10014be7;
  }
LAB_10014bf6:
  DVar8 = GetFileType(local_24);
  if (DVar8 == 0) {
    pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar8 = GetLastError();
    __dosmaperr(DVar8);
    CloseHandle(local_24);
    if (DVar8 == 0) {
      piVar7 = __errno();
      *piVar7 = 0xd;
    }
    goto LAB_10014be7;
  }
  if (DVar8 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar8 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_24);
  bVar12 = local_5 | 1;
  *(byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar12;
  pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar3 = local_5 & 0x80;
    local_5 = bVar12;
    if (bVar3 == 0) goto LAB_10014f5c;
    if ((param_3 & 2) == 0) goto LAB_10014d2a;
    lVar9 = __lseek_nolock(*in_EAX,-1,2);
    if (lVar9 == -1) {
      puVar6 = ___doserrno();
      bVar12 = local_5;
      if (*puVar6 == 0x83) goto LAB_10014d2a;
    }
    else {
      local_8 = '\0';
      iVar4 = __read_nolock(*in_EAX,&local_8,1);
      if ((((iVar4 != 0) || (local_8 != '\x1a')) ||
          (iVar4 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,lVar9 >> 0x1f)), iVar4 != -1)) &&
         (lVar9 = __lseek_nolock(*in_EAX,0,0), bVar12 = local_5, lVar9 != -1)) goto LAB_10014d2a;
    }
LAB_10014cdb:
    __close_nolock(*in_EAX);
    goto LAB_10014be7;
  }
LAB_10014d2a:
  local_5 = bVar12;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28 & 0x74000;
      }
    }
    uVar5 = param_3 & 0x74000;
    if (uVar5 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar5 == 0x10000) || (uVar5 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_10014d99;
    }
    else if ((uVar5 == 0x20000) || (uVar5 == 0x24000)) {
LAB_10014d99:
      local_6 = 2;
    }
    else if ((uVar5 == 0x40000) || (uVar5 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_20 = 0, (local_5 & 0x40) == 0)) {
      uVar5 = local_10 & 0xc0000000;
      if (uVar5 == 0x40000000) {
        if (local_1c == 0) goto LAB_10014f5c;
        if (2 < local_1c) {
          if (local_1c < 5) {
            lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar14 == 0) goto LAB_10014e01;
            lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar5 = (uint)lVar14 & (uint)((ulonglong)lVar14 >> 0x20);
            goto LAB_10014ec6;
          }
LAB_10014df8:
          if (local_1c != 5) goto LAB_10014f5c;
        }
LAB_10014e01:
        iVar4 = 0;
        if (local_6 == 1) {
          local_20 = 0xbfbbef;
          iVar15 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_10014f5c;
          local_20 = 0xfeff;
          iVar15 = 2;
        }
        do {
          iVar10 = __write(*in_EAX,(void *)((int)&local_20 + iVar4),iVar15 - iVar4);
          if (iVar10 == -1) goto LAB_10014cdb;
          iVar4 = iVar4 + iVar10;
        } while (iVar4 < iVar15);
      }
      else {
        if (uVar5 != 0x80000000) {
          if ((uVar5 == 0xc0000000) && (local_1c != 0)) {
            if (2 < local_1c) {
              if (4 < local_1c) goto LAB_10014df8;
              lVar14 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar14 != 0) {
                lVar14 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar14 == -1) goto LAB_10014cdb;
                goto LAB_10014e4c;
              }
            }
            goto LAB_10014e01;
          }
          goto LAB_10014f5c;
        }
LAB_10014e4c:
        iVar4 = __read_nolock(*in_EAX,&local_20,3);
        if (iVar4 == -1) goto LAB_10014cdb;
        if (iVar4 == 2) {
LAB_10014ed3:
          if ((local_20 & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar7 = __errno();
            *piVar7 = 0x16;
            return 0x16;
          }
          if ((local_20 & 0xffff) == 0xfeff) {
            lVar9 = __lseek_nolock(*in_EAX,2,0);
            if (lVar9 == -1) goto LAB_10014cdb;
            local_6 = 2;
            goto LAB_10014f5c;
          }
        }
        else if (iVar4 == 3) {
          if (local_20 == 0xbfbbef) {
            local_6 = 1;
            goto LAB_10014f5c;
          }
          goto LAB_10014ed3;
        }
        uVar5 = __lseek_nolock(*in_EAX,0,0);
LAB_10014ec6:
        if (uVar5 == 0xffffffff) goto LAB_10014cdb;
      }
    }
  }
LAB_10014f5c:
  pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((local_10 & 0xc0000000) != 0xc0000000) {
    return local_c;
  }
  if ((param_3 & 1) == 0) {
    return local_c;
  }
  CloseHandle(local_24);
  pvVar11 = CreateFileA(param_2,local_10 & 0x7fffffff,local_18,&local_34,3,local_14,(HANDLE)0x0);
  if (pvVar11 != (HANDLE)0xffffffff) {
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_10029aa0)[(int)*in_EAX >> 5]) = pvVar11;
    return local_c;
  }
  DVar8 = GetLastError();
  __dosmaperr(DVar8);
  pbVar1 = (byte *)((&DAT_10029aa0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0xfe;
  __free_osfhnd(*in_EAX);
LAB_10014be7:
  piVar7 = __errno();
  return *piVar7;
}

