// rea decompile_all
// name: FUN_200ff7c7
// address: 0x200ff7c7
// body: available
// range: 0x200ff7c7-0x200ff879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_200ff7c7(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_20408b60 <= param_1) {
    DAT_20408398 = 0;
    _DAT_20408394 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_20408a60)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_20408394 = 9;
    DAT_20408398 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_20105ea2(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_20105ea2(2);
      iVar2 = FUN_20105ea2(1);
      if (iVar2 == iVar1) goto LAB_200ff840;
    }
    hObject = (HANDLE)FUN_20105ea2(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_200ff842;
    }
  }
LAB_200ff840:
  DVar4 = 0;
LAB_200ff842:
  FUN_20105e28(param_1);
  *(undefined1 *)((&DAT_20408a60)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_20100583(DVar4);
  return 0xffffffff;
}

