// rea decompile_all
// name: FUN_50095ec0
// address: 0x50095ec0
// body: available
// range: 0x50095ec0-0x50095f8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50095ec0(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1300000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1700000;
  *(undefined4 *)(param_1 + 0x128) = 0x41300000;
  *(undefined4 *)(param_1 + 300) = 0x41200000;
  *(undefined4 *)(param_1 + 0x130) = 0x41700000;
  uVar2 = *(uint *)(param_1 + 0x1b8);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 | 1;
  }
  else {
    uVar2 = uVar2 & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x1b8) = uVar2;
  FUN_500b3870(param_1,&PTR_s_objects_generic_barrel_burning_50147fc0,(char *)0x0,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar4 = (**(code **)(*piVar3 + 0x1c))(s_DUMMY01_50146508);
    uVar2 = param_1;
    uVar1 = (*DAT_5015c9f8)(s_environ_firesmall1_5014aa88,param_1,uVar4,0);
    FUN_50085530(uVar1,uVar2,(short)uVar4);
    uVar4 = (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FireSmall_wav_501473d8);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
    *(undefined1 **)(param_1 + 0x2c0) = &LAB_50095e40;
  }
  return;
}

