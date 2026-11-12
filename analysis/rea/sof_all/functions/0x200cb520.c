// rea decompile_all
// name: FUN_200cb520
// address: 0x200cb520
// body: available
// range: 0x200cb520-0x200cb830 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200cb726) */

void FUN_200cb520(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *in_ECX;
  int iVar6;
  float10 fVar7;
  undefined1 local_19;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e3fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  in_ECX[0x38] = local_19;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  local_4 = 0;
  in_ECX[0x54] = local_19;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  in_ECX[100] = local_19;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(in_ECX + 0x68) = pvVar2;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  local_4._0_1_ = 2;
  in_ECX[0x70] = local_19;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(in_ECX + 0x74) = pvVar2;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  in_ECX[0x7c] = local_19;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  in_ECX[0x8c] = local_19;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  local_4._0_1_ = 5;
  in_ECX[0x9c] = local_19;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)(in_ECX + 0xa0) = pvVar2;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  uVar3 = Cvar_Get(s_menu_mouse_x_20158798,&DAT_2011c4ac,0,0);
  *(undefined4 *)(in_ECX + 8) = uVar3;
  uVar3 = Cvar_Get(s_menu_mouse_y_20158788,&DAT_2011c4ac,0,0);
  *(undefined4 *)(in_ECX + 0xc) = uVar3;
  Cvar_SetValue(**(undefined4 **)(in_ECX + 8),(float)(DAT_2040365c >> 1));
  Cvar_SetValue(**(undefined4 **)(in_ECX + 0xc),(float)(DAT_20403660 >> 1));
  uVar3 = Cvar_Get(s_m_sensitivity_wheel_2013522c,&DAT_2011d31c,0,0);
  *(undefined4 *)(in_ECX + 0x10) = uVar3;
  uVar3 = Cvar_Get(s_m_cursor_speed_20158778,&DAT_2011f604,1,0);
  *(undefined4 *)(in_ECX + 0x14) = uVar3;
  uVar3 = Cvar_Get(s_m_cursor_accel_20158768,&DAT_2011e42c,1,0);
  *(undefined4 *)(in_ECX + 0x18) = uVar3;
  in_ECX[0x1c] = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  piVar4 = (int *)FUN_20069630(0,1);
  *(int **)(in_ECX + 0x24) = piVar4;
  (**(code **)(*piVar4 + 0x84))();
  Cvar_Set(s_scr_showpause_2011f630,&DAT_2011c4ac);
  fVar7 = (float10)FUN_200216d0(s_maxclients_2011d768);
  if ((fVar7 == (float10)1.0) && (iVar5 = FUN_2001cae0(), iVar5 != 0)) {
    Cvar_Set(s_paused_2011d4b0,&DAT_2011d31c);
  }
  iVar1 = *(int *)(in_ECX + 0x40);
  iVar5 = *(int *)(in_ECX + 0x3c);
  for (iVar6 = iVar5; iVar6 != iVar1; iVar6 = iVar6 + 0x84) {
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 0xb;
    FUN_2004fa40();
    local_4._0_1_ = 10;
    FUN_2004fa40();
    local_4._0_1_ = 9;
    FUN_2004fa40();
    local_4._0_1_ = 8;
    FUN_2004fa40();
    local_4._0_1_ = 7;
    FUN_2004fa40();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_2004fa40();
  }
  *(int *)(in_ECX + 0x40) = iVar5;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  Cvar_Set(s_player_summary_20158754,&DAT_20158764);
  Cvar_Set(s_server_summary_20158744,&DAT_2011c4ac);
  Cvar_Set(s_locked_summary_20158734,&DAT_2011c4ac);
  DAT_201c1f04 = 3;
  iVar5 = FUN_20055930();
  *(undefined4 *)(in_ECX + 0x34) = 1;
  in_ECX[1] = 0;
  *(float *)(in_ECX + 0x28) = (float)iVar5 * 0.001;
  *(float *)(in_ECX + 0x2c) = (float)iVar5 * 0.001;
  ExceptionList = pvStack_c;
  return;
}

