// rea decompile_all
// name: FUN_200a1410
// address: 0x200a1410
// body: available
// range: 0x200a1410-0x200a14b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a1410(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  
  if (((uint)in_ECX[0x10] & 1) != 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return;
  }
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  fVar6 = in_ECX[5];
  fVar7 = in_ECX[6];
  fVar8 = in_ECX[9];
  fVar9 = in_ECX[10];
  fVar10 = in_ECX[0xd];
  fVar11 = in_ECX[0xe];
  *param_1 = in_ECX[8] * fVar1 + in_ECX[4] * fVar2 + *in_ECX * fVar3 + in_ECX[0xc];
  param_1[1] = fVar8 * fVar1 + fVar6 * fVar2 + fVar4 * fVar3 + fVar10;
  param_1[2] = fVar9 * fVar1 + fVar5 * fVar3 + fVar7 * fVar2 + fVar11;
  return;
}

