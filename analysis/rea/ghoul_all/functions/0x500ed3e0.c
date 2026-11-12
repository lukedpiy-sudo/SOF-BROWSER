// rea decompile_all
// name: FUN_500ed3e0
// address: 0x500ed3e0
// body: available
// range: 0x500ed3e0-0x500ed489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ed3e0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return;
  }
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = *(float *)((int)this + 4);
  fVar5 = *(float *)((int)this + 8);
  fVar6 = *(float *)((int)this + 0x14);
  fVar7 = *(float *)((int)this + 0x18);
  fVar8 = *(float *)((int)this + 0x24);
  fVar9 = *(float *)((int)this + 0x28);
  fVar10 = *(float *)((int)this + 0x34);
  fVar11 = *(float *)((int)this + 0x38);
  *param_1 = *(float *)((int)this + 0x20) * fVar1 +
             *(float *)((int)this + 0x10) * fVar2 + *(float *)this * fVar3 +
             *(float *)((int)this + 0x30);
  param_1[1] = fVar8 * fVar1 + fVar6 * fVar2 + fVar4 * fVar3 + fVar10;
  param_1[2] = fVar9 * fVar1 + fVar5 * fVar3 + fVar7 * fVar2 + fVar11;
  return;
}

