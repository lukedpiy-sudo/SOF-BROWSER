// rea decompile_all
// name: FUN_50051060
// address: 0x50051060
// body: available
// range: 0x50051060-0x500510be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50051060(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_50159460 != (float *)0x0) {
    if ((*(int *)(param_1 + 0x45c) != 0) &&
       (fVar1 = *(float *)(param_1 + 4) - *DAT_50159460,
       fVar3 = *(float *)(param_1 + 8) - DAT_50159460[1],
       fVar2 = *(float *)(param_1 + 0xc) - DAT_50159460[2],
       16384.0 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
      *(float **)(*(int *)(param_1 + 0x45c) + 0x4c) = DAT_50159460;
      FUN_50061fb0(&DAT_50159a60,param_1);
    }
  }
  return;
}

