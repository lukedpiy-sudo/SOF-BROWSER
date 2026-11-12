// rea decompile_all
// name: FUN_50060d30
// address: 0x50060d30
// body: available
// range: 0x50060d30-0x50060f05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50060d30(void *param_1)

{
  void *this;
  void *this_00;
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *local_18 [2];
  int local_10;
  ushort local_c;
  ushort local_8 [4];
  
  piVar1 = *(int **)((int)param_1 + 0x54);
  this = (void *)((int)param_1 + 0x50);
  puVar3 = (undefined4 *)FUN_500fc2d0(this,local_18);
  FUN_50063910(this,&local_10,(int *)*puVar3,piVar1);
  piVar1 = *(int **)((int)param_1 + 0x68);
  this_00 = (void *)((int)param_1 + 100);
  puVar3 = (undefined4 *)FUN_500fc2d0(this_00,&local_10);
  FUN_50063910(this_00,local_18,(int *)*puVar3,piVar1);
  local_18[0] = *(int **)((int)param_1 + 0x7c);
  puVar3 = (undefined4 *)FUN_500fc2d0((void *)((int)param_1 + 0x78),&local_10);
  FUN_50063910((void *)((int)param_1 + 0x78),(undefined4 *)local_8,(int *)*puVar3,local_18[0]);
  for (uVar4 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0); uVar4 != 0;
      uVar4 = FUN_500c26a0(uVar4,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0)) {
    bVar2 = FUN_50060c10(param_1,(float *)(uVar4 + 4),local_8);
    if (bVar2) {
      local_10 = *(int *)(uVar4 + 0x318);
      local_c = local_8[0];
      FUN_5000a5e0(this,local_18,&local_10);
    }
  }
  for (uVar4 = FUN_500c26a0(0,0x1b4,s_info_player_team1_50143254,(void *)0x0); uVar4 != 0;
      uVar4 = FUN_500c26a0(uVar4,0x1b4,s_info_player_team1_50143254,(void *)0x0)) {
    bVar2 = FUN_50060c10(param_1,(float *)(uVar4 + 4),local_8);
    if (bVar2) {
      local_10 = *(int *)(uVar4 + 0x318);
      local_c = local_8[0];
      FUN_5000a5e0(this_00,local_18,&local_10);
    }
  }
  for (uVar4 = FUN_500c26a0(0,0x1b4,s_info_player_team2_50143240,(void *)0x0); uVar4 != 0;
      uVar4 = FUN_500c26a0(uVar4,0x1b4,s_info_player_team2_50143240,(void *)0x0)) {
    bVar2 = FUN_50060c10(param_1,(float *)(uVar4 + 4),local_8);
    if (bVar2) {
      local_10 = *(int *)(uVar4 + 0x318);
      local_c = local_8[0];
      FUN_5000a5e0((void *)((int)param_1 + 0x78),local_18,&local_10);
    }
  }
  return;
}

