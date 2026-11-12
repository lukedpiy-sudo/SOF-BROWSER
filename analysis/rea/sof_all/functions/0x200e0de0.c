// rea decompile_all
// name: FUN_200e0de0
// address: 0x200e0de0
// body: available
// range: 0x200e0de0-0x200e0e78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200e0de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_80 [128];
  
  uVar2 = Cvar_Get(param_1,&DAT_2015ee44,0,0);
  if (*(float *)(uVar2 + 0x18) != 0.0) {
    (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
    return 0;
  }
  Com_sprintf(local_80,0x80,s__s_info_20159020,param_1);
  cVar1 = FUN_200e0590(local_80,*(undefined4 *)(in_ECX + 4),param_3);
  return -(uint)(cVar1 != '\0') & uVar2;
}

