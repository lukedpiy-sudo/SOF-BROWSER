// rea decompile_all
// name: FUN_50046a70
// address: 0x50046a70
// body: available
// range: 0x50046a70-0x50046e72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50046a70(int param_1)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  undefined4 local_30 [2];
  int *local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501139c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_50049a70(DAT_50159170);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar9 = iVar5 + 1;
      *(undefined1 *)(iVar5 + *(int *)(param_1 + 0x28)) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x2c) + -2 + iVar9 * 2) = 16000;
      iVar4 = FUN_50049a70(DAT_50159170);
      iVar5 = iVar9;
    } while (iVar9 < iVar4);
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = FUN_50049a70(DAT_50159170);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar9 = iVar5 + 1;
        *(undefined1 *)(iVar5 + *(int *)(param_1 + 0x28)) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0x2c) + -2 + iVar9 * 2) = 16000;
        iVar4 = FUN_50049a70(DAT_50159170);
        iVar5 = iVar9;
      } while (iVar9 < iVar4);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    DAT_50159164 = DAT_50159164 + 1;
    ExceptionList = local_c;
    return;
  }
  if ((*(byte *)(param_1 + 0x38) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  local_28 = (int *)FUN_50049aa0((undefined4 *)0x0,0);
  local_24 = 0;
  local_4 = 0;
  local_40 = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24)) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x24) * 2) = 0;
  piVar7 = (int *)**(int **)(param_1 + 4);
  if (piVar7 != *(int **)(param_1 + 4)) {
    do {
      *(undefined4 *)(*(int *)(DAT_50159170 + 4) + 0x30 + piVar7[2] * 0x88) = 1;
      local_20 = piVar7[2];
      local_1c = (float)piVar7[3];
      local_14 = 1;
      piVar10 = local_28 + 1;
      local_10 = 0;
      local_18 = local_20;
      iVar5 = FUN_50049aa0(local_28,*piVar10);
      *piVar10 = iVar5;
      **(int **)(iVar5 + 4) = iVar5;
      FUN_5004a5b0((undefined4 *)(iVar5 + 8),&local_20);
      local_24 = local_24 + 1;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(param_1 + 4));
  }
  while( true ) {
    piVar10 = local_28;
    fVar1 = 999999.0;
    piVar7 = (int *)*local_28;
    piVar8 = local_28;
    if (piVar7 == local_28) break;
    do {
      if ((piVar7[5] != 0) && ((float)piVar7[3] < fVar1)) {
        fVar1 = (float)piVar7[3];
        piVar8 = piVar7;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != local_28);
    if (piVar8 == local_28) break;
    piVar8[5] = 0;
    iVar5 = piVar8[2];
    uVar2 = *(uint *)(*(int *)(DAT_50159170 + 4) + 0x38 + iVar5 * 0x88);
    if ((uVar2 & 4) == 0) {
      if ((char)(uVar2 >> 8) < '\0') {
        if (*(int *)(param_1 + 0x4c) == 0) {
          *(int *)(param_1 + 0x4c) = iVar5;
        }
      }
      else if ((uVar2 & 0x10000) != 0) goto LAB_50046c70;
    }
    else if (*(int *)(param_1 + 0x4c) == 0) {
      *(int *)(param_1 + 0x4c) = iVar5;
    }
    else {
LAB_50046c70:
      if (*(int *)(param_1 + 0x50) == 0) {
        *(int *)(param_1 + 0x50) = iVar5;
      }
    }
    cVar3 = '\x01';
    iVar5 = *(int *)(DAT_50159170 + 4) + piVar8[2] * 0x88;
    iVar4 = piVar8[4];
    local_44 = **(int **)(param_1 + 4);
    local_34 = iVar5;
    if ((int *)local_44 != *(int **)(param_1 + 4)) {
      do {
        if (*(int *)(local_44 + 8) == iVar4) goto LAB_50046cd3;
        cVar3 = cVar3 + '\x01';
        FUN_50049a30(&local_44,local_30);
      } while (local_44 != *(int *)(param_1 + 4));
    }
    cVar3 = '\0';
LAB_50046cd3:
    *(char *)(*(int *)(iVar5 + 0x24) + *(int *)(param_1 + 0x28)) = cVar3;
    *(short *)(*(int *)(param_1 + 0x2c) + *(int *)(iVar5 + 0x24) * 2) = (short)local_40;
    local_40 = local_40 + 1;
    piVar7 = (int *)**(int **)(iVar5 + 4);
    if (piVar7 != *(int **)(iVar5 + 4)) {
      do {
        local_38 = *(int *)(DAT_50159170 + 4) + piVar7[2] * 0x88;
        if (*(int *)(local_38 + 0x30) == 0) {
          local_18 = piVar8[4];
          local_3c = local_28;
          puVar11 = (undefined4 *)local_28[1];
          piVar10 = local_28 + 1;
          local_1c = (float)piVar8[3] + (float)piVar7[3];
          local_14 = 1;
          local_10 = 0;
          local_20 = piVar7[2];
          puVar6 = operator_new(0x1c);
          *puVar6 = local_3c;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = puVar6;
          }
          puVar6[1] = puVar11;
          *piVar10 = (int)puVar6;
          *(undefined4 **)puVar6[1] = puVar6;
          if (puVar6 + 2 != (int *)0x0) {
            piVar10 = &local_20;
            piVar12 = puVar6 + 2;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar12 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar12 = piVar12 + 1;
            }
          }
          local_24 = local_24 + 1;
          *(undefined4 *)(local_38 + 0x30) = 1;
          iVar5 = local_34;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(iVar5 + 4));
    }
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
    FUN_50106b60((undefined *)piVar8);
    local_24 = local_24 + -1;
  }
  piVar7 = (int *)*local_28;
  piVar8 = local_28;
  while (local_28 = piVar8, piVar7 != piVar10) {
    piVar8 = (int *)*piVar7;
    *(int *)piVar7[1] = *piVar7;
    *(int *)(*piVar7 + 4) = piVar7[1];
    FUN_50106b60((undefined *)piVar7);
    local_24 = local_24 + -1;
    piVar7 = piVar8;
    piVar8 = local_28;
  }
  piVar7 = (int *)*piVar8;
  while (piVar7 != piVar8) {
    piVar10 = (int *)*piVar7;
    *(int *)piVar7[1] = *piVar7;
    *(int *)(*piVar7 + 4) = piVar7[1];
    FUN_50106b60((undefined *)piVar7);
    local_24 = local_24 + -1;
    piVar7 = piVar10;
  }
  FUN_50106b60((undefined *)local_28);
  ExceptionList = local_c;
  return;
}

