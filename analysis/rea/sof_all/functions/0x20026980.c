// rea decompile_all
// name: FUN_20026980
// address: 0x20026980
// body: available
// range: 0x20026980-0x20026c2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20026980(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  char local_80 [128];
  
  Cmd_AddCommand(&DAT_20131418,&LAB_200262b0);
  Cmd_AddCommand(&DAT_20131410,&LAB_20025950);
  Cmd_AddCommand(&DAT_2013140c,FUN_20026060);
  iVar2 = FUN_2001e950(s__basedir_20131400);
  if (iVar2 == 0) {
    DAT_2026ab00 = Cvar_Get(s__basedir_20131400 + 1,&DAT_2011f148,8,0);
  }
  else {
    pcVar3 = (char *)FUN_2001e9c0(iVar2 + 1);
    pcVar7 = local_80;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_200251c0(local_80);
    DAT_2026ab00 = Cvar_Get(s__basedir_20131400 + 1,local_80,8,0);
  }
  pcVar3 = local_80;
  iVar2 = FUN_2001e950(&DAT_201313f8);
  if (iVar2 == 0) {
    DAT_2026ab0c = Cvar_Get(s_cddir_201313f9,&DAT_2015ee44,8,0);
  }
  else {
    pcVar7 = (char *)FUN_2001e9c0(iVar2 + 1);
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_200251c0(local_80);
    DAT_2026ab0c = Cvar_Get(s_cddir_201313f9,local_80,8,0);
  }
  pcVar3 = local_80;
  pcVar7 = local_80;
  iVar2 = FUN_2001e950(s__game_201313f0);
  if (iVar2 == 0) {
    DAT_2026ab10 = Cvar_Get(s__game_201313f0 + 1,&DAT_2015ee44,0x14,0);
  }
  else {
    pcVar4 = (char *)FUN_2001e9c0(iVar2 + 1);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_200251c0(local_80);
    DAT_2026ab10 = Cvar_Get(s__game_201313f0 + 1,local_80,0x14,0);
  }
  iVar2 = FUN_2001e950(s__user_201313e8);
  if (iVar2 == 0) {
    DAT_2026aa74 = Cvar_Get(s__user_201313e8 + 1,s___user_201313e0,0xc,0);
  }
  else {
    pcVar3 = (char *)FUN_2001e9c0(iVar2 + 1);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_200251c0(local_80);
    DAT_2026aa74 = Cvar_Get(s__user_201313e8 + 1,local_80,0xc,0);
  }
  if (**(char **)(DAT_2026ab0c + 4) != '\0') {
    uVar5 = FUN_20055450(s__s_base_201313d8,*(char **)(DAT_2026ab0c + 4));
    FUN_20025540(uVar5);
  }
  uVar5 = FUN_20055450(s__s_base_201313d8,*(undefined4 *)(DAT_2026ab00 + 4));
  FUN_20025540(uVar5);
  DAT_2026a9f8 = DAT_2026aa78;
  if (**(char **)(DAT_2026ab10 + 4) != '\0') {
    FUN_200257e0(*(char **)(DAT_2026ab10 + 4));
  }
  FUN_20025540(*(undefined4 *)(DAT_2026aa74 + 4));
  DAT_2026ab08 = Cvar_Get(s_fs_createpak_201313c8,&DAT_2011c4ac,0,0);
  DAT_204058a4 = &LAB_20026440;
  DAT_204058a8 = &LAB_20026680;
  DAT_204058b8 = FUN_20026950;
  DAT_204058ac = &LAB_200268d0;
  DAT_204058b0 = &LAB_20026910;
  DAT_204058b4 = &LAB_20026930;
  piVar6 = (int *)FUN_20069630(0,0);
  (**(code **)(*piVar6 + 0x2c))(&LAB_200263e0);
  return;
}

