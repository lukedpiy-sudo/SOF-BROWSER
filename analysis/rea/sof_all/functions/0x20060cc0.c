// rea decompile_all
// name: FUN_20060cc0
// address: 0x20060cc0
// body: available
// range: 0x20060cc0-0x200610a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20060cc0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240 [128];
  undefined1 local_1c0 [64];
  undefined1 local_180 [128];
  char local_100 [256];
  
  Cvar_Set(s_sv_restartlevel_20139cb4,&DAT_2011c4ac);
  Cvar_Set(s_menu_nostats_2011f7e4,&DAT_2011d31c);
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar3 = FUN_20025760(s_current_20121258);
  Com_sprintf(local_240,0x80,s__s_save__s_sof_20139f34,uVar3);
  Com_DPrintf(s_WipeSavegame___s__20139ec8,local_240);
  FUN_200fbc4d(local_240);
  FUN_2005ffb0(param_1,s_current_20121258);
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar3 = FUN_20025760(s_current_20121258);
  Com_sprintf(local_180,0x80,s__s_save__s_sof_20139f34,uVar3);
  DAT_203fecdc = FUN_200faa9a(local_180,&DAT_201311d4);
  if (DAT_203fecdc == 0) {
    Com_Printf(&DAT_20139fe4,s_current_20121258);
  }
  else {
    FUN_200faf40(DAT_203fecdc,0,2);
    iVar4 = FUN_200fade8(DAT_203fecdc);
    FUN_200faf40(DAT_203fecdc,0,0);
    if (iVar4 != 0) {
      FUN_20060490(0x434f4d4d,local_1c0,0x40,0);
      Com_DPrintf(s_Reading___s_2013a188,local_1c0);
      FUN_20060490(0x53484f54,0,0x10000,0);
      FUN_20060490(0x4d50434d,local_100,0x100,0);
      FUN_20060490(0x4356434e,&local_250,4,0);
      iVar4 = 0;
      if (0 < local_250) {
        do {
          FUN_20060490(0x43564152,0,0,&local_244);
          FUN_20060490(0x56414c55,0,0,&local_248);
          FUN_20060490(0x464c4753,&local_24c,4,0);
          uVar1 = local_244;
          uVar3 = local_248;
          Com_DPrintf(s_Set__s____s_2013a15c,local_244,local_248);
          Cvar_Get(uVar1,&DAT_2015ee44,local_24c,0);
          FUN_20022170(uVar1,uVar3);
          Z_Free(uVar1);
          Z_Free(uVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_250);
      }
      FUN_2005db20();
      iVar4 = 0;
      do {
        cVar2 = local_100[iVar4];
        (&DAT_20396de8)[iVar4] = cVar2;
        iVar4 = iVar4 + 1;
      } while (cVar2 != '\0');
      cVar2 = (**(code **)(DAT_20396dd8 + 0x14))(0);
      DAT_203a1f20 = 0;
      FUN_2005df20(0,&DAT_20396de8,1);
      FUN_20057c00();
      if (cVar2 == '\0') {
        FUN_20060490(0x46524e4d,&DAT_203a1f30,4,0);
        DAT_203a1f28 = DAT_203a1f30 * 100;
        FUN_20060490(0x43465354,&DAT_203a2374,0x378c0,0);
        FUN_2001c1d0();
        (**(code **)(DAT_20396dd8 + 0x1c))();
      }
      if (DAT_203fecdc != 0) {
        FUN_200fa9ae(DAT_203fecdc);
        DAT_203fecdc = 0;
      }
      uVar3 = FUN_20025760(s_current_20121258);
      Com_sprintf(local_240,0x80,s__s_save__s_sof_20139f34,uVar3);
      Com_DPrintf(s_WipeSavegame___s__20139ec8,local_240);
      FUN_200fbc4d(local_240);
      Cvar_SetValue(s_paused_2011d4b0,0x3f800000);
      return;
    }
    Com_Printf(&DAT_20139fb0,s_current_20121258);
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    uVar3 = FUN_20025760(s_current_20121258);
    Com_sprintf(local_240,0x80,s__s_save__s_sof_20139f34,uVar3);
    Com_DPrintf(s_WipeSavegame___s__20139ec8,local_240);
    FUN_200fbc4d(local_240);
  }
  Com_Printf(&DAT_2013a198);
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar3 = FUN_20025760(s_current_20121258);
  Com_sprintf(local_240,0x80,s__s_save__s_sof_20139f34,uVar3);
  Com_DPrintf(s_WipeSavegame___s__20139ec8,local_240);
  FUN_200fbc4d(local_240);
  return;
}

