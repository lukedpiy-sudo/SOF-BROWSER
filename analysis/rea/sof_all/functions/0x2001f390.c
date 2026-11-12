// rea decompile_all
// name: FUN_2001f390
// address: 0x2001f390
// body: available
// range: 0x2001f390-0x2001f6fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2001f390(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_2010ae5b;
  local_10 = ExceptionList;
  local_8 = 0;
  _DAT_20249e54 = &DAT_20249e54;
  DAT_20249e58 = &DAT_20249e54;
  ExceptionList = &local_10;
  if (0x32 < param_1) {
    ExceptionList = &local_10;
    Com_Error(0,s_argc_>_MAX_NUM_ARGVS_201213c4);
  }
  DAT_20249e6c = param_1;
  iVar6 = 0;
  while (iVar6 < param_1) {
    pcVar7 = *(char **)(param_2 + iVar6 * 4);
    if (pcVar7 == (char *)0x0) {
LAB_2001f410:
      (&DAT_20249e78)[iVar6] = &DAT_2015ee44;
      iVar6 = iVar6 + 1;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar8 = pcVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (0xff < ~uVar4 - 1) goto LAB_2001f410;
      (&DAT_20249e78)[iVar6] = pcVar7;
      iVar6 = iVar6 + 1;
    }
  }
  DAT_20121200 = timeGetTime();
  FUN_200553a0();
  FUN_20018160();
  FUN_20019ae0();
  FUN_20022ca0();
  FUN_2004c280();
  FUN_20018600(0);
  FUN_20018530();
  FUN_20026980();
  FUN_20018180(s_exec_default_cfg_201216f0);
  FUN_20018180(s_exec_config_cfg_201216dc);
  FUN_20018530();
  FUN_20018600(1);
  FUN_20018530();
  Cmd_AddCommand(s_z_stats_201216d4,FUN_2001ec60);
  Cmd_AddCommand(s_error_201216cc,&LAB_2001f250);
  Cmd_AddCommand(s_subliminal_201216c0,&LAB_2001f2c0);
  Cmd_AddCommand(s_disconnect_2011d92c,&LAB_2001f270);
  DAT_20249f44 = Cvar_Get(s_host_speeds_201216b4,&DAT_2011c4ac,0,0);
  DAT_20249f54 = Cvar_Get(s_log_stats_201216a8,&DAT_2011c4ac,0,0);
  DAT_2024961c = Cvar_Get(s_developer_2012169c,&DAT_2011c4ac,0,0);
  if (0.0 < *(float *)(DAT_2024961c + 0x18)) {
    MessageBoxA((HWND)0x0,s_SoF_will_now_be_run_in_developer_201215a8,s_Developer_Mode_2012168c,0x40
               );
  }
  DAT_20248e10 = Cvar_Get(s_timescale_2011d508,&DAT_2011d31c,0,0);
  DAT_20249630 = Cvar_Get(s_fixedtime_2011d4a4,&DAT_2011c4ac,0,0);
  DAT_20249f4c = Cvar_Get(s_logfile_201215a0,&DAT_2011c4ac,0,0);
  DAT_20249e48 = Cvar_Get(s_showtrace_20121594,&DAT_2011c4ac,0,0);
  DAT_20249618 = Cvar_Get(s_dedicated_20121588,&DAT_2011c4ac,8,0);
  uVar2 = FUN_20055450(s_1_07f_sF_20121578,&DAT_20121584);
  Cvar_Get(s_version_20121570,uVar2,0xc,0);
  if (*(float *)(DAT_20249618 + 0x18) != 0.0) {
    Cmd_AddCommand(&DAT_2011e240,FUN_2001cac0);
  }
  FUN_200656f0();
  FUN_200588e0();
  FUN_2004f450();
  FUN_2004d250();
  FUN_20050840();
  pvVar3 = operator_new(0x20);
  local_8._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    DAT_204076d0 = 0;
  }
  else {
    DAT_204076d0 = FUN_200f4bf0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_2005f8a0();
  FUN_2000dd20();
  for (iVar6 = 1; iVar6 < DAT_20249e6c; iVar6 = iVar6 + 1) {
    iVar5 = 9;
    bVar9 = true;
    pcVar7 = s__nostart_20121564;
    pcVar8 = (char *)(&DAT_20249e78)[iVar6];
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (bVar9) goto LAB_2001f691;
  }
  iVar6 = 0;
LAB_2001f691:
  iVar5 = FUN_20018740();
  if (iVar5 == 0 && iVar6 == 0) {
    if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
      FUN_20018180(s_start_2012155c);
      FUN_20018530();
    }
    else {
      FUN_20018180(s_dedicated_start_20121548);
      FUN_20018530();
    }
  }
  else {
    FUN_20013f30();
  }
  Com_Printf(&DAT_20121514);
  ExceptionList = local_10;
  return;
}

