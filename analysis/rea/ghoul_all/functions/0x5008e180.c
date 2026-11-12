// rea decompile_all
// name: FUN_5008e180
// address: 0x5008e180
// body: available
// range: 0x5008e180-0x5008e422 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5008e180(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 uVar7;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x158) != 1) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0x2030003;
  *(undefined4 *)(param_1 + 0x11c) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0e00000;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_500b2c20(param_1);
  (*DAT_5015cb28)(param_1);
  if (*(float *)(param_1 + 0x364) == 0.0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x364);
  }
  iVar2 = *(int *)(param_1 + 0x2ec);
  *(undefined4 *)(param_1 + 0x364) = uVar4;
  if (iVar2 == 0) {
    iVar2 = 0xc;
  }
  iVar5 = *(int *)(param_1 + 0x318);
  *(int *)(param_1 + 0x2ec) = iVar2;
  if (iVar5 == 0) {
    iVar5 = 0x40;
  }
  *(int *)(param_1 + 0x318) = iVar5;
  *(code **)(param_1 + 0x2c4) = FUN_5008e030;
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    if (iVar2 < 4) {
      pcVar3 = s_environ_firesmall2_501473c4;
    }
    else if (iVar2 < 8) {
      pcVar3 = s_gbfire_501473bc;
    }
    else if (iVar2 < 0xe) {
      pcVar3 = s_gbfire_501473bc;
    }
    else if (iVar2 < 0x14) {
      pcVar3 = s_gbfire_501473bc;
    }
    else {
      pcVar3 = s_environ_firelarge2_501473a8;
      if (0x1d < iVar2) {
        pcVar3 = s_environ_firelarge3_50147394;
      }
    }
    uVar7 = 0;
    iVar2 = param_1;
    uVar1 = (*DAT_5015c9f8)(pcVar3,param_1,0,0);
    FUN_50085530(uVar1,iVar2,uVar7);
    *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
    if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
      if (*(int *)(param_1 + 0x2ec) < 0x15) {
        if (*(int *)(param_1 + 0x2ec) < 0xb) {
          pcVar3 = s_Ambient_Gen_FireFX_FireSmall_wav_501473d8;
        }
        else {
          pcVar3 = s_Ambient_Gen_FireFX_FireMed_wav_501473fc;
        }
      }
      else {
        pcVar3 = s_Ambient_Gen_FireFX_FireBig_wav_5014741c;
      }
      uVar4 = (*DAT_5015c9f4)(pcVar3);
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      *(undefined4 *)(param_1 + 0x40) = 0xf8;
    }
  }
  else if (iVar2 < 4) {
    (*DAT_5015c9f8)(s_environ_firesmall2_501473c4);
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  else if (iVar2 < 8) {
    (*DAT_5015c9f8)(s_gbfire_501473bc);
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  else if (iVar2 < 0xe) {
    (*DAT_5015c9f8)(s_gbfire_501473bc);
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  else if (iVar2 < 0x14) {
    (*DAT_5015c9f8)(s_gbfire_501473bc);
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  else {
    pcVar3 = s_environ_firelarge2_501473a8;
    if (0x1d < iVar2) {
      pcVar3 = s_environ_firelarge3_50147394;
    }
    (*DAT_5015c9f8)(pcVar3);
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  if (*(float *)(param_1 + 0x364) != 0.0) {
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_5001d0b0;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  }
  lVar6 = __ftol();
  *(int *)(param_1 + 0x2f0) = (int)lVar6;
  (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FireBig_wav_5014741c);
  (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FireMed_wav_501473fc);
  (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FireSmall_wav_501473d8);
  (*DAT_5015c9f8)(s_environ_firesmall2_501473c4);
  (*DAT_5015c9f8)(s_gbfire_501473bc);
  (*DAT_5015c9f8)(s_environ_firelarge2_501473a8);
                    /* WARNING: Could not recover jumptable at 0x5008e41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

