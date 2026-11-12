// rea decompile_all
// name: FUN_200610b0
// address: 0x200610b0
// body: available
// range: 0x200610b0-0x20061232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200610b0(undefined4 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char local_140 [64];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  pcVar2 = s_Invalid_savegame__2013a1b4;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_2 + -0x2013a1b4] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar3 = FUN_20025760(param_1);
  Com_sprintf(local_80,0x80,s__s_save__s_sof_20139f34,uVar3);
  DAT_203fecdc = FUN_200faa9a(local_80,&DAT_201311d4);
  if (DAT_203fecdc == 0) {
    Com_Printf(&DAT_20139fe4,param_1);
    return;
  }
  FUN_200faf40(DAT_203fecdc,0,2);
  iVar4 = FUN_200fade8(DAT_203fecdc);
  FUN_200faf40(DAT_203fecdc,0,0);
  if (iVar4 == 0) {
    Com_Printf(&DAT_20139fb0,param_1);
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    uVar3 = FUN_20025760(param_1);
    Com_sprintf(local_100,0x80,s__s_save__s_sof_20139f34,uVar3);
    Com_DPrintf(s_WipeSavegame___s__20139ec8,local_100);
    FUN_200fbc4d(local_100);
    return;
  }
  FUN_20060490(0x434f4d4d,local_140,0x40,0);
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  pcVar2 = local_140;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_2 - (int)local_140] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}

