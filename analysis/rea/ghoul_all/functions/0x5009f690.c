// rea decompile_all
// name: FUN_5009f690
// address: 0x5009f690
// body: available
// range: 0x5009f690-0x5009f6ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009f690(int *param_1,undefined4 param_2,int param_3)

{
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  FUN_500b5010((float)param_1,(float)(param_1 + 1),1.4013e-45,1,unaff_EDI,unaff_ESI,unaff_retaddr,
               (float)param_1);
  FUN_500b33e0((byte)param_2,param_1,param_2,param_3);
  return;
}

