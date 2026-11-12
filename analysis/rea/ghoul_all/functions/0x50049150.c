// rea decompile_all
// name: FUN_50049150
// address: 0x50049150
// body: available
// range: 0x50049150-0x50049680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_50049150(void *this,int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_5015d928 != 0) {
    iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
    if ((iVar1 == 0) || (*(float *)(DAT_5015c9e4 + 0x18) != 0.0)) {
      iVar1 = __strcmpi(param_2,s_setpoint_50142d5c);
      if (iVar1 == 0) {
        FUN_50047490(this,param_1,param_2,1,(int *)0x0);
        FUN_500adb20((byte *)s_Nav_point_added_50142d48);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_savepoints_50142d3c);
      if (iVar1 == 0) {
        if ((float)_DAT_50159174 < DAT_5015ccdc - 1.0) {
          lVar5 = __ftol();
          _DAT_50159174 = (int)lVar5;
          FUN_500adb20((byte *)s_Press_key_again_to__s_50142a0c);
          return 1;
        }
        FUN_500adb20((byte *)s_Nav_points_saved_off_50142d1c);
        FUN_50048930((int)this);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_loadpoint_50142d10);
      if (iVar1 == 0) {
        if ((float)_DAT_5015917c < DAT_5015ccdc - 1.0) {
          lVar5 = __ftol();
          _DAT_5015917c = (int)lVar5;
          FUN_500adb20((byte *)s_Press_key_again_to__s_50142a0c);
          return 1;
        }
        FUN_500adb20((byte *)s_Nav_points_loaded_50142cf4);
        FUN_50048be0(this);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_exportpoint_50142ce8);
      if (iVar1 == 0) {
        if ((float)_DAT_50159178 < DAT_5015ccdc - 1.0) {
          lVar5 = __ftol();
          _DAT_50159178 = (int)lVar5;
          FUN_500adb20((byte *)s_Press_key_again_to__s_50142a0c);
          return 1;
        }
        FUN_500adb20((byte *)s_Nav_points_exported_50142cc8);
        FUN_50044330();
        iVar1 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar1 + 0x18) = 0x461c3c00;
        *(undefined4 *)(iVar1 + 0x1c) = 0x461c3c00;
        *(undefined4 *)(iVar1 + 0x20) = 0x461c3c00;
        OutputDebugStringA(s_Clearing_nodes_from_walls_50142cac);
        FUN_50049690((int)this);
        if (*(int *)((int)this + 4) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88;
        }
        iVar2 = 0;
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            *(int *)(iVar4 + 0x24 + *(int *)((int)this + 4)) = iVar2;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0x88;
          } while (iVar2 < iVar1);
        }
        iVar1 = FUN_50049a70((int)this + 0x186a14);
        iVar2 = 0;
        if (0 < iVar1) {
          iVar4 = 0;
          do {
            *(int *)(iVar4 + 0x24 + *(int *)((int)this + 0x186a18)) = iVar2;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0x88;
          } while (iVar2 < iVar1);
        }
        OutputDebugStringA(s_Building_connections_50142c94);
        FUN_50047d90(this);
        OutputDebugStringA(s_Validating_links_50142c80);
        FUN_50047040((int)this);
        OutputDebugStringA(s_Checking_environment_50142c68);
        FUN_50048730((int)this);
        OutputDebugStringA(s_Preparing_floor_data_50142c50);
        FUN_500457c0((int *)((int)this + 0x10));
        FUN_500487c0((int)this);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_pointhelp_50142c44);
      if (iVar1 == 0) {
        FUN_500adb20((byte *)s_a___add_point_m___move_point_d___50142c10);
        FUN_500adb20((byte *)s_s___save_l___load_e___export__Hi_50142bc0);
        FUN_500adb20((byte *)s_1___flee_point_2___lean_point_3___50142b78);
        FUN_500adb20((byte *)s_5___friend_flee_6___foe_flee_z___50142b28);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_destroyents_50142b18);
      if (iVar1 == 0) {
        if ((float)_DAT_50159180 < DAT_5015ccdc - 1.0) {
          lVar5 = __ftol();
          _DAT_50159180 = (int)lVar5;
          FUN_500adb20((byte *)s_Press_key_again_to__s_50142a0c);
          return 1;
        }
        FUN_500adb20((byte *)s_Entities_destroyed_50142af0);
        FUN_50044330();
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_deletepoint_50142ae4);
      if (iVar1 == 0) {
        FUN_50047f50(this,(float *)(param_1 + 4));
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_movepoint_50142ad8);
      if (iVar1 == 0) {
        FUN_500484c0(this,(float *)(param_1 + 4));
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_setflee_50142ad0);
      if (iVar1 == 0) {
        FUN_50047490(this,param_1,param_2,4,(int *)0x0);
        FUN_500adb20((byte *)s_Flee_point_added_50142abc);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_setfleefriendly_50142aac);
      if (iVar1 == 0) {
        FUN_50047490(this,param_1,param_2,0x8000,(int *)0x0);
        FUN_500adb20((byte *)s_Friendly_only_flee_point_added_50142a8c);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_setfleeenemy_50142a7c);
      if (iVar1 == 0) {
        FUN_50047490(this,param_1,param_2,0x10000,(int *)0x0);
        FUN_500adb20((byte *)s_Enemy_only_flee_point_added_50142a5c);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_toggleignore_50142a4c);
      if (iVar1 == 0) {
        FUN_50048360(this,(float *)(param_1 + 4));
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_startregions_50142a3c);
      if (iVar1 == 0) {
        piVar3 = FUN_500c3690();
        piVar3[0xae] = (int)&LAB_500445f0;
        piVar3[0xad] = (int)(DAT_5015ccdc + 0.1);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_toggleboxes_50142a30);
      if (iVar1 == 0) {
        DAT_50142688 = (uint)(DAT_50142688 == 0);
        return 1;
      }
      iVar1 = __strcmpi(param_2,s_cleargrid_50142a24);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0x10) = 0;
        return 1;
      }
    }
  }
  return 0;
}

