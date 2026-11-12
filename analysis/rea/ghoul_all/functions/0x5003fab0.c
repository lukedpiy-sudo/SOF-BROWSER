// rea decompile_all
// name: FUN_5003fab0
// address: 0x5003fab0
// body: available
// range: 0x5003fab0-0x5003fb19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5003fab0(void *this,undefined4 param_1,float param_2)

{
  undefined4 *extraout_ECX;
  
  FUN_5003a050(this,0,param_1,param_2);
  *extraout_ECX = &PTR_LAB_50127ec0;
  extraout_ECX[4] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = DAT_5015ccdc;
  extraout_ECX[0x2a] = DAT_5015ccdc;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2e] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x30] = 0;
  extraout_ECX[0x31] = 0;
  return extraout_ECX;
}

