// rea decompile_all
// name: FUN_200bac30
// address: 0x200bac30
// body: available
// range: 0x200bac30-0x200bb133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200bac30(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int in_ECX;
  float10 fVar12;
  float10 fVar13;
  float local_58;
  undefined4 local_50;
  float local_4c;
  int *local_48;
  int *local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [12];
  undefined1 local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010da08;
  local_c = ExceptionList;
  iVar9 = *(int *)(in_ECX + 0xc);
  local_1c = (undefined1)param_1;
  local_50 = 3;
  iVar5 = iVar9;
  if (iVar9 < 0) {
    iVar5 = 0;
  }
  ExceptionList = &local_c;
  local_18 = operator_new(iVar5 * 4);
  FUN_200a9240(local_18,iVar9,&local_50);
  local_14 = local_18 + iVar9;
  local_4 = 0;
  local_58 = 1.0;
  bVar3 = false;
  piVar11 = (int *)**(int **)(in_ECX + 8);
  bVar4 = false;
  local_10 = local_14;
  if (piVar11 != *(int **)(in_ECX + 8)) {
    local_4c = -(float)param_2;
    piVar7 = local_18;
    do {
      fVar12 = (float10)FUN_20090310(piVar11 + 2);
      fVar12 = fVar12 - (float10)*(float *)(param_1 + 0x18);
      if ((float10)local_4c <= fVar12) {
        if (fVar12 <= (float10)(float)param_2) {
          *piVar7 = 0;
        }
        else {
          *piVar7 = 1;
          bVar3 = true;
        }
      }
      else {
        bVar4 = true;
        *piVar7 = 2;
      }
      if (fVar12 < (float10)local_58) {
        local_58 = (float)fVar12;
        local_48 = piVar11;
        local_44 = piVar7;
      }
      piVar11 = (int *)*piVar11;
      piVar7 = piVar7 + 1;
    } while (piVar11 != *(int **)(in_ECX + 8));
    if (bVar3) {
      if (bVar4) {
        piVar11 = *(int **)(in_ECX + 8);
        piVar7 = local_48;
        piVar10 = local_44;
        while (piVar8 = local_48, param_2 = local_44, *piVar10 == 2) {
          piVar7 = (int *)*piVar7;
          piVar10 = piVar10 + 1;
          if (piVar7 == piVar11) {
            piVar7 = (int *)*piVar11;
            piVar10 = local_18;
          }
        }
        for (; *param_2 == 2; param_2 = param_2 + -1) {
          if (piVar8 == (int *)*piVar11) {
            param_2 = local_14;
            piVar8 = piVar11;
          }
          piVar8 = (int *)piVar8[1];
        }
        if (piVar7 == piVar8) {
          piVar10 = piVar7;
          if (piVar7 == (int *)*piVar11) {
            piVar10 = piVar11;
          }
          pfVar1 = (float *)(piVar7 + 2);
          FUN_200802f0(piVar10[1] + 8);
          FUN_20068250(pfVar1);
          fVar12 = (float10)FUN_20090310(param_1);
          param_2 = (int *)(float)((float10)*(float *)(param_1 + 0x18) - fVar12);
          fVar12 = (float10)FUN_20090310(param_1);
          param_2 = (int *)(float)((float10)(float)param_2 / fVar12);
          FUN_20068280(param_2);
          FUN_20068220(pfVar1);
          piVar10 = (int *)*piVar7;
          if (piVar10 == piVar11) {
            piVar10 = (int *)*piVar11;
          }
          FUN_200802f0(piVar10 + 2);
          FUN_20068250(pfVar1);
          fVar12 = (float10)FUN_20090310(param_1);
          fVar2 = *(float *)(param_1 + 0x18);
          fVar13 = (float10)FUN_20090310(param_1);
          FUN_20068280((float)((float10)(float)((float10)fVar2 - fVar12) / fVar13));
          FUN_20068220(pfVar1);
          iVar9 = FUN_200bb140(piVar10,piVar10[1]);
          piVar10[1] = iVar9;
          **(int **)(iVar9 + 4) = iVar9;
          FUN_20087660((undefined4 *)(iVar9 + 8),local_28);
          *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
          *(undefined4 *)(iVar9 + 8) = local_34;
          *(undefined4 *)(iVar9 + 0xc) = local_30;
          *(undefined4 *)(iVar9 + 0x10) = local_2c;
          *pfVar1 = local_40;
          piVar7[3] = (int)local_3c;
          piVar7[4] = (int)local_38;
        }
        else {
          if (*piVar10 != 0) {
            piVar10 = piVar7;
            if (piVar7 == (int *)*piVar11) {
              piVar10 = piVar11;
            }
            pfVar1 = (float *)(piVar7 + 2);
            FUN_200802f0(piVar10[1] + 8);
            FUN_20068250(pfVar1);
            fVar12 = (float10)FUN_20090310(param_1);
            fVar2 = *(float *)(param_1 + 0x18);
            fVar13 = (float10)FUN_20090310(param_1);
            FUN_20068280((float)((float10)(float)((float10)fVar2 - fVar12) / fVar13));
            FUN_20068220(pfVar1);
            *pfVar1 = local_40;
            piVar7[3] = (int)local_3c;
            piVar7[4] = (int)local_38;
          }
          piVar7 = (int *)*piVar7;
          if (piVar7 == *(int **)(in_ECX + 8)) {
            piVar7 = (int *)**(int **)(in_ECX + 8);
          }
          while (piVar7 != piVar8) {
            piVar7 = (int *)*piVar7;
            if (piVar7 == *(int **)(in_ECX + 8)) {
              piVar7 = (int *)**(int **)(in_ECX + 8);
            }
            piVar11 = (int *)FUN_2008d0b0(&local_44,0);
            piVar11 = (int *)*piVar11;
            *(int *)piVar11[1] = *piVar11;
            *(int *)(*piVar11 + 4) = piVar11[1];
            FUN_200f9f75(piVar11);
            *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
          }
          if (*param_2 == 1) {
            puVar6 = (undefined4 *)*piVar8;
            if (puVar6 == *(undefined4 **)(in_ECX + 8)) {
              puVar6 = (undefined4 *)**(undefined4 **)(in_ECX + 8);
            }
            pfVar1 = (float *)(piVar8 + 2);
            FUN_200802f0(puVar6 + 2);
            FUN_20068250(pfVar1);
            fVar12 = (float10)FUN_20090310(param_1);
            fVar2 = *(float *)(param_1 + 0x18);
            fVar13 = (float10)FUN_20090310(param_1);
            fVar13 = (float10)(float)((float10)fVar2 - fVar12) / fVar13;
            local_40 = (float)((float10)local_40 * fVar13);
            local_3c = (float)((float10)local_3c * fVar13);
            local_38 = (float)((float10)local_38 * fVar13);
            FUN_20068220(pfVar1);
            *pfVar1 = local_40;
            piVar8[3] = (int)local_3c;
            piVar8[4] = (int)local_38;
          }
        }
        if (2 < *(uint *)(in_ECX + 0xc)) {
          FUN_200f9f75(local_18);
          ExceptionList = local_c;
          return 3;
        }
      }
      else {
        piVar11 = *(int **)(in_ECX + 8);
        piVar7 = (int *)*piVar11;
        while (piVar7 != piVar11) {
          puVar6 = (undefined4 *)FUN_2008d0b0(&param_2,0);
          FUN_200ba400(&local_44,*puVar6);
        }
      }
      local_4 = 0xffffffff;
      FUN_2008c730(local_18,local_14);
      FUN_200f9f75(local_18);
      ExceptionList = local_c;
      return 1;
    }
    if (bVar4) {
      local_4 = 0xffffffff;
      FUN_2008c730(local_18,local_14);
      FUN_200f9f75(local_18);
      ExceptionList = local_c;
      return 2;
    }
  }
  local_4 = 0xffffffff;
  FUN_2008c730(local_18,local_14);
  FUN_200f9f75(local_18);
  ExceptionList = local_c;
  return 0;
}

