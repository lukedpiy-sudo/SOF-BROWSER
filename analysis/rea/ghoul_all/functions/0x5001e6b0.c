// rea decompile_all
// name: FUN_5001e6b0
// address: 0x5001e6b0
// body: available
// range: 0x5001e6b0-0x5001e85e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5001e6b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  if (*(char *)(param_1 + 0x74) != '\0') {
    FUN_50001090(local_100);
    if (*(int *)(param_1 + 400) < 1) {
      iVar3 = 0;
      do {
        iVar2 = iVar3;
        uVar7 = *(undefined4 *)(param_1 + 0xf4);
        iVar3 = iVar2 + 1;
        puVar8 = local_100;
        pcVar6 = s_sound__s_d__s_Wake_d_wav_501335a0;
        puVar4 = local_200;
        uVar5 = 0x100;
        iVar1 = param_1 + 0x74;
        iVar9 = iVar3;
        FUN_500fe2b0();
        iVar1 = (*DAT_5015cb74)(local_200,puVar4,uVar5,pcVar6,iVar1,uVar7,puVar8,iVar9);
      } while (iVar1 != 0);
      if (iVar3 < 2) {
        return;
      }
      *(int *)(param_1 + 400) = iVar2;
    }
    if (DAT_501889c4 == 0) {
      iVar3 = 1;
      if (0 < *(int *)(param_1 + 400)) {
        do {
          FUN_500fe2b0();
          if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
            (*DAT_5015ca24)(s_voice_cache___s_5013358c,local_200);
          }
          (*DAT_5015c9f4)(local_200);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= *(int *)(param_1 + 400));
      }
    }
    else {
      iVar3 = 1;
      if (0 < *(int *)(param_1 + 0xf4)) {
        do {
          iVar1 = 1;
          if (0 < *(int *)(param_1 + 400)) {
            do {
              FUN_500fe2b0();
              if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                (*DAT_5015ca24)(s_voice_cache___s_5013358c,local_200);
              }
              (*DAT_5015c9f4)(local_200);
              iVar1 = iVar1 + 1;
            } while (iVar1 <= *(int *)(param_1 + 400));
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= *(int *)(param_1 + 0xf4));
        return;
      }
    }
  }
  return;
}

