// rea decompile_all
// name: FUN_500526d0
// address: 0x500526d0
// body: available
// range: 0x500526d0-0x50052927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500526d0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  undefined3 extraout_var;
  int iVar10;
  undefined3 extraout_var_00;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar8 = param_1;
  local_10 = 1e+08;
  local_4 = 0;
  if (*(int *)(param_1 + 0x45c) != 0) {
    local_c = 1;
    iVar11 = DAT_5015cca0 + 0x464;
    if (0 < DAT_5015d8c8) {
      pfVar1 = (float *)(param_1 + 4);
      local_8 = 0x464;
      do {
        fVar5 = *pfVar1 - *(float *)(iVar11 + 4);
        fVar6 = *(float *)(iVar8 + 8) - *(float *)(iVar11 + 8);
        pfVar2 = (float *)(iVar11 + 4);
        fVar3 = *(float *)(iVar8 + 0xc) - *(float *)(iVar11 + 0xc);
        fVar5 = fVar5 * fVar5 + fVar6 * fVar6 + fVar3 * fVar3;
        if (((((iVar11 != 0) && (*(int *)(iVar11 + 0x74) != 0)) &&
             (iVar10 = *(int *)(iVar11 + 0x45c), iVar10 != 0)) &&
            ((*(int *)(*(int *)(iVar11 + 0x74) + 800) == 0 &&
             (*(int *)(*(int *)(iVar8 + 0x74) + 0x2dc) == 0)))) &&
           ((0 < *(int *)(iVar11 + 0x2ec) && ((fVar5 < local_10 && (iVar11 != iVar8)))))) {
          if ((*(float *)(iVar10 + 4) < DAT_5015ccdc == (*(float *)(iVar10 + 4) == DAT_5015ccdc)) &&
             (iVar4 = *(int *)(*(int *)(*(int *)(iVar8 + 0x45c) + 0x400) + 0x210),
             *(int *)(iVar10 + 0xc) <= iVar4)) {
            fVar3 = *(float *)(iVar10 + 8);
            if (2 < iVar4) {
              fVar3 = fVar3 + fVar3;
            }
            fVar7 = *(float *)(iVar8 + 8) - *(float *)(iVar11 + 8);
            fVar6 = *(float *)(iVar8 + 0xc) - *(float *)(iVar11 + 0xc);
            if (fVar3 * fVar3 <
                (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2) + fVar7 * fVar7 + fVar6 * fVar6)
            goto LAB_5005282a;
          }
          else {
LAB_5005282a:
            uVar12 = FUN_5004fd90(iVar8,iVar11);
            if ((int)uVar12 == 0) goto LAB_500528e2;
          }
          if (*(int *)(iVar8 + 0x45c) == 0) {
            param_1 = 0x400;
          }
          else {
            param_1 = *(int *)(*(int *)(*(int *)(iVar8 + 0x45c) + 0x400) + 0x208);
          }
          fVar6 = *(float *)(iVar8 + 8) - *(float *)(iVar11 + 8);
          fVar3 = *(float *)(iVar8 + 0xc) - *(float *)(iVar11 + 0xc);
          if ((*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2) + fVar6 * fVar6 + fVar3 * fVar3 <=
              (float)param_1 * (float)param_1) {
            bVar9 = FUN_5006e1d0(iVar8,iVar11);
            if (CONCAT31(extraout_var,bVar9) != 0) {
              iVar10 = (*DAT_5015cad0)(pfVar2,pfVar1);
              if (iVar10 != 0) {
                iVar10 = FUN_500b0d40(iVar8,iVar11,0);
                if (iVar10 != 0) {
                  bVar9 = FUN_500887e0(iVar8,iVar11);
                  if (CONCAT31(extraout_var_00,bVar9) == 0) {
                    local_10 = fVar5;
                    local_4 = iVar11;
                  }
                }
              }
            }
          }
        }
LAB_500528e2:
        local_8 = local_8 + 0x464;
        iVar11 = local_8 + DAT_5015cca0;
        local_c = local_c + 1;
      } while (local_c <= DAT_5015d8c8);
      if (local_4 != 0) {
        *(int *)(*(int *)(iVar8 + 0x45c) + 0x30) = local_4;
      }
    }
  }
  return;
}

