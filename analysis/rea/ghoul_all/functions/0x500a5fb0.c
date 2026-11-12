// rea decompile_all
// name: FUN_500a5fb0
// address: 0x500a5fb0
// body: available
// range: 0x500a5fb0-0x500a6033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_500a5fb0(void *param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((((param_3 == (undefined4 *)0x0) || ((short)param_2 == 0)) || ((short)param_4 == 0)) ||
     ((short)param_5 == 0)) {
    (*DAT_5015ca24)(s_Unable_to_add_bolt_on__5014b358);
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_500a4020(param_1,param_2,param_3,param_4,param_6,param_7);
  uVar1 = DAT_5015ccdc;
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(short *)((int)puVar2 + 0x22) = (short)param_5;
  if ((int *)puVar2[7] == (int *)0x0) {
    return puVar2;
  }
  (**(code **)(*(int *)puVar2[7] + 0x44))(param_5,uVar1,0,1,0,0,0);
  return puVar2;
}

