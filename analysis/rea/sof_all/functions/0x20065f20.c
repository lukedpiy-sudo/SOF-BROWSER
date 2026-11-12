// rea decompile_all
// name: FUN_20065f20
// address: 0x20065f20
// body: available
// range: 0x20065f20-0x2006608c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20065f20(undefined4 param_1)

{
  FARPROC pFVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  CHAR local_100 [128];
  undefined1 local_80 [128];
  
  if (DAT_20403504 != (HMODULE)0x0) {
    Com_Error(0,s_Sys_GetGameAPI_without_Sys_Unloa_2013aa1c);
  }
  FUN_200fc3f6(local_80,0x80);
  Com_sprintf(local_100,0x80,s__s__s__s_2013a9fc,local_80,s_final_2013aa08,s_gamex86_dll_2013aa10);
  DAT_20403504 = LoadLibraryA(local_100);
  if (DAT_20403504 == (HMODULE)0x0) {
    Com_sprintf(local_100,0x80,s__s__s_2011f104,local_80,s_gamex86_dll_2013aa10);
    DAT_20403504 = LoadLibraryA(local_100);
    if (DAT_20403504 == (HMODULE)0x0) {
      iVar4 = 0;
      DAT_20403504 = (HMODULE)0x0;
      do {
        iVar4 = FUN_20026330(iVar4);
        if (iVar4 == 0) {
          return 0;
        }
        Com_sprintf(local_100,0x80,s__s__s_2011f104,iVar4,s_gamex86_dll_2013aa10);
        DAT_20403504 = LoadLibraryA(local_100);
      } while (DAT_20403504 == (HMODULE)0x0);
    }
  }
  Com_DPrintf(s_LoadLibrary___s__2013a9e8,local_100);
  pFVar1 = GetProcAddress(DAT_20403504,s_GetGameAPI_2013a9dc);
  if (pFVar1 == (FARPROC)0x0) {
    BVar2 = FreeLibrary(DAT_20403504);
    if (BVar2 == 0) {
      Com_Error(0,s_FreeLibrary_failed_for_game_libr_2013a9b8);
    }
    DAT_20403504 = (HMODULE)0x0;
    return 0;
  }
  uVar3 = FUN_20026370(local_100);
  FUN_2005e130(uVar3);
  iVar4 = (*pFVar1)(param_1);
  return iVar4;
}

