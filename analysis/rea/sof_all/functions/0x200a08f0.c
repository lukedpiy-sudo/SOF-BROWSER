// rea decompile_all
// name: FUN_200a08f0
// address: 0x200a08f0
// body: available
// range: 0x200a08f0-0x200a0b1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200a08f0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_50;
  int local_48;
  float *local_44;
  float *local_40;
  float local_34 [13];
  
  iVar9 = 0;
  *param_3 = 1.0;
  iVar8 = 0;
  pfVar4 = param_1;
  do {
    local_50 = 0.0;
    iVar7 = 4;
    do {
      if (local_50 < ABS(*pfVar4)) {
        local_50 = ABS(*pfVar4);
      }
      pfVar4 = pfVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (local_50 < 1e-15) {
      return 0;
    }
    iVar8 = iVar8 + 1;
    local_34[iVar8] = 1.0 / local_50;
  } while (iVar8 < 4);
  local_48 = 0;
  local_40 = param_1;
  local_44 = param_1;
  pfVar4 = param_1;
  do {
    iVar8 = 0;
    pfVar6 = pfVar4;
    pfVar3 = param_1;
    if (0 < iVar9) {
      do {
        fVar1 = *pfVar6;
        pfVar2 = pfVar4;
        pfVar5 = pfVar3;
        iVar7 = iVar8;
        if (0 < iVar8) {
          do {
            iVar7 = iVar7 + -1;
            fVar1 = fVar1 - *pfVar5 * *pfVar2;
            pfVar2 = pfVar2 + 4;
            pfVar5 = pfVar5 + 1;
          } while (iVar7 != 0);
        }
        *pfVar6 = fVar1;
        iVar8 = iVar8 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar6 = pfVar6 + 4;
      } while (iVar8 < iVar9);
    }
    local_50 = 0.0;
    pfVar6 = local_44;
    pfVar3 = local_40;
    for (iVar8 = iVar9; iVar8 < 4; iVar8 = iVar8 + 1) {
      fVar1 = *pfVar3;
      pfVar2 = pfVar4;
      pfVar5 = pfVar6;
      iVar7 = iVar9;
      if (0 < iVar9) {
        do {
          iVar7 = iVar7 + -1;
          fVar1 = fVar1 - *pfVar5 * *pfVar2;
          pfVar2 = pfVar2 + 4;
          pfVar5 = pfVar5 + 1;
        } while (iVar7 != 0);
      }
      *pfVar3 = fVar1;
      if (local_50 <= ABS(fVar1) * local_34[iVar8 + 1]) {
        local_50 = ABS(fVar1) * local_34[iVar8 + 1];
        local_48 = iVar8;
      }
      pfVar6 = pfVar6 + 4;
      pfVar3 = pfVar3 + 4;
    }
    if (iVar9 != local_48) {
      pfVar3 = param_1 + local_48 * 4;
      iVar8 = 4;
      pfVar6 = local_44;
      do {
        fVar1 = *pfVar3;
        *pfVar3 = *pfVar6;
        pfVar3 = pfVar3 + 1;
        *pfVar6 = fVar1;
        iVar8 = iVar8 + -1;
        pfVar6 = pfVar6 + 1;
      } while (iVar8 != 0);
      local_34[local_48 + 1] = *(float *)((int)local_34 + (4 - (int)param_1) + (int)pfVar4);
      *param_3 = -*param_3;
    }
    *(int *)((param_2 - (int)param_1) + (int)pfVar4) = local_48;
    if (ABS(*local_40) < 1e-15) {
      return 0;
    }
    if (iVar9 != 3) {
      fVar1 = *local_40;
      if (iVar9 + 1 < 4) {
        iVar8 = 4 - (iVar9 + 1);
        pfVar6 = (float *)((int)param_1 * -3 + 0x10 + (int)pfVar4 * 4 + iVar9 * 4);
        do {
          iVar8 = iVar8 + -1;
          *pfVar6 = (1.0 / fVar1) * *pfVar6;
          pfVar6 = pfVar6 + 4;
        } while (iVar8 != 0);
      }
    }
    iVar9 = iVar9 + 1;
    local_44 = local_44 + 4;
    pfVar4 = pfVar4 + 1;
    local_40 = local_40 + 5;
  } while (iVar9 < 4);
  return 1;
}

