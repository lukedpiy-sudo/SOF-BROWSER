// rea decompile_all
// name: FUN_500bdb50
// address: 0x500bdb50
// body: available
// range: 0x500bdb50-0x500bdf73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500bdb50(char *param_1,int param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  iVar6 = 0;
  DAT_50188944 = 0;
  FUN_500f2cb0();
  FUN_500761a0(extraout_ECX);
  (*DAT_5015cb40)(0x2fe);
  puVar9 = &DAT_5015ccd8;
  for (iVar4 = 0x168; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  FUN_500c3a20();
  _DAT_5015d9c0 = 0;
  _DAT_5015d9c4 = 0;
  _DAT_5015d9c8 = 0;
  DAT_5015d9cc = 0;
  DAT_5015db24 = 0;
  _DAT_5015db28 = 0;
  DAT_5015d9d0 = 0;
  _DAT_5015d9d4 = 0;
  _strncpy(&DAT_5015cd20,param_1,0x3f);
  _strncpy(&DAT_5015d6c8,param_3,0x1ff);
  iVar4 = 0;
  if (0 < DAT_5015d8c8) {
    iVar5 = 0;
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + 0x750 + (int)DAT_5015cca0) = 100;
      iVar8 = DAT_5015d6c4 + iVar5;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x600;
      *(int *)(iVar2 + 0x4d8 + (int)DAT_5015cca0) = iVar8;
      iVar2 = iVar2 + 0x464;
    } while (iVar4 < DAT_5015d8c8);
  }
  piVar7 = (int *)0x0;
  DAT_5015d8d5 = 0;
  (*DAT_5015ca5c)(0x3d4ccccd,1);
  FUN_500a5e60(&DAT_5015c79c);
  (*DAT_5015ca5c)(0x3d99999a,1);
  FUN_50065d50();
  FUN_500be5d0();
  puVar9 = &DAT_50188928;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0x6e6e6e6e;
    puVar9 = puVar9 + 1;
  }
  _DAT_5018899f = 0x101;
  DAT_50188999 = 1;
  DAT_501889a1 = 1;
  ram0x50188952 = 0x1010101;
  *(undefined1 *)puVar9 = 0x6e;
  FUN_50096c00();
  FUN_5006b640();
  (*DAT_5015ca5c)(0x3dcccccd,1);
  (*DAT_5015caac)(s_items_5014ff94);
  (*DAT_5015caac)(s_weapons_5014ff8c);
  (*DAT_5015caac)(s_general_5014ff84);
  FUN_5004c120(&DAT_50159120);
  (*DAT_5015ca5c)(0x3e19999a,1);
  FUN_500eed20();
  FUN_50068970(&DAT_5015c7b8);
  _DAT_50188948 = (*DAT_5015cb4c)(s_fs_createpak_501500dc,&DAT_50144958,0,0);
  if ((_DAT_50188948 != 0) && (*(float *)(_DAT_50188948 + 0x18) != 0.0)) {
    DAT_501889c4 = 1;
  }
  do {
    while( true ) {
      pcVar3 = FUN_500fe200(&param_2);
      if (param_2 == 0) {
        FUN_50068b80(0x5015c7b8);
        iVar4 = 0;
        DAT_501889c4 = 0;
        (**(code **)(*DAT_5015c4d8 + 0xc))();
        (*DAT_5015ca5c)(0x3e800000,1);
        (*DAT_5015cb00)(0x10,&DAT_50188928);
        DAT_5018899d = 1;
        do {
          if (*(char *)((int)&DAT_50188950 + iVar4) != '\0') {
            (*DAT_5015c9f4)((&PTR_s_Ambient_Gen_Electric_spark1_wav_50154880)[iVar4]);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x73);
        (*DAT_5015c9f8)(s_environ_waterspurt_5015009c);
        (*DAT_5015c9f8)(s_environ_oilspurt_50150088);
        (*DAT_5015c9f8)(s_environ_chemspurt_50150074);
        (*DAT_5015c9f8)(s_environ_metal_computer_5015005c);
        (*DAT_5015c9f8)(s_environ_glass_computer_50150044);
        (*DAT_5015c9f8)(s_environ_metal_steam_50150030);
        (*DAT_5015c9f8)(s_environ_bulletsplash_50150018);
        (*DAT_5015c9f8)(s_environ_splatgreen_50150004);
        (*DAT_5015c9f8)(s_environ_splatorange_5014fff0);
        (*DAT_5015c9f8)(s_environ_splatred_5014ffdc);
        (*DAT_5015c9f8)(s_environ_splatbrown_5014ffc8);
        (*DAT_5015c9f8)(s_environ_splatblack_5014ffb4);
        (*DAT_5015ca24)(s__i_entities_inhibited_5014ff9c,iVar6);
        FUN_500bd9e0();
        FUN_500f6c20();
        (*DAT_5015ca5c)(0x3e8f5c29,1);
        FUN_500bcf10();
        FUN_500be990(&DAT_5015d23c);
        (*DAT_5015ca5c)(0x3e99999a,1);
        (**(code **)(DAT_5015d9b8 + 0x20))();
        (**(code **)(DAT_5015d9b8 + 0x1c))(DAT_5015d23c);
        (*DAT_5015ca08)();
        (*DAT_5015ca5c)(0x3ea8f5c3,1);
        _DAT_50145fb4 = 0xc97423f0;
        return;
      }
      if (*pcVar3 != '{') {
        (*DAT_5015cb10)(s_ED_LoadFromFile__found__s_when_e_501500b0,pcVar3);
      }
      bVar10 = piVar7 != (int *)0x0;
      piVar7 = DAT_5015cca0;
      if (bVar10) {
        piVar7 = FUN_500c3690();
      }
      param_2 = FUN_500bd8f0(param_2,piVar7);
      if (piVar7 != DAT_5015cca0) break;
LAB_500bddfb:
      FUN_500bd570(piVar7);
      FUN_500be7a0((int)piVar7);
    }
    iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar4 != 0) {
      uVar1 = piVar7[0x6e] & 0x800;
      goto joined_r0x500bddf3;
    }
    if (((DAT_5015d950 != 0) && (DAT_5015d950 != 1)) || ((piVar7[0x6e] & 0x100U) == 0)) {
      if (DAT_5015d950 == 2) {
        uVar1 = piVar7[0x6e] & 0x200;
joined_r0x500bddf3:
        if (uVar1 != 0) goto LAB_500bddab;
      }
      else if ((DAT_5015d950 == 3) || (DAT_5015d950 == 4)) {
        uVar1 = piVar7[0x6e] & 0x400;
        goto joined_r0x500bddf3;
      }
      piVar7[0x6e] = piVar7[0x6e] & 0xfffff0ff;
      goto LAB_500bddfb;
    }
LAB_500bddab:
    FUN_500c3880(piVar7);
    iVar6 = iVar6 + 1;
  } while( true );
}

