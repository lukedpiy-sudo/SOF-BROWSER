// rea decompile_all
// name: FUN_50059510
// address: 0x50059510
// body: available
// range: 0x50059510-0x50059626 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50059510(void *this,int param_1,float param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar2 = param_2 * param_2;
  iVar6 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0xa8);
      puVar1 != *(undefined4 **)((int)this + 0xa8); puVar1 = (undefined4 *)*puVar1) {
    iVar6 = puVar1[2];
    fVar3 = *(float *)(iVar6 + 4) - *(float *)(param_1 + 4);
    fVar5 = *(float *)(iVar6 + 8) - *(float *)(param_1 + 8);
    fVar4 = *(float *)(iVar6 + 0xc) - *(float *)(param_1 + 0xc);
    fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x9c);
      puVar1 != *(undefined4 **)((int)this + 0x9c); puVar1 = (undefined4 *)*puVar1) {
    iVar6 = puVar1[2];
    fVar3 = *(float *)(iVar6 + 4) - *(float *)(param_1 + 4);
    fVar5 = *(float *)(iVar6 + 8) - *(float *)(param_1 + 8);
    fVar4 = *(float *)(iVar6 + 0xc) - *(float *)(param_1 + 0xc);
    fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x90);
      puVar1 != *(undefined4 **)((int)this + 0x90); puVar1 = (undefined4 *)*puVar1) {
    iVar6 = puVar1[2];
    fVar3 = *(float *)(iVar6 + 4) - *(float *)(param_1 + 4);
    fVar5 = *(float *)(iVar6 + 8) - *(float *)(param_1 + 8);
    fVar4 = *(float *)(iVar6 + 0xc) - *(float *)(param_1 + 0xc);
    fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
  }
  return iVar6;
}

