// rea decompile_all
// name: FUN_50105750
// address: 0x50105750
// body: available
// range: 0x50105750-0x501057b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_50105750(int *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8,float param_9)

{
  int iVar1;
  float unaff_ESI;
  float unaff_retaddr;
  
  FUN_5008c220((float)param_1,(float)param_1[0x58],(float)(param_1[0xbb] * 2),(int)param_1,100.0,
               2.24208e-44,5.74252e-42,unaff_ESI,unaff_retaddr,(float)(param_1[0xbb] * 2),param_2,
               param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar1 = param_1[0xbb];
  param_1[0xbb] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_500c3880(param_1);
    return;
  }
  param_1[0xad] = (int)(DAT_5015ccdc + 0.2);
  return;
}

