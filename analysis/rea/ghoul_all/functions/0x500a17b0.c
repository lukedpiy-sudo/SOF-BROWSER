// rea decompile_all
// name: FUN_500a17b0
// address: 0x500a17b0
// body: available
// range: 0x500a17b0-0x500a1a42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a17b0(uint param_1)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float local_18;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x19c) = 10;
  if (*(int *)(param_1 + 0x3bc) == 0) {
    FUN_500b3dc0(param_1,0x5014b1e0);
    FUN_500b3dc0(param_1,0x501464e4);
  }
  else {
    FUN_500b3dc0(param_1,0x5014b238);
    FUN_500b3dc0(param_1,0x5014b230);
    FUN_500b3dc0(param_1,0x5014b228);
    FUN_500b3dc0(param_1,0x5014b220);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_500b2fd0(param_1,PTR_s_objects_generic_tv_wall_50148fb0,(int)PTR_s_tv_wall_50148fb4,
               PTR_s_tv_wall_50148fc8,s_tv_wall_d_5014b214,0);
  uVar3 = FUN_50107636();
  uVar4 = FUN_50107636();
  iVar1 = param_1 + 4;
  local_10 = 0.0;
  local_18 = (float)((int)uVar4 % 0x15 + -10);
  local_14 = (float)((int)uVar3 % 0x15 + -10);
  FUN_50083e60(iVar1,&local_18,1);
  uVar3 = FUN_50107636();
  uVar4 = FUN_50107636();
  local_10 = 0.0;
  local_18 = (float)((int)uVar4 % 0x15 + -10);
  local_14 = (float)((int)uVar3 % 0x15 + -10);
  FUN_50083e60(iVar1,&local_18,1);
  iVar5 = (*DAT_5015cb24)(5,10);
  uVar3 = FUN_50107636();
  uVar4 = FUN_50107636();
  local_18 = (float)((int)uVar4 % 0x29 + -0x14);
  local_14 = (float)((int)uVar3 % 0x29 + -0x14);
  local_10 = (float)iVar5;
  FUN_50083e60(iVar1,&local_18,1);
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_50084270(iVar1,&uStack_c,3,1,'\t',0,0,0,0x1c);
  FUN_50084270(iVar1,&uStack_c,5,1,'\a',0,0,0,0x25);
  FUN_50084a10(iVar1,100,0);
  fVar7 = (float10)(*DAT_5015cb20)(0x40c00000,0x41400000);
  fVar2 = (float10)DAT_5015ccdc;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500a0e60;
  *(float *)(param_1 + 0x2dc) = (float)(fVar7 + fVar2);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) ^ 2;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500a1000;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc;
  uVar6 = (*DAT_5015c9f4)(s_Impact_Glassbreak_Monitor_wav_5014adb8,0x3f19999a,0x3f800000,0,0);
  (*DAT_5015ca48)(param_1,2,uVar6);
  uVar6 = (*DAT_5015c9f4)(s_Ambient_Gen_Electric_buzz_wav_5014ad98);
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = 0xf8;
  return;
}

