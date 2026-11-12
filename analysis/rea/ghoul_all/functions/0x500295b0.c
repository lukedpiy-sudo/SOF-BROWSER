// rea decompile_all
// name: FUN_500295b0
// address: 0x500295b0
// body: available
// range: 0x500295b0-0x50029baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500295b0(int param_1,float *param_2,int param_3,undefined4 *param_4,int param_5,int *param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c [9];
  undefined2 local_78;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  local_30 = *(float *)(param_1 + 0x10);
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_34 = *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0xc);
  local_ac = 10;
  local_28 = 0;
  FUN_500fdd70(&local_30,&local_24,&local_18,local_c);
  local_a8 = *(float *)(param_1 + 4) - *param_2;
  local_a4 = *(float *)(param_1 + 8) - param_2[1];
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = param_2[2];
  local_a0 = 0.0;
  FUN_500fe050(&local_a8);
  if (param_2[2] <= *(float *)(param_1 + 0xc)) {
    if ((0.0 < fVar1 - fVar2) &&
       (lVar8 = __ftol(), uVar6 = (int)(uint)lVar8 >> 0x1f,
       (int)(((uint)lVar8 ^ uVar6) - uVar6) < 10)) {
      local_ac = 4;
    }
  }
  else {
    local_ac = 6;
  }
  fVar1 = local_24 * local_a8 + local_1c * local_a0 + local_20 * local_a4;
  if (*(float *)(param_3 + 8) <= *(float *)(param_1 + 0xc)) {
    local_9c[2] = 0x15;
    local_9c[1] = 0x14;
    if (0.0 <= fVar1) {
      local_9c[4] = 0x13131313;
      local_9c[0] = 0x11;
      local_9c[5] = 0x13131313;
      *param_4 = 0x10;
      local_9c[6] = 0x13131313;
      local_9c[3] = 0x13;
      local_9c[7] = 0x13131313;
      local_9c[8] = 0x13131313;
      local_78 = 0x1313;
      iVar4 = (*DAT_5015cb24)(1,4);
      if (0 < iVar4) {
        if (4 < iVar4) {
          iVar4 = 4;
        }
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = (*DAT_5015cb24)(iVar7,3);
            uVar3 = local_9c[iVar7];
            local_9c[iVar7] = local_9c[iVar5];
            local_9c[iVar5] = uVar3;
            *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
            iVar7 = iVar7 + 1;
            *param_6 = *param_6 + 1;
          } while (iVar7 < iVar4);
        }
      }
    }
    else {
      local_9c[4] = 0x12121212;
      local_9c[0] = 0x10;
      local_9c[5] = 0x12121212;
      *param_4 = 0x11;
      local_9c[6] = 0x12121212;
      local_9c[3] = 0x12;
      local_9c[7] = 0x12121212;
      local_9c[8] = 0x12121212;
      local_78 = 0x1212;
      iVar4 = (*DAT_5015cb24)();
      if (0 < iVar4) {
        if (4 < iVar4) {
          iVar4 = 4;
        }
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = (*DAT_5015cb24)(iVar7,3);
            uVar3 = local_9c[iVar7];
            local_9c[iVar7] = local_9c[iVar5];
            local_9c[iVar5] = uVar3;
            *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
            iVar7 = iVar7 + 1;
            *param_6 = *param_6 + 1;
          } while (iVar7 < iVar4);
          return;
        }
      }
    }
  }
  else if (fVar1 <= 0.707) {
    local_9c[0] = 7;
    *param_4 = 8;
    if (-0.707 <= fVar1) {
      local_9c[2] = 0xe;
      if (local_18 * local_a8 + local_10 * local_a0 + local_14 * local_a4 <= 0.0) {
        local_9c[1] = 9;
        local_9c[4] = 0x4040404;
        local_9c[3] = 4;
        local_9c[5] = 0x4040404;
        local_9c[6] = 0x4040404;
        local_9c[7] = 0x4040404;
        local_9c[8] = 0x4040404;
        local_78 = 0x404;
        iVar4 = (*DAT_5015cb24)();
        if (0 < iVar4) {
          if (4 < iVar4) {
            iVar4 = 4;
          }
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              iVar5 = (*DAT_5015cb24)(iVar7,3);
              uVar3 = local_9c[iVar7];
              local_9c[iVar7] = local_9c[iVar5];
              local_9c[iVar5] = uVar3;
              *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
              iVar7 = iVar7 + 1;
              *param_6 = *param_6 + 1;
            } while (iVar7 < iVar4);
          }
        }
      }
      else {
        local_9c[1] = 10;
        local_9c[4] = 0x6060606;
        local_9c[3] = 6;
        local_9c[5] = 0x6060606;
        local_9c[6] = 0x6060606;
        local_9c[7] = 0x6060606;
        local_9c[8] = 0x6060606;
        local_78 = 0x606;
        iVar4 = (*DAT_5015cb24)();
        if (0 < iVar4) {
          if (4 < iVar4) {
            iVar4 = 4;
          }
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              iVar5 = (*DAT_5015cb24)(iVar7,3);
              uVar3 = local_9c[iVar7];
              local_9c[iVar7] = local_9c[iVar5];
              local_9c[iVar5] = uVar3;
              *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
              iVar7 = iVar7 + 1;
              *param_6 = *param_6 + 1;
            } while (iVar7 < iVar4);
          }
        }
      }
    }
    else {
      local_9c[1] = 5;
      local_9c[4] = 0xd0d0d0d;
      local_9c[2] = 3;
      local_9c[5] = 0xd0d0d0d;
      local_9c[3] = 0xd;
      local_9c[6] = 0xd0d0d0d;
      local_9c[7] = 0xd0d0d0d;
      local_9c[8] = 0xd0d0d0d;
      local_78 = 0xd0d;
      iVar4 = (*DAT_5015cb24)();
      if (0 < iVar4) {
        if (4 < iVar4) {
          iVar4 = 4;
        }
        iVar7 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = (*DAT_5015cb24)(iVar7,3);
            uVar3 = local_9c[iVar7];
            local_9c[iVar7] = local_9c[iVar5];
            local_9c[iVar5] = uVar3;
            *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
            iVar7 = iVar7 + 1;
            *param_6 = *param_6 + 1;
          } while (iVar7 < iVar4);
        }
      }
    }
    iVar4 = (*DAT_5015cb24)(0,local_ac);
    if (iVar4 == 0) {
      *(undefined4 *)(param_5 + *param_6 * 4) = 0;
      *param_6 = *param_6 + 1;
      return;
    }
  }
  else {
    *param_4 = 7;
    local_9c[4] = 0xe0e0e0e;
    local_9c[0] = 8;
    local_9c[5] = 0xe0e0e0e;
    local_9c[1] = 6;
    local_9c[6] = 0xe0e0e0e;
    local_9c[2] = 4;
    local_9c[7] = 0xe0e0e0e;
    local_9c[3] = 0xe;
    local_9c[8] = 0xe0e0e0e;
    local_78 = 0xe0e;
    iVar4 = (*DAT_5015cb24)();
    if (0 < iVar4) {
      if (4 < iVar4) {
        iVar4 = 4;
      }
      iVar7 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = (*DAT_5015cb24)(iVar7,3);
          uVar3 = local_9c[iVar7];
          local_9c[iVar7] = local_9c[iVar5];
          local_9c[iVar5] = uVar3;
          *(undefined4 *)(param_5 + *param_6 * 4) = local_9c[iVar7];
          iVar7 = iVar7 + 1;
          *param_6 = *param_6 + 1;
        } while (iVar7 < iVar4);
      }
    }
    iVar4 = (*DAT_5015cb24)(0,local_ac);
    if (iVar4 == 0) {
      *(undefined4 *)(param_5 + *param_6 * 4) = 1;
      *param_6 = *param_6 + 1;
      return;
    }
  }
  return;
}

