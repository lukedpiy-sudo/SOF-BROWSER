// rea decompile_all
// name: FUN_200fba01
// address: 0x200fba01
// body: available
// range: 0x200fba01-0x200fbac5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_200fba01(HANDLE param_1,uint *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  _WIN32_FIND_DATAA local_144;
  
  BVar1 = FindNextFileA(param_1,&local_144);
  if (BVar1 != 0) {
    *param_2 = -(uint)(local_144.dwFileAttributes != 0x80) & local_144.dwFileAttributes;
    uVar3 = ___timet_from_ft(&local_144.ftCreationTime);
    param_2[1] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastAccessTime);
    param_2[2] = uVar3;
    uVar3 = ___timet_from_ft(&local_144.ftLastWriteTime);
    param_2[3] = uVar3;
    param_2[4] = local_144.nFileSizeLow;
    FUN_20101cf0(param_2 + 5,local_144.cFileName);
    return 0;
  }
  DVar2 = GetLastError();
  if (1 < DVar2) {
    if (DVar2 < 4) {
      _DAT_20408394 = 2;
      return 0xffffffff;
    }
    if (DVar2 == 8) {
      _DAT_20408394 = 0xc;
      return 0xffffffff;
    }
    if (DVar2 == 0x12) {
      _DAT_20408394 = 2;
      return 0xffffffff;
    }
  }
  _DAT_20408394 = 0x16;
  return 0xffffffff;
}

