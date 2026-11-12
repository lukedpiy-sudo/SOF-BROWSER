// rea decompile_all
// name: FUN_20060490
// address: 0x20060490
// body: available
// range: 0x20060490-0x200607e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_20060490(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  char acStack_80 [64];
  char acStack_40 [64];
  
  bVar2 = false;
  _DAT_203fecd4 = FUN_20055390(param_1);
  DAT_203fecd8 = 0;
  FUN_2001c940(s_Attempting_read_of_chunk__s_leng_2013a104,&DAT_203fecd4,param_3);
  iVar3 = FUN_200fb1ba(&iStack_84,1,4,DAT_203fecdc);
  iVar4 = FUN_200fb1ba(&iStack_88,1,4,DAT_203fecdc);
  if (iStack_84 != param_1) {
    _DAT_203fecd4 = FUN_20055390(iStack_84);
    DAT_203fecd8 = 0;
    iVar3 = 0;
    do {
      cVar1 = (&DAT_203fecd4)[iVar3];
      acStack_40[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    _DAT_203fecd4 = FUN_20055390(param_1);
    DAT_203fecd8 = 0;
    iVar3 = 0;
    do {
      cVar1 = (&DAT_203fecd4)[iVar3];
      acStack_80[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    Com_Error(1,s_Loaded_chunk_ID___s__does_not_ma_2013a0c8,acStack_40,acStack_80);
    return 0;
  }
  if ((param_3 != 0) && (param_3 != iStack_88)) {
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    _DAT_203fecd4 = FUN_20055390(param_1);
    DAT_203fecd8 = 0;
    Com_Error(1,s_Loaded_chunk___s__has_different_l_2013a090,&DAT_203fecd4);
    return 0;
  }
  iVar5 = FUN_200fb1ba(&iStack_90,1,4,DAT_203fecdc);
  if (param_2 == 0) {
    param_2 = FUN_2001f090(iStack_88,0x2fd);
    if (param_2 == 0) {
      if (DAT_203fecdc != 0) {
        FUN_200fa9ae(DAT_203fecdc);
        DAT_203fecdc = 0;
      }
      _DAT_203fecd4 = FUN_20055390(param_1);
      DAT_203fecd8 = 0;
      Com_Error(1,s_Unable_to_allocate_memory_for_ch_2013a068,&DAT_203fecd4);
      return 0;
    }
    if (param_4 == (int *)0x0) {
      bVar2 = true;
    }
    else {
      *param_4 = param_2;
    }
  }
  iVar6 = FUN_200fb1ba(param_2,1,iStack_88,DAT_203fecdc);
  iVar7 = FUN_200fb1ba(&iStack_8c,1,4,DAT_203fecdc);
  iVar8 = FUN_2004d150(param_2,iStack_88);
  if (iStack_90 != iVar8) {
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    _DAT_203fecd4 = FUN_20055390(param_1);
    DAT_203fecd8 = 0;
    Com_Error(1,s_Failed_checksum_check_for_chunk_2013a048,&DAT_203fecd4);
    return 0;
  }
  if (iStack_8c != 0x1234abcd) {
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    _DAT_203fecd4 = FUN_20055390(param_1);
    DAT_203fecd8 = 0;
    Com_Error(1,s_Bad_savegame_magic_for_chunk__s_2013a028,&DAT_203fecd4);
    return 0;
  }
  if (iVar3 + iVar4 + iVar5 + iVar6 + iVar7 != iStack_88 + 0x10) {
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    _DAT_203fecd4 = FUN_20055390(param_1);
    DAT_203fecd8 = 0;
    Com_Error(1,s_Error_during_loading_chunk__s_2013a008,&DAT_203fecd4);
    return 0;
  }
  if (bVar2) {
    Z_Free(param_2);
  }
  return iStack_88;
}

