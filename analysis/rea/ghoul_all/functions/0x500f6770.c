// rea decompile_all
// name: FUN_500f6770
// address: 0x500f6770
// body: available
// range: 0x500f6770-0x500f67e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f6770(int param_1)

{
  int iVar1;
  
  if (_DAT_5015d1c8 == 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x474) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x470) = 0;
    iVar1 = *(int *)(param_1 + 0x74);
    if (DAT_5015ccdc < *(float *)(iVar1 + 0x568)) {
      *(float *)(iVar1 + 0x568) = DAT_5015ccdc;
      return;
    }
    *(float *)(iVar1 + 0x568) = DAT_5015ccdc + 30.0;
    (**(code **)(*DAT_5015c4d8 + 0xb8))(param_1);
  }
  return;
}

