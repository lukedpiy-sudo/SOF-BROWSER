// rea decompile_all
// name: FUN_500f6c70
// address: 0x500f6c70
// body: available
// range: 0x500f6c70-0x500f6d18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f6c70(float *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_5018b3e4 != 0) {
    iVar1 = (&DAT_5018b3c0)[DAT_5018b3e0];
    *(float *)(iVar1 + 4) = *param_1;
    *(float *)(iVar1 + 8) = param_1[1];
    *(float *)(iVar1 + 0xc) = param_1[2];
    *(undefined4 *)((&DAT_5018b3c0)[DAT_5018b3e0] + 0x1bc) = DAT_5015ccdc;
    iVar1 = (&DAT_5018b3c0)[DAT_5018b3e0 - 1 & 7];
    local_c = *param_1 - *(float *)(iVar1 + 4);
    local_8 = param_1[1] - *(float *)(iVar1 + 8);
    local_4 = param_1[2] - *(float *)(iVar1 + 0xc);
    fVar2 = FUN_500c3510(&local_c);
    *(float *)((&DAT_5018b3c0)[DAT_5018b3e0] + 0x14) = (float)fVar2;
    DAT_5018b3e0 = DAT_5018b3e0 + 1 & 7;
  }
  return;
}

