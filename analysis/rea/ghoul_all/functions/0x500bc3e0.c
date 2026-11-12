// rea decompile_all
// name: FUN_500bc3e0
// address: 0x500bc3e0
// body: available
// range: 0x500bc3e0-0x500bc4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bc3e0(uint param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 uVar5;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x128) = 0x40000000;
  *(undefined4 *)(param_1 + 300) = 0x40000000;
  *(undefined4 *)(param_1 + 0x130) = 0x40000000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  FUN_500b3870(param_1,&PTR_s_objects_siberia_flare_5014e5e0,(char *)0x0,0);
  FUN_500b3fc0(*(int **)(param_1 + 0x164),0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
    uVar2 = (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FlareLP_wav_5014e898);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
    uVar5 = 0;
    if ((*(byte *)(param_1 + 0x1b8) & 8) == 0) {
      pcVar3 = s_environ_roadflare_5014e86c;
    }
    else {
      pcVar3 = s_environ_roadflare_blue_5014e880;
    }
    uVar4 = param_1;
    uVar1 = (*DAT_5015c9f8)(pcVar3,param_1,0,0);
    FUN_50085530(uVar1,uVar4,uVar5);
  }
  (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FlareLP_wav_5014e898);
  *(code **)(param_1 + 0x2c4) = FUN_500bc330;
  return;
}

