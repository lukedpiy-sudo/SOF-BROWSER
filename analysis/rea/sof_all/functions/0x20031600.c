// rea decompile_all
// name: FUN_20031600
// address: 0x20031600
// body: available
// range: 0x20031600-0x200317e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200317e5 to 0x200380e0 FUN_200380e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20031600(void)

{
  undefined2 *puVar1;
  
  FUN_20030940();
  DAT_202ea4b8 = Cvar_Get(s_cl_freezequads_20132f50,&DAT_2011c4ac,0,0);
  DAT_202eacc0 = Cvar_Get(s_cl_max_quads_20132f3c,&DAT_20132f4c,1,0);
  DAT_202b34b0 = Cvar_Get(s_cl_max_debris_20132f28,&DAT_20132f38,1,0);
  DAT_2027c450 = Cvar_Get(s_fx_sim_time_20132f18,&DAT_20132f24,0,0);
  DAT_2027c474 = Cvar_Get(s_fx_noflash_20132f0c,&DAT_2011c4ac,0,0);
  DAT_202b3490 = Cvar_Get(s_fx_maxdebrisonscreen_20132ef0,&DAT_20132f08,0,0);
  DAT_20321f54 = Cvar_Get(s_fx_partadjust_20132c38,&DAT_2011c4ac,0,0);
  DAT_20364360 = Cvar_Get(s_fx_partadd_20132c54,&DAT_2011c4ac,0,0);
  DAT_20321d00 = Cvar_Get(s_fx_graphic_20132ee4,&DAT_2011c4ac,0,0);
  DAT_20364368 = Cvar_Get(s_fx_partsub_20132c48,&DAT_2011c4ac,0,0);
  DAT_20364370 = Cvar_Get(s_fx_sound_20132ed0,&DAT_20132edc,0,0);
  DAT_20364364 = Cvar_Get(s_fx_collide_20132ec4,&DAT_2011c4ac,0,0);
  DAT_20364374 = Cvar_Get(s_fx_trail_20132eb8,&DAT_2011c4ac,0,0);
  DAT_2036436c = Cvar_Get(s_fx_run_20132eb0,&DAT_2011c4ac,0,0);
  DAT_2036437c = Cvar_Get(s_fx_edit_20132ea8,&DAT_2011c4ac,0,0);
  DAT_20364378 = Cvar_Get(s_fx_editsegment_20132e98,&DAT_2011c4ac,0,0);
  DAT_2027c484 = Cvar_Get(s_fx_editdir_20132e88,&DAT_20132e94,1,0);
  Cmd_AddCommand(s_fx_save_20132e80,&LAB_20041c10);
  Cmd_AddCommand(s_fx_load_20132e78,&LAB_20041c90);
  puVar1 = &DAT_2026addc;
  do {
    *(undefined4 *)(puVar1 + -2) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x2026ae9c);
  FUN_200380e0();
  return;
}

