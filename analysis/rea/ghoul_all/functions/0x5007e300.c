// rea decompile_all
// name: FUN_5007e300
// address: 0x5007e300
// body: available
// range: 0x5007e300-0x5007e815 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007e300(void *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  void *this;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  int iVar11;
  undefined4 *local_40;
  int iStack_3c;
  undefined4 *local_38;
  float fStack_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int iStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114c6b;
  pvStack_c = ExceptionList;
  local_30 = 0;
  bVar1 = *(byte *)(*(int *)((int)param_1 + 0x114) + *(int *)((int)param_1 + 0x104));
  local_20 = (int *)CONCAT31(local_20._1_3_,bVar1);
  local_38 = (undefined4 *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  ExceptionList = &pvStack_c;
  *(int *)((int)param_1 + 0x114) = *(int *)((int)param_1 + 0x114) + 1;
  if ((bVar1 & 8) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_38 = (undefined4 *)0x0;
    }
    else {
      puVar5 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar8 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar8[1] = *piVar8;
      *(int *)(*piVar8 + 4) = piVar8[1];
      FUN_50106b60((undefined *)piVar8);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
      local_38 = puVar5;
    }
  }
  if ((bVar1 & 4) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_24 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
      local_24 = piVar8;
    }
    fVar10 = (float10)(**(code **)(*local_24 + 8))();
    fStack_34 = (float)fVar10;
  }
  if ((bVar1 & 2) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_28 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
      local_28 = piVar8;
    }
    (**(code **)(*local_28 + 0xc))();
  }
  if ((bVar1 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_2c = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      local_20 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      puVar5 = (undefined4 *)FUN_50049a30(&local_20,&local_2c);
      piVar9 = (int *)*puVar5;
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
      local_2c = piVar8;
    }
    local_30 = (**(code **)(*local_2c + 0x10))();
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    local_20 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
    puVar5 = (undefined4 *)FUN_50049a30(&local_20,&iStack_3c);
    piVar9 = (int *)*puVar5;
    *(int *)piVar9[1] = *piVar9;
    *(int *)(*piVar9 + 4) = piVar9[1];
    FUN_50106b60((undefined *)piVar9);
    *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
  }
  if (*(int *)((int)param_1 + 0x148) == 0) goto LAB_5007e7be;
  piVar9 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
  local_20 = piVar9;
  FUN_500499f0((void *)((int)param_1 + 0x140),&iStack_1c,
               *(int **)(*(int *)((int)param_1 + 0x144) + 4));
  if (piVar9 == (int *)0x0) goto LAB_5007e7be;
  iVar6 = (**(code **)(*piVar9 + 0x10))();
  if ((iVar6 == 0) || (piVar2 = *(int **)(iVar6 + 0x450), piVar9 = local_20, piVar2 == (int *)0x0))
  goto LAB_5007e7b4;
  local_40 = (undefined4 *)(**(code **)(*piVar2 + 0xd4))();
  if (local_40 == (undefined4 *)0x0) {
    this = operator_new(0xe8);
    puStack_8 = (undefined1 *)0x0;
    if (this == (void *)0x0) {
      local_40 = (undefined4 *)0x0;
    }
    else {
      local_40 = FUN_500402e0(this,0,0x19,0.0,iVar6);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*piVar2 + 0x38))(local_40,iVar6);
  }
  if (iStack_3c != 0) {
    FUN_50081520(param_1,iVar6,iStack_3c,4);
    iStack_3c = 0;
  }
  uVar7 = (**(code **)(*piVar8 + 4))();
  iVar11 = local_30;
  switch(uVar7) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x16:
  case 0x17:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x31:
    iVar3 = *piVar2;
    uVar7 = (**(code **)(*piVar8 + 4))(auStack_18,local_30,fStack_34,iVar6);
    uVar7 = (**(code **)(iVar3 + 0x240))(iStack_3c,0,piVar2,s_cch_xcrouch_up_pk_a_50136170,uVar7);
    break;
  default:
    goto switchD_5007e622_caseD_b;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    iVar3 = *piVar2;
    uVar7 = (**(code **)(*piVar8 + 4))(auStack_18,local_30,fStack_34,iVar6);
    uVar7 = (**(code **)(iVar3 + 0x244))(iStack_3c,0,piVar2,s_cch_xcrouch_up_pk_a_50136170,uVar7);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    iVar3 = *piVar2;
    uVar7 = (**(code **)(*piVar8 + 4))(auStack_18,local_30,fStack_34,iVar6);
    uVar7 = (**(code **)(iVar3 + 0x248))(iStack_3c,0,piVar2,s_cch_xcrouch_up_pk_a_50136170,uVar7);
    break;
  case 0x2e:
    *(uint *)(iVar6 + 0x1b8) = *(uint *)(iVar6 + 0x1b8) | 8;
    goto switchD_5007e622_caseD_b;
  case 0x2f:
  case 0x30:
    iVar3 = *piVar2;
    iVar11 = iVar6;
    uVar7 = (**(code **)(*piVar8 + 4))(auStack_18,iVar6,fStack_34,iVar6);
    uVar7 = (**(code **)(iVar3 + 0x240))(iStack_3c,0,piVar2,s_cch_xcrouch_up_pk_a_50136170,uVar7);
  }
  (**(code **)(iVar11 + 0x34))(uVar7);
  local_40 = (undefined4 *)FUN_500d1670((int)piVar2);
switchD_5007e622_caseD_b:
  puVar5 = operator_new(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    fVar4 = DAT_5015ccdc + 1000.0;
    *puVar5 = &PTR_LAB_5012972c;
    fVar10 = FUN_5010777b((double)((fVar4 + 0.05) * 10.0));
    puVar5[2] = 6;
    *puVar5 = &PTR_FUN_501296c4;
    puVar5[4] = iVar6;
    puVar5[5] = local_40;
    puVar5[1] = (float)(fVar10 * (float10)0.1);
    puVar5[3] = 10;
  }
  FUN_50081380(param_1,(int)puVar5);
  piVar9 = local_20;
LAB_5007e7b4:
  (**(code **)*piVar9)();
LAB_5007e7be:
  if (piVar8 != (int *)0x0) {
    (**(code **)*piVar8)();
  }
  if (local_2c != (int *)0x0) {
    (**(code **)*local_2c)();
  }
  if (local_28 != (int *)0x0) {
    (**(code **)*local_28)();
  }
  if (local_24 != (int *)0x0) {
    (**(code **)*local_24)();
  }
  if (local_38 != (undefined4 *)0x0) {
    (**(code **)*local_38)(1);
  }
  ExceptionList = pvStack_c;
  return;
}

