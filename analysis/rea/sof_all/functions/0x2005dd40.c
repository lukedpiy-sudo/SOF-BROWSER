// rea decompile_all
// name: FUN_2005dd40
// address: 0x2005dd40
// body: available
// range: 0x2005dd40-0x2005df10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2005dd40(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int local_40c;
  int local_408;
  int local_404;
  char local_400 [256];
  char local_300 [512];
  char local_100 [256];
  
  if (**(char **)(DAT_203fec7c + 4) == '\0') {
    return 0;
  }
  uVar2 = FUN_20055450(s_maplists__s_lst_2013985c,*(char **)(DAT_203fec7c + 4),&local_408,0);
  iVar3 = FS_LoadFile(uVar2);
  if (iVar3 == -1) {
    Com_Error(1,s___________________________Could_n_20139810,*(undefined4 *)(DAT_203fec7c + 4));
    return 0;
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    cVar1 = (&DAT_2015ee44)[iVar4];
    local_300[iVar4] = cVar1;
    iVar4 = iVar4 + 1;
    local_40c = local_408;
  } while (cVar1 != '\0');
  while (local_40c != 0) {
    pcVar5 = (char *)FUN_20055470(&local_40c);
    pcVar8 = local_400;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)FUN_20055470(&local_40c);
    pcVar8 = local_100;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar8 = local_400;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 - 1 != 0) {
      iVar4 = -1;
      pcVar8 = local_100;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        uVar2 = FUN_20055450(s_maps__s_bsp_20139784,local_400,&local_404,0);
        FS_FOpenFile(uVar2);
        if (local_404 == 0) {
          Com_Printf(s_WARNING__Could_not_find_map__s_b_201397ec,local_400);
        }
        else {
          FS_FCloseFile(local_404);
          uVar7 = 0xffffffff;
          pcVar8 = local_300;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (0x1ff < ~uVar7 + (~uVar6 - 1)) break;
          iVar4 = -1;
          pcVar8 = local_300;
          do {
            pcVar5 = pcVar8;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar5 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar5;
          } while (cVar1 != '\0');
          uVar6 = 0xffffffff;
          *(undefined2 *)(pcVar5 + -1) = DAT_20136484;
          pcVar8 = local_400;
          do {
            pcVar5 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar5 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar5;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar4 = -1;
          pcVar8 = local_300;
          do {
            pcVar9 = pcVar8;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar9 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar9;
          } while (cVar1 != '\0');
          pcVar8 = pcVar5 + -uVar6;
          pcVar5 = pcVar9 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar5 = pcVar5 + 4;
          }
          iVar3 = iVar3 + 1;
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar5 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar5 = pcVar5 + 1;
          }
        }
      }
    }
  }
  FS_FreeFile(local_408);
  Cvar_Set(s_sv_maplist_201397e0,local_300);
  return iVar3;
}

