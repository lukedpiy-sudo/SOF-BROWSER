// rea decompile_all
// name: FUN_500a6040
// address: 0x500a6040
// body: available
// range: 0x500a6040-0x500a608a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_500a6040(void *param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6)

{
  undefined4 *puVar1;
  
  if (((param_3 != (undefined4 *)0x0) && ((short)param_2 != 0)) && ((short)param_4 != 0)) {
    puVar1 = FUN_500a4020(param_1,param_2,param_3,param_4,param_5,param_6);
    return puVar1;
  }
  (*DAT_5015ca24)(s_Unable_to_add_bolt_on__5014b358);
  return (undefined4 *)0x0;
}

