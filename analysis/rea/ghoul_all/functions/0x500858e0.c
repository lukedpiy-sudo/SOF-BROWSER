// rea decompile_all
// name: FUN_500858e0
// address: 0x500858e0
// body: available
// range: 0x500858e0-0x50085918 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500858e0(int *param_1,undefined4 param_2)

{
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
  
  FUN_500b5010((float)param_1,(float)(param_1 + 1),1.4013e-45,1,unaff_EDI,unaff_ESI,unaff_retaddr,
               (float)param_1);
  FUN_50083d50(param_1 + 1,1,0);
  FUN_500b3420(param_1,param_2,param_2);
  return;
}

