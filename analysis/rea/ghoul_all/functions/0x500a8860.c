// rea decompile_all
// name: FUN_500a8860
// address: 0x500a8860
// body: available
// range: 0x500a8860-0x500a898a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a8860(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  void *this;
  void *this_00;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    if (*(char *)(param_1 + 0x1b8) < '\0') {
      switch(*(undefined4 *)(param_2 + 0x424)) {
      default:
        *(undefined4 *)(param_1 + 600) = 0;
        (*DAT_5015cb28)(param_1);
        return;
      case 2:
        *(undefined4 *)(param_1 + 600) = 0x42200000;
        (*DAT_5015cb28)(param_1);
        return;
      case 3:
        *(undefined4 *)(param_1 + 600) = 0xc2200000;
        (*DAT_5015cb28)(param_1);
        return;
      }
    }
    uVar1 = (*DAT_5015c9f4)(s_Ambient_Models_Valve_ValveTurn_w_5014b9d0,0x3f19999a,0x3f800000,0,0);
    (*DAT_5015ca48)(param_1,2,uVar1);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    this = (void *)FUN_500a5e10(&DAT_5015c79c,uVar2);
    if (((this != (void *)0x0) &&
        (uVar2 = FUN_500a5230(this,PTR_s_valve_5014b6c4), (short)uVar2 != 0)) &&
       (this_00 = (void *)FUN_500a51d0(this,*(uint *)(param_1 + 0x164)), this_00 != (void *)0x0)) {
      FUN_500a42d0(this_00,uVar2,DAT_5015ccdc,0,1,0,0,0);
      uVar1 = (**(code **)(**(int **)((int)this + 0x24) + 0x30))(&DAT_5012fe04);
      if ((short)uVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015c7b0,uVar1);
      }
    }
  }
  return;
}

