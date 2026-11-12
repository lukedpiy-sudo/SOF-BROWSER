// rea decompile_all
// name: FUN_2001ad70
// address: 0x2001ad70
// body: available
// range: 0x2001ad70-0x2001b010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001ad70(int param_1,undefined4 *param_2,float *param_3,float *param_4,undefined1 *param_5,
                 undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  float local_30;
  float local_2c;
  int local_28;
  float *local_18;
  undefined4 *local_14;
  float local_c [3];
  
  puVar5 = param_2;
  local_30 = -1.0;
  local_2c = 1.0;
  local_18 = (float *)0x0;
  if (param_6[1] != 0) {
    bVar4 = false;
    DAT_20248de0 = DAT_20248de0 + 1;
    bVar3 = false;
    iVar9 = param_6[1];
    local_14 = (undefined4 *)0x0;
    local_28 = 0;
    if (0 < iVar9) {
      puVar7 = (undefined4 *)(DAT_20244c58 + param_6[2] * 8);
      do {
        pfVar10 = (float *)*puVar7;
        if (DAT_20248e08 == 0) {
          param_2 = (undefined4 *)0x3;
          puVar8 = puVar5;
          do {
            if (0.0 <= *(float *)((int)puVar8 + ((int)pfVar10 - (int)puVar5))) {
              uVar6 = *(undefined4 *)((param_1 - (int)puVar5) + (int)puVar8);
            }
            else {
              uVar6 = *puVar8;
            }
            *(undefined4 *)(((int)local_c - (int)puVar5) + (int)puVar8) = uVar6;
            puVar8 = puVar8 + 1;
            param_2 = (undefined4 *)((int)param_2 + -1);
          } while (param_2 != (undefined4 *)0x0);
          fVar1 = pfVar10[3] -
                  (local_c[0] * *pfVar10 + local_c[1] * pfVar10[1] + local_c[2] * pfVar10[2]);
        }
        else {
          fVar1 = pfVar10[3];
        }
        fVar2 = (pfVar10[1] * param_3[1] + pfVar10[2] * param_3[2] + *pfVar10 * *param_3) - fVar1;
        fVar1 = (*pfVar10 * *param_4 + param_4[1] * pfVar10[1] + param_4[2] * pfVar10[2]) - fVar1;
        if (0.0 < fVar1) {
          bVar4 = true;
        }
        if ((0.0 < fVar2) && (bVar3 = true, fVar2 <= fVar1)) {
          return;
        }
        if ((fVar2 < 0.0 == (fVar2 == 0.0)) || (fVar1 < 0.0 == (fVar1 == 0.0))) {
          if (fVar2 <= fVar1) {
            fVar2 = (fVar2 + 0.03125) / (fVar2 - fVar1);
            fVar1 = local_30;
            pfVar10 = local_18;
            puVar8 = local_14;
            if (local_2c <= fVar2) goto LAB_2001af4f;
          }
          else {
            fVar1 = (fVar2 - 0.03125) / (fVar2 - fVar1);
            fVar2 = local_2c;
            puVar8 = puVar7;
            if (fVar1 <= local_30) goto LAB_2001af4f;
          }
        }
        else {
LAB_2001af4f:
          fVar1 = local_30;
          fVar2 = local_2c;
          pfVar10 = local_18;
          puVar8 = local_14;
        }
        local_14 = puVar8;
        local_18 = pfVar10;
        local_2c = fVar2;
        local_30 = fVar1;
        puVar7 = puVar7 + 2;
        local_28 = local_28 + 1;
      } while (local_28 < iVar9);
      if (bVar3) {
        if (local_2c <= local_30) {
          return;
        }
        if (local_30 <= -1.0) {
          return;
        }
        if (*(float *)(param_5 + 4) <= local_30) {
          return;
        }
        if (local_30 < 0.0) {
          local_30 = 0.0;
        }
        *(float *)(param_5 + 4) = local_30;
        pfVar10 = (float *)(param_5 + 0x14);
        for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar10 = *local_18;
          local_18 = local_18 + 1;
          pfVar10 = pfVar10 + 1;
        }
        *(undefined4 *)(param_5 + 0x28) = local_14[1];
        *(undefined4 *)(param_5 + 0x2c) = *param_6;
        return;
      }
    }
    param_5[1] = 1;
    if (!bVar4) {
      *param_5 = 1;
      return;
    }
  }
  return;
}

