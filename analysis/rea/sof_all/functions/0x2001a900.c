// rea decompile_all
// name: FUN_2001a900
// address: 0x2001a900
// body: available
// range: 0x2001a900-0x2001a978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2001a900(float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  
  while (-1 < param_2) {
    iVar1 = DAT_20246d64 + param_2 * 0x3c;
    pfVar3 = *(float **)(DAT_20246d64 + 0x24 + param_2 * 0x3c);
    if (*(byte *)(pfVar3 + 4) < 3) {
      fVar2 = param_1[*(byte *)(pfVar3 + 4)];
    }
    else {
      fVar2 = *pfVar3 * *param_1 + pfVar3[1] * param_1[1] + pfVar3[2] * param_1[2];
    }
    if (0.0 <= fVar2 - pfVar3[3]) {
      param_2 = *(int *)(iVar1 + 0x30);
    }
    else {
      param_2 = *(int *)(iVar1 + 0x34);
    }
  }
  DAT_20246d5c = DAT_20246d5c + 1;
  return -1 - param_2;
}

