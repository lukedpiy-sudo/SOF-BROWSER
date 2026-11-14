// rea decompile_all
// name: FUN_30025a5b
// address: 0x30025a5b
// body: available
// range: 0x30025a5b-0x30025b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_30025a5b(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_300abb00 <= param_1) {
    DAT_300aa4e4 = 0;
    _DAT_300aa4e0 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_300aba00)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_300aa4e0 = 9;
    DAT_300aa4e4 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_3002977b(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_3002977b(2);
      iVar2 = FUN_3002977b(1);
      if (iVar2 == iVar1) goto LAB_30025ad4;
    }
    hObject = (HANDLE)FUN_3002977b(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_30025ad6;
    }
  }
LAB_30025ad4:
  DVar4 = 0;
LAB_30025ad6:
  FUN_30029701(param_1);
  *(undefined1 *)((&DAT_300aba00)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_30026dbc(DVar4);
  return 0xffffffff;
}

