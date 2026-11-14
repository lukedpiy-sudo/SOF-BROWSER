// rea decompile_all
// name: FUN_30007bb0
// address: 0x30007bb0
// body: available
// range: 0x30007bb0-0x30007c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30007bb0(void)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float10 fVar4;
  
  piVar3 = (int *)*DAT_30034e00;
  if (piVar3 != DAT_30034e00) {
    do {
      iVar1 = piVar3[2];
      if (*(float *)(iVar1 + 0x68) != 0.0) {
        fVar2 = _DAT_3008fd34 * *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x70);
        *(float *)(iVar1 + 0x70) = fVar2;
        if (1.0 < fVar2) {
          fVar4 = FUN_3002079d((double)fVar2);
          *(float *)(iVar1 + 0x70) = (float)((float10)fVar2 - fVar4);
        }
      }
      if (*(float *)(iVar1 + 0x6c) != 0.0) {
        fVar2 = _DAT_3008fd34 * *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x74);
        *(float *)(iVar1 + 0x74) = fVar2;
        if (1.0 < fVar2) {
          fVar4 = FUN_3002079d((double)fVar2);
          *(float *)(iVar1 + 0x74) = (float)((float10)fVar2 - fVar4);
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_30034e00);
  }
  return;
}

