// rea decompile_all
// name: FUN_5010be79
// address: 0x5010be79
// body: available
// range: 0x5010be79-0x5010bf2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5010be79(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_5018c940 <= param_1) {
    DAT_5018c308 = 0;
    _DAT_5018c304 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_5018c840)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_5018c304 = 9;
    DAT_5018c308 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_501104f5(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_501104f5(2);
      iVar2 = FUN_501104f5(1);
      if (iVar2 == iVar1) goto LAB_5010bef2;
    }
    hObject = (HANDLE)FUN_501104f5(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_5010bef4;
    }
  }
LAB_5010bef2:
  DVar4 = 0;
LAB_5010bef4:
  FUN_5011047b(param_1);
  *(undefined1 *)((&DAT_5018c840)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_50110308(DVar4);
  return 0xffffffff;
}

