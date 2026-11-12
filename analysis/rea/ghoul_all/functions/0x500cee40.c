// rea decompile_all
// name: FUN_500cee40
// address: 0x500cee40
// body: available
// range: 0x500cee40-0x500cf2f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500cee40(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  int local_150 [24];
  float local_f0 [4];
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    local_f0[0] = *param_3;
    local_f0[1] = param_3[1];
    local_160 = param_3[2];
    local_a8 = *param_4;
    local_a4 = param_4[1];
    local_ac = param_4[2];
  }
  else {
    local_f0[0] = *(float *)(param_1 + 0x11c);
    local_f0[1] = *(float *)(param_1 + 0x120);
    local_160 = *(float *)(param_1 + 0x124);
    local_a8 = *(undefined4 *)(param_1 + 0x128);
    local_a4 = *(undefined4 *)(param_1 + 300);
    local_ac = *(undefined4 *)(param_1 + 0x130);
  }
  local_f0[2] = local_160;
  local_f0[3] = local_f0[0];
  local_a0 = local_160;
  local_e0 = local_f0[1];
  local_9c = local_a8;
  local_dc = local_ac;
  local_98 = local_a4;
  local_d8 = local_f0[0];
  local_94 = local_ac;
  local_d4 = local_a4;
  local_d0 = local_160;
  local_cc = local_f0[0];
  local_c8 = local_a4;
  local_c4 = local_ac;
  local_c0 = local_a8;
  local_bc = local_f0[1];
  local_b8 = local_160;
  local_b4 = local_a8;
  local_b0 = local_f0[1];
  if (param_1 == 0) {
    local_174 = *param_2;
    local_170 = param_2[1];
    local_16c = param_2[2];
  }
  else {
    local_174 = *(float *)(param_1 + 4);
    local_170 = *(float *)(param_1 + 8);
    local_16c = *(float *)(param_1 + 0xc);
  }
  local_150[6] = 7;
  local_150[8] = 7;
  local_150[10] = 7;
  local_150[1] = 1;
  local_150[0x15] = 1;
  local_150[0x16] = 1;
  local_150[0xb] = 3;
  local_150[0xd] = 3;
  local_150[0x17] = 3;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x42800000;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x43000000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0x43400000;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0x437f0000;
  local_60 = 0;
  local_5c = 0x42800000;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x43000000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x43400000;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x437f0000;
  local_34 = 0;
  local_30 = 0x42800000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x43000000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x43400000;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x437f0000;
  local_8 = 0;
  local_4 = 0;
  local_150[0] = 0;
  local_150[2] = 0;
  local_150[3] = 2;
  local_150[4] = 0;
  local_150[5] = 4;
  local_150[7] = 6;
  local_150[9] = 5;
  local_150[0xc] = 2;
  local_150[0xe] = 2;
  local_150[0xf] = 6;
  local_150[0x10] = 6;
  local_150[0x11] = 4;
  local_150[0x12] = 4;
  local_150[0x13] = 5;
  local_150[0x14] = 5;
  local_178 = 0xfa000000;
  if (param_5 == 1) {
    local_178 = 0xfa0000ff;
  }
  else if (param_5 == 2) {
    local_178 = 0xfa00ff00;
  }
  else if (param_5 != 0) {
    local_178 = 0xfaff0000;
  }
  iVar3 = 0;
  do {
    uVar2 = local_178;
    if (param_5 == 0) {
      lVar4 = __ftol();
      lVar5 = __ftol();
      lVar6 = __ftol();
      local_178._3_1_ = SUB41(uVar2,3);
      local_178._0_3_ = CONCAT12((char)lVar6,CONCAT11((char)lVar5,(char)lVar4));
    }
    iVar1 = local_150[iVar3 * 2];
    local_168 = local_174 + local_f0[iVar1 * 3];
    local_164 = local_170 + local_f0[iVar1 * 3 + 1];
    local_160 = local_16c + local_f0[iVar1 * 3 + 2];
    iVar1 = local_150[iVar3 * 2 + 1];
    local_15c = local_174 + local_f0[iVar1 * 3];
    local_158 = local_170 + local_f0[iVar1 * 3 + 1];
    local_154 = local_16c + local_f0[iVar1 * 3 + 2];
    FUN_50084460(&local_168,&local_15c,local_178,1,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  return;
}

