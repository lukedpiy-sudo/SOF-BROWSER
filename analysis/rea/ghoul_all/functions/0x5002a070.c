// rea decompile_all
// name: FUN_5002a070
// address: 0x5002a070
// body: available
// range: 0x5002a070-0x5002a5d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_5002a070(void *this,int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,
            int *param_6)

{
  int iVar1;
  float fVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  local_30 = *(float *)(param_1 + 0x10);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_28 = 0;
  FUN_500fdd70(&local_30,&local_24,local_c,local_18);
  local_3c = *(float *)(param_1 + 4) - *param_2;
  local_34 = 0.0;
  local_38 = *(float *)(param_1 + 8) - param_2[1];
  FUN_500fe050(&local_3c);
  fVar2 = local_1c * local_34 + local_24 * local_3c + local_20 * local_38;
  if (DAT_50130650 == 0x1a) {
    if (*(int *)((int)this + 4) == 0) goto LAB_5002a5bd;
    switch(*(undefined4 *)(*(int *)((int)this + 4) + 0x4c)) {
    case 0:
      goto LAB_5002a5bd;
    case 1:
      FUN_50029bb0(param_1,param_2,param_3,param_4,param_5,param_6);
      break;
    case 2:
    case 5:
      FUN_50029bb0(param_1,param_2,param_3,param_4,param_5,param_6);
      break;
    default:
LAB_5002a5bd:
      FUN_500295b0(param_1,param_2,(int)param_3,param_4,param_5,param_6);
      break;
    case 6:
    case 7:
      FUN_50029bb0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
switchD_5002a122_default:
    DAT_50130650 = 0x1a;
    return;
  }
  switch(DAT_50130650) {
  case 0:
  case 1:
    *(undefined4 *)(param_5 + *param_6 * 4) = 2;
    *param_6 = *param_6 + 1;
    DAT_50130650 = 0x1a;
    return;
  case 2:
    if (0.707 < fVar2) {
      *(undefined4 *)(param_5 + *param_6 * 4) = 1;
      *param_6 = *param_6 + 1;
      DAT_50130650 = 0x1a;
      return;
    }
    *(undefined4 *)(param_5 + *param_6 * 4) = 0;
    *param_6 = *param_6 + 1;
    DAT_50130650 = 0x1a;
    return;
  case 3:
    *(undefined4 *)(param_5 + *param_6 * 4) = 5;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 7;
    goto LAB_5002a1bd;
  case 4:
    *(undefined4 *)(param_5 + *param_6 * 4) = 6;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 8;
LAB_5002a1bd:
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 9;
    break;
  case 5:
    *(undefined4 *)(param_5 + *param_6 * 4) = 3;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 7;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 10;
    break;
  case 6:
    *(undefined4 *)(param_5 + *param_6 * 4) = 4;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 8;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 10;
    break;
  case 7:
    *(undefined4 *)(param_5 + *param_6 * 4) = 3;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 5;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xd;
    break;
  case 8:
    *(undefined4 *)(param_5 + *param_6 * 4) = 4;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 6;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xe;
    break;
  case 9:
    *(undefined4 *)(param_5 + *param_6 * 4) = 3;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xb;
    break;
  case 10:
    *(undefined4 *)(param_5 + *param_6 * 4) = 5;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xc;
    break;
  case 0xb:
    *(undefined4 *)(param_5 + *param_6 * 4) = 9;
    break;
  case 0xc:
    *(undefined4 *)(param_5 + *param_6 * 4) = 10;
    break;
  case 0xd:
  case 0x18:
    *(undefined4 *)(param_5 + *param_6 * 4) = 3;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 7;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xf;
    break;
  case 0xe:
  case 0x19:
    *(undefined4 *)(param_5 + *param_6 * 4) = 6;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 8;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 4;
    break;
  case 0xf:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0xf;
    break;
  case 0x10:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0xf;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x14;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xd;
    break;
  case 0x11:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0xf;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x14;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xe;
    break;
  case 0x12:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0xf;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x15;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xd;
    break;
  case 0x13:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0xf;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x15;
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0xe;
    break;
  case 0x14:
    if (fVar2 <= 0.707) {
      *(undefined4 *)(param_5 + *param_6 * 4) = 0x10;
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x16;
    }
    else {
      *(undefined4 *)(param_5 + *param_6 * 4) = 0x11;
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x16;
    }
    break;
  case 0x15:
    if (fVar2 <= 0.707) {
      *(undefined4 *)(param_5 + *param_6 * 4) = 0x12;
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x17;
    }
    else {
      *(undefined4 *)(param_5 + *param_6 * 4) = 0x13;
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      *(undefined4 *)(param_5 + (iVar1 + 1) * 4) = 0x17;
    }
    break;
  case 0x16:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0x14;
    break;
  case 0x17:
    *(undefined4 *)(param_5 + *param_6 * 4) = 0x15;
    break;
  default:
    goto switchD_5002a122_default;
  }
  *param_6 = *param_6 + 1;
  DAT_50130650 = 0x1a;
  return;
}

