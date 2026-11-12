// rea decompile_all
// name: FUN_5001c070
// address: 0x5001c070
// body: available
// range: 0x5001c070-0x5001c09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5001c070(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_50011190(param_1);
  *param_1 = &PTR_FUN_50126eb0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = param_1 + 0x12;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

