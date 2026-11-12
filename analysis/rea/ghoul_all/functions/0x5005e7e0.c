// rea decompile_all
// name: FUN_5005e7e0
// address: 0x5005e7e0
// body: available
// range: 0x5005e7e0-0x5005e88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall FUN_5005e7e0(void *this,float param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  fVar6 = param_1;
  if ((param_1 != 0.0) && (piVar1 = (int *)((int)param_1 + 0x74), *piVar1 != 0)) {
    if (*(int *)((int)this + 8) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 3;
    }
    piVar9 = (int *)0x0;
    param_1 = 9999999.0;
    if (0 < iVar7) {
      piVar8 = *(int **)((int)this + 8);
      do {
        if ((*piVar8 != 0) && (*(int *)(*piVar8 + 0x318) != *(int *)(*piVar1 + 0x324))) {
          pfVar2 = (float *)piVar8[1];
          fVar3 = *(float *)((int)fVar6 + 4) - *pfVar2;
          fVar4 = *(float *)((int)fVar6 + 8) - pfVar2[1];
          fVar5 = *(float *)((int)fVar6 + 0xc) - pfVar2[2];
          fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
          if (fVar3 < param_1) {
            piVar9 = piVar8;
            param_1 = fVar3;
          }
        }
        piVar8 = piVar8 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    return piVar9;
  }
  return (int *)0x0;
}

