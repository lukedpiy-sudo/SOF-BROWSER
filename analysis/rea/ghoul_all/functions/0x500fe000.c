// rea decompile_all
// name: FUN_500fe000
// address: 0x500fe000
// body: available
// range: 0x500fe000-0x500fe040 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500fe000(int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 - (int)param_2;
  iVar2 = param_3 - (int)param_2;
  iVar4 = 3;
  do {
    fVar1 = *(float *)(iVar3 + (int)param_2);
    if (fVar1 < *param_2) {
      *param_2 = fVar1;
    }
    if (*(float *)(iVar2 + (int)param_2) < fVar1) {
      *(float *)(iVar2 + (int)param_2) = fVar1;
    }
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

