// rea decompile_all
// name: FUN_500ce3a0
// address: 0x500ce3a0
// body: available
// range: 0x500ce3a0-0x500ce84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500ce3a0(void *this,uint param_1,uint param_2,int *param_3,uint param_4,undefined4 param_5,
            float *param_6,float param_7,float param_8,undefined4 param_9)

{
  float *pfVar1;
  int iVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_5000b420(this,param_1,param_2,param_4,param_6,param_6,0,999999.0,1);
  *(undefined4 *)((int)this + 0x74) = param_5;
  *(float *)((int)this + 0x6c) = param_7;
  *(float *)((int)this + 0x78) = param_8;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_50125868;
  if (param_3 == (int *)0x0) {
    ExceptionList = local_c;
    return this;
  }
  iVar2 = (**(code **)(*param_3 + 0x238))();
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 *)((int)this + 0x70) = param_9;
  *(float *)((int)this + 0x78) = param_8;
  *(float *)((int)this + 0x14) = *param_6;
  *(float *)((int)this + 0x18) = param_6[1];
  *(float *)((int)this + 0x1c) = param_6[2];
  *(float *)((int)this + 0x6c) = param_7;
  switch(*(undefined4 *)((int)this + 0x74)) {
  case 1:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d1680;
    break;
  case 2:
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar2 + 0xd8);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar2 + 0xdc);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar2 + 0xe0);
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d7540;
    break;
  case 3:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d5700;
    break;
  case 4:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d8550;
    break;
  case 5:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d7670;
    break;
  case 6:
    if (param_7 != 0.0) {
      *(float *)(iVar2 + 0x180) = param_7;
      *(float *)(iVar2 + 0x184) = *param_6;
      *(float *)(iVar2 + 0x188) = param_6[1];
      *(float *)(iVar2 + 0x18c) = param_6[2];
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7720;
    }
    break;
  case 7:
    if (param_7 != 0.0) {
      *(float *)(iVar2 + 0x180) = param_7;
      *(float *)((int)this + 0x14) = param_8;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7720;
    }
    break;
  case 8:
    if (param_7 != 0.0) {
      *(float *)(iVar2 + 0x180) = param_7;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(float *)((int)this + 0x18) = param_8;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7720;
    }
    break;
  case 9:
    if (param_7 != 0.0) {
      *(float *)(iVar2 + 0x180) = param_7;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(float *)((int)this + 0x1c) = param_8;
      *(undefined1 **)((int)this + 0x7c) = &LAB_500d7720;
    }
    break;
  case 10:
    *(float *)(iVar2 + 0x184) = *param_6;
    *(float *)(iVar2 + 0x188) = param_6[1];
    *(float *)(iVar2 + 0x18c) = param_6[2];
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d7870;
    break;
  case 0x16:
    *(float *)((int)this + 0x78) = ABS(param_8);
    *(code **)((int)this + 0x7c) = FUN_500d7930;
    break;
  case 0x17:
    *(float *)((int)this + 0x78) = -ABS(param_8);
    *(code **)((int)this + 0x7c) = FUN_500d7930;
    break;
  case 0x21:
    *(undefined4 *)((int)this + 0x14) = 0;
    *(float *)((int)this + 0x78) = param_8;
    *(code **)((int)this + 0x7c) = FUN_500d7960;
    break;
  case 0x22:
    *(float *)(iVar2 + 400) = param_8;
    *(undefined4 *)((int)this + 0x14) = 0x3f800000;
    *(code **)((int)this + 0x7c) = FUN_500d7960;
    break;
  case 0x23:
    *(undefined4 *)(iVar2 + 400) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(float *)(iVar2 + 0x184) = *param_6;
    *(float *)(iVar2 + 0x188) = param_6[1];
    *(float *)(iVar2 + 0x18c) = param_6[2];
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d84c0;
    break;
  case 0x24:
    *(undefined4 *)(iVar2 + 400) = 0x3f800000;
    *(undefined4 *)((int)this + 0x78) = 0x3f800000;
    *(float *)(iVar2 + 0x184) = *param_6;
    *(float *)(iVar2 + 0x188) = param_6[1];
    *(float *)(iVar2 + 0x18c) = param_6[2];
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d84c0;
    break;
  case 0x25:
    *(undefined4 *)((int)this + 0x14) = 0x3f800000;
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d85d0;
    break;
  case 0x26:
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d85d0;
    break;
  case 0x27:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d8580;
    break;
  case 0x28:
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d86c0;
    break;
  case 0x29:
    *(code **)((int)this + 0x7c) = FUN_500d8720;
    break;
  case 0x2a:
    FUN_500d13a0(param_3,param_6);
    break;
  case 0x2b:
    iVar2 = param_3[0xa6];
    goto LAB_500ce832;
  case 0x2c:
    iVar2 = FUN_500d12f0(param_3,param_3[0xa6] + -1);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x10) = *param_6;
      *(float *)(iVar2 + 0x14) = param_6[1];
      *(float *)(iVar2 + 0x18) = param_6[2];
    }
    break;
  case 0x2d:
    iVar2 = FUN_500d12f0(param_3,param_3[0xa6] + -1);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return this;
    }
    pfVar1 = (float *)(iVar2 + 0x1c);
    *pfVar1 = *param_6;
    *(float *)(iVar2 + 0x20) = param_6[1];
    *(float *)(iVar2 + 0x24) = param_6[2];
    *(float *)(iVar2 + 4) = (*(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x10)) * 0.5;
    *(float *)(iVar2 + 8) = (*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x14)) * 0.5;
    *(float *)(iVar2 + 0xc) = (*(float *)(iVar2 + 0x18) + *(float *)(iVar2 + 0x18)) * 0.5;
    *(float *)(iVar2 + 0x10) = *(float *)(iVar2 + 0x10) - *(float *)(iVar2 + 4);
    *(float *)(iVar2 + 0x14) = *(float *)(iVar2 + 0x14) - *(float *)(iVar2 + 8);
    *(float *)(iVar2 + 0x18) = *(float *)(iVar2 + 0x18) - *(float *)(iVar2 + 0xc);
    *pfVar1 = *pfVar1 - *(float *)(iVar2 + 4);
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - *(float *)(iVar2 + 8);
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - *(float *)(iVar2 + 0xc);
    iVar2 = param_3[0xa6];
    param_6 = pfVar1;
LAB_500ce832:
    FUN_500d1460(param_3,iVar2 + -1,param_6);
    break;
  case 0x2f:
    if (*(int *)((int)this + 0x78) == 0x3f800000) {
      pcVar3 = s_m_x_chopper_black_5014fdd4;
    }
    else if (*(int *)((int)this + 0x78) == 0x40000000) {
      pcVar3 = s_m_x_chopper_green_5014fdc0;
    }
    else {
      pcVar3 = s_m_x_chopper_white_5014fdac;
    }
    FUN_500b2fd0((int)param_7,s_enemy_chopper_501523c8,0x501523d8,s_cobra_501523e0,pcVar3,1);
    break;
  case 0x30:
    if (*(int *)((int)this + 0x78) == 0x3f800000) {
      FUN_500cff00(param_3,param_7,s_enemy_hind_501523b4);
    }
    break;
  case 0x31:
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    *(undefined4 *)(iVar2 + 0x128) = 0;
    *(float *)(iVar2 + 0x13c) = DAT_5015ccdc + 2.0;
    *(undefined1 **)((int)this + 0x7c) = &LAB_500d73b0;
  }
  ExceptionList = local_c;
  return this;
}

