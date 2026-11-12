// rea decompile_all
// name: FUN_2000fc70
// address: 0x2000fc70
// body: available
// range: 0x2000fc70-0x2000fdf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2000fc70(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_80 [128];
  
  iVar3 = FUN_200fa6a0(param_1,&DAT_2011f220);
  if (iVar3 != 0) {
    Com_Printf(s_Refusing_to_download_a_path_with_2011f1f8);
    return 1;
  }
  if (*param_1 == '\0') {
    return 1;
  }
  iVar3 = FS_LoadFile(param_1,0,0);
  if (iVar3 != -1) {
    return 1;
  }
  iVar3 = (int)&DAT_201ca488 - (int)param_1;
  do {
    cVar2 = *param_1;
    param_1[iVar3] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  FUN_20055310(&DAT_201ca488,&DAT_201ca408);
  cVar2 = DAT_2011f1f4;
  iVar3 = -1;
  pcVar5 = (char *)&DAT_201ca408;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  *(undefined4 *)(pcVar6 + -1) = DAT_2011f1f0;
  pcVar6[3] = cVar2;
  uVar4 = FUN_20025750(&DAT_201ca408);
  Com_sprintf(local_80,0x80,s__s__s_2011f104,uVar4);
  iVar3 = FUN_200faa9a(local_80,&DAT_2011f1ec);
  if (iVar3 == 0) {
    Com_Printf(s_Downloading__s_2011f1bc,&DAT_201ca488);
    FUN_2001cb00(&DAT_201c2400,4);
    uVar4 = FUN_20055450(s_download__s_2011f1b0,&DAT_201ca488);
    FUN_2001cd00(&DAT_201c2400,uVar4);
  }
  else {
    FUN_200faf40(iVar3,0,2);
    uVar4 = FUN_200fade8(iVar3);
    DAT_201ca404 = iVar3;
    Com_Printf(s_Resuming__s_2011f1dc,&DAT_201ca488);
    FUN_2001cb00(&DAT_201c2400,4);
    uVar4 = FUN_20055450(s_download__s__i_2011f1cc,&DAT_201ca488,uVar4);
    FUN_2001cd00(&DAT_201c2400,uVar4);
  }
  DAT_201ca508 = DAT_201ca508 + 1;
  return 0;
}

