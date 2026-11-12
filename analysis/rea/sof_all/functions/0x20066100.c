// rea decompile_all
// name: FUN_20066100
// address: 0x20066100
// body: available
// range: 0x20066100-0x200662f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20066100(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FARPROC pFVar1;
  HMODULE pHVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  char *lpProcName;
  CHAR local_100 [128];
  undefined1 local_80 [128];
  
  FUN_200fc3f6(local_80,0x80);
  Com_sprintf(local_100,0x80,s__s__s__s_2013a9fc,local_80,s_final_2013aa08,s_player_dll_2013aa98);
  DAT_20403520 = LoadLibraryA(local_100);
  if (DAT_20403520 == (HMODULE)0x0) {
    Com_sprintf(local_100,0x80,s__s__s_2011f104,local_80,s_player_dll_2013aa98);
    DAT_20403520 = LoadLibraryA(local_100);
    if (DAT_20403520 == (HMODULE)0x0) {
      iVar5 = 0;
      DAT_20403520 = (HMODULE)0x0;
      do {
        iVar5 = FUN_20026330(iVar5);
        if (iVar5 == 0) {
          return 0;
        }
        Com_sprintf(local_100,0x80,s__s__s_2011f104,iVar5,s_player_dll_2013aa98);
        DAT_20403520 = LoadLibraryA(local_100);
      } while (DAT_20403520 == (HMODULE)0x0);
    }
  }
  Com_DPrintf(s_LoadLibrary___s__2013a9e8,local_100);
  if (param_4 == 0) {
    lpProcName = s_GetPlayerServerAPI_2013aa84;
  }
  else {
    lpProcName = s_GetPlayerClientAPI_2013aa70;
  }
  pFVar1 = GetProcAddress(DAT_20403520,lpProcName);
  if (pFVar1 == (FARPROC)0x0) {
    if (param_4 == 0) {
      if (DAT_20403508 != (HMODULE)0x0) {
        FUN_20011670();
        FUN_2000df40();
        DAT_20403508 = (HMODULE)0x0;
      }
      DAT_20403530 = (HMODULE)0x0;
      pHVar2 = DAT_20403508;
    }
    else {
      DAT_20403508 = (HMODULE)0x0;
      pHVar2 = DAT_20403530;
    }
    if ((pHVar2 == (HMODULE)0x0) && (DAT_20403520 != (HMODULE)0x0)) {
      BVar3 = FreeLibrary(DAT_20403520);
      if (BVar3 == 0) {
        Com_Error(0,s_FreeLibrary_failed_for_player_li_2013aa48);
      }
      DAT_20403520 = (HMODULE)0x0;
    }
    return 0;
  }
  if (param_4 == 0) {
    DAT_20403530 = DAT_20403520;
    uVar4 = FUN_20026370(local_100);
    FUN_2005e140(uVar4);
    iVar5 = (*pFVar1)(param_1,param_3);
    return iVar5;
  }
  DAT_20403508 = DAT_20403520;
  iVar5 = (*pFVar1)(param_1,param_2);
  return iVar5;
}

