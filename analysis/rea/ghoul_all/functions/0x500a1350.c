// rea decompile_all
// name: FUN_500a1350
// address: 0x500a1350
// body: available
// range: 0x500a1350-0x500a15ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a1350(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  piVar1 = (int *)FUN_500b4a40(param_1,1);
  if (piVar1 != (int *)0x0) {
    FUN_500b3ea0(piVar1,0x5014b1e0);
    FUN_500b3ea0(piVar1,0x5014b1d4);
  }
  FUN_500fdd70((float *)(param_1 + 0x10),&local_18,(float *)0x0,local_c);
  local_30 = local_18 * 10.0 + *(float *)(param_1 + 4);
  local_2c = local_14 * 10.0 + *(float *)(param_1 + 8);
  local_28 = local_10 * 10.0 + *(float *)(param_1 + 0xc);
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  local_34 = 0.0;
  local_3c = (float)((int)uVar3 % 0x15 + -10);
  local_38 = (float)((int)uVar2 % 0x15 + -10);
  FUN_50083e60(&local_30,&local_3c,1);
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  local_34 = 0.0;
  local_3c = (float)((int)uVar3 % 0x15 + -10);
  local_38 = (float)((int)uVar2 % 0x15 + -10);
  FUN_50083e60(&local_30,&local_3c,1);
  iVar4 = (*DAT_5015cb24)(5,10);
  uVar2 = FUN_50107636();
  uVar3 = FUN_50107636();
  local_3c = (float)((int)uVar3 % 0x29 + -0x14);
  local_38 = (float)((int)uVar2 % 0x29 + -0x14);
  local_34 = (float)iVar4;
  FUN_50083e60(&local_30,&local_3c,1);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_50084270(&local_30,&uStack_24,3,1,'\t',0,0,0,0x1c);
  FUN_50084270(&local_30,&uStack_24,5,1,'\a',0,0,0,0x25);
  FUN_50084a10(&local_30,100,0);
  uVar5 = (*DAT_5015c9f4)(s_Impact_Glassbreak_Monitor_wav_5014adb8,0x3f19999a,0x3f800000,0,0);
  (*DAT_5015ca48)(param_1,2,uVar5);
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500a0e60;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500a1000;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc;
  fVar6 = (float10)(*DAT_5015cb20)(0x40c00000,0x41400000);
  *(float *)(param_1 + 0x2dc) = (float)(fVar6 + (float10)DAT_5015ccdc);
  uVar5 = (*DAT_5015c9f4)(s_Ambient_Gen_Electric_buzz_wav_5014ad98);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = 0xf8;
  return;
}

