// rea decompile_all
// name: FUN_500a0420
// address: 0x500a0420
// body: available
// range: 0x500a0420-0x500a0632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500a0420(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  char *pcVar4;
  
  param_1[0x47] = 0xc2580000;
  param_1[0x48] = 0xc3240000;
  param_1[0x49] = 0xc2700000;
  param_1[0x4a] = 0x425c0000;
  param_1[0x4b] = 0x43280000;
  param_1[0x4c] = 0x42700000;
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    pcVar4 = s_train2_5014b1a4;
  }
  else if (iVar1 == 2) {
    pcVar4 = s_train3_5014b1ac;
  }
  else if (iVar1 == 3) {
    pcVar4 = s_train4_5014b1b4;
  }
  else {
    pcVar4 = s_train_50149580;
  }
  uVar2 = param_1[0x6e];
  param_1[0xc3] = 0;
  param_1[0x6e] = 2;
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_train_generic_50148e70,pcVar4,0);
  param_1[0x6e] = uVar2;
  FUN_500b2fd0((int)param_1,PTR_s_objects_generic_train_generic_50148e70,(int)PTR_s_train_50148e74,
               PTR_s_train_50148e88,pcVar4,0);
  iVar1 = param_1[0xb];
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    FUN_500b3ce0((uint)param_1,s_TRAIN_5014b19c);
    FUN_500b3dc0((uint)param_1,0x501464e4);
  }
  if (param_1[0xb] == 0) {
    FUN_500b4540(param_1,0x50148e70,s_headlight1_5014b180,&PTR_s_objects_generic_beam_50148858,
                 0x5014b18c,(char *)0x0);
    FUN_500b4540(param_1,0x50148e70,s_headlight2_5014b174,&PTR_s_objects_generic_beam_50148858,
                 0x5014b18c,(char *)0x0);
  }
  if ((param_1[0x6e] & 5) != 0) {
    param_1[0xb1] = FUN_500a00a0;
    param_1[0x67] = 10;
    param_1[0xae] = &LAB_5009fe60;
    param_1[3] = (float)param_1[3] + 1.0;
    fVar3 = DAT_5015ccdc + 0.1;
    param_1[0xb0] = &LAB_500a0230;
    param_1[0xa5] = 0xbf800000;
    param_1[0x68] = param_1[0x68] | 0x800;
    param_1[0xad] = fVar3;
  }
  if ((param_1[0x6e] & 2) != 0) {
    param_1[3] = (float)param_1[3] - 1.0;
    FUN_500b01c0((int)param_1,FUN_500a0420,param_1[0xd8]);
    param_1[3] = (float)param_1[3] + 1.0;
  }
  if (param_1[0xef] == 0) {
    param_1[0xef] = 600;
  }
  if ((float)param_1[0x88] == 0.0) {
    param_1[0x88] = 0x42c80000;
  }
  (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Move_w_5014b0ec);
  (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Horn2__5014b110);
                    /* WARNING: Could not recover jumptable at 0x500a062d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

