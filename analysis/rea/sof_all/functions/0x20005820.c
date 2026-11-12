// rea decompile_all
// name: FUN_20005820
// address: 0x20005820
// body: available
// range: 0x20005820-0x20005a99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20005820(void)

{
  Cmd_AddCommand(s_centerview_2011cb48,&LAB_20005800);
  Cmd_AddCommand(s__moveup_2011cb40,&LAB_20004790);
  Cmd_AddCommand(s__moveup_2011cb38,&LAB_200047a0);
  Cmd_AddCommand(s__movedown_2011cb2c,&LAB_200047b0);
  Cmd_AddCommand(s__movedown_2011cb20,&LAB_200047c0);
  Cmd_AddCommand(s__left_2011cb18,&LAB_200047d0);
  Cmd_AddCommand(s__left_2011cb10,&LAB_200047e0);
  Cmd_AddCommand(s__right_2011cb08,&LAB_200047f0);
  Cmd_AddCommand(s__right_2011cb00,&LAB_20004800);
  Cmd_AddCommand(s__forward_2011caf4,&LAB_20004810);
  Cmd_AddCommand(s__forward_2011cae8,&LAB_20004820);
  Cmd_AddCommand(s__back_2011cae0,&LAB_20004830);
  Cmd_AddCommand(s__back_2011cad8,&LAB_20004840);
  Cmd_AddCommand(s__lookup_2011cad0,&LAB_20004850);
  Cmd_AddCommand(s__lookup_2011cac8,&LAB_20004860);
  Cmd_AddCommand(s__lookdown_2011cabc,&LAB_20004870);
  Cmd_AddCommand(s__lookdown_2011cab0,&LAB_20004880);
  Cmd_AddCommand(s__strafe_2011caa8,&LAB_20004930);
  Cmd_AddCommand(s__strafe_2011caa0,&LAB_20004940);
  Cmd_AddCommand(s__moveleft_2011ca94,&LAB_20004890);
  Cmd_AddCommand(s__moveleft_2011ca88,&LAB_200048a0);
  Cmd_AddCommand(s__moveright_2011ca7c,&LAB_200048b0);
  Cmd_AddCommand(s__moveright_2011ca70,&LAB_200048c0);
  Cmd_AddCommand(s__leanleft_2011ca64,&LAB_200048f0);
  Cmd_AddCommand(s__leanleft_2011ca58,&LAB_20004900);
  Cmd_AddCommand(s__leanright_2011ca4c,&LAB_200048d0);
  Cmd_AddCommand(s__leanright_2011ca40,&LAB_200048e0);
  Cmd_AddCommand(s__speed_2011ca38,&LAB_20004910);
  Cmd_AddCommand(s__speed_2011ca30,&LAB_20004920);
  Cmd_AddCommand(s__attack_2011ca28,&LAB_20004950);
  Cmd_AddCommand(s__attack_2011ca20,&LAB_20004960);
  Cmd_AddCommand(s__altattack_2011ca14,&LAB_20004980);
  Cmd_AddCommand(s__altattack_2011ca08,&LAB_20004990);
  Cmd_AddCommand(s__weaponExtra1_2011c9f8,&LAB_200049b0);
  Cmd_AddCommand(s__weaponExtra1_2011c9e8,&LAB_200049c0);
  Cmd_AddCommand(s__weaponExtra2_2011c9d8,&LAB_200049d0);
  Cmd_AddCommand(s__weaponExtra2_2011c9c8,&LAB_200049e0);
  Cmd_AddCommand(&DAT_2011c9c0,&LAB_200049f0);
  Cmd_AddCommand(&DAT_2011c9b8,&LAB_20004a00);
  Cmd_AddCommand(s__klook_2011c9b0,&LAB_20004a10);
  Cmd_AddCommand(s__klook_2011c9a8,&LAB_20004a30);
  return;
}

