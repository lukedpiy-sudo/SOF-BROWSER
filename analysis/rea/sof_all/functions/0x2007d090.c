// rea decompile_all
// name: FUN_2007d090
// address: 0x2007d090
// body: available
// range: 0x2007d090-0x2007d1f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_2007d090(float param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  float10 fVar3;
  
  *param_2 = *(char *)(in_ECX + 0xa9);
  if ((*(char *)(in_ECX + 0x96) == '\0') || (*(short *)(in_ECX + 0xae) == 0)) {
    fVar3 = (float10)0.0;
  }
  else {
    if (*(char *)(in_ECX + 0xa8) != '\0') {
      param_1 = *(float *)(in_ECX + 0xa0);
    }
    if (*(float *)(in_ECX + 300) == 0.0) {
      fVar3 = (float10)*(float *)(in_ECX + 0xa0);
    }
    else {
      iVar1 = *(int *)(in_ECX + 0xb0);
      fVar3 = (float10)param_1 - (float10)*(float *)(in_ECX + 0x9c);
      if (iVar1 == 0) {
        FUN_200fc6f3((double)(fVar3 / (float10)*(float *)(in_ECX + 300)));
        uVar2 = __ftol();
        *param_3 = uVar2;
        fVar3 = (float10)FUN_200fcaca();
      }
      else if (iVar1 == 2) {
        FUN_200fc6f3((double)(fVar3 / (float10)*(float *)(in_ECX + 300)));
        uVar2 = __ftol();
        *param_3 = uVar2;
        fVar3 = (float10)FUN_200fcaca();
        if ((float10)0.5 <= fVar3) {
          *param_2 = *param_2 == '\0';
          fVar3 = (float10)1.0 - (((float10)1.0 - fVar3) + ((float10)1.0 - fVar3));
        }
        else {
          fVar3 = fVar3 + fVar3;
        }
      }
      else if (iVar1 == 1) {
        *param_3 = 0;
        fVar3 = fVar3 / (float10)*(float *)(in_ECX + 300);
      }
    }
    if (*param_2 != '\0') {
      fVar3 = (float10)1.0 - fVar3;
    }
    if ((float10)1.0 < fVar3) {
      return (float10)1.0;
    }
    if (fVar3 < (float10)0.0) {
      return (float10)0.0;
    }
  }
  return fVar3;
}

