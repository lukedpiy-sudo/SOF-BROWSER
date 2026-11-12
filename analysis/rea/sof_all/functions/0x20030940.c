// rea decompile_all
// name: FUN_20030940
// address: 0x20030940
// body: available
// range: 0x20030940-0x20030a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20030940(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = 0;
  if (PTR_LAB_201343e0 == (undefined *)0x0) {
LAB_2003095d:
    Com_Error(1,s_Number_of_temp_ents_declarations_20132dc0,0x41,iVar2);
  }
  else {
    do {
      ppuVar1 = &PTR_LAB_201343e4 + iVar2;
      iVar2 = iVar2 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
    if (iVar2 != 0x41) goto LAB_2003095d;
  }
  iVar2 = 1;
  if (PTR_FUN_201344ec == (undefined *)0x0) {
LAB_2003098f:
    Com_Error(1,s_Number_of_attached_event_declara_20132d60,0x17,iVar2);
  }
  else {
    do {
      ppuVar1 = &PTR_FUN_201344ec + iVar2;
      iVar2 = iVar2 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
    if (iVar2 != 0x17) goto LAB_2003098f;
  }
  iVar2 = 0;
  iVar3 = 0x2d;
  bVar6 = true;
  pcVar4 = PTR_s_Ambient_Gen_Electric_spark1_wav_20137800;
  pcVar5 = s_this_is_the_end_of_the_list__so_d_20131ce0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    do {
      ppuVar1 = &PTR_s_Ambient_Gen_Electric_spark2_wav_20137804 + iVar2;
      iVar2 = iVar2 + 1;
      iVar3 = 0x2d;
      bVar6 = true;
      pcVar4 = *ppuVar1;
      pcVar5 = s_this_is_the_end_of_the_list__so_d_20131ce0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
    } while (!bVar6);
    if (iVar2 == 0x72) goto LAB_200309ea;
  }
  Com_Error(1,s_The_number_of_sound_enumerations_20132cf0,iVar2,0x72);
LAB_200309ea:
  iVar2 = 0;
  iVar3 = 0x2d;
  bVar6 = true;
  pcVar4 = PTR_s_textures_sprites_smoke2_20131580;
  pcVar5 = s_this_is_the_end_of_the_list__so_d_20131ce0;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    do {
      ppuVar1 = &PTR_s_textures_sprites_bldglob4_20131584 + iVar2;
      iVar2 = iVar2 + 1;
      iVar3 = 0x2d;
      bVar6 = true;
      pcVar4 = *ppuVar1;
      pcVar5 = s_this_is_the_end_of_the_list__so_d_20131ce0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
    } while (!bVar6);
    if (iVar2 == 0x39) {
      return;
    }
  }
  Com_Error(1,s_The_number_of_model_enumerations_20132c80,iVar2,0x39);
  return;
}

