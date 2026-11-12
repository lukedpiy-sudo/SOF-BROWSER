// rea decompile_all
// name: FUN_500f9220
// address: 0x500f9220
// body: available
// range: 0x500f9220-0x500f958d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500f9220(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_64 [100];
  
  if (*(int *)((int)DAT_5018b3f0 + 0x19c) == 1) {
    *(float *)((int)DAT_5018b3f0 + 0x2a0) = DAT_5015ccdc + 12.0;
    return;
  }
  iVar2 = *(int *)((int)DAT_5018b3f0 + 0x38c);
  iVar4 = *(int *)(DAT_5018b41c + 0x524);
  *(int *)(DAT_5018b41c + 0x524) = iVar2;
  if (iVar4 == 0) {
    if (iVar2 != 0) {
      uVar3 = (*DAT_5015c9f4)(s_player_land_water_wav_501546c4,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(DAT_5018b3f0,4,uVar3);
      *(uint *)((int)DAT_5018b3f0 + 0x1a0) = *(uint *)((int)DAT_5018b3f0 + 0x1a0) | 8;
      *(float *)((int)DAT_5018b3f0 + 0x2e0) = DAT_5015ccdc - 1.0;
    }
LAB_500f92e0:
    if (iVar2 != 3) {
LAB_500f9452:
      *(float *)((int)DAT_5018b3f0 + 0x2a0) = DAT_5015ccdc + 12.0;
      *(undefined4 *)((int)DAT_5018b3f0 + 0x310) = 2;
      goto LAB_500f947f;
    }
    if (*(int *)((int)DAT_5018b3f0 + 0x3c) == 0) {
      uVar3 = (*DAT_5015c9f4)(s_player_underwtr_underwtr_wav_501546a4);
      *(undefined4 *)((int)DAT_5018b3f0 + 0x3c) = uVar3;
      *(undefined4 *)((int)DAT_5018b3f0 + 0x40) = 0xf8;
    }
  }
  else {
    if (iVar2 == 0) {
      *(uint *)((int)DAT_5018b3f0 + 0x1a0) = *(uint *)((int)DAT_5018b3f0 + 0x1a0) & 0xfffffff7;
    }
    if (iVar4 != 3) goto LAB_500f92e0;
    if (iVar2 != 3) {
      piVar1 = (int *)((int)DAT_5018b3f0 + 0x3c);
      iVar4 = (*DAT_5015c9f4)(s_player_underwtr_underwtr_wav_501546a4);
      if (*piVar1 == iVar4) {
        *piVar1 = 0;
      }
      goto LAB_500f9452;
    }
  }
  if (((*(float *)((int)DAT_5018b3f0 + 0x2a0) < DAT_5015ccdc) &&
      (*(float *)(*(int *)((int)DAT_5018b3f0 + 0x74) + 0x55c) < DAT_5015ccdc)) &&
     (0 < *(int *)((int)DAT_5018b3f0 + 0x2ec))) {
    *(float *)(*(int *)((int)DAT_5018b3f0 + 0x74) + 0x55c) = DAT_5015ccdc + 1.0;
    *(int *)((int)DAT_5018b3f0 + 0x310) = *(int *)((int)DAT_5018b3f0 + 0x310) + 2;
    if (0xf < *(int *)((int)DAT_5018b3f0 + 0x310)) {
      *(undefined4 *)((int)DAT_5018b3f0 + 0x310) = 0xf;
    }
    if (*(int *)((int)DAT_5018b3f0 + 0x2ec) <= *(int *)((int)DAT_5018b3f0 + 0x310)) {
      uVar3 = (*DAT_5015c9f4)(s_player_drown1_wav_50154690,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(DAT_5018b3f0,2,uVar3);
    }
    *(float *)((int)DAT_5018b3f0 + 0x2dc) = DAT_5015ccdc;
    FUN_5008bb10(DAT_5018b3f0,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                 (float *)((int)DAT_5018b3f0 + 4),(float *)((int)DAT_5018b3f0 + 4),
                 *(int *)((int)DAT_5018b3f0 + 0x310),0,0x4002,0x14,0,0);
  }
LAB_500f947f:
  if ((iVar2 != 0) && ((*(uint *)((int)DAT_5018b3f0 + 0x388) & 0x18) != 0)) {
    if ((*(uint *)((int)DAT_5018b3f0 + 0x388) & 8) != 0) {
      if ((0 < *(int *)((int)DAT_5018b3f0 + 0x2ec)) &&
         (*(float *)((int)DAT_5018b3f0 + 0x2dc) < DAT_5015ccdc !=
          (*(float *)((int)DAT_5018b3f0 + 0x2dc) == DAT_5015ccdc))) {
        (*DAT_5015cb24)(1,4);
        FUN_500fe2b0();
        uVar3 = (*DAT_5015c9f4)(auStack_64,0x3f800000,0x3f800000,0,0);
        (*DAT_5015ca48)(DAT_5018b3f0,2,uVar3);
        *(float *)((int)DAT_5018b3f0 + 0x2dc) = DAT_5015ccdc + 1.0;
      }
      FUN_5008bb10(DAT_5018b3f0,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                   (float *)((int)DAT_5018b3f0 + 4),(float *)((int)DAT_5018b3f0 + 4),iVar2 * 3,0,
                   0x1000,0x1c,0,0);
    }
    if ((*(byte *)((int)DAT_5018b3f0 + 0x388) & 0x10) != 0) {
      FUN_5008bb10(DAT_5018b3f0,DAT_5015cca0,(float)DAT_5015cca0,(float *)&DAT_5018bf0c,
                   (float *)((int)DAT_5018b3f0 + 4),(float *)((int)DAT_5018b3f0 + 4),iVar2,0,0x4000,
                   0x15,0,0);
    }
  }
  return;
}

