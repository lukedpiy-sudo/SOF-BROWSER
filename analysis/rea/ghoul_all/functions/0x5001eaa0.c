// rea decompile_all
// name: FUN_5001eaa0
// address: 0x5001eaa0
// body: available
// range: 0x5001eaa0-0x5001ed10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001eaa0(void *this,int param_1)

{
  short sVar1;
  void *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  undefined4 unaff_retaddr;
  char *pcVar6;
  char *pcVar7;
  
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  if (this_00 == (void *)0x0) {
    return;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar1 = (**(code **)(*piVar2 + 0x1c))(s_wbolt_hand_r_5012fedc);
  puVar3 = (undefined4 *)FUN_500a4250(this_00,sVar1);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_500a3f30(this_00,puVar3);
  }
  switch(param_1) {
  case 1:
  case 2:
    FUN_500f62e0(1);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = &DAT_5012f948;
    break;
  case 3:
    FUN_500f62e0(3);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_pistol1_5012f970;
    goto LAB_5001ecd3;
  case 4:
    FUN_500f62e0(2);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_pistol2_5012f97c;
    break;
  case 5:
    iVar4 = 10;
    bVar5 = true;
    pcVar6 = *(char **)(param_1 + 0x1b4);
    pcVar7 = s_m_x_mmerc_50133614;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar5 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar5);
    if (!bVar5) {
      FUN_500f62e0(4);
    }
    iVar4 = (**(code **)(*(int *)this + 0xd0))
                      (unaff_retaddr,s_wbolt_hand_r_5012fedc,s_Enemy_Bolt_50133408,
                       s_w_machinepistol_5012f910,s_to_wbolt_hand_r_50133620,this_00,0,0x3f800000);
    goto LAB_5001ece8;
  case 6:
    FUN_500f62e0(5);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_assault_rifle_5012f920;
    break;
  case 7:
  case 8:
    FUN_500f62e0(6);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_sniperrifle_5012f960;
    break;
  case 9:
  case 10:
    FUN_500f62e0(7);
    pcVar7 = s__to_wbolt_hand_r_50133600;
    pcVar6 = s_w_autoshotgun_5012f900;
    break;
  case 0xb:
    FUN_500f62e0(8);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_shotgun_5012f8e8;
    goto LAB_5001ecd3;
  case 0xc:
  case 0xd:
    FUN_500f62e0(9);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_machinegun_5012f950;
    goto LAB_5001ecd3;
  case 0xe:
    FUN_500f62e0(10);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_rocket_5012f8dc;
    break;
  default:
    goto switchD_5001eb08_caseD_f;
  case 0x10:
  case 0x11:
  case 0x1d:
    FUN_500f62e0(0xb);
    pcVar7 = s__to_wbolt_hand_r_50133600;
    pcVar6 = s_w_mpg_5012f8d4;
    goto LAB_5001ecd3;
  case 0x12:
  case 0x13:
    FUN_500f62e0(0xc);
    pcVar7 = s_to_wbolt_hand_r_50133620;
    pcVar6 = s_w_flamethrower_5012f930;
LAB_5001ecd3:
    iVar4 = (**(code **)(*(int *)this + 0xd0))
                      (param_1,s_wbolt_hand_r_5012fedc,s_Enemy_Bolt_50133408,pcVar6,pcVar7,this_00,0
                       ,0x3f800000);
    goto LAB_5001ece8;
  }
  iVar4 = (**(code **)(*(int *)this + 0xd0))
                    (param_1,s_wbolt_hand_r_5012fedc,s_Enemy_Bolt_50133408,pcVar6,pcVar7,this_00,0,
                     0x3f800000);
LAB_5001ece8:
  if (iVar4 != 0) {
    *(void **)((int)this + 0x1d8) = this_00;
    return;
  }
switchD_5001eb08_caseD_f:
  *(undefined4 *)((int)this + 0x1d8) = 0;
  return;
}

