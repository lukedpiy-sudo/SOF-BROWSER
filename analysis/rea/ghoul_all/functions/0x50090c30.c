// rea decompile_all
// name: FUN_50090c30
// address: 0x50090c30
// body: available
// range: 0x50090c30-0x50090d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090c30(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  
  if (*(int *)(param_1 + 0x1e8) == 0) {
    uVar1 = (*DAT_5015c9f4)(s_Ambient_Buttons_HiTech_Elevator1_50147854,0x3f19999a,0x3f800000,0,0);
    (*DAT_5015ca48)(param_1,2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x32c) = param_3;
  if (*(int *)(param_1 + 0x424) != 2) {
    if (*(int *)(param_1 + 0x424) == 0) {
      *(undefined4 *)(param_1 + 0x2e8) = DAT_5015ccdc;
      return;
    }
    *(undefined4 *)(param_1 + 0x424) = 2;
    if ((*(int *)(param_1 + 0x404) != -1) && ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0)) {
      (*DAT_5015ca48)(param_1,10,*(int *)(param_1 + 0x404),0x3f800000,0x3f800000,0,0);
    }
    FUN_5008f880(param_1,(float *)(param_1 + 0x3ec),FUN_50090bc0);
    if (*(short *)(param_1 + 0x1b0) == 0) {
      *(undefined4 *)(param_1 + 0x2e8) = DAT_5015ccdc;
      return;
    }
    (*DAT_5015cab0)(param_2,CONCAT22(extraout_var,*(short *)(param_1 + 0x1b0)));
    uVar1 = (*DAT_5015c9f4)(s_Misc_Talk_wav_50147844,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca48)(param_2,0,uVar1);
  }
  *(undefined4 *)(param_1 + 0x2e8) = DAT_5015ccdc;
  return;
}

