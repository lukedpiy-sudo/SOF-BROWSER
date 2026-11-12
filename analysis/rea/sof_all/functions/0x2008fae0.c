// rea decompile_all
// name: FUN_2008fae0
// address: 0x2008fae0
// body: available
// range: 0x2008fae0-0x2008fd1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2008fae0(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  
  pfVar2 = param_1;
  fVar1 = SQRT(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (fVar1 <= 1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870(fVar1);
  }
  uVar8 = 0;
  param_1 = (float *)0x0;
  uVar7 = 0;
  pfVar6 = (float *)&DAT_20404c94;
  do {
    fVar1 = *pfVar6 * pfVar2[1] + pfVar6[1] * pfVar2[2] + pfVar6[-1] * *pfVar2;
    if ((float)param_1 < fVar1) {
      uVar8 = uVar7;
      param_1 = (float *)fVar1;
    }
    pfVar6 = pfVar6 + 3;
    uVar7 = uVar7 + 1;
  } while ((int)pfVar6 < 0x20405894);
  *pfVar2 = *pfVar2 - (float)(&DAT_20404c90)[uVar8 * 3];
  pfVar2[1] = pfVar2[1] - (float)(&DAT_20404c94)[uVar8 * 3];
  pfVar2[2] = pfVar2[2] - (float)(&DAT_20404c98)[uVar8 * 3];
  FUN_200fc6f3((double)((*pfVar2 + 0.14) * 53.57143 + 0.5));
  iVar3 = __ftol();
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xf < iVar3) {
    iVar3 = 0xf;
  }
  *pfVar2 = ((float)iVar3 * 0.018666666 + (float)(&DAT_20404c90)[uVar8 * 3]) - 0.14;
  FUN_200fc6f3((double)((pfVar2[1] + 0.14) * 53.57143 + 0.5));
  iVar4 = __ftol();
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xf < iVar4) {
    iVar4 = 0xf;
  }
  pfVar2[1] = ((float)iVar4 * 0.018666666 + (float)(&DAT_20404c94)[uVar8 * 3]) - 0.14;
  FUN_200fc6f3((double)((pfVar2[2] + 0.14) * 53.57143 + 0.5));
  iVar5 = __ftol();
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xf < iVar5) {
    iVar5 = 0xf;
  }
  uVar7 = iVar3 << 8 | uVar8 | iVar4 << 0xc | iVar5 << 0x10;
  fVar1 = ((float)iVar5 * 0.018666666 + (float)(&DAT_20404c98)[uVar8 * 3]) - 0.14;
  pfVar2[2] = fVar1;
  fVar1 = SQRT(fVar1 * fVar1 + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
  if (fVar1 <= 1e-10) {
    *pfVar2 = 0.0;
    pfVar2[1] = 0.0;
    pfVar2[2] = 0.0;
    return uVar7;
  }
  FUN_200c3870(fVar1);
  return uVar7;
}

