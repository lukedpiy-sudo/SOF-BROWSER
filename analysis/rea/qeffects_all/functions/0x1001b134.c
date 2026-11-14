// rea decompile_all
// name: ___crtsetenv
// address: 0x1001b134
// body: available
// range: 0x1001b134-0x1001b375 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtsetenv
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uint _Size;
  uchar *_Str;
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  size_t sVar4;
  char *_Dst;
  errno_t eVar5;
  BOOL BVar6;
  int *piVar7;
  bool bVar8;
  size_t _Size_00;
  uchar *_Src;
  int local_10;
  
  local_10 = 0;
  if (_POption == (char **)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_1000d7dd();
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1001b1bc:
    piVar1 = __errno();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (DAT_100286e0 == DAT_100286e4) {
    DAT_100286e0 = copy_environ();
  }
  if (DAT_100286e0 == (int *)0x0) {
    if ((_Primary == 0) || (DAT_100286e8 == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_100286e0 = __malloc_crt(4);
      if (DAT_100286e0 == (int *)0x0) {
        return -1;
      }
      *DAT_100286e0 = 0;
      if (DAT_100286e8 == (undefined4 *)0x0) {
        DAT_100286e8 = __malloc_crt(4);
        if (DAT_100286e8 == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_100286e8 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1001b1bc;
    }
  }
  piVar1 = DAT_100286e0;
  if (DAT_100286e0 == (int *)0x0) {
    return -1;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) goto LAB_1001b361;
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return -1;
    }
    if (0x3ffffffe < _Size) {
      return -1;
    }
    piVar1 = __recalloc_crt(DAT_100286e0,4,_Size);
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = (char *)0x0;
LAB_1001b2c5:
    DAT_100286e0 = piVar1;
  }
  else {
    piVar7 = piVar1 + _Count;
    _free((void *)*piVar7);
    if (bVar8) {
      while (*piVar7 != 0) {
        *piVar7 = piVar7[1];
        _Count = _Count + 1;
        piVar7 = piVar1 + _Count;
      }
      if ((_Count < 0x3fffffff) &&
         (piVar1 = __recalloc_crt(DAT_100286e0,_Count,4), piVar1 != (int *)0x0)) goto LAB_1001b2c5;
    }
    else {
      *piVar7 = (int)_Str;
      *_POption = (char *)0x0;
    }
  }
  if (_Primary != 0) {
    _Size_00 = 1;
    sVar4 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar4 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar4 = _strlen((char *)_Str);
      eVar5 = _strcpy_s(_Dst,sVar4 + 2,(char *)_Src);
      if (eVar5 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1001b361:
        _free(_Str);
        *_POption = (char *)0x0;
        return 0;
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar6 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar6 == 0) {
        local_10 = -1;
        piVar1 = __errno();
        *piVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar8) {
    _free(_Str);
    *_POption = (char *)0x0;
    return local_10;
  }
  return local_10;
}

