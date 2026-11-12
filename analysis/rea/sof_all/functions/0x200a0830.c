// rea decompile_all
// name: FUN_200a0830
// address: 0x200a0830
// body: available
// range: 0x200a0830-0x200a08e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0830(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  
  iVar8 = -1;
  iVar5 = 0;
  pfVar6 = param_3;
  do {
    iVar4 = *(int *)((param_2 - (int)param_3) + (int)pfVar6);
    fVar2 = param_3[iVar4];
    param_3[iVar4] = *pfVar6;
    if (iVar8 < 0) {
      if (fVar2 != 0.0) {
        iVar8 = iVar5;
      }
    }
    else if (iVar8 < iVar5) {
      pfVar7 = (float *)(param_1 + (iVar8 + iVar5 * 4) * 4);
      iVar4 = iVar8;
      do {
        pfVar1 = param_3 + iVar4;
        fVar3 = *pfVar7;
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 1;
        fVar2 = fVar2 - *pfVar1 * fVar3;
      } while (iVar4 < iVar5);
    }
    *pfVar6 = fVar2;
    iVar5 = iVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar5 < 4);
  pfVar6 = (float *)(param_1 + 0x3c);
  iVar8 = 4;
  iVar5 = 0xc;
  do {
    fVar2 = *(float *)(iVar5 + (int)param_3);
    if (iVar8 < 4) {
      pfVar7 = (float *)(param_1 + (iVar8 + iVar5) * 4);
      iVar4 = iVar8;
      do {
        pfVar1 = param_3 + iVar4;
        fVar3 = *pfVar7;
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 1;
        fVar2 = fVar2 - *pfVar1 * fVar3;
      } while (iVar4 < 4);
    }
    fVar3 = *pfVar6;
    pfVar6 = pfVar6 + -5;
    iVar4 = iVar8 + -2;
    *(float *)(iVar5 + (int)param_3) = fVar2 / fVar3;
    iVar8 = iVar8 + -1;
    iVar5 = iVar5 + -4;
  } while (-1 < iVar4);
  return;
}

