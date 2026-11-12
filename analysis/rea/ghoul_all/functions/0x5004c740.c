// rea decompile_all
// name: FUN_5004c740
// address: 0x5004c740
// body: available
// range: 0x5004c740-0x5004c95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004c740(void *this,float *param_1,float *param_2)

{
  void *this_00;
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  byte bVar6;
  uint *puVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(float *)(DAT_5015cca4 + 0x18) != 0.0) {
    return;
  }
  if (*(int *)this == 0) {
    return;
  }
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2] + 16.0;
  this_00 = (void *)((int)this + 0x28);
  iVar3 = FUN_5004bbf0(this_00,&local_24);
  if (iVar3 == 0) {
    param_2[7] = -NAN;
  }
  else {
    param_2[7] = *(float *)(iVar3 + 0x10);
  }
  param_2[1] = local_20;
  fVar1 = param_2[7];
  *param_2 = local_24;
  param_2[2] = local_1c;
  if (-1 < (int)fVar1) {
    iVar3 = (int)fVar1 >> 4;
    bVar6 = (SUB41(fVar1,0) + (char)iVar3 * -0x10) * '\x02';
    uVar2 = *(uint *)(*(int *)((int)this + 0x40) + iVar3 * 4);
    puVar7 = (uint *)(*(int *)((int)this + 0x40) + iVar3 * 4);
    uVar4 = (int)uVar2 >> (bVar6 & 0x1f) & 3;
    if (uVar4 == 0) {
      *puVar7 = ~(0 << (bVar6 & 0x1f)) & uVar2;
      puVar7 = (uint *)(*(int *)((int)this + 0x40) + iVar3 * 4);
      iVar3 = 1;
    }
    else {
      *puVar7 = ~(uVar4 << (bVar6 & 0x1f)) & uVar2;
      puVar7 = (uint *)(*(int *)((int)this + 0x40) + iVar3 * 4);
      iVar3 = 2;
    }
    *puVar7 = *puVar7 | iVar3 << (bVar6 & 0x1f);
  }
  local_10 = local_1c;
  local_18 = local_24;
  local_14 = local_20;
  if (param_2[7] == -NAN) {
    local_c = local_24 - 16.0;
    local_4 = local_1c;
    local_8 = local_20 - 16.0;
    iVar3 = FUN_5004bbf0(this_00,&local_c);
    if (iVar3 != 0) {
      param_2[7] = *(float *)(iVar3 + 0x10);
    }
    if (param_2[7] == -NAN) {
      local_18 = local_24 + 32.0;
      iVar3 = FUN_5004bbf0(this_00,&local_18);
      if (iVar3 != 0) {
        param_2[7] = *(float *)(iVar3 + 0x10);
      }
      if (param_2[7] == -NAN) {
        local_14 = local_20 + 32.0;
        iVar3 = FUN_5004bbf0(this_00,&local_18);
        if (iVar3 != 0) {
          param_2[7] = *(float *)(iVar3 + 0x10);
        }
        if (param_2[7] == -NAN) {
          local_18 = local_18 - 32.0;
          iVar3 = FUN_5004bbf0(this_00,&local_18);
          if (iVar3 != 0) {
            param_2[7] = *(float *)(iVar3 + 0x10);
          }
        }
      }
    }
  }
  if (param_2[7] != -NAN) {
    iVar3 = *(int *)((int)this + 0x2c) + (int)param_2[7] * 0x38;
    if (iVar3 != 0) {
      fVar5 = (float)(int)*(short *)(iVar3 + 0x14);
      fVar1 = param_2[6];
      param_2[6] = fVar5;
      if (fVar1 != fVar5) {
        param_2[0xd] = param_2[0xc];
        param_2[0xc] = param_2[0xb];
        param_2[0xb] = fVar1;
      }
      goto LAB_5004c943;
    }
    param_2[7] = -NAN;
  }
  param_2[6] = 0.0;
LAB_5004c943:
  fVar1 = param_2[7];
  param_2[0x13] = fVar1;
  param_2[0x12] = fVar1;
  param_2[0x11] = fVar1;
  param_2[0x10] = fVar1;
  return;
}

