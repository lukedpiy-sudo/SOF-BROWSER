// rea decompile_all
// name: FUN_500115a0
// address: 0x500115a0
// body: available
// range: 0x500115a0-0x500119dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500115a0(void *this,int param_1,int param_2,char param_3)

{
  int iVar1;
  uint3 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong lVar9;
  undefined3 in_stack_0000000d;
  float local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_2c;
  undefined4 local_24;
  
  local_78 = local_78 & 0xffffff00;
  local_80 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(uint *)(param_2 + 0x48);
  local_90[0] = DAT_5015ccdc;
  iVar5 = *(int *)((int)this + 4);
  uVar2 = local_7c._1_3_;
  local_7c = CONCAT31(local_7c._1_3_,(char)(uVar4 >> 0x18)) & 0xffffff01;
  if (((param_2 == iVar5) && (param_3 == '\0')) && (*(int *)((int)this + 0xc) == 0))
  goto LAB_500119c4;
  if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0x48) & 0x8000000) == 0)) &&
     ((*(int *)((int)this + 0xc) != 0 && ((uVar4 & 0x1000000) != 0)))) {
    local_7c = (uint)uVar2 << 8;
    _param_3 = CONCAT31(in_stack_0000000d,1);
  }
  if ((uVar4 & 0x40000) == 0) {
    if (((iVar5 != 0) && ((*(uint *)(iVar5 + 0x48) & 0x40000) != 0)) &&
       ((*(int *)(param_2 + 0x38) == 5 || (*(int *)(param_2 + 0x38) == 6)))) {
      iVar5 = *(int *)(param_1 + 0x450);
      local_24 = 0;
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      iVar1 = **(int **)(param_1 + 0x164);
      uVar7 = (**(code **)(*piVar6 + 0x1c))(s_sbolt_mouth_5012f8c8,5,1);
      (**(code **)(iVar1 + 200))(DAT_5015ccdc,&uStack_68,uVar7);
      if (iVar5 != 0) {
        fStack_70 = fStack_64;
        uStack_6c = uStack_60;
        uStack_68 = 0;
        FUN_500c3570(&fStack_70,local_90 + 1);
        iVar5 = (**(code **)(*(int *)this + 0x11c))();
        if ((iVar5 == 5) || (iVar5 = (**(code **)(*(int *)this + 0x11c))(), iVar5 == 6)) {
          local_90[2] = local_90[2] - 90.0;
        }
        local_90[1] = local_90[1] + *(float *)(param_1 + 0x10);
        iVar5 = 0;
        local_90[2] = local_90[2] + *(float *)(param_1 + 0x14);
        local_90[3] = local_90[3] + *(float *)(param_1 + 0x18);
        do {
          lVar9 = __ftol();
          uStack_74 = (uint)lVar9 & 0xffff;
          iVar5 = iVar5 + 1;
          local_90[iVar5] = (float)uStack_74 * 0.005493164;
        } while (iVar5 < 3);
        *(float *)(param_1 + 0x10) = local_90[1];
        *(float *)(param_1 + 0x14) = local_90[2];
        *(float *)(param_1 + 0x18) = local_90[3];
      }
    }
  }
  else {
    local_90[0] = DAT_5015ccdc + 0.1;
  }
  if (*(int *)((int)this + 0x10) == 2) {
    return 0;
  }
  if (*(int **)(param_1 + 0x164) == (int *)0x0) {
LAB_500117f9:
    iVar5 = *(int *)(param_1 + 0x1b4);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x1c8) != 0) {
        (*DAT_5015ca24)(s__s__s_couldn_t_play_animation__s_5012f8a4,iVar5,*(int *)(param_1 + 0x1c8),
                        param_2);
        return 0;
      }
      if (iVar5 != 0) {
        (*DAT_5015ca24)(s_Some__s_couldn_t_play_animation___5012f87c,iVar5,param_2);
        return 0;
      }
    }
    (*DAT_5015ca24)(s_Unknown_monster_couldn_t_play_an_5012f84c,param_2);
    return 0;
  }
  uVar4 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  iVar5 = FUN_500a5e10(&DAT_5015c79c,uVar4);
  if (iVar5 == 0) goto LAB_500117f9;
  FUN_500fe2b0();
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar7 = (**(code **)(*piVar6 + 0xc))(&fStack_64);
  if ((short)uVar7 == 0) goto LAB_500117f9;
  uVar4 = *(uint *)(param_2 + 0x48);
  if ((((uVar4 & 0x2000000) != 0) && (param_2 != *(int *)((int)this + 4))) &&
     (*(int *)(*(int *)((int)this + 4) + 0x38) == *(int *)(param_2 + 0x38))) {
    local_90[0] = *(float *)((int)this + 0x34);
  }
  if ((uVar4 & 0x4000000) != 0) {
    local_78 = CONCAT31(local_78._1_3_,1);
    local_80 = 0x3f800000;
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 0x44))
            (uVar7,local_90[0],local_80,_param_3,(uVar4 & 0x8000000) == 0,local_7c,local_78);
  *(float *)((int)this + 0x34) = local_90[0];
  if ((*(int **)(param_1 + 0x164) == (int *)0x0) || (*(int *)((int)this + 4) == 0)) {
LAB_50011942:
    sVar3 = 0;
  }
  else {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    iVar5 = FUN_500a5e10(&DAT_5015c79c,uVar4);
    if (iVar5 == 0) goto LAB_50011942;
    FUN_500fe2b0();
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar3 = (**(code **)(*piVar6 + 0xc))(&fStack_64);
  }
  if (((short)uVar7 != sVar3) || (param_3 != '\0')) {
    *(undefined4 *)((int)this + 0xc) = 0;
    piVar6 = *(int **)(param_1 + 0x450);
    if (piVar6 != (int *)0x0) {
      local_24 = 0;
      piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar3 = (**(code **)(*piVar8 + 0x1c))(s_quake_ground_5012f83c);
      if ((sVar3 != 0) &&
         ((**(code **)(**(int **)(param_1 + 0x164) + 200))(DAT_5015ccdc,&fStack_64,sVar3,5,1),
         piVar6 != (int *)0x0)) {
        (**(code **)(*piVar6 + 0x1c8))(uStack_2c);
      }
    }
  }
  *(int *)((int)this + 4) = param_2;
LAB_500119c4:
  (**(code **)(*(int *)this + 0x60))(param_1);
  return 1;
}

