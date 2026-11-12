// rea decompile_all
// name: FUN_200962f0
// address: 0x200962f0
// body: available
// range: 0x200962f0-0x200964fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200962f0(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  float10 fVar8;
  
  fVar3 = *(float *)(in_ECX + 0x5c) - *param_1;
  fVar4 = *(float *)(in_ECX + 0x60) - param_1[1];
  fVar5 = *(float *)(in_ECX + 100) - param_1[2];
  fVar6 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar7 = fVar3 * *param_2 + fVar4 * param_2[1] + fVar5 * param_2[2];
  if (((fVar6 <= *(float *)(in_ECX + 200)) && (1.0 <= fVar6)) && (0.0 <= fVar7)) {
    fVar1 = *(float *)(in_ECX + 0x6c);
    fVar2 = *(float *)(in_ECX + 0x70);
    if (*(float *)(in_ECX + 0xc4) < fVar6) {
      fVar7 = ((*(float *)(in_ECX + 200) - fVar6) /
              (*(float *)(in_ECX + 200) - *(float *)(in_ECX + 0xc4))) * fVar7;
    }
    fVar7 = fVar7 * (1.0 / fVar6) * 1.0 * *(float *)(in_ECX + 0xc0);
    *(float *)(param_4 + 0x24) = *(float *)(in_ECX + 0x68) * fVar7 + *(float *)(param_4 + 0x24);
    *(float *)(param_4 + 0x28) = fVar1 * fVar7 + *(float *)(param_4 + 0x28);
    *(float *)(param_4 + 0x2c) = fVar2 * fVar7 + *(float *)(param_4 + 0x2c);
    if ((*(char *)(param_4 + 7) != '\0') &&
       (0.0 < (fVar3 * *param_3 + fVar4 * param_3[1] + fVar5 * param_3[2]) * (1.0 / fVar6))) {
      fVar3 = *(float *)(in_ECX + 0x68);
      fVar4 = *(float *)(in_ECX + 0x6c);
      fVar5 = *(float *)(in_ECX + 0x70);
      fVar8 = (float10)FUN_200fc7d0();
      fVar8 = fVar8 * (float10)*(float *)(param_4 + 0x70) * (float10)1.0 *
              (float10)*(float *)(in_ECX + 0xc0);
      *(float *)(param_4 + 0x50) =
           (float)((float10)fVar3 * fVar8 * (float10)*(float *)(param_4 + 0x44) +
                  (float10)*(float *)(param_4 + 0x50));
      *(float *)(param_4 + 0x54) =
           (float)((float10)fVar4 * fVar8) * *(float *)(param_4 + 0x48) + *(float *)(param_4 + 0x54)
      ;
      *(float *)(param_4 + 0x58) =
           (float)((float10)fVar5 * fVar8) * *(float *)(param_4 + 0x4c) + *(float *)(param_4 + 0x58)
      ;
    }
  }
  return;
}

