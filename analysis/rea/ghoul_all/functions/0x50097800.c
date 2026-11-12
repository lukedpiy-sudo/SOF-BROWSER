// rea decompile_all
// name: FUN_50097800
// address: 0x50097800
// body: available
// range: 0x50097800-0x500979ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50097800(uint param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc28a0000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1c80000;
  *(undefined4 *)(param_1 + 0x128) = 0x428a0000;
  *(undefined4 *)(param_1 + 300) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41c80000;
  iVar1 = *(int *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  if (iVar1 == 1) {
    pcVar2 = &DAT_5014ab74;
  }
  else if (iVar1 == 2) {
    pcVar2 = &DAT_5014ab7c;
  }
  else if (iVar1 == 3) {
    pcVar2 = &DAT_5014ab84;
  }
  else {
    pcVar2 = &DAT_5014ab8c;
  }
  FUN_500b3870(param_1,&PTR_s_objects_generic_car_american_501481c8,pcVar2,0);
  *(undefined4 *)(param_1 + 0x11c) = 0xc28a0000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1c80000;
  *(undefined4 *)(param_1 + 0x128) = 0x428a0000;
  *(undefined4 *)(param_1 + 300) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41c80000;
  (*DAT_5015cb28)(param_1);
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(int *)(param_1 + 0x2c) == 3)) {
    FUN_500b3dc0(param_1,0x5014ab14);
    FUN_500b3dc0(param_1,0x5014ab08);
    FUN_500b3dc0(param_1,0x5014aafc);
    FUN_500b4160(param_1,&DAT_5014ab24,0);
  }
  else {
    FUN_500b3dc0(param_1,0x5014ab64);
    FUN_500b3dc0(param_1,0x5014ab58);
    FUN_500b3dc0(param_1,0x5014ab4c);
    FUN_500b3dc0(param_1,0x5014ab44);
    FUN_500b3dc0(param_1,0x5014ab38);
    FUN_500b3dc0(param_1,0x5014ab30);
    FUN_500b3dc0(param_1,0x5014ab28);
    FUN_500b4160(param_1,&DAT_5014ab24,0);
    if (*(int *)(param_1 + 0x2c) == 2) {
      FUN_500b3dc0(param_1,0x5014ab14);
      FUN_500b3dc0(param_1,0x5014ab08);
      FUN_500b3dc0(param_1,0x5014aafc);
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    FUN_500b4160(param_1,&DAT_5014aaf8,0);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 8) != 0) {
    uVar3 = (*DAT_5015c9f4)(s_Ambient_Models_Alarm_Police_wav_5014aad8);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = 0xfa;
    FUN_500b4160(param_1,&DAT_50149e74,1);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  return;
}

