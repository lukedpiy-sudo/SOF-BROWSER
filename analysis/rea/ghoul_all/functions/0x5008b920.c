// rea decompile_all
// name: FUN_5008b920
// address: 0x5008b920
// body: available
// range: 0x5008b920-0x5008bb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008b920(int param_1,int param_2,byte param_3,float param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((((*(uint *)(param_1 + 0x1a0) & 0x800) == 0) && ((param_3 & 8) == 0)) && (param_4 != 0.0)) {
    if ((-1 < (char)param_3) && (param_2 != 0)) {
      iVar1 = *(int *)(param_1 + 0x74);
      local_18 = *(float *)(param_2 + 4) - *(float *)(iVar1 + 0x4a0);
      local_14 = *(float *)(param_2 + 8) - *(float *)(iVar1 + 0x4a4);
      local_10 = *(float *)(param_2 + 0xc) - *(float *)(iVar1 + 0x4a8);
      FUN_500fe050(&local_18);
      fVar2 = (param_4 * 250.0) / (float)*(int *)(param_1 + 0x27c);
      fVar3 = fVar2 * local_10 * 0.25;
      *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) - local_18 * fVar2;
      *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) - local_14 * fVar2;
      *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) - fVar3;
      *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x264) - local_18 * fVar2;
      *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) - local_14 * fVar2;
      *(float *)(param_1 + 0x26c) = *(float *)(param_1 + 0x26c) - fVar3;
      return;
    }
    local_c = *param_5;
    local_8 = param_5[1];
    local_4 = param_5[2] * 0.1;
    FUN_500fe050(&local_c);
    fVar2 = (param_4 * 1000.0) / (float)*(int *)(param_1 + 0x27c);
    *(float *)(param_1 + 0x24c) = local_c * fVar2 + *(float *)(param_1 + 0x24c);
    *(float *)(param_1 + 0x250) = local_8 * fVar2 + *(float *)(param_1 + 0x250);
    *(float *)(param_1 + 0x254) = fVar2 * local_4 + *(float *)(param_1 + 0x254);
    if (200.0 < *(float *)(param_1 + 0x254)) {
      *(undefined4 *)(param_1 + 0x254) = 0x43480000;
    }
    *(float *)(*(int *)(param_1 + 0x74) + 0x5fc) =
         (param_4 / (float)*(int *)(param_1 + 0x27c)) * 0.75 + DAT_5015ccdc + 0.5;
  }
  return;
}

