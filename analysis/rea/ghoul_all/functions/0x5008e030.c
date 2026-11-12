// rea decompile_all
// name: FUN_5008e030
// address: 0x5008e030
// body: available
// range: 0x5008e030-0x5008e172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008e030(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  if (*(float *)(param_1 + 0x360) != 0.0) {
    iVar6 = *(int *)(param_1 + 0x2ec);
    if (iVar6 < 4) {
      pcVar2 = s_environ_firesmall2_501473c4;
    }
    else if (iVar6 < 8) {
      pcVar2 = s_gbfire_501473bc;
    }
    else if (iVar6 < 0xe) {
      pcVar2 = s_gbfire_501473bc;
    }
    else if (iVar6 < 0x14) {
      pcVar2 = s_gbfire_501473bc;
    }
    else {
      pcVar2 = s_environ_firelarge2_501473a8;
      if (0x1d < iVar6) {
        pcVar2 = s_environ_firelarge3_50147394;
      }
    }
    uVar8 = 0;
    iVar6 = param_1;
    iVar3 = (*DAT_5015c9f8)(pcVar2);
    FUN_50085590(iVar3,iVar6,uVar8);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x360) = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
    if (*(int *)(param_1 + 0x2ec) < 0x15) {
      if (*(int *)(param_1 + 0x2ec) < 0xb) {
        pcVar2 = s_Ambient_Gen_FireFX_FireSmall_wav_501473d8;
      }
      else {
        pcVar2 = s_Ambient_Gen_FireFX_FireMed_wav_501473fc;
      }
    }
    else {
      pcVar2 = s_Ambient_Gen_FireFX_FireBig_wav_5014741c;
    }
    uVar4 = (*DAT_5015c9f4)(pcVar2);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
  }
  iVar6 = *(int *)(param_1 + 0x2ec);
  if (iVar6 < 4) {
    pcVar2 = s_environ_firesmall2_501473c4;
  }
  else if (iVar6 < 8) {
    pcVar2 = s_gbfire_501473bc;
  }
  else if (iVar6 < 0xe) {
    pcVar2 = s_gbfire_501473bc;
  }
  else if (iVar6 < 0x14) {
    pcVar2 = s_gbfire_501473bc;
  }
  else {
    pcVar2 = s_environ_firelarge2_501473a8;
    if (0x1d < iVar6) {
      pcVar2 = s_environ_firelarge3_50147394;
    }
  }
  uVar7 = 0;
  iVar6 = param_1;
  uVar1 = (*DAT_5015c9f8)(pcVar2,param_1,0,0);
  FUN_50085530(uVar1,iVar6,uVar7);
  lVar5 = __ftol();
  *(int *)(param_1 + 0x2f0) = (int)lVar5;
  *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
  return;
}

