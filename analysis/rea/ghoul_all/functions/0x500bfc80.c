// rea decompile_all
// name: FUN_500bfc80
// address: 0x500bfc80
// body: available
// range: 0x500bfc80-0x500bfd9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bfc80(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (*(float *)(param_1 + 0x2e8) < DAT_5015ccdc) {
    (*DAT_5015ca4c)(param_1 + 4,param_1,0,*(undefined4 *)(param_1 + 0x350),0x3f800000,0,0,0);
    *(float *)(param_1 + 0x2e8) = DAT_5015ccdc + 0.5;
  }
  iVar1 = 1;
  if (1 < DAT_5015c938) {
    piVar2 = (int *)(DAT_5015cca0 + 0x794);
    do {
      if (((piVar2[-0xae] != 0) && (piVar2[-0xaf] != 0)) && (*piVar2 != 0)) {
        *piVar2 = 0;
        fVar3 = (float10)(*DAT_5015cb20)(0xc3160000,0x43160000);
        piVar2[-0x39] = (int)(float)(fVar3 + (float10)(float)piVar2[-0x39]);
        fVar3 = (float10)(*DAT_5015cb20)(0xc3160000,0x43160000);
        piVar2[-0x38] = (int)(float)(fVar3 + (float10)(float)piVar2[-0x38]);
        piVar2[-0x37] = (int)((100.0 / (float)piVar2[-0x2d]) * *(float *)(param_1 + 0x21c));
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x119;
    } while (iVar1 < DAT_5015c938);
  }
  if (DAT_5015ccdc < *(float *)(param_1 + 0x1bc)) {
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  }
  return;
}

