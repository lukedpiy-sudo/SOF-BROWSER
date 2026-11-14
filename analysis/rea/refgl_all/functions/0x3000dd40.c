// rea decompile_all
// name: FUN_3000dd40
// address: 0x3000dd40
// body: available
// range: 0x3000dd40-0x3000dda8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_3000dd40(double param_1,double param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)fptan((float10)param_1 * (float10)0.008726646259971648);
  fVar1 = fVar1 * (float10)(double)CONCAT44(param_4,param_3);
  (*DAT_300a4760)((double)-fVar1 * param_2,(double)(fVar1 * (float10)param_2),(double)-fVar1,
                  (double)fVar1,param_3,param_4,param_5,param_6);
  return;
}

