// rea decompile_all
// name: FUN_500c1a20
// address: 0x500c1a20
// body: available
// range: 0x500c1a20-0x500c1a8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c1a20(int param_1)

{
  FUN_5008c850(param_1);
  if (*(int *)(param_1 + 0x2ec) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = 0x80;
  }
  *(code **)(param_1 + 0x2c4) = FUN_500c19d0;
  *(char **)(param_1 + 0x1b4) = s_trigger_sound_5014cf30;
  FUN_500b20e0(&DAT_5015d9c0,(param_1 - DAT_5015cca0) / 0x464);
  *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) * *(int *)(param_1 + 0x2ec);
  return;
}

