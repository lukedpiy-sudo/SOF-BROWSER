// rea decompile_all
// name: FUN_20054b30
// address: 0x20054b30
// body: available
// range: 0x20054b30-0x20054c80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20054b30(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_1[1] * (float10)0.017453292519943295);
  _DAT_20390b08 = (float)fVar1;
  fVar1 = (float10)fcos((float10)param_1[1] * (float10)0.017453292519943295);
  _DAT_203902e0 = (float)fVar1;
  fVar1 = (float10)fsin((float10)*param_1 * (float10)0.017453292519943295);
  _DAT_203902dc = (float)fVar1;
  fVar1 = (float10)fcos((float10)*param_1 * (float10)0.017453292519943295);
  _DAT_20390af0 = (float)fVar1;
  if ((param_3 != (float *)0x0) || (param_4 != (float *)0x0)) {
    fVar1 = (float10)fsin((float10)param_1[2] * (float10)0.017453292519943295);
    _DAT_20390c14 = (float)fVar1;
    fVar1 = (float10)fcos((float10)param_1[2] * (float10)0.017453292519943295);
    _DAT_20390c10 = (float)fVar1;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = _DAT_20390af0 * _DAT_203902e0;
    param_2[1] = _DAT_20390af0 * _DAT_20390b08;
    param_2[2] = -_DAT_203902dc;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = _DAT_20390c10 * _DAT_20390b08 - _DAT_20390c14 * _DAT_203902dc * _DAT_203902e0;
    param_3[1] = (_DAT_20390c10 * _DAT_203902e0 + _DAT_20390c14 * _DAT_203902dc * _DAT_20390b08) *
                 -1.0;
    param_3[2] = _DAT_20390c14 * _DAT_20390af0 * -1.0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = _DAT_20390c14 * _DAT_20390b08 + _DAT_20390c10 * _DAT_203902dc * _DAT_203902e0;
    param_4[1] = _DAT_20390c10 * _DAT_203902dc * _DAT_20390b08 - _DAT_20390c14 * _DAT_203902e0;
    param_4[2] = _DAT_20390c10 * _DAT_20390af0;
  }
  return;
}

