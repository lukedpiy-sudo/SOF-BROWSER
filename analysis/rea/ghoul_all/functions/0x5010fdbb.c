// rea decompile_all
// name: FUN_5010fdbb
// address: 0x5010fdbb
// body: available
// range: 0x5010fdbb-0x5010fde7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5010fdbb(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_501107eb(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_5010fd78(local_10,param_1);
  return;
}

