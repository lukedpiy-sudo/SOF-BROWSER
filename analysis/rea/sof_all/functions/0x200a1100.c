// rea decompile_all
// name: FUN_200a1100
// address: 0x200a1100
// body: available
// range: 0x200a1100-0x200a1405 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a1100(float *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *in_ECX;
  int iVar19;
  
  if (((uint)param_1[0x10] & 1) != 0) {
    for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
      *in_ECX = *param_2;
      param_2 = param_2 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  if (((uint)param_2[0x10] & 1) != 0) {
    for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
      *in_ECX = *param_1;
      param_1 = param_1 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  fVar1 = *param_1;
  fVar2 = param_2[3];
  fVar3 = param_1[1];
  fVar4 = param_2[7];
  fVar5 = param_1[2];
  fVar6 = param_2[0xb];
  fVar7 = param_1[3];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[3];
  fVar17 = param_2[0xd];
  fVar18 = param_1[3];
  in_ECX[2] = param_2[0xe] * param_1[3] +
              param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  in_ECX[1] = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  *in_ECX = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  in_ECX[3] = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[4];
  fVar2 = param_2[3];
  fVar3 = param_1[5];
  fVar4 = param_2[7];
  fVar5 = param_1[6];
  fVar6 = param_2[0xb];
  fVar7 = param_1[7];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[7];
  fVar17 = param_2[0xd];
  fVar18 = param_1[7];
  in_ECX[6] = param_2[0xe] * param_1[7] +
              param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  in_ECX[5] = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  in_ECX[4] = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  in_ECX[7] = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[8];
  fVar2 = param_2[3];
  fVar3 = param_1[9];
  fVar4 = param_2[7];
  fVar5 = param_1[10];
  fVar6 = param_2[0xb];
  fVar7 = param_1[0xb];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[0xb];
  fVar17 = param_2[0xd];
  fVar18 = param_1[0xb];
  in_ECX[10] = param_2[0xe] * param_1[0xb] +
               param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  in_ECX[9] = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  in_ECX[8] = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  in_ECX[0xb] = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[0xc];
  fVar2 = param_2[3];
  fVar3 = param_1[0xd];
  fVar4 = param_2[7];
  fVar5 = param_1[0xe];
  fVar6 = param_2[0xb];
  fVar7 = param_1[0xf];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[0xf];
  fVar17 = param_2[0xd];
  fVar18 = param_1[0xf];
  in_ECX[0xe] = param_2[0xe] * param_1[0xf] +
                param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  in_ECX[0xd] = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  in_ECX[0xc] = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  in_ECX[0xf] = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  in_ECX[0x10] = 0.0;
  return;
}

