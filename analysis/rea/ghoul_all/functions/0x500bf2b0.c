// rea decompile_all
// name: FUN_500bf2b0
// address: 0x500bf2b0
// body: available
// range: 0x500bf2b0-0x500bf300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500bf2b0(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8,float param_9)

{
  float fVar1;
  float unaff_ESI;
  float unaff_retaddr;
  
  fVar1 = *(float *)((int)param_1 + 0x310);
  if (fVar1 != 0.0) {
    FUN_5008c220(param_1,param_3,(float)(int)fVar1,0,5.0,4.62428e-44,0.0,unaff_ESI,unaff_retaddr,
                 fVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    fVar1 = (float)*(int *)((int)param_1 + 0x310);
    FUN_500b1950(param_1,fVar1,fVar1,unaff_ESI,unaff_retaddr,fVar1);
  }
  return;
}

