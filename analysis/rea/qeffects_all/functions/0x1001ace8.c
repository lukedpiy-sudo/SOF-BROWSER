// rea decompile_all
// name: __crtCompareStringA_stat
// address: 0x1001ace8
// body: available
// range: 0x1001ace8-0x1001af55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *pcVar1;
  byte *pbVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  uint uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  char *pcVar7;
  int iVar8;
  byte *in_EDX;
  LPWSTR lpWideCharStr;
  PCNZWCH local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)param_3;
  pcVar7 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) goto LAB_1001af44;
  }
  else {
    do {
      pcVar7 = pcVar7 + -1;
      if (*pcVar1 == '\0') goto LAB_1001ad1f;
      pcVar1 = pcVar1 + 1;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = (char *)0xffffffff;
LAB_1001ad1f:
    param_4 = param_4 + (-1 - (int)pcVar7);
  }
  pbVar2 = in_EDX;
  iVar8 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_1001af44;
  }
  else {
    do {
      iVar8 = iVar8 + -1;
      if (*pbVar2 == 0) goto LAB_1001ad42;
      pbVar2 = pbVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_1001ad42:
    param_5 = param_5 + (-1 - iVar8);
  }
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if ((param_4 == (char *)param_5) ||
       (((1 < param_5 || (1 < (int)param_4)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_1001af44;
    if (0 < (int)param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*(byte *)param_3 < *pBVar4 || (pBVar4[1] < *(byte *)param_3))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1001af44;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_1001af44;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1001af44;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_20 = (PCNZWCH)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffc4;
      local_20 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1001ae7a:
        local_20 = (PCNZWCH)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar5);
      local_20 = (PCNZWCH)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1001ae7a;
      }
    }
  }
  if (local_20 == (PCNZWCH)0x0) goto LAB_1001af44;
  iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)param_3,(int)param_4,local_20,cchWideChar);
  if ((iVar8 != 0) &&
     (uVar5 = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_5,(LPWSTR)0x0,0), uVar5 != 0)
     ) {
    if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar5 * 2 + 8;
      if (_Size < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_1001aefa:
          lpWideCharStr = (LPWSTR)(puVar6 + 2);
        }
      }
      else {
        puVar6 = _malloc(_Size);
        lpWideCharStr = (LPWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_1001aefa;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_5,lpWideCharStr,uVar5);
      if (iVar8 != 0) {
        CompareStringW((LCID)param_1,param_2,local_20,cchWideChar,lpWideCharStr,uVar5);
      }
      __freea(lpWideCharStr);
    }
  }
  __freea(local_20);
LAB_1001af44:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

