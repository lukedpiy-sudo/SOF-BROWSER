// rea decompile_all
// name: FUN_2006e220
// address: 0x2006e220
// body: available
// range: 0x2006e220-0x2006e6f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006e220(uint param_1)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  float *in_ECX;
  float *pfVar5;
  float fVar6;
  void *pvVar7;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_1c;
  ushort local_14 [2];
  float *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_20072620(in_ECX[0xe],in_ECX[0xf]);
  *(undefined1 *)(in_ECX + 0xc) = 1;
  *(undefined1 *)((int)in_ECX + 0x31) = 0;
  pfVar5 = *(float **)(param_1 + 4);
  if (pfVar5 != *(float **)(param_1 + 8)) {
    do {
      local_4 = pfVar5[3];
      local_c = *pfVar5 - local_4;
      local_8 = pfVar5[1] - local_4;
      local_4 = pfVar5[2] - local_4;
      FUN_20067780();
      local_4 = pfVar5[3];
      local_c = *pfVar5 + local_4;
      local_8 = pfVar5[1] + local_4;
      local_4 = pfVar5[2] + local_4;
      FUN_20067780();
      pfVar5 = pfVar5 + 7;
    } while (pfVar5 != *(float **)(param_1 + 8));
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    in_ECX[3] = in_ECX[6];
    in_ECX[4] = in_ECX[7];
    in_ECX[5] = in_ECX[8];
    local_c = in_ECX[9] - in_ECX[3];
    local_8 = in_ECX[10] - in_ECX[4];
    local_4 = in_ECX[0xb] - in_ECX[5];
    if (local_c < 10000.0) {
      local_c = 10000.0;
    }
    if (local_8 < 10000.0) {
      local_8 = 10000.0;
    }
    if (local_4 < 10000.0) {
      local_4 = 10000.0;
    }
    local_4 = 1.0 / local_4;
    *in_ECX = 1.0 / local_c;
    in_ECX[2] = local_4;
    in_ECX[1] = 1.0 / local_8;
    pfVar5 = *(float **)(param_1 + 4);
    if (pfVar5 != *(float **)(param_1 + 8)) {
      do {
        fVar6 = pfVar5[3];
        local_c = (*pfVar5 - fVar6) - in_ECX[3];
        local_8 = ((pfVar5[1] - fVar6) - in_ECX[4]) * in_ECX[1];
        local_4 = ((pfVar5[2] - fVar6) - in_ECX[5]) * in_ECX[2];
        FUN_200fc6f3((double)(local_c * *in_ECX * 32.0));
        local_1c = __ftol();
        FUN_200fc6f3((double)(local_8 * 32.0));
        local_2c = __ftol();
        FUN_200fc6f3((double)(local_4 * 32.0));
        local_28 = __ftol();
        if (local_1c < 0) {
          local_1c = 0;
        }
        else if (0x1f < local_1c) {
          local_1c = 0x1f;
        }
        if ((int)local_2c < 0) {
          local_2c = 0;
        }
        else if (0x1f < (int)local_2c) {
          local_2c = 0x1f;
        }
        if (local_28 < 0) {
          local_28 = 0;
        }
        else if (0x1f < local_28) {
          local_28 = 0x1f;
        }
        fVar6 = pfVar5[3];
        local_c = (fVar6 + *pfVar5) - in_ECX[3];
        local_8 = ((pfVar5[1] + fVar6) - in_ECX[4]) * in_ECX[1];
        local_4 = ((pfVar5[2] + fVar6) - in_ECX[5]) * in_ECX[2];
        FUN_200fc6f3((double)(local_c * *in_ECX * 32.0));
        local_30 = __ftol();
        FUN_200fc6f3((double)(local_8 * 32.0));
        local_34 = __ftol();
        FUN_200fc6f3((double)(local_4 * 32.0));
        local_38 = __ftol();
        if (local_30 < 0) {
          local_30 = 0;
        }
        else if (0x1f < local_30) {
          local_30 = 0x1f;
        }
        if (local_34 < 0) {
          local_34 = 0;
        }
        else if (0x1f < local_34) {
          local_34 = 0x1f;
        }
        if (local_38 < 0) {
          local_38 = 0;
        }
        else if (0x1f < local_38) {
          local_38 = 0x1f;
        }
        for (; uVar2 = local_2c, local_1c <= local_30; local_1c = local_1c + 1) {
          for (; iVar4 = local_28, (int)uVar2 <= local_34; uVar2 = uVar2 + 1) {
            for (; iVar4 <= local_38; iVar4 = iVar4 + 1) {
              local_14[0] = (ushort)((iVar4 << 5 | uVar2) << 6) | (ushort)local_1c;
              local_10 = pfVar5;
              FUN_20074200(in_ECX[0xf],1,local_14);
            }
          }
        }
        pfVar5 = pfVar5 + 7;
      } while (pfVar5 != *(float **)(param_1 + 8));
    }
    if (in_ECX[0xe] == 0.0) {
      param_1 = 0;
    }
    else {
      param_1 = (int)in_ECX[0xf] - (int)in_ECX[0xe] >> 3;
    }
    if (in_ECX[0xe] == 0.0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)in_ECX[0x10] - (int)in_ECX[0xe] >> 3;
    }
    if (uVar2 < param_1) {
      uVar2 = param_1;
      if ((int)param_1 < 0) {
        uVar2 = 0;
      }
      pvVar3 = operator_new(uVar2 * 8);
      fVar1 = in_ECX[0xf];
      pvVar7 = pvVar3;
      for (fVar6 = in_ECX[0xe]; fVar6 != fVar1; fVar6 = (float)((int)fVar6 + 8)) {
        FUN_2008e4b0(pvVar7,fVar6);
        pvVar7 = (void *)((int)pvVar7 + 8);
      }
      FUN_200f9f75();
      in_ECX[0x10] = (float)((int)pvVar3 + param_1 * 8);
      iVar4 = FUN_2008ca10();
      in_ECX[0xe] = (float)pvVar3;
      in_ECX[0xf] = (float)((int)pvVar3 + iVar4 * 8);
    }
    if (in_ECX[0xe] == 0.0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)in_ECX[0xf] - (int)in_ECX[0xe] >> 3;
    }
    FUN_200fbfd9(in_ECX[0xe],iVar4,8,&LAB_20087a30);
  }
  return;
}

