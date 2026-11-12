// rea decompile_all
// name: FUN_50061a50
// address: 0x50061a50
// body: available
// range: 0x50061a50-0x50061b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50061a50(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  fVar6 = param_1;
  piVar1 = (int *)((int)param_1 + 0x45c);
  iVar2 = *(int *)((int)this + 0x18);
  puVar9 = (undefined4 *)0x0;
  uVar8 = 0;
  param_1 = 9999999.0;
  while( true ) {
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(iVar2 + (uint)*(ushort *)(*piVar1 + 0x408) * 0x34 + 0x30);
    }
    else {
      puVar9 = (undefined4 *)*puVar9;
    }
    if (puVar9 == (undefined4 *)0x0) break;
    uVar7 = *(ushort *)(puVar9 + 1) & 0x7fff;
    fVar3 = *(float *)(iVar2 + uVar7 * 0x34) - *(float *)((int)fVar6 + 4);
    fVar5 = *(float *)(iVar2 + 4 + uVar7 * 0x34) - *(float *)((int)fVar6 + 8);
    fVar4 = *(float *)(iVar2 + uVar7 * 0x34 + 8) - *(float *)((int)fVar6 + 0xc);
    fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar3 < param_1) {
      uVar8 = *(ushort *)(puVar9 + 1) & 0x7fff;
      param_1 = fVar3;
    }
  }
  *(short *)(*piVar1 + 0x408) = (short)uVar8;
  return;
}

