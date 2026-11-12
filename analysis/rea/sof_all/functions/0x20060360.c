// rea decompile_all
// name: FUN_20060360
// address: 0x20060360
// body: available
// range: 0x20060360-0x20060485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20060360(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar1 = FUN_20025760(param_1);
  Com_sprintf(local_80,0x80,s__s_save__s_sof_20139f34,uVar1);
  DAT_203fecdc = FUN_200faa9a(local_80,&DAT_201311d4);
  if (DAT_203fecdc == 0) {
    Com_Printf(&DAT_20139fe4,param_1);
    return 0;
  }
  FUN_200faf40(DAT_203fecdc,0,2);
  iVar2 = FUN_200fade8(DAT_203fecdc);
  FUN_200faf40(DAT_203fecdc,0,0);
  if (iVar2 == 0) {
    Com_Printf(&DAT_20139fb0,param_1);
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    uVar1 = FUN_20025760(param_1);
    Com_sprintf(local_100,0x80,s__s_save__s_sof_20139f34,uVar1);
    Com_DPrintf(s_WipeSavegame___s__20139ec8,local_100);
    FUN_200fbc4d(local_100);
    return 0;
  }
  return 1;
}

