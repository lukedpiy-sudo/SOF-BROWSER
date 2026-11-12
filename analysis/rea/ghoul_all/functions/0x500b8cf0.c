// rea decompile_all
// name: FUN_500b8cf0
// address: 0x500b8cf0
// body: available
// range: 0x500b8cf0-0x500b8d6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b8cf0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  if (param_2 == 0) {
    fVar2 = *(float *)(param_1 + 0x28c) * 0.01;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x284) * 12.0;
  }
  pfVar3 = (float *)(param_1 + 600);
  iVar4 = 3;
  do {
    if (*pfVar3 <= 0.0) {
      fVar1 = *pfVar3;
      *pfVar3 = fVar2 + fVar1;
      if (0.0 < fVar2 + fVar1) goto LAB_500b8d5c;
    }
    else {
      fVar1 = *pfVar3;
      *pfVar3 = fVar1 - fVar2;
      if (fVar1 - fVar2 < 0.0) {
LAB_500b8d5c:
        *pfVar3 = 0.0;
      }
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

