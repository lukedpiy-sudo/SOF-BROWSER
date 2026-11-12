// rea decompile_all
// name: FUN_5003ad10
// address: 0x5003ad10
// body: available
// range: 0x5003ad10-0x5003aff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5003ad10(void *this,int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  char *pcVar7;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  
  local_18 = 0;
  local_14 = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  local_10 = 0.0;
  (**(code **)(*param_1 + 200))(&local_18);
  param_1[0x68] = param_1[0x68] & 0xfffffffb;
  (**(code **)(*param_1 + 0xc4))();
  if ((char)param_1[0x6e] < '\0') {
    *(undefined4 *)((int)this + 0x84) = 0;
    (**(code **)(*param_1 + 200))(&DAT_5018bf0c);
    return 1;
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0x18c))();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x118))();
    if (iVar4 != 0) goto LAB_5003aef5;
  }
  if (45.0 < DAT_5015ccdc - *(float *)((int)this + 0x70)) {
    pcVar7 = s_NIR___out_of_time_501421d0;
LAB_5003ae4e:
    FUN_500adb60(param_1,(byte *)pcVar7);
    *(undefined4 *)((int)this + 0x84) = 1;
    return 0;
  }
  local_10 = *param_3 - *param_2;
  fStack_c = param_3[1] - param_2[1];
  fStack_8 = param_3[2] - param_2[2];
  fVar6 = FUN_500fe130(&local_10);
  fVar1 = (float)fVar6;
  if (fVar6 < (float10)10.0) {
    (**(code **)(*param_1 + 200))(&DAT_5018bf0c);
    return 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x184))();
  if (iVar4 == 0) {
    pcVar7 = s_NIR___don_t_have_a_move_501421b4;
    goto LAB_5003ae4e;
  }
  iVar4 = (**(code **)(*param_1 + 0x184))();
  if (iVar4 == 0) {
LAB_5003afd6:
    FUN_500adb60(param_1,(byte *)s_NIR___no_clear_shot_50142178);
    *(undefined4 *)((int)this + 0x84) = 3;
    return 0;
  }
  iVar4 = (**(code **)(*param_1 + 0x184))(0,(undefined4 *)((int)this + 0x88));
  iVar4 = FUN_50039820(this,param_1,param_1,param_3,*(int **)((int)this + 0x60),
                       *(undefined4 *)(iVar4 + 0x4c));
  if (iVar4 == 0) goto LAB_5003afd6;
  pfVar5 = (float *)(**(code **)(*param_1 + 0x220))();
  if (*pfVar5 * 1.2 < fVar1) {
    param_1[0x57] = 0;
  }
  else {
    if (param_1[0x57] != 0) {
LAB_5003aef5:
      param_1[0x57] = 1;
      FUN_500adb60(param_1,(byte *)s_NIR___too_close_501421a0);
      *(undefined4 *)((int)this + 0x84) = 2;
      return 0;
    }
    pfVar5 = (float *)(**(code **)(*param_1 + 0x220))();
    if (fVar1 <= *pfVar5 * 0.75) goto LAB_5003aef5;
  }
  iVar4 = (**(code **)(*param_1 + 0x220))();
  fVar2 = *(float *)(iVar4 + 4) * 0.75;
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    iVar4 = (**(code **)(*param_1 + 0x220))();
    if ((*(byte *)(iVar4 + 0x1c) & 2) == 0) {
      if (param_1[0x58] != 0) {
LAB_5003af81:
        param_1[0x58] = 1;
        FUN_500adb60(param_1,(byte *)s_NIR___too_far_50142190);
        *(undefined4 *)((int)this + 0x84) = 1;
        return 0;
      }
      iVar4 = (**(code **)(*param_1 + 0x220))();
      fVar2 = *(float *)(iVar4 + 4) * 1.2;
      if (fVar2 < fVar1 != (fVar2 == fVar1)) goto LAB_5003af81;
      goto LAB_5003afb2;
    }
  }
  param_1[0x58] = 0;
LAB_5003afb2:
  *(undefined4 *)((int)this + 0x84) = 0;
  (**(code **)(*param_1 + 200))(&DAT_5018bf0c);
  return 1;
}

