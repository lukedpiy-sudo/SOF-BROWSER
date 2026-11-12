// rea decompile_all
// name: FUN_500f6c20
// address: 0x500f6c20
// body: available
// range: 0x500f6c20-0x500f6c66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500f6c20(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 == 0) {
    puVar3 = &DAT_5018b3c0;
    do {
      piVar2 = FUN_500c3690();
      *puVar3 = piVar2;
      puVar3 = puVar3 + 1;
      piVar2[0x6d] = (int)s_player_trail_50154660;
    } while ((int)puVar3 < 0x5018b3e0);
    DAT_5018b3e0 = 0;
    DAT_5018b3e4 = 1;
  }
  return;
}

