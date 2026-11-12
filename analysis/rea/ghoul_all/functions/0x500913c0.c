// rea decompile_all
// name: FUN_500913c0
// address: 0x500913c0
// body: available
// range: 0x500913c0-0x5009145f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500913c0(int param_1,int *param_2)

{
  if (((*(byte *)(param_2 + 0x46) & 4) == 0) && (param_2[0x1d] == 0)) {
    FUN_5008bb10((float)param_2,param_1,(float)param_1,(float *)&DAT_5018bf0c,(float *)(param_2 + 1)
                 ,(float *)(param_2 + 1),100000,1,0x8008,0x16,0,0);
    thunk_FUN_500c3880(param_2);
    return;
  }
  if ((*(float *)(param_1 + 0x2d4) <= DAT_5015ccdc) && (*(int *)(param_1 + 0x310) != 0)) {
    *(float *)(param_1 + 0x2d4) = DAT_5015ccdc + 0.5;
    FUN_5008bb10((float)param_2,param_1,(float)param_1,(float *)&DAT_5018bf0c,(float *)(param_2 + 1)
                 ,(float *)(param_2 + 1),*(int *)(param_1 + 0x310),1,0x8008,0x16,0,0);
  }
  return;
}

