// rea decompile_all
// name: FUN_50052050
// address: 0x50052050
// body: available
// range: 0x50052050-0x5005210b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_50052050(float param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_2 == (int *)0x0) &&
     (param_2 = FUN_5005e730(&DAT_50159a60,param_1), param_2 == (int *)0x0)) {
    param_2 = FUN_5005e7e0(&DAT_50159a60,param_1);
    if (param_2 == (int *)0x0) {
      (*DAT_5015cab0)(0,0xc17,*(int *)((int)param_1 + 0x74) + 0x2cc);
      return (int *)0x0;
    }
    *(int **)(*(int *)((int)param_1 + 0x45c) + 0x3d4) = param_2;
  }
  else {
    pfVar1 = (float *)param_2[1];
    fVar2 = *(float *)((int)param_1 + 4) - *pfVar1;
    fVar4 = *(float *)((int)param_1 + 8) - pfVar1[1];
    fVar3 = *(float *)((int)param_1 + 0xc) - pfVar1[2];
    *(int **)(*(int *)((int)param_1 + 0x45c) + 0x3d4) = param_2;
    if (fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 <= 262144.0) {
      return param_2;
    }
  }
  *(int *)(*(int *)((int)param_1 + 0x45c) + 0x4c) = param_2[1];
  FUN_50061fb0(&DAT_50159a60,(int)param_1);
  return param_2;
}

