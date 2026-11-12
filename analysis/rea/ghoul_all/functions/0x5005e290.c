// rea decompile_all
// name: FUN_5005e290
// address: 0x5005e290
// body: available
// range: 0x5005e290-0x5005e4bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5005e290(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  void *unaff_EBX;
  int iVar10;
  float fVar11;
  float *pfVar12;
  int local_3c;
  int iStack_38;
  int *local_34;
  int local_30;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  if ((((iVar1 != 0) && (*(float *)(DAT_5015c9c8 + 0x18) != 0.0)) &&
      (iVar10 = 4, 3 < *(int *)(*(int *)(iVar1 + 0x400) + 0x210))) &&
     ((*(int *)(iVar1 + 0x40) != 0 && (*(int *)(iVar1 + 0x4c) == 0)))) {
    local_34 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
    local_30 = param_1;
    (**(code **)(*local_34 + 0xf4))(&local_34);
    iVar1 = *(int *)(iStack_38 + 0x2c);
    if (iVar1 == 2) {
      iVar10 = 2;
    }
    else if (iVar1 == 4) {
      iVar10 = 3;
    }
    else if (iVar1 == 5) {
      iVar10 = 7;
    }
    else if (iVar1 != 6) {
      if (iVar1 == 7) {
        iVar10 = 6;
      }
      else if (iVar1 == 8) {
        iVar10 = 5;
      }
      else if (iVar1 == 9) {
        iVar10 = 0xb;
      }
      else if (iVar1 == 10) {
        iVar10 = 8;
      }
      else if (iVar1 == 0xb) {
        iVar10 = 10;
      }
      else {
        iVar10 = (uint)(iVar1 == 0xc) * 8 + 1;
      }
    }
    pfVar12 = (float *)0x0;
    fVar11 = 0.0;
    if (*(int *)((int)unaff_EBX + 0x18) == 0) {
      local_3c = 0;
    }
    else {
      local_3c = (*(int *)((int)unaff_EBX + 0x1c) - *(int *)((int)unaff_EBX + 0x18)) / 0x34;
    }
    fVar3 = 1e+15;
    if (0 < local_3c) {
      pfVar4 = *(float **)((int)unaff_EBX + 0x18);
      do {
        pfVar9 = pfVar4 + 0xd;
        fVar2 = pfVar4[0x16];
        if ((fVar2 != 0.0) && (iVar10 <= (int)fVar2)) {
          fVar5 = *(float *)(param_1 + 4) - *pfVar9;
          fVar7 = *(float *)(param_1 + 8) - pfVar4[0xe];
          fVar6 = *(float *)(param_1 + 0xc) - pfVar4[0xf];
          fVar5 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
          if ((int)fVar11 < (int)fVar2 + 3) {
            if (fVar3 <= fVar5) {
LAB_5005e423:
              if ((int)fVar2 <= (int)fVar11 + 3) goto LAB_5005e447;
            }
            if (1048576.0 < fVar5) {
              fVar11 = fVar2;
              pfVar12 = pfVar9;
              fVar3 = fVar5;
            }
          }
          else if (fVar3 <= fVar5) goto LAB_5005e423;
        }
LAB_5005e447:
        local_3c = local_3c + -1;
        pfVar4 = pfVar9;
      } while (local_3c != 0);
      if ((pfVar12 != (float *)0x0) && (iVar10 <= (int)pfVar12[9])) {
        *(float **)(*(int *)(param_1 + 0x45c) + 0x4c) = pfVar12;
        uVar8 = FUN_50061fb0(unaff_EBX,param_1);
        if ((char)uVar8 == '\0') {
          iVar1 = *(int *)(param_1 + 0x45c);
          iVar10 = *(int *)(*(int *)(iVar1 + 0x40) + 0xc);
          if (iVar10 < (int)pfVar12[3]) {
            *(undefined4 *)(iVar1 + 0x50) = 0;
            return;
          }
          if ((int)pfVar12[3] < iVar10) {
            *(undefined4 *)(iVar1 + 0x50) = 1;
            return;
          }
        }
      }
    }
  }
  return;
}

