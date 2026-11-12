// rea decompile_all
// name: FUN_2000f9f0
// address: 0x2000f9f0
// body: available
// range: 0x2000f9f0-0x2000fc62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2000fa5c to 0x200106d0 FUN_200106d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2000fad6 to 0x200106d0 FUN_200106d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2000fc5e to 0x200106d0 FUN_200106d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000f9f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar1 = FUN_2001e290(&DAT_20367ebc);
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  if (iVar1 == -1) {
    Com_Printf(s_File_not_found__2011f19c);
    if (DAT_201ca404 != 0) {
      Com_Printf(s_cls_download_shouldn_t_have_been_2011f174);
      FUN_200fa9ae(DAT_201ca404);
      DAT_201ca404 = 0;
    }
    FUN_200106d0();
    return;
  }
  if (DAT_201ca404 == 0) {
    uVar3 = FUN_20025750(&DAT_201ca408);
    Com_sprintf(local_180,0x80,s__s__s_2011f104,uVar3);
    FUN_20024d60(local_180);
    DAT_201ca404 = FUN_200faa9a(local_180,&DAT_2011d688);
    if (DAT_201ca404 == 0) {
      DAT_20367ecc = DAT_20367ecc + iVar1;
      Com_Printf(s_Failed_to_open__s_2011f160,&DAT_201ca408);
      FUN_200106d0();
      return;
    }
  }
  *(float *)(DAT_20225068 + 0x18) = (float)iVar2 * 0.01;
  Cvar_Set(s_cl_download_filename_2011e48c,&DAT_201ca488);
  Cvar_Set(s_cl_downloading_2011e47c,s_Downloading_File_2011f14c);
  FUN_20015fa0(0);
  FUN_200facde(DAT_20367ec0 + DAT_20367ecc,1,iVar1,DAT_201ca404);
  DAT_20367ecc = DAT_20367ecc + iVar1;
  if (iVar2 != 100) {
    Com_Printf(&DAT_2011f148);
    iVar1 = (iVar2 / 10) * 10;
    if (iVar1 != DAT_201ca510) {
      DAT_201ca510 = iVar1;
      Com_Printf(s__i___2011f140,iVar1);
    }
    FUN_2001cb00(&DAT_201c2400,4);
    FUN_2001e830(&DAT_201c2400,s_nextdl_2011f138);
    return;
  }
  Com_Printf(s_100___2011f130);
  FUN_200fa9ae(DAT_201ca404);
  uVar3 = FUN_20025750(&DAT_201ca408);
  Com_sprintf(local_80,0x80,s__s__s_2011f104,uVar3);
  uVar3 = FUN_20025750(&DAT_201ca488);
  Com_sprintf(local_100,0x80,s__s__s_2011f104,uVar3);
  iVar1 = FUN_200facb0(local_80,local_100);
  if (iVar1 == 0) {
    FUN_2000f7a0(&DAT_201ca488);
  }
  else {
    Com_Printf(s_failed_to_rename__2011f11c);
  }
  DAT_201ca404 = 0;
  DAT_201ca510 = 0;
  FUN_200106d0();
  return;
}

