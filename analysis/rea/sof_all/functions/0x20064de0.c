// rea decompile_all
// name: FUN_20064de0
// address: 0x20064de0
// body: available
// range: 0x20064de0-0x20064e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20064de0(int param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = param_4;
  param_2 = param_2 - (int)param_4;
  param_5 = param_5 - (int)param_4;
  param_1 = param_1 - (int)param_4;
  param_3 = param_3 - (int)param_4;
  param_6 = param_6 - (int)param_4;
  param_4 = (float *)0x3;
  do {
    fVar1 = *(float *)(param_2 + (int)pfVar2);
    if (*pfVar2 <= *(float *)(param_1 + (int)pfVar2)) {
      *(float *)(param_5 + (int)pfVar2) = (fVar1 + *pfVar2) - 1.0;
      fVar1 = *(float *)(param_3 + (int)pfVar2) + *(float *)(param_1 + (int)pfVar2);
    }
    else {
      *(float *)(param_5 + (int)pfVar2) = (fVar1 + *(float *)(param_1 + (int)pfVar2)) - 1.0;
      fVar1 = *(float *)(param_3 + (int)pfVar2) + *pfVar2;
    }
    param_4 = (float *)((int)param_4 + -1);
    *(float *)((int)pfVar2 + param_6) = fVar1 + 1.0;
    pfVar2 = pfVar2 + 1;
  } while (param_4 != (float *)0x0);
  return;
}

