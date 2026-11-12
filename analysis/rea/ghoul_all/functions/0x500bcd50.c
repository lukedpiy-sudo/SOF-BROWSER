// rea decompile_all
// name: FUN_500bcd50
// address: 0x500bcd50
// body: available
// range: 0x500bcd50-0x500bce54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bcd50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *local_4;
  
  iVar2 = (*DAT_5015cb64)(s_sound_sound_ams_5014e958,&local_4,0);
  if (iVar2 == -1) {
    FUN_500adb20((byte *)s_Unable_to_locate_sound_sound_ams_5014e910);
    return;
  }
  if (*local_4 != '\v') {
    iVar2 = (int)*local_4;
    uVar6 = 0xb;
    pcVar5 = s_Invalid_version___d__for_Ambient_5014e8d0;
    FUN_500adb20((byte *)s_Invalid_version___d__for_Ambient_5014e8d0);
    (*DAT_5015cb68)(local_4,pcVar5,iVar2,uVar6);
    return;
  }
  DAT_50188918 = *(int *)(local_4 + 1);
  DAT_5018891c = *(int *)(local_4 + 5);
  iVar2 = 0;
  DAT_50188920 = *(int *)(local_4 + 9);
  DAT_50188924 = *(int *)(local_4 + 0xd);
  pcVar5 = local_4 + 0x11;
  if (0 < DAT_50188918) {
    puVar4 = &DAT_50165d18;
    do {
      pcVar3 = pcVar5;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)puVar4 - (int)pcVar5] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar3 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar3;
      }
      pcVar5 = pcVar5 + 1;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 0x40;
    } while (iVar2 < DAT_50188918);
  }
  pcVar5 = FUN_500bccc0(pcVar5,DAT_5018891c,0x50175d18);
  pcVar5 = FUN_500bccc0(pcVar5,DAT_50188920,0x5017c118);
  FUN_500bccc0(pcVar5,DAT_50188924,0x50182518);
  (*DAT_5015cb68)(local_4);
  return;
}

