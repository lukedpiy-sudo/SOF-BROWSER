// rea decompile_all
// name: FUN_50031630
// address: 0x50031630
// body: available
// range: 0x50031630-0x50031837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_50031630(void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  void *this_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1);
  if ((((uVar2 == 0x12) || (uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1), uVar2 == 0x10)) ||
      (uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1), uVar2 == 0x11)) &&
     (*(int **)(param_1 + 0x164) != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar2 = (**(code **)(*piVar3 + 0x1c))(s_wbolt_hand_r_5012fedc);
    if ((short)uVar2 != 0) {
      this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
      iVar4 = FUN_500a4250(this_00,(short)uVar2);
      uVar2 = 0;
      if (((iVar4 != 0) &&
          (uVar5 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x24) + 0x24) + 0x1c))(s_flash_50133d48)
          , uVar2 = uVar5, (short)uVar5 != 0)) &&
         (uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1), 0xf < (int)uVar2)) {
        if ((int)uVar2 < 0x12) {
          fVar1 = DAT_5015ccdc - *(float *)((int)this + 0x180);
          uVar2 = (uint)(ushort)((ushort)(fVar1 < 1.0) << 8 | (ushort)(fVar1 == 1.0) << 0xe);
          if (fVar1 >= 1.0 && (fVar1 == 1.0) == 0) {
            lVar7 = __ftol();
            _DAT_5015c520 = (undefined2)lVar7;
            DAT_5015c51c = DAT_5015c51c | 1;
            iVar11 = 0;
            piVar3 = *(int **)(iVar4 + 0x1c);
            iVar10 = 0;
            uVar9 = 1;
            iVar4 = param_1;
            iVar6 = (*DAT_5015c9f8)(s_weapons_othermz_mpgcharge_50133e34);
            FUN_50085470(&DAT_5015c518,iVar6,iVar4,piVar3,(short)uVar5,uVar9,iVar10,iVar11);
            uVar8 = __ftol();
            uVar8 = (ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff;
            uVar2 = (uint)((longlong)uVar8 / 5);
            iVar4 = (int)((longlong)uVar8 % 5);
            if (iVar4 == 0) {
              iVar10 = param_1 + 4;
              uVar9 = 1;
              iVar6 = (*DAT_5015c9f8)(s_weapons_othermz_mpgcharge2_50133e18);
              uVar2 = FUN_500852e0(&DAT_5015c518,iVar6,iVar10,uVar9,iVar4);
              return uVar2;
            }
          }
        }
        else if (uVar2 == 0x12) {
          piVar3 = *(int **)(iVar4 + 0x1c);
          iVar11 = 0;
          iVar10 = 0;
          uVar9 = 1;
          iVar4 = param_1;
          iVar6 = (*DAT_5015c9f8)(s_weapons_othermz_flamecharge_50133e6c);
          FUN_50085470(&DAT_5015c518,iVar6,iVar4,piVar3,(short)uVar5,uVar9,iVar10,iVar11);
          fVar1 = DAT_5015ccdc - *(float *)((int)this + 0x180);
          if (fVar1 < 0.5) {
            uVar2 = (*DAT_5015c9f4)(s_Weapons_flamegun_Fire_wav_50133e50);
            *(uint *)(param_1 + 0x3c) = uVar2;
            *(undefined4 *)(param_1 + 0x40) = 0xf8;
            return uVar2;
          }
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x40) = 0;
          return CONCAT22(extraout_var,
                          (ushort)(fVar1 < 0.5) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.5) << 0xe);
        }
      }
    }
  }
  return uVar2;
}

