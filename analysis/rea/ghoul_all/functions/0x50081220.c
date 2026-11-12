// rea decompile_all
// name: FUN_50081220
// address: 0x50081220
// body: available
// range: 0x50081220-0x5008137e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50081220(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = param_1;
  local_c = *(float *)((int)param_1 + 0x3e0) - *(float *)((int)param_1 + 0x10);
  local_8 = *(float *)((int)param_1 + 0x3e4) - *(float *)((int)param_1 + 0x14);
  local_4 = *(float *)((int)param_1 + 1000) - *(float *)((int)param_1 + 0x18);
  fVar4 = (float10)FUN_500fe050(&local_c);
  if (*(float *)((int)param_1 + 0x414) < 0.0 == (*(float *)((int)param_1 + 0x414) == 0.0)) {
    fVar5 = FUN_5010777b((double)(((float)fVar4 / *(float *)((int)param_1 + 0x414)) * 10.0));
    fVar1 = ((float)fVar4 / (float)(fVar5 + (float10)1.0)) * 10.0;
    *(float *)((int)param_1 + 600) = local_c * fVar1;
    *(float *)((int)param_1 + 0x25c) = local_8 * fVar1;
    *(float *)((int)param_1 + 0x260) = local_4 * fVar1;
    param_1 = (float)(fVar5 + (float10)1.0);
  }
  else {
    param_1 = 0.0;
    *(undefined4 *)((int)fVar2 + 600) = 0;
    *(undefined4 *)((int)fVar2 + 0x25c) = 0;
    *(undefined4 *)((int)fVar2 + 0x260) = 0;
  }
  puVar3 = operator_new(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    fVar1 = param_1 * 0.1 + DAT_5015ccdc;
    *puVar3 = &PTR_LAB_5012972c;
    fVar4 = FUN_5010777b((double)((fVar1 + 0.05) * 10.0));
    puVar3[2] = 1;
    *puVar3 = &PTR_FUN_5012967c;
    puVar3[4] = fVar2;
    puVar3[1] = (float)(fVar4 * (float10)0.1);
    puVar3[3] = 10;
    FUN_50081380(this,(int)puVar3);
    return;
  }
  FUN_50081380(this,0);
  return;
}

