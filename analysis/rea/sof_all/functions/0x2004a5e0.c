// rea decompile_all
// name: FUN_2004a5e0
// address: 0x2004a5e0
// body: available
// range: 0x2004a5e0-0x2004a90c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2004a908 to 0x2004aa30 FUN_2004aa30 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004a5e0(void)

{
  int iVar1;
  
  DAT_2036473c = Cvar_Get(s_in_mouse_20135298,&DAT_2011d31c,1,0);
  DAT_20364668 = Cvar_Get(s_m_filter_2013528c,&DAT_2011c4ac,1,0);
  DAT_20364738 = Cvar_Get(s_m_doublespeed_2013527c,&DAT_2011e5e0,1,0);
  DAT_20364638 = Cvar_Get(s_m_sensitivity_x_20135268,&DAT_20135278,0x21,0);
  DAT_2036468c = Cvar_Get(s_m_invert_x_2013525c,&DAT_2011c4ac,1,0);
  DAT_2036463c = Cvar_Get(s_m_sensitivity_y_2013524c,&DAT_20135278,0x21,0);
  DAT_203646a4 = Cvar_Get(s_m_invert_y_20135240,&DAT_2011c4ac,1,0);
  _DAT_2036461c = Cvar_Get(s_m_sensitivity_wheel_2013522c,&DAT_2011d31c,1,0);
  DAT_20364644 = Cvar_Get(s_in_joystick_20135220,&DAT_2011c4ac,1,0);
  DAT_2036464c = Cvar_Get(s_joy_avail_20135214,&DAT_2011c4ac,0,0);
  DAT_20364654 = Cvar_Get(s_joy_name_201351fc,s_joystick_20135208,1,0);
  DAT_203646c0 = Cvar_Get(s_joy_advanced_201351ec,&DAT_2011d31c,1,0);
  DAT_2036467c = Cvar_Get(s_joy_advaxisx_201351dc,&DAT_2013060c,1,0);
  DAT_20364678 = Cvar_Get(s_joy_advaxisy_201351cc,&DAT_2011d31c,1,0);
  DAT_20364674 = Cvar_Get(s_joy_advaxisz_201351bc,&DAT_2011c4ac,1,0);
  DAT_20364664 = Cvar_Get(s_joy_advaxisr_201351ac,&DAT_2011c4a8,1,0);
  DAT_20364670 = Cvar_Get(s_joy_advaxisu_2013519c,&DAT_2011c4ac,1,0);
  DAT_2036466c = Cvar_Get(s_joy_advaxisv_2013518c,&DAT_2011c4ac,1,0);
  DAT_203646bc = Cvar_Get(s_joy_forwardthreshold_20135174,&DAT_2011c4ac,1,0);
  DAT_203646dc = Cvar_Get(s_joy_sidethreshold_20135160,&DAT_2011c4ac,1,0);
  DAT_20364618 = Cvar_Get(s_joy_upthreshold_20135150,&DAT_2011c4ac,1,0);
  DAT_20364714 = Cvar_Get(s_joy_pitchthreshold_2013513c,&DAT_2011c4ac,1,0);
  DAT_203646c8 = Cvar_Get(s_joy_yawthreshold_20135128,&DAT_2011c4ac,1,0);
  DAT_203646c4 = Cvar_Get(s_joy_forwardsensitivity_2013510c,&DAT_20135124,1,0);
  DAT_203646b4 = Cvar_Get(s_joy_sidesensitivity_201350f8,&DAT_2011e42c,1,0);
  DAT_20364740 = Cvar_Get(s_joy_upsensitivity_201350e4,&DAT_20135124,1,0);
  DAT_20364758 = Cvar_Get(s_joy_pitchsensitivity_201350cc,&DAT_20135124,1,0);
  DAT_203646b8 = Cvar_Get(s_joy_yawsensitivity_201350b8,&DAT_20135124,1,0);
  Cmd_AddCommand(s__mlook_201350b0,&LAB_2004a590);
  Cmd_AddCommand(s__mlook_201350a8,&DAT_2004a5a0);
  Cmd_AddCommand(s_joy_advancedupdate_20135094,FUN_2004ab80);
  iVar1 = Cvar_Get(s_in_initmouse_20135084,&DAT_2011d31c,8,0);
  if (*(float *)(iVar1 + 0x18) != 0.0) {
    DAT_203645e4 = 1;
    DAT_20364660 = SystemParametersInfoA(3,0,&DAT_20364680,0);
  }
  FUN_2004aa30();
  return;
}

