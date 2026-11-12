// rea decompile_all
// name: FUN_5007e870
// address: 0x5007e870
// body: available
// range: 0x5007e870-0x5007ec3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007e870(void *param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  void *this;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBX;
  int *piVar8;
  float10 fVar9;
  int *local_44;
  int *piStack_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float fStack_24;
  int *local_20;
  int iStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114c8b;
  pvStack_c = ExceptionList;
  local_28 = 0xffffffff;
  bVar1 = *(byte *)(*(int *)((int)param_1 + 0x114) + *(int *)((int)param_1 + 0x104));
  local_2c = CONCAT31(local_2c._1_3_,bVar1);
  local_44 = (int *)0x0;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  ExceptionList = &pvStack_c;
  *(int *)((int)param_1 + 0x114) = *(int *)((int)param_1 + 0x114) + 1;
  if ((bVar1 & 8) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_44 = (int *)0x0;
    }
    else {
      local_44 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_20,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
  }
  if ((bVar1 & 4) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_34 = (int *)0x0;
    }
    else {
      local_34 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_20,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
    fVar9 = (float10)(**(code **)(*local_34 + 8))();
    fStack_24 = (float)fVar9;
  }
  if ((bVar1 & 2) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_38 = (int *)0x0;
    }
    else {
      local_38 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_20,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
    (**(code **)(*local_38 + 0xc))();
  }
  if ((bVar1 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_3c = (int *)0x0;
    }
    else {
      local_3c = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_20,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
    (**(code **)(*local_3c + 0x10))();
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    piStack_40 = (int *)0x0;
  }
  else {
    piStack_40 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    local_2c = *(undefined4 *)(*(int *)((int)param_1 + 0x144) + 4);
    puVar4 = (undefined4 *)FUN_50049a30(&local_2c,&local_20);
    piVar8 = (int *)*puVar4;
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
    FUN_50106b60((undefined *)piVar8);
    *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
  }
  if (*(int *)((int)param_1 + 0x148) != 0) {
    piVar8 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    local_20 = piVar8;
    FUN_500499f0((void *)((int)param_1 + 0x140),&iStack_1c,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    if (piVar8 != (int *)0x0) {
      iVar5 = (**(code **)(*piVar8 + 0x10))();
      if ((iVar5 != 0) && (piVar2 = *(int **)(iVar5 + 0x450), piVar2 != (int *)0x0)) {
        local_30 = (undefined4 *)(**(code **)(*piVar2 + 0xd4))();
        if (local_30 == (undefined4 *)0x0) {
          this = operator_new(0xe8);
          puStack_8 = (undefined1 *)0x0;
          if (this == (void *)0x0) {
            local_30 = (undefined4 *)0x0;
          }
          else {
            local_30 = FUN_500402e0(this,0,0x19,0.0,iVar5);
          }
          puStack_8 = (undefined1 *)0xffffffff;
          (**(code **)(*piVar2 + 0x38))(local_30,iVar5);
        }
        if (unaff_EBX != 0) {
          FUN_50081520(param_1,iVar5,unaff_EBX,5);
        }
        iVar6 = (**(code **)(*local_44 + 4))();
        if ((0 < iVar6) && (iVar6 < 6)) {
          iVar6 = *piVar2;
          uVar7 = (**(code **)(*piStack_40 + 4))(auStack_18,local_30,fStack_24,iVar5);
          uVar7 = (**(code **)(iVar6 + 0x22c))
                            (local_2c,0,piVar2,s_cch_xcrouch_up_pk_a_50136170,uVar7);
          (**(code **)(iVar6 + 0x34))(uVar7);
          local_28 = FUN_500eae50((int)piVar2);
          piVar8 = local_20;
        }
        puVar4 = operator_new(0x18);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          fVar3 = DAT_5015ccdc + 1000.0;
          *puVar4 = &PTR_LAB_5012972c;
          fVar9 = FUN_5010777b((double)((fVar3 + 0.05) * 10.0));
          puVar4[2] = 7;
          *puVar4 = &PTR_FUN_501296dc;
          puVar4[4] = iVar5;
          puVar4[5] = local_28;
          puVar4[1] = (float)(fVar9 * (float10)0.1);
          puVar4[3] = 10;
        }
        FUN_50081380(param_1,(int)puVar4);
      }
      (**(code **)*piVar8)();
    }
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)*piStack_40)();
  }
  if (local_3c != (int *)0x0) {
    (**(code **)*local_3c)();
  }
  if (local_38 != (int *)0x0) {
    (**(code **)*local_38)();
  }
  if (local_34 != (int *)0x0) {
    (**(code **)*local_34)();
  }
  if (local_44 != (int *)0x0) {
    (**(code **)*local_44)(1);
  }
  ExceptionList = pvStack_c;
  return;
}

