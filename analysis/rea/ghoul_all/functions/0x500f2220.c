// rea decompile_all
// name: FUN_500f2220
// address: 0x500f2220
// body: available
// range: 0x500f2220-0x500f22d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f2220(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *this;
  int *piVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) {
    iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar2 != 0) {
      iVar2 = **(int **)(*(int *)(param_1 + 0x74) + 0x34c);
      iVar3 = (**(code **)(iVar2 + 0x80))();
      (**(code **)(iVar2 + 0x50))(-iVar3);
      if (*(int **)(param_1 + 0x164) != (int *)0x0) {
        this = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar1 = (**(code **)(*piVar4 + 0x1c))(s_wbolt_hand_r_5012fedc);
        if (sVar1 != 0) {
          FUN_500a3e10(this,sVar1);
        }
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar1 = (**(code **)(*piVar4 + 0x1c))(s_wbolt_hand_l_5012feec);
        if (sVar1 != 0) {
          FUN_500a3e10(this,sVar1);
        }
      }
    }
  }
  return;
}

