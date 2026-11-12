// rea decompile_all
// name: FUN_5008fad0
// address: 0x5008fad0
// body: available
// range: 0x5008fad0-0x5008fcaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008fad0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x424) == 2) {
    local_18 = *(float *)(param_1 + 0x3f8) - *(float *)(param_1 + 0x10);
    local_14 = *(float *)(param_1 + 0x3fc) - *(float *)(param_1 + 0x14);
    local_10 = *(float *)(param_1 + 0x400);
  }
  else {
    local_18 = *(float *)(param_1 + 0x3e0) - *(float *)(param_1 + 0x10);
    local_14 = *(float *)(param_1 + 0x3e4) - *(float *)(param_1 + 0x14);
    local_10 = *(float *)(param_1 + 1000);
  }
  local_10 = local_10 - *(float *)(param_1 + 0x18);
  fVar2 = FUN_500fe130(&local_18);
  fVar2 = fVar2 / (float10)*(float *)(param_1 + 0x414);
  fVar1 = (float)fVar2;
  if ((float10)0.1 <= fVar2) {
    fVar3 = FUN_5010777b((double)(fVar1 * 10.0));
    fVar1 = 1.0 / fVar1;
    *(float *)(param_1 + 600) = local_18 * fVar1;
    *(float *)(param_1 + 0x25c) = local_14 * fVar1;
    *(float *)(param_1 + 0x260) = local_10 * fVar1;
    fVar2 = (float10)DAT_5015ccdc;
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008f9d0;
    *(float *)(param_1 + 0x2b4) = (float)(fVar3 * (float10)0.1 + fVar2);
  }
  else {
    if (*(int *)(param_1 + 0x424) == 2) {
      fVar1 = *(float *)(param_1 + 0x3f8) - *(float *)(param_1 + 0x10);
      local_8 = *(float *)(param_1 + 0x3fc) - *(float *)(param_1 + 0x14);
      local_4 = *(float *)(param_1 + 0x400);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x3e0) - *(float *)(param_1 + 0x10);
      local_8 = *(float *)(param_1 + 0x3e4) - *(float *)(param_1 + 0x14);
      local_4 = *(float *)(param_1 + 1000);
    }
    local_4 = local_4 - *(float *)(param_1 + 0x18);
    if (((fVar1 != DAT_5018bf0c) || (local_8 != DAT_5018bf10)) || (local_4 != DAT_5018bf14)) {
      *(float *)(param_1 + 600) = fVar1 * 10.0;
      *(float *)(param_1 + 0x25c) = local_8 * 10.0;
      *(float *)(param_1 + 0x260) = local_4 * 10.0;
      *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008f9a0;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      return;
    }
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0;
    if (*(code **)(param_1 + 0x448) != (code *)0x0) {
      (**(code **)(param_1 + 0x448))();
      return;
    }
  }
  return;
}

