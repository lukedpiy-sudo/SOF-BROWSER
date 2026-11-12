// rea decompile_all
// name: FUN_50026600
// address: 0x50026600
// body: available
// range: 0x50026600-0x50026a05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50026600(void *this,int param_1,float *param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x18))(4);
  }
  if ((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 0x4c) == 0)) {
    if (*(int *)((int)this + 0x1bc) != 0) {
      bVar3 = false;
      fVar6 = (float10)(**(code **)(*(int *)this + 0x94))();
      iVar5 = *(int *)(param_1 + 0x2ec);
      piVar2 = *(int **)(param_1 + 0x450);
      iVar1 = *(int *)(param_1 + 0x2f0);
      *(undefined4 *)((int)this + 0x1c0) = 0;
      *(undefined4 *)((int)this + 0x1bc) = 0;
      if (piVar2 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar2 + 0x220))();
        if ((float)(~*(uint *)(iVar4 + 0x1c) & 1) == 0.0) {
          bVar3 = true;
        }
      }
      if ((((float)fVar6 <= 0.5) || ((float)iVar5 / (float)iVar1 <= 0.5)) && (!bVar3)) {
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sgunfromhand_n_n_n_50138740);
        if (iVar5 != 0) {
          FUN_5001e5a0(this,s_Disarm_50133814,param_1);
          return s_std_sgunfromhand_n_n_n_50138740;
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sarm_rt_n_n_50139b88);
      if (iVar5 != 0) {
        return s_std_sarm_rt_n_n_50139b88;
      }
    }
    fStack_18 = *param_2 - *(float *)(param_1 + 4);
    fStack_14 = param_2[1] - *(float *)(param_1 + 8);
    fStack_10 = param_2[2] - *(float *)(param_1 + 0xc);
    FUN_500fe050(&fStack_18);
    FUN_500fdd70((float *)(param_1 + 0x10),&fStack_c,(float *)0x0,(float *)0x0);
    if ((int)*(uint *)((int)this + 0x1a8) < 0) {
      if ((*(uint *)((int)this + 0x1a8) & 4) != 0) {
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sleg_rt_n_n_50139818);
        if (iVar5 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sleg_rt_n_n_50139818;
        }
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_slegunhurt_rt_a_n_5013fd80);
        if (iVar5 != 0) {
          return s_std_slegunhurt_rt_a_n_5013fd80;
        }
      }
      if ((*(byte *)((int)this + 0x1a8) & 8) != 0) {
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sleg_lt_n_n_50139870);
        if (iVar5 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sleg_lt_n_n_50139870;
        }
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_slegunhurt_lt_a_n_5013fd28);
        if (iVar5 != 0) {
          return s_std_slegunhurt_lt_a_n_5013fd28;
        }
      }
      if ((*(byte *)((int)this + 0x1a8) & 1) != 0) {
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sarm_rt_n_n_50139b88);
        if (iVar5 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sarm_rt_n_n_50139b88;
        }
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sarmunhurt_rt_a_n_5013fcd0);
        if (iVar5 != 0) {
          return s_std_sarmunhurt_rt_a_n_5013fcd0;
        }
      }
      if ((*(int *)((int)this + 0x1c0) != 0) || ((*(byte *)((int)this + 0x1a8) & 2) != 0)) {
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sarm_lt_n_n_50139be0);
        if (iVar5 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sarm_lt_n_n_50139be0;
        }
        iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sarmunhurt_lt_a_n_5013fc78);
        if (iVar5 != 0) {
          return s_std_sarmunhurt_lt_a_n_5013fc78;
        }
      }
    }
    if (0.0 <= fStack_c * fStack_18 + fStack_8 * fStack_14 + fStack_4 * fStack_10) {
      if (75.0 < param_3) {
        iVar5 = (*DAT_5015cb24)(0,5);
        if (iVar5 == 0) {
          iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sblown_2bk_n_n_5013e5c8);
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_lb_xgetup_n_a_n_5013e620);
            if (iVar5 != 0) {
              iVar5 = (**(code **)(*(int *)this + 0x90))();
              if (iVar5 != 3) {
                FUN_5001e5a0(this,s_Scream_50133650,param_1);
                return s_std_sblown_2bk_n_n_5013e5c8;
              }
            }
          }
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sunhurt_bk_mrs_2_50139558);
      if (iVar5 != 0) {
        return s_std_sunhurt_bk_mrs_2_50139558;
      }
      iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sunhurt_bk_pk_n_50139500);
      if (iVar5 != 0) {
        return s_std_sunhurt_bk_pk_n_50139500;
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sunhurt_fwd_mrs_2_501394a8);
      if (iVar5 != 0) {
        return s_std_sunhurt_fwd_mrs_2_501394a8;
      }
      iVar5 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sunhurt_fwd_pk_n_50139450);
      if (iVar5 != 0) {
        return s_std_sunhurt_fwd_pk_n_50139450;
      }
    }
  }
  return (char *)0x0;
}

