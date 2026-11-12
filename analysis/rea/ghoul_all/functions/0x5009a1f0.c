// rea decompile_all
// name: FUN_5009a1f0
// address: 0x5009a1f0
// body: available
// range: 0x5009a1f0-0x5009a25d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009a1f0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pvVar2 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar1);
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_500a5230(pvVar2,PTR_s_flag_pole_5014867c);
      if ((short)uVar1 != 0) {
        pvVar2 = (void *)FUN_500a51d0(pvVar2,*(uint *)(param_1 + 0x164));
        if (pvVar2 != (void *)0x0) {
          FUN_500a42d0(pvVar2,uVar1,DAT_5015ccdc,0,1,0,0,0);
        }
      }
    }
  }
  return;
}

