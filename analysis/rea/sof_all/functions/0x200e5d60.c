// rea decompile_all
// name: FUN_200e5d60
// address: 0x200e5d60
// body: available
// range: 0x200e5d60-0x200e619b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e5d60(char *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  uint local_18;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fd15;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 2) = param_2._0_1_;
  FUN_2000a5b0(0);
  in_ECX[7] = 0xffffffff;
  in_ECX[8] = 0xffffffff;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 9) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 0x16) = param_2._0_1_;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x26) = param_2._0_1_;
  local_4._0_1_ = 2;
  uVar2 = FUN_200ea4b0(0,0);
  in_ECX[0x27] = uVar2;
  in_ECX[0x28] = 0;
  uVar6 = 0xffffffff;
  in_ECX[1] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x24] = 0;
  in_ECX[6] = 0;
  pcVar9 = s_small_2011d0c4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_18 = ~uVar6 - 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  cVar1 = FUN_2000a6c0(local_18,1);
  if (cVar1 != '\0') {
    pcVar9 = s_small_2011d0c4;
    pcVar11 = (char *)in_ECX[10];
    for (uVar6 = local_18 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = local_18 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_2000a6a0(local_18);
  }
  in_ECX[7] = 0xffffffff;
  in_ECX[0x14] = 0;
  in_ECX[0x25] = &DAT_20112e5c;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  *(undefined1 *)((int)in_ECX + 0x89) = 0;
  *(undefined1 *)((int)in_ECX + 0x8a) = 1;
  *(undefined1 *)((int)in_ECX + 0x8b) = 0;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  uVar2 = FUN_200ea630(in_ECX[0x18],in_ECX[0x18],in_ECX[0x17]);
  FUN_2008c730(uVar2,in_ECX[0x18]);
  in_ECX[0x18] = uVar2;
  local_18 = 0;
  FUN_200a8890(uVar2,1,&local_18);
  local_14[0] = operator_new(0x34);
  piVar8 = param_2;
  local_4._0_1_ = 4;
  if (local_14[0] == (void *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_200eac70(param_2);
  }
  uVar6 = local_18;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(int *)(local_18 + 4) == 0) {
    FUN_200eae20();
    FUN_200f9f75(uVar6);
  }
  else {
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      iVar3 = *piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
    } while ((char)iVar3 != '\0');
    local_14[0] = (void *)(~uVar6 - 1);
    cVar1 = FUN_2000a6c0(local_14[0],1);
    if (cVar1 != '\0') {
      piVar8 = param_2;
      piVar10 = (int *)in_ECX[3];
      for (uVar6 = (uint)local_14[0] >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
      for (uVar6 = (uint)local_14[0] & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)piVar10 = (char)*piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        piVar10 = (int *)((int)piVar10 + 1);
      }
      FUN_2000a6a0(local_14[0]);
    }
    pcVar9 = param_1;
    *in_ECX = param_1;
    iVar3 = FUN_200c64f0();
    uVar6 = local_18;
    in_ECX[0x1f] = *(int *)(pcVar9 + 0x4c) + iVar3 * -2;
    if (*(uint *)(local_18 + 4) < *(uint *)(local_18 + 8)) {
      do {
        cVar1 = FUN_200eafe0(1);
        if (cVar1 == '\0') {
          param_1 = (char *)FUN_200eb440(0);
          uVar7 = 0xffffffff;
          pcVar9 = param_1;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          param_2 = (int *)(~uVar7 - 1);
          cVar1 = FUN_2000a6c0(param_2,1);
          if (cVar1 != '\0') {
            pcVar9 = param_1;
            pcVar11 = *(char **)(uVar6 + 0x18);
            for (uVar7 = (uint)param_2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar7 = (uint)param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            }
            *(int **)(uVar6 + 0x1c) = param_2;
            *(char *)(*(int *)(uVar6 + 0x18) + (int)param_2) = '\0';
          }
          if (*(char *)((int)in_ECX + 0x8b) == '\0') {
            param_2 = operator_new(0xb0);
            local_4._0_1_ = 5;
            if (param_2 == (void *)0x0) {
              param_2 = (int *)0x0;
            }
            else {
              param_2 = (int *)FUN_200d8860(in_ECX,local_18);
            }
            local_4 = CONCAT31(local_4._1_3_,3);
            cVar1 = (**(code **)(*param_2 + 0x18))();
            if (cVar1 == '\0') {
              (**(code **)*param_2)(1);
            }
            else {
              FUN_200e6410(param_2,local_18);
            }
          }
          else {
            FUN_200eb490(local_18,s_No_rects_allowed_after_a_variabl_20159158);
          }
        }
        else {
          FUN_200eafe0(1);
          param_1 = (char *)FUN_200eb440(0);
          uVar7 = 0xffffffff;
          pcVar9 = param_1;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          param_2 = (int *)(~uVar7 - 1);
          cVar1 = FUN_2000a6c0(param_2,1);
          if (cVar1 != '\0') {
            pcVar9 = param_1;
            pcVar11 = *(char **)(uVar6 + 0x18);
            for (uVar7 = (uint)param_2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar7 = (uint)param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            }
            *(int **)(uVar6 + 0x1c) = param_2;
            *(char *)((int)param_2 + *(int *)(uVar6 + 0x18)) = '\0';
          }
          FUN_200e8c50(local_18);
        }
      } while (*(uint *)(local_18 + 4) < *(uint *)(local_18 + 8));
    }
    uVar6 = local_18;
    param_2 = *(int **)in_ECX[0x27];
    if (param_2 != (int *)in_ECX[0x27]) {
      do {
        cVar1 = (**(code **)(**(int **)((int)param_2 + 8) + 0x2c))(uVar6);
        if (cVar1 == '\0') {
          puVar4 = (undefined4 *)FUN_2008d0b0(&param_1,0);
          FUN_200ba400(local_14,*puVar4);
        }
        else {
          FUN_2008d0b0(&local_18,0);
        }
      } while (param_2 != (int *)in_ECX[0x27]);
    }
    FUN_200eae20();
    FUN_200f9f75(uVar6);
    iVar3 = *(int *)*in_ECX;
    iVar5 = FUN_20055930();
    *(float *)(iVar3 + 0xf4) = (float)iVar5 * 0.001;
  }
  ExceptionList = local_c;
  return;
}

