// rea decompile_all
// name: FUN_20004b20
// address: 0x20004b20
// body: available
// range: 0x20004b20-0x20005231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20004b20(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float local_10;
  int local_8;
  
  puVar4 = param_1;
  for (iVar7 = 6; iVar3 = DAT_2015ed64, local_8 = DAT_2015ec34, iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  if ((DAT_2015ec50 & 1) == 0) {
    param_1 = (undefined4 *)DAT_201c1f10;
  }
  else {
    param_1 = (undefined4 *)(DAT_201c1f10 * *(float *)(DAT_2015ee10 + 0x18));
  }
  DAT_2015ed68 = DAT_2015ed68 & 1;
  local_10 = (float)DAT_2015ed64;
  DAT_2015ed64 = 0;
  if (DAT_2015ed68 != 0) {
    local_10 = (float)(iVar3 + (DAT_20403528 - DAT_2015ed60));
    DAT_2015ed60 = DAT_20403528;
  }
  local_10 = (float)(int)local_10 / (float)DAT_2015ecc0;
  if (0.0 <= local_10) {
    if (1.0 < local_10) {
      local_10 = 1.0;
    }
  }
  else {
    local_10 = 0.0;
  }
  DAT_2015ec38 = DAT_2015ec38 & 1;
  DAT_2015ec34 = 0;
  if (DAT_2015ec38 != 0) {
    local_8 = local_8 + (DAT_20403528 - DAT_2015ec30);
    DAT_2015ec30 = DAT_20403528;
  }
  fVar1 = (float)local_8 / (float)DAT_2015ecc0;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  DAT_201e8fac = fVar1 * *(float *)(DAT_2015ee0c + 0x18) * (float)param_1 +
                 (DAT_201e8fac - local_10 * *(float *)(DAT_2015ee0c + 0x18) * (float)param_1);
  uVar5 = __ftol();
  *(undefined2 *)(puVar4 + 1) = uVar5;
  uVar5 = __ftol();
  *(undefined2 *)((int)puVar4 + 6) = uVar5;
  uVar5 = __ftol();
  *(undefined2 *)(puVar4 + 2) = uVar5;
  local_8 = DAT_2015ed4c;
  iVar7 = DAT_2015ed34;
  if (((DAT_2015ed3c | DAT_2015ed54) & DAT_2015ec9c & DAT_2015edb4) == 0) {
    if (((DAT_2015edb0 & 1) == 0) &&
       ((*(float *)(DAT_201e7570 + 0x18) == 0.0 || ((DAT_2015ee24 & 1) == 0)))) {
      DAT_2015ed50 = DAT_2015ed50 & 1;
      DAT_2015ed4c = 0;
      if (DAT_2015ed50 != 0) {
        local_8 = local_8 + (DAT_20403528 - DAT_2015ed48);
        DAT_2015ed48 = DAT_20403528;
      }
      fVar1 = (float)local_8 / (float)DAT_2015ecc0;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      DAT_2015ed38 = DAT_2015ed38 & 1;
      local_8 = DAT_2015ed34;
      DAT_2015ed34 = 0;
      if (DAT_2015ed38 != 0) {
        local_8 = iVar7 + (DAT_20403528 - DAT_2015ed30);
        DAT_2015ed30 = DAT_20403528;
      }
      fVar2 = (float)local_8 / (float)DAT_2015ecc0;
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      DAT_201e8fb0 = fVar2 * *(float *)(DAT_2015ecc4 + 0x18) * (float)param_1 +
                     (DAT_201e8fb0 - fVar1 * *(float *)(DAT_2015ecc4 + 0x18) * (float)param_1);
    }
    else {
      DAT_2015ed50 = DAT_2015ed50 & 1;
      DAT_2015ed4c = 0;
      if (DAT_2015ed50 != 0) {
        DAT_2015ed48 = DAT_20403528;
      }
      uVar5 = __ftol();
      *(undefined2 *)(puVar4 + 3) = uVar5;
      DAT_2015ed38 = DAT_2015ed38 & 1;
      DAT_2015ed34 = 0;
      if (DAT_2015ed38 != 0) {
        DAT_2015ed30 = DAT_20403528;
      }
      uVar5 = __ftol();
      *(undefined2 *)(puVar4 + 3) = uVar5;
    }
    if (((byte)DAT_2015ec98 & 1) == 0) {
      DAT_2015edc8 = DAT_2015edc8 & 1;
      DAT_2015edc4 = 0;
      if (DAT_2015edc8 != 0) {
        DAT_2015edc0 = DAT_20403528;
      }
      uVar5 = __ftol();
      *(undefined2 *)(puVar4 + 3) = uVar5;
      DAT_2015ed80 = DAT_2015ed80 & 1;
      DAT_2015ed7c = 0;
      if (DAT_2015ed80 != 0) {
        DAT_2015ed78 = DAT_20403528;
      }
      uVar5 = __ftol();
      *(undefined2 *)(puVar4 + 3) = uVar5;
    }
  }
  DAT_2015ec80 = DAT_2015ec80 & 1;
  DAT_2015ec7c = 0;
  if (DAT_2015ec80 != 0) {
    DAT_2015ec78 = DAT_20403528;
  }
  uVar5 = __ftol();
  *(undefined2 *)((int)puVar4 + 0xe) = uVar5;
  FUN_20004a90(&DAT_2015eca8);
  uVar5 = __ftol();
  *(undefined2 *)((int)puVar4 + 0xe) = uVar5;
  iVar7 = DAT_2015ee0c;
  if ((DAT_2015ee24 & 1) == 0) {
    FUN_20004a90(&DAT_2015ecf8);
    uVar5 = __ftol();
    *(undefined2 *)((int)puVar4 + 10) = uVar5;
    FUN_20004a90(&DAT_2015edd4);
    uVar5 = __ftol();
    *(undefined2 *)((int)puVar4 + 10) = uVar5;
  }
  else {
    fVar8 = (float10)FUN_20004a90(&DAT_2015ecf8);
    DAT_201e8fac = (float)((float10)DAT_201e8fac -
                          fVar8 * (float10)*(float *)(iVar7 + 0x18) * (float10)(float)param_1);
    fVar8 = (float10)FUN_20004a90(&DAT_2015edd4);
    DAT_201e8fac = (float)(fVar8 * (float10)*(float *)(iVar7 + 0x18) * (float10)(float)param_1 +
                          (float10)DAT_201e8fac);
  }
  uVar6 = __ftol();
  if (uVar6 != (DAT_2015ec50 & 1)) {
    *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) | 0x20;
  }
  return;
}

