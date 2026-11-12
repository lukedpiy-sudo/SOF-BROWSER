// rea decompile_all
// name: FUN_20012150
// address: 0x20012150
// body: available
// range: 0x20012150-0x2001257d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20012150(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  int ***pppiVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcStack_4c;
  int **ppiStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [8];
  int *piStack_38;
  int *local_34;
  undefined *local_30;
  
  if (_DAT_20225914 != *(float *)(DAT_2022508c + 0x18)) {
    ppiStack_48 = (int **)s_New_weapon_prediction_settings_w_2011f400;
    pcStack_4c = (char *)0x20012172;
    Com_Printf();
  }
  _DAT_20225914 = *(float *)(DAT_2022508c + 0x18);
  if (DAT_20225820 == 0) {
    return;
  }
  if (DAT_201c1f00 != 8) {
    return;
  }
  if (DAT_20225930 == (int *)0x0) {
    ppiStack_48 = (int **)0x200121ad;
    FUN_2000c770();
  }
  local_34 = DAT_20225930;
  local_30 = &DAT_20225260;
  ppiStack_48 = &local_34;
  pcStack_4c = (char *)0x200121cc;
  (**(code **)(*DAT_20225930 + 0xf4))();
  pcStack_4c = (char *)0x200121d8;
  (**(code **)(*piStack_38 + 0x118))();
  pcStack_4c = (char *)0x200121e4;
  (**(code **)(*piStack_38 + 0x110))();
  uVar5 = DAT_201e7e64 - 1U & 0xf;
  piVar6 = (int *)(&DAT_201e7f68 + uVar5 * 0x104);
  if ((*(uint *)(&DAT_201e7f6c + uVar5 * 0x104) != DAT_201e7e64 - 1U) || (*piVar6 == 0)) {
    piVar6 = &DAT_201e7e60;
  }
  if ((((float)piVar6[0x32] != DAT_201e7f28) && (DAT_201e7f06 != 6)) || (DAT_202258cc == 0.0)) {
    DAT_202258cc = DAT_201e7f28;
    DAT_2022591c = DAT_201e7f28;
    _DAT_20225928 = DAT_201e7f28;
  }
  if (DAT_201e7f0d != DAT_201e8fa8) {
    pcStack_4c = s_Waiting_for_prediction_resynch__2011f444;
    Com_DPrintf();
    return;
  }
  if (*(float *)(DAT_202250a8 + 0x18) != 0.0) {
    return;
  }
  if (DAT_201e7efc != '\0') {
    return;
  }
  if (DAT_201e7f58._3_1_ != '\0') {
    return;
  }
  if (DAT_201e7f04 == 0) {
    return;
  }
  pcStack_4c = (char *)0x0;
  DAT_2022592c._0_1_ = DAT_201e759c._1_1_;
  piVar6 = (int *)FUN_20069630(1);
  pcStack_4c = (char *)CONCAT22(extraout_var,DAT_201e7f04);
  DAT_202258a4 = (int *)(**(code **)(*piVar6 + 0x24))();
  _DAT_202258a8 = DAT_201e7f04;
  DAT_202258b0 = DAT_201e7f0c;
  DAT_202258aa = DAT_201e7f06;
  _DAT_202258ac = DAT_201e7f08;
  _DAT_202258ae = DAT_201e7f0a;
  if (DAT_201e7e94 < 2) {
    FUN_20018fc0(&DAT_20225410,1);
    iVar1 = *DAT_20225930;
    uVar7 = Cmd_Argv(0,0);
    (**(code **)(iVar1 + 0x10))(uVar7);
    DAT_20225410 = 0;
    FUN_20011f10(&DAT_20225260);
  }
  piVar6 = (int *)DAT_20225930[0x53];
  if (piVar6 != (int *)0x0) {
    if (DAT_201e7e94 < 2) {
      if (DAT_20225910 < 2) goto LAB_200123b8;
    }
    else if (DAT_20225910 < 2) {
      (**(code **)(*piVar6 + 0x28))(0);
      goto LAB_200123b8;
    }
    if (DAT_201e7e94 < 2) {
      (**(code **)(*piVar6 + 0x28))(1);
    }
  }
LAB_200123b8:
  DAT_20225910 = DAT_201e7e94;
  FUN_20012010();
  if (_DAT_20225824 + 0.1 < DAT_201e8fc8 != (_DAT_20225824 + 0.1 == DAT_201e8fc8)) {
    _DAT_20225824 = DAT_201e8fc8;
    _DAT_20225928 = DAT_2022591c;
    DAT_2022591c = DAT_202258cc;
  }
  fVar2 = (DAT_201e8fc8 - _DAT_20225824) * 10.0;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (DAT_2022591c - _DAT_20225928 <= 180.0) {
    fVar3 = DAT_2022591c;
    if (DAT_2022591c - _DAT_20225928 < -180.0) {
      fVar3 = DAT_2022591c + 360.0;
    }
  }
  else {
    fVar3 = DAT_2022591c - 360.0;
  }
  DAT_20225920 = (fVar3 - _DAT_20225928) * fVar2 + _DAT_20225928;
  DAT_20225258 = (int *)DAT_20225930[0x53];
  DAT_2022592c._2_2_ = DAT_202258aa;
  if (DAT_20225258 == (int *)0x0) {
    DAT_2022581c = 0;
  }
  else {
    sVar4 = (**(code **)(*DAT_20225258 + 0x9c))();
    DAT_2022581c = -sVar4;
    if ((DAT_20225924 != 0) && (DAT_202258a4 != (int *)0x0)) {
      puVar10 = auStack_40;
      puVar9 = auStack_44;
      pppiVar8 = &ppiStack_48;
      (**(code **)(*DAT_202258a4 + 0x3c))();
      if ((((float)&pcStack_4c == 1.0) && (((float)pppiVar8 == 1.0 && ((float)puVar9 == 1.0)))) &&
         ((float)puVar10 == 1.0)) {
        (**(code **)(*DAT_20225258 + 0x40))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
        DAT_20225924 = 0;
        return;
      }
    }
  }
  return;
}

