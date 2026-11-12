// rea decompile_all
// name: FUN_500810d0
// address: 0x500810d0
// body: available
// range: 0x500810d0-0x50081217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500810d0(void *this,float param_1,undefined4 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  fVar3 = param_1;
  *(undefined4 *)((int)param_1 + 0x3ec) = *param_2;
  *(undefined4 *)((int)param_1 + 0x3f0) = param_2[1];
  *(undefined4 *)((int)param_1 + 0x3f4) = param_2[2];
  pfVar1 = (float *)((int)param_1 + 0x428);
  *pfVar1 = *(float *)((int)param_1 + 0x3ec) - *(float *)((int)param_1 + 4);
  *(float *)((int)param_1 + 0x42c) = *(float *)((int)param_1 + 0x3f0) - *(float *)((int)param_1 + 8)
  ;
  *(float *)((int)param_1 + 0x430) =
       *(float *)((int)param_1 + 0x3f4) - *(float *)((int)param_1 + 0xc);
  fVar5 = (float10)FUN_500fe050(pfVar1);
  *(float *)((int)param_1 + 0x440) = (float)fVar5;
  if (fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) {
    fVar5 = FUN_5010777b((double)((fVar5 / (float10)*(float *)((int)param_1 + 0x414)) *
                                 (float10)10.0));
    param_1 = (float)(fVar5 + (float10)1.0);
  }
  else {
    param_1 = 0.0;
  }
  fVar2 = (*(float *)((int)fVar3 + 0x440) / param_1) * 10.0;
  *(float *)((int)fVar3 + 0x24c) = fVar2 * *pfVar1;
  *(float *)((int)fVar3 + 0x250) = fVar2 * *(float *)((int)fVar3 + 0x42c);
  *(float *)((int)fVar3 + 0x254) = fVar2 * *(float *)((int)fVar3 + 0x430);
  puVar4 = operator_new(0x14);
  if (puVar4 != (undefined4 *)0x0) {
    fVar2 = param_1 * 0.1 + DAT_5015ccdc;
    *puVar4 = &PTR_LAB_5012972c;
    fVar5 = FUN_5010777b((double)((fVar2 + 0.05) * 10.0));
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_50129664;
    puVar4[4] = fVar3;
    puVar4[1] = (float)(fVar5 * (float10)0.1);
    puVar4[3] = 10;
    FUN_50081380(this,(int)puVar4);
    return;
  }
  FUN_50081380(this,0);
  return;
}

