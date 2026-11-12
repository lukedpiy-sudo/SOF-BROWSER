// rea decompile_all
// name: FUN_2002fff0
// address: 0x2002fff0
// body: available
// range: 0x2002fff0-0x200300c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002fff0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStack_10 [4];
  
  iVar3 = 0;
  pfVar4 = (float *)(param_1 + 0x84);
  do {
    fVar1 = pfVar4[0x1d];
    fVar2 = *pfVar4;
    if (fVar2 - fVar1 <= 180.0) {
      if (fVar2 - fVar1 < -180.0) {
        fVar2 = fVar2 + 360.0;
      }
    }
    else {
      fVar2 = fVar2 - 360.0;
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
    afStack_10[iVar3] = (fVar2 - fVar1) * DAT_201e8fd0 + fVar1;
  } while (iVar3 < 3);
  fVar5 = (float10)afStack_10[2] * (float10)0.017453292519943295;
  fVar6 = (float10)fcos(fVar5);
  fVar7 = (float10)fsin(fVar5);
  *param_4 = (float)(fVar7 * (float10)param_2[1] + fVar6 * (float10)*param_2);
  param_4[1] = (float)(fVar7 * (float10)*param_2 - fVar6 * (float10)param_2[1]);
  param_4[2] = param_2[2];
  *param_5 = afStack_10[1] * -1.0 * 0.017453292 + *param_3;
  param_5[1] = (float)((float10)param_3[1] + fVar5);
  param_5[2] = afStack_10[3] * -1.0 * 0.017453292 + param_3[2];
  return;
}

