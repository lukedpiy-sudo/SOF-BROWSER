// rea decompile_all
// name: FUN_100178e5
// address: 0x100178e5
// body: available
// range: 0x100178e5-0x10017a45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017a45 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl
FUN_100178e5(uint param_1,int param_2,int param_3,int *param_4,char param_5,
            localeinfo_struct *param_6)

{
  code *pcVar1;
  undefined1 *in_EAX;
  int *piVar2;
  errno_t eVar3;
  int iVar4;
  undefined1 *puVar5;
  char *_Dst;
  int unaff_EDI;
  int iVar6;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar2 = __errno();
    iVar6 = 0x16;
  }
  else {
    iVar6 = param_2;
    if (param_2 < 1) {
      iVar6 = 0;
    }
    if (iVar6 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      if (0 < param_2) {
        *puVar5 = puVar5[1];
        puVar5 = puVar5 + 1;
        *puVar5 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar5 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar3 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
      if (eVar3 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return unaff_EDI;
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar6 = param_4[1] + -1;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
          _Dst[1] = '-';
        }
        if (99 < iVar6) {
          iVar4 = iVar6 / 100;
          iVar6 = iVar6 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar6) {
          iVar4 = iVar6 / 10;
          iVar6 = iVar6 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar6;
      }
      if (((DAT_1002913c & 1) != 0) && (_Dst[2] == '0')) {
        unaff_EDI = 3;
        FID_conflict__memcpy(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return unaff_EDI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_EDI;
    }
    piVar2 = __errno();
    iVar6 = 0x22;
  }
  *piVar2 = iVar6;
  iVar6 = 0x10017911;
  FUN_1000d7dd();
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar6;
}

