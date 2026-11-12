// rea decompile_all
// name: FUN_20055a40
// address: 0x20055a40
// body: available
// range: 0x20055a40-0x20055ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_20055a40(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  uint local_230 [3];
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c [260];
  uint local_118 [3];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  if (DAT_20390d3c != 0) {
    Sys_Error(s_Sys_BeginFind_without_close_201380cc);
  }
  DAT_20390d3c = 0;
  FUN_20055340(param_1,&DAT_20390cb8);
  DAT_20390d3c = FUN_200fb937(param_1,local_118);
  if (DAT_20390d3c == -1) {
    return (undefined *)0x0;
  }
  if (((param_3 & local_118[0]) == 0) && ((local_118[0] & param_2) == param_2)) {
    Com_sprintf(&DAT_20390c38,0x80,s__s__s_2011f104,&DAT_20390cb8,local_104);
    if (param_4 == (undefined4 *)0x0) {
      return &DAT_20390c38;
    }
    param_4[2] = local_108;
    local_224 = local_10c;
    local_230[0] = local_118[0];
  }
  else {
    iVar1 = FUN_200fba01(DAT_20390d3c,local_230);
    if (iVar1 == -1) {
      return (undefined *)0x0;
    }
    if (((param_3 & local_230[0]) != 0) || ((local_230[0] & param_2) != param_2)) {
      puVar2 = (undefined *)FUN_20055980(param_2,param_3,param_4);
      return puVar2;
    }
    Com_sprintf(&DAT_20390c38,0x80,s__s__s_2011f104,&DAT_20390cb8,local_21c);
    if (param_4 == (undefined4 *)0x0) {
      return &DAT_20390c38;
    }
    param_4[2] = local_220;
  }
  param_4[3] = local_224;
  *param_4 = &DAT_20390c38;
  param_4[1] = local_230[0];
  return &DAT_20390c38;
}

