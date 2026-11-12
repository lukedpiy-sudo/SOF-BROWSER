// rea decompile_all
// name: FUN_200f4bf0
// address: 0x200f4bf0
// body: available
// range: 0x200f4bf0-0x200f4e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200f4bf0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined1 local_59;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2011068b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 4) = local_59;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_4 = 0;
  *in_ECX = &PTR_FUN_201133cc;
  local_54 = 0x69;
  local_53 = 0x56;
  local_52 = 0x6e;
  local_51 = 0x33;
  local_50 = 0x61;
  local_4f = 0x33;
  local_4e = 0;
  in_ECX[1] = s_openplaying_20159ea4;
  uVar1 = FUN_20055450(&DAT_2011ee58,0x70ef,8,0);
  Cvar_Get(s_gamespyport_20159e98,uVar1);
  iVar2 = __ftol();
  Com_sprintf(local_4c,0x40,s__d__d__d__d_20159e8c,_DAT_203900c4 & 0xff,_DAT_203900c4 >> 8 & 0xff,
              _DAT_203900c4 >> 0x10 & 0xff,_DAT_203900c4 >> 0x18);
  iVar4 = 0;
  do {
    iVar3 = FUN_200f6860(0,local_4c,iVar4 + iVar2,s_sofretail_20159c88,&local_54,&LAB_200f47f0,
                         &LAB_200f47d0,&LAB_200f47b0,&LAB_200f4790);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  uVar1 = FUN_200f7d90(s_sofretail_20159c88,s_sofretail_20159c88,&local_54,10,&LAB_200f4860,1);
  in_ECX[2] = uVar1;
  Cmd_AddCommand(s_gsc_connect_20159e80,&LAB_200f5950);
  Cmd_AddCommand(s_gsc_disconnect_20159e70,FUN_200f5620);
  Cmd_AddCommand(s_gsc_getchannels_20159e60,&LAB_200f5a80);
  Cmd_AddCommand(s_gsc_join_20159e54,&LAB_200f6130);
  Cmd_AddCommand(s_gsc_part_20159e48,&LAB_200f6180);
  Cmd_AddCommand(s_gsc_talk_20159e3c,&LAB_200f6330);
  Cmd_AddCommand(s_gsc_private_20159e30,&LAB_200f6200);
  Cmd_AddCommand(s_gsc_getusers_20159e20,&LAB_200f64c0);
  Cmd_AddCommand(s_gsc_settopic_20159e10,&LAB_200f6530);
  Cmd_AddCommand(s_gsc_gettopic_20159e00,&LAB_200f6640);
  Cmd_AddCommand(s_gsc_kick_20159df4,FUN_200f66a0);
  Cmd_AddCommand(s_gsc_ban_20159dec,&LAB_200f6720);
  Cmd_AddCommand(s_gsc_setusermode_20159ddc,&LAB_200f6790);
  DAT_204076e0 = Cvar_Get(s_gsc_nick_20159dc4,s_JohnMullins_20159dd0,1,0);
  DAT_204076dc = Cvar_Get(s_gsc_user_20159db8,s_JohnMullins_20159dd0,1,0);
  DAT_204076d4 = Cvar_Get(s_gsc_server_20159d94,s_peerchat_gamespy_com_20159da0,1,0);
  DAT_204076d8 = Cvar_Get(s_gsc_port_20159d80,&DAT_20159d8c,1,0);
  in_ECX[3] = 0;
  ExceptionList = local_c;
  return;
}

