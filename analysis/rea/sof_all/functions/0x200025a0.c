// rea decompile_all
// name: FUN_200025a0
// address: 0x200025a0
// body: available
// range: 0x200025a0-0x200028ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200025a0(int param_1,undefined *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint local_4;
  
  iVar3 = 0;
  *(undefined4 *)(param_2 + 0x100) = DAT_201e7598;
  *(undefined4 *)(param_2 + 0xfc) = 0;
  puVar5 = param_2;
  if (param_1 == 0) {
    iVar4 = 99999;
  }
  else if (*(int *)(param_1 + 0xfc) < 1) {
    iVar4 = 99999;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x100) & 0x3ff;
    iVar4 = *(int *)(&DAT_201ca530 + uVar2 * 0x74);
    puVar5 = &DAT_201ca530 + uVar2 * 0x74;
  }
  do {
    while( true ) {
      local_4 = FUN_2001e260(&DAT_20367ebc);
      if ((char)local_4 < '\0') {
        iVar1 = FUN_2001e260(&DAT_20367ebc);
        local_4 = local_4 | iVar1 << 8;
      }
      if ((char)(local_4 >> 8) < '\0') {
        iVar1 = FUN_2001e260(&DAT_20367ebc);
        local_4 = local_4 | iVar1 << 0x10;
      }
      if ((local_4 & 0x800000) != 0) {
        iVar1 = FUN_2001e260(&DAT_20367ebc);
        local_4 = local_4 | iVar1 << 0x18;
      }
      if ((local_4 & 0x1000000) == 0) {
        iVar1 = FUN_2001e260(&DAT_20367ebc);
      }
      else {
        iVar1 = FUN_2001e290();
      }
      if (0x3ff < iVar1) {
        Com_Error(1,s_CL_ParsePacketEntities__bad_numb_2011c7f8,iVar1);
      }
      if (DAT_20367ec8 < DAT_20367ecc) {
        Com_Error(1,s_CL_ParsePacketEntities__end_of_m_2011c7d0);
      }
      if (iVar1 == 0) {
        while( true ) {
          if (iVar4 == 99999) {
            return;
          }
          if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
            Com_Printf(s_unchanged___i_2011c7bc,iVar4);
          }
          FUN_20002450(param_2,iVar4,puVar5,0);
          iVar3 = iVar3 + 1;
          if (*(int *)(param_1 + 0xfc) <= iVar3) break;
          uVar2 = *(int *)(param_1 + 0x100) + iVar3 & 0x3ff;
          iVar4 = *(int *)(&DAT_201ca530 + uVar2 * 0x74);
          puVar5 = &DAT_201ca530 + uVar2 * 0x74;
        }
        return;
      }
      while (iVar4 < iVar1) {
        if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
          Com_Printf(s_unchanged___i_2011c7bc,iVar4);
        }
        FUN_20002450(param_2,iVar4,puVar5,0);
        iVar3 = iVar3 + 1;
        if (iVar3 < *(int *)(param_1 + 0xfc)) {
          uVar2 = *(int *)(param_1 + 0x100) + iVar3 & 0x3ff;
          iVar4 = *(int *)(&DAT_201ca530 + uVar2 * 0x74);
          puVar5 = &DAT_201ca530 + uVar2 * 0x74;
        }
        else {
          iVar4 = 99999;
        }
      }
      if ((local_4 & 0x800) == 0) break;
      if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
        Com_Printf(s_remove___i_2011c7ac,iVar1);
      }
      if (iVar4 != iVar1) {
        Com_Printf(s_U_REMOVE__oldnum____newnum_2011c790);
      }
LAB_20002770:
      iVar3 = iVar3 + 1;
      if (iVar3 < *(int *)(param_1 + 0xfc)) {
        uVar2 = *(int *)(param_1 + 0x100) + iVar3 & 0x3ff;
        iVar4 = *(int *)(&DAT_201ca530 + uVar2 * 0x74);
        puVar5 = &DAT_201ca530 + uVar2 * 0x74;
      }
      else {
        iVar4 = 99999;
      }
    }
    if (iVar4 == iVar1) {
      if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
        Com_Printf(s_delta___i_2011c780,iVar1);
      }
      FUN_20002450(param_2,iVar1,puVar5,local_4);
      goto LAB_20002770;
    }
    if (iVar1 < iVar4) {
      if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
        Com_Printf(s_baseline___i_2011c76c,iVar1);
      }
      FUN_20002450(param_2,iVar1,&DAT_2015eef8 + iVar1 * 99,local_4);
    }
  } while( true );
}

