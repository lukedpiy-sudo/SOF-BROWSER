// rea decompile_all
// name: FUN_5008fd70
// address: 0x5008fd70
// body: available
// range: 0x5008fd70-0x5008fec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008fd70(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x70) ==
      (*(float *)(param_1 + 0x6c) == *(float *)(param_1 + 0x70))) {
    if ((*(float *)(param_1 + 0x60) == *(float *)(param_1 + 100)) &&
       (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x70))) {
      fVar2 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
      fVar3 = (1.0 - fVar2 / *(float *)(param_1 + 100)) * *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x68) =
           *(float *)(param_1 + 100) - (fVar3 / (fVar3 + fVar2)) * *(float *)(param_1 + 0x44);
      return;
    }
    if (*(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x40)) {
      fVar3 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x60);
      fVar2 = *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 0x60) = fVar3;
      if (*(float *)(param_1 + 0x40) < fVar3) {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
      }
      if (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x70)) {
        fVar3 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x70);
        fVar4 = (fVar2 + *(float *)(param_1 + 100)) * 0.5;
        fVar2 = (1.0 - fVar3 / fVar4) * *(float *)(param_1 + 100);
        fVar5 = 1.0 / (fVar2 + fVar3);
        fVar2 = fVar5 * fVar2;
        *(float *)(param_1 + 0x60) = fVar2 * *(float *)(param_1 + 100) + fVar5 * fVar3 * fVar4;
        *(float *)(param_1 + 0x68) = *(float *)(param_1 + 100) - fVar2 * *(float *)(param_1 + 0x44);
      }
    }
  }
  else if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x70)) {
    if (*(float *)(param_1 + 0x68) != 0.0) {
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      return;
    }
    if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x60)) {
      *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x44);
      return;
    }
  }
  return;
}

