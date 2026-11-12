// rea decompile_all
// name: FUN_20055980
// address: 0x20055980
// body: available
// range: 0x20055980-0x20055a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_20055980(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint local_118 [3];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  if (DAT_20390d3c == -1) {
    return (undefined *)0x0;
  }
  iVar1 = FUN_200fba01(DAT_20390d3c,local_118);
  if (iVar1 == -1) {
    return (undefined *)0x0;
  }
  if (((param_2 & local_118[0]) == 0) && ((local_118[0] & param_1) == param_1)) {
    Com_sprintf(&DAT_20390c38,0x80,s__s__s_2011f104,&DAT_20390cb8,local_104);
    if (param_3 != (undefined4 *)0x0) {
      param_3[2] = local_108;
      *param_3 = &DAT_20390c38;
      param_3[1] = local_118[0];
      param_3[3] = local_10c;
    }
    return &DAT_20390c38;
  }
  puVar2 = (undefined *)FUN_20055980(param_1,param_2,param_3);
  return puVar2;
}

