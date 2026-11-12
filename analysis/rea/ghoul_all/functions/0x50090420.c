// rea decompile_all
// name: FUN_50090420
// address: 0x50090420
// body: available
// range: 0x50090420-0x5009057b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50090420(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  piVar3 = FUN_500c3690();
  piVar3[0xb0] = (int)&LAB_50090360;
  piVar3[0x67] = 0;
  piVar3[0x56] = 1;
  piVar3[0xc9] = param_1;
  local_c = *(float *)(param_1 + 0x11c) + 25.0;
  fVar1 = *(float *)(param_1 + 0x120) + 25.0;
  local_18 = *(float *)(param_1 + 0x128) - 25.0;
  local_14 = *(float *)(param_1 + 300) - 25.0;
  local_10 = *(float *)(param_1 + 0x130) + 8.0;
  fVar2 = local_10 -
          ((*(float *)(param_1 + 0x23c) - *(float *)(param_1 + 0x248)) + (float)DAT_5015cbcc);
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    local_10 = fVar2 + 8.0;
  }
  if (local_18 - local_c < 0.0 != (local_18 - local_c == 0.0)) {
    local_c = (*(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x11c)) * 0.5;
    local_18 = local_c + 1.0;
  }
  if (local_14 - fVar1 < 0.0 != (local_14 - fVar1 == 0.0)) {
    fVar1 = (*(float *)(param_1 + 300) + *(float *)(param_1 + 0x120)) * 0.5;
    local_14 = fVar1 + 1.0;
  }
  piVar3[0x48] = (int)fVar1;
  piVar3[0x47] = (int)local_c;
  piVar3[0x49] = (int)fVar2;
  piVar3[0x4a] = (int)local_18;
  piVar3[0x4b] = (int)local_14;
  piVar3[0x4c] = (int)local_10;
                    /* WARNING: Could not recover jumptable at 0x50090576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015cb28)();
  return;
}

