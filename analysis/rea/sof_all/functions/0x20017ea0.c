// rea decompile_all
// name: FUN_20017ea0
// address: 0x20017ea0
// body: available
// range: 0x20017ea0-0x2001804b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20017ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_c0;
  int local_bc;
  undefined1 local_b8 [4];
  int local_b4;
  int aiStack_b0 [44];
  
  iVar1 = param_2 * 0x2c;
  if ((&DAT_2011f938)[param_2 * 0xb] == 0) {
    iVar6 = FS_FOpenFile(param_1,&local_c0,0);
    if (iVar6 < 0xb8) {
      uVar7 = FUN_20058110(0x416);
      Cvar_Set(s_menu_dc_reason_2011d91c,uVar7);
      Com_Error(2,s_Failed_to_open_map_file_2011fff4);
      return (undefined4 *)0x0;
    }
    local_bc = FUN_20025350(local_c0);
    FUN_200252d0(local_b8,0xb8,local_c0);
    if (local_b4 != 0x2e) {
      Sys_Error(s_Mod_LoadBrushModel___s_has_wrong_2011ffb0,param_1,local_b4,0x2e);
      FS_FCloseFile(local_c0);
      return (undefined4 *)0x0;
    }
    iVar6 = aiStack_b0[param_2 * 2 + 1];
    uVar7 = Z_Malloc(iVar6);
    if (iVar6 % *(int *)(&DAT_2011f954 + iVar1) != 0) {
      Com_Error(1,s_CM_LoadLump__funny_lump_size_for_2011ff8c,
                (&PTR_s_LUMP_ENTITIES_2011f950)[param_2 * 0xb]);
    }
    iVar8 = iVar6 / *(int *)(&DAT_2011f954 + iVar1);
    if (iVar8 < *(int *)(&DAT_2011f944 + iVar1)) {
      Com_Error(1,s_CM_LoadLump__lump__s_too_small_2011ff6c,
                (&PTR_s_LUMP_ENTITIES_2011f950)[param_2 * 0xb]);
    }
    if (*(int *)(&DAT_2011f948 + iVar1) < iVar8) {
      Com_Error(1,s_CM_LoadLump__lump__s_has_too_man_2011ff3c,
                (&PTR_s_LUMP_ENTITIES_2011f950)[param_2 * 0xb],iVar8);
    }
    *(int *)(&DAT_2011f940 + iVar1) = iVar8;
    FUN_20025330(local_c0,aiStack_b0[param_2 * 2] + local_bc);
    FUN_200252d0(uVar7,iVar6,local_c0);
    uVar5 = FUN_2004d150(uVar7,iVar6);
    iVar6 = *(int *)(&DAT_2011f94c + iVar1);
    (&DAT_2011f961)[iVar1] = uVar5;
    iVar2 = *(int *)(&DAT_2011f954 + iVar1);
    iVar3 = *(int *)(&DAT_2011f958 + iVar1);
    puVar4 = (&PTR_s_LUMP_ENTITIES_2011f950)[param_2 * 0xb];
    (&DAT_2011f960)[iVar1] = 1;
    (&DAT_2011f938)[param_2 * 0xb] = uVar7;
    Com_DPrintf(s_CM_LoadLump___s__d_entries___d_i_2011ff10,puVar4,iVar8,iVar2 * iVar8,
                (iVar6 + iVar8) * iVar3);
    FS_FCloseFile(local_c0);
  }
  return &DAT_2011f938 + param_2 * 0xb;
}

