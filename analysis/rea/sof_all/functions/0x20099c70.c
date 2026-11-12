// rea decompile_all
// name: FUN_20099c70
// address: 0x20099c70
// body: available
// range: 0x20099c70-0x20099fc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20099c70(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_ECX;
  float10 fVar9;
  
  fVar3 = -(*param_2 * *(float *)(in_ECX + 0x174) +
           *(float *)(in_ECX + 0x178) * param_2[1] + *(float *)(in_ECX + 0x17c) * param_2[2]);
  if (((0.01 <= fVar3) &&
      (fVar4 = -((*param_1 * *(float *)(in_ECX + 0x174) +
                 *(float *)(in_ECX + 0x17c) * param_1[2] + *(float *)(in_ECX + 0x178) * param_1[1])
                - (*(float *)(in_ECX + 0x5c) * *(float *)(in_ECX + 0x174) +
                  *(float *)(in_ECX + 0x60) * *(float *)(in_ECX + 0x178) +
                  *(float *)(in_ECX + 100) * *(float *)(in_ECX + 0x17c))), fVar4 <= -0.001)) &&
     (fVar4 <= *(float *)(in_ECX + 0x170))) {
    fVar6 = (*(float *)(in_ECX + 0x174) * fVar4 + *param_1) - *(float *)(in_ECX + 0x5c);
    fVar7 = (*(float *)(in_ECX + 0x178) * fVar4 + param_1[1]) - *(float *)(in_ECX + 0x60);
    fVar5 = (*(float *)(in_ECX + 0x17c) * fVar4 + param_1[2]) - *(float *)(in_ECX + 100);
    fVar1 = ABS(fVar6 * *(float *)(in_ECX + 0x188) +
                fVar7 * *(float *)(in_ECX + 0x18c) + fVar5 * *(float *)(in_ECX + 400));
    fVar2 = ABS((fVar6 * *(float *)(in_ECX + 0x194) +
                fVar7 * *(float *)(in_ECX + 0x198) + fVar5 * *(float *)(in_ECX + 0x19c)) *
                *(float *)(in_ECX + 0x1a0));
    if ((fVar1 <= *(float *)(in_ECX + 0x184)) && (fVar2 <= *(float *)(in_ECX + 0x184))) {
      fVar3 = fVar3 * *(float *)(in_ECX + 0x168);
      if ((*(float *)(in_ECX + 0x180) < fVar1) &&
         (fVar8 = *(float *)(in_ECX + 0x184) - *(float *)(in_ECX + 0x180), 0.01 < fVar8)) {
        fVar3 = ((*(float *)(in_ECX + 0x184) - fVar1) / fVar8) * fVar3;
      }
      if ((*(float *)(in_ECX + 0x180) < fVar2) &&
         (fVar1 = *(float *)(in_ECX + 0x184) - *(float *)(in_ECX + 0x180), 0.01 < fVar1)) {
        fVar3 = ((*(float *)(in_ECX + 0x184) - fVar2) / fVar1) * fVar3;
      }
      if (*(float *)(in_ECX + 0x16c) < fVar4) {
        fVar3 = ((*(float *)(in_ECX + 0x170) - fVar4) /
                (*(float *)(in_ECX + 0x170) - *(float *)(in_ECX + 0x16c))) * fVar3;
      }
      fVar3 = fVar3 * 1.0;
      fVar1 = *(float *)(in_ECX + 0x6c);
      fVar2 = *(float *)(in_ECX + 0x70);
      *(float *)(param_4 + 0x24) = fVar3 * *(float *)(in_ECX + 0x68) + *(float *)(param_4 + 0x24);
      *(float *)(param_4 + 0x28) = fVar1 * fVar3 + *(float *)(param_4 + 0x28);
      *(float *)(param_4 + 0x2c) = fVar2 * fVar3 + *(float *)(param_4 + 0x2c);
      if ((0.0 < *(float *)(param_4 + 0x68)) &&
         (0.0 < (fVar6 * *param_3 + fVar7 * param_3[1] + fVar5 * param_3[2]) / fVar4)) {
        fVar3 = *(float *)(in_ECX + 0x68);
        fVar4 = *(float *)(in_ECX + 0x6c);
        fVar5 = *(float *)(in_ECX + 0x70);
        fVar9 = (float10)FUN_200fc7d0();
        fVar9 = fVar9 * (float10)*(float *)(param_4 + 0x70);
        *(float *)(param_4 + 0x50) =
             (float)((float10)fVar3 * fVar9 * (float10)*(float *)(param_4 + 0x44) +
                    (float10)*(float *)(param_4 + 0x50));
        *(float *)(param_4 + 0x54) =
             (float)((float10)fVar4 * fVar9) * *(float *)(param_4 + 0x48) +
             *(float *)(param_4 + 0x54);
        *(float *)(param_4 + 0x58) =
             (float)((float10)fVar5 * fVar9) * *(float *)(param_4 + 0x4c) +
             *(float *)(param_4 + 0x58);
      }
    }
  }
  return;
}

