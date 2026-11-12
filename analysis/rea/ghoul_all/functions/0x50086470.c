// rea decompile_all
// name: FUN_50086470
// address: 0x50086470
// body: available
// range: 0x50086470-0x5008652c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086470(uint param_1)

{
  int iVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1700000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1900000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1d80000;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  *(undefined4 *)(param_1 + 300) = 0x41900000;
  *(undefined4 *)(param_1 + 0x130) = 0x41d80000;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar2 = s_chunks_red_50146530;
  }
  else if (*(int *)(param_1 + 0x2c) == 2) {
    pcVar2 = s_chunks_tan_5014653c;
  }
  else {
    pcVar2 = s_chunks_5014626c;
  }
  FUN_500b3870(param_1,&PTR_s_objects_bosnia_truck_chunks_501461c8,pcVar2,0);
  iVar1 = *(int *)(param_1 + 0x3bc);
  if (iVar1 == 1) {
    FUN_500b3ce0(param_1,s__DOOR_50146510);
    return;
  }
  if (iVar1 == 2) {
    FUN_500b3ce0(param_1,s__PANEL_50146518);
    return;
  }
  if (iVar1 != 3) {
    FUN_500b3ce0(param_1,s__GRILL_50146528);
    return;
  }
  FUN_500b3ce0(param_1,s__TIRE_50146520);
  return;
}

