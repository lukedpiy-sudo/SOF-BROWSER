// rea decompile_all
// name: FUN_20062780
// address: 0x20062780
// body: available
// range: 0x20062780-0x200629de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20062780(void)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_80 [128];
  
  Com_DPrintf(s_New___from__s_2013a48c,DAT_203fec94 + 0xa7);
  fVar1 = (float)DAT_203fec94[0xb0];
  if (*DAT_203fec94 != 2) {
    Com_Printf(s_New_not_valid____already_spawned_2013a468);
    return;
  }
  if (DAT_203a1f20 == 3) {
    Com_sprintf(local_80,0x80,s_demos__s_2013a444,&DAT_203a1f34);
    FS_FOpenFile(local_80,&DAT_203fac48,0);
    if (DAT_203fac48 == 0) {
      Com_Error(1,s_Couldn_t_open__s_2013a430,local_80);
      return;
    }
  }
  else {
    uVar3 = FUN_20021760(s_gamedir_20131258);
    if ((fVar1 * 0.4 < 1.98) && (DAT_203fec94[0x14a0] == 0)) {
      uVar3 = FUN_20058110(0x411);
      Com_Error(3,uVar3);
      return;
    }
    FUN_2001cb00(DAT_203fec94 + 0x14ad,0xe);
    FUN_2001cbf0(DAT_203fec94 + 0x14ad,0x21);
    FUN_2001cbf0(DAT_203fec94 + 0x14ad,DAT_20396ee8);
    FUN_2001cb00(DAT_203fec94 + 0x14ad,DAT_203a1f24 & 0xff);
    FUN_200216d0(s_deathmatch_2011d664);
    uVar2 = __ftol();
    FUN_2001cb00(DAT_203fec94 + 0x14ad,uVar2);
    FUN_2001cd00(DAT_203fec94 + 0x14ad,uVar3);
    iVar5 = ((int)DAT_203fec94 - DAT_20396eec) / 0xd2ac;
    FUN_2001cb70(DAT_203fec94 + 0x14ad,iVar5);
    FUN_2001cd00(DAT_203fec94 + 0x14ad,&DAT_203a2374);
    if (DAT_203a1f20 == 2) {
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(int *)(DAT_20396dd8 + 100) * iVar5 + *(int *)(DAT_20396dd8 + 0x60));
      *piVar4 = iVar5;
      DAT_203fec94[0xa6] = (int)piVar4;
      piVar4 = DAT_203fec94 + 0x82;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      FUN_2001cb00(DAT_203fec94 + 0x14ad,0xd);
      uVar3 = FUN_20055450(s_cmd_configstrings__i_0_2013a450,DAT_20396ee8);
      FUN_2001cd00(DAT_203fec94 + 0x14ad,uVar3);
    }
  }
  return;
}

