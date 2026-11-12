// rea decompile_all
// name: FUN_2000e360
// address: 0x2000e360
// body: available
// range: 0x2000e360-0x2000e5c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000e360(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool local_1;
  
  pcVar8 = param_1;
  for (iVar7 = 0x57; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  iVar7 = -1;
  pcVar8 = param_2;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  if (iVar7 == -2) {
    return;
  }
  iVar7 = FUN_200faaf0(param_2,0x5c);
  if (iVar7 != 0) {
    _strncpy(param_1,param_2,iVar7 - (int)param_2);
    param_2 = (char *)(iVar7 + 1);
  }
  cVar3 = *param_2;
  if (cVar3 == '*') {
    param_2 = param_2 + 1;
  }
  bVar4 = cVar3 != '*';
  iVar7 = FUN_200faaf0(param_2,0x5c);
  if (iVar7 != 0) {
    _strncpy(param_1 + 0x40,param_2,iVar7 - (int)param_2);
    param_2 = (char *)(iVar7 + 1);
  }
  cVar3 = *param_2;
  if (cVar3 == '*') {
    param_2 = param_2 + 1;
  }
  local_1 = cVar3 != '*';
  iVar7 = FUN_200faaf0(param_2,0x5c);
  if (iVar7 != 0) {
    _strncpy(param_1 + 0x80,param_2,iVar7 - (int)param_2);
    param_2 = (char *)(iVar7 + 1);
  }
  pcVar8 = param_1 + 0x80;
  param_1[0x14c] = *param_2;
  if ((param_1[0x80] != '\0') && (DAT_201e94c8 != 0)) {
    pcVar1 = param_1 + 0xc0;
    Com_sprintf(pcVar1,0x40,s_ghoul_pmodels_portraits__s_2011eedc,pcVar8);
    iVar7 = (*DAT_20403590)(pcVar1);
    if (iVar7 == 0) {
      *pcVar1 = '\0';
    }
  }
  pcVar1 = param_1 + 0x40;
  if ((param_1[0x40] != '\0') && (DAT_201e94c8 != 0)) {
    iVar7 = __strcmpi(pcVar1,pcVar8);
    pcVar2 = param_1 + 0x100;
    if (iVar7 == 0) {
      pcVar5 = s_ghoul_pmodels_teamicons_noteam_2011eea0;
      do {
        cVar3 = *pcVar5;
        (param_1 + -0x2011eda0)[(int)pcVar5] = cVar3;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
    }
    else {
      Com_sprintf(pcVar2,0x40,s_ghoul_pmodels_teamicons__s_2011eec0,pcVar1);
    }
    iVar7 = (*DAT_20403590)(pcVar2);
    if (iVar7 == 0) {
      *pcVar2 = '\0';
    }
  }
  if (param_3 == 0) {
    return;
  }
  if (local_1) {
LAB_2000e539:
    if (!bVar4) {
      uVar6 = FUN_20021760(&DAT_2011e394,pcVar1);
      uVar6 = FUN_20021760(s_teamname_2011e39c,uVar6);
      uVar6 = FUN_20058110(0x405,uVar6);
      Com_Printf(uVar6);
    }
    if (local_1) goto LAB_2000e59a;
  }
  else {
    if (bVar4) {
      uVar6 = FUN_20021760(&DAT_2011e394,pcVar8);
      uVar6 = FUN_20058110(0x404,uVar6);
      Com_Printf(uVar6);
      goto LAB_2000e539;
    }
    uVar6 = FUN_20021760(s_teamname_2011e39c,pcVar8,pcVar1);
    uVar6 = FUN_20021760(&DAT_2011e394,uVar6);
    uVar6 = FUN_20058110(0x403,uVar6);
    Com_Printf(uVar6);
  }
  *(uint *)(DAT_2022507c + 0xc) = *(uint *)(DAT_2022507c + 0xc) & 0xfffffffd;
  Cvar_Set(&DAT_2011e394,pcVar8);
  *(uint *)(DAT_2022507c + 0xc) = *(uint *)(DAT_2022507c + 0xc) | 2;
LAB_2000e59a:
  if (!bVar4) {
    *(uint *)(DAT_201e7564 + 0xc) = *(uint *)(DAT_201e7564 + 0xc) & 0xfffffffd;
    Cvar_Set(s_teamname_2011e39c,pcVar1);
    *(uint *)(DAT_201e7564 + 0xc) = *(uint *)(DAT_201e7564 + 0xc) | 2;
  }
  return;
}

