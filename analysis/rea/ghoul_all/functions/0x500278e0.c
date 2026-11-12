// rea decompile_all
// name: FUN_500278e0
// address: 0x500278e0
// body: available
// range: 0x500278e0-0x500279b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500278e0(void *this,int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
    if (iVar2 != 0) {
      if (param_2 == 0) {
        if (*(int *)((int)this + 0x1a4) == 0) {
          return;
        }
      }
      else if (*(int *)((int)this + 0x1a4) == 0) {
        iVar2 = (**(code **)(*(int *)this + 0xd0))
                          (param_1,s_wbolt_hand_l_5012feec,s_Items_Projectiles_501338d4,
                           s_grenade_501338e8,s_to_wbolt_hand_l_50133630,this_00,0,0x3f800000);
        if (iVar2 == 0) {
          return;
        }
        *(undefined4 *)((int)this + 0x1a4) = 1;
        return;
      }
      if (param_2 == 0) {
        piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar1 = (**(code **)(*piVar3 + 0x1c))(s_wbolt_hand_l_5012feec);
        puVar4 = (undefined4 *)FUN_500a4250(this_00,sVar1);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_500a3f30(this_00,puVar4);
        }
        *(undefined4 *)((int)this + 0x1a4) = 0;
      }
    }
  }
  return;
}

