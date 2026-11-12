// rea decompile_all
// name: FUN_5001ad10
// address: 0x5001ad10
// body: available
// range: 0x5001ad10-0x5001af45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001ad10(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0xfffff7ff;
  (**(code **)(*(int *)this + 0x144))(param_1);
  (**(code **)(*(int *)this + 0x148))(param_1);
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x1c))(s_quake_origin_5012fe84);
  if ((short)uVar2 == 0) {
    (*DAT_5015ca24)(s_WARNING__monster_origin_not_foun_5012fe58);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x164) + 100))(&DAT_50159058,uVar2,1);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x1c))(s_quake_ground_5012f83c);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 100))(&DAT_50159074,uVar2,5);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x1c))(s_GBOLT_HEAD_5012fe4c);
  if ((short)uVar2 == 0) {
    (*DAT_5015ca24)(s_WARNING__monster_mouth_not_found_5012fe0c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x164) + 100))(&DAT_50159050,uVar2,5);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_5012fe08);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_50159070,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_5012fe04);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015906c,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_50130630);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015907c,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_50130628);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_50159088,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_50130620);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_50159068,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(s_inair_50130618);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015905c,uVar2);
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar2 = (**(code **)(*piVar1 + 0x30))(&DAT_5012fdfc);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015904c,uVar2);
  }
  return;
}

