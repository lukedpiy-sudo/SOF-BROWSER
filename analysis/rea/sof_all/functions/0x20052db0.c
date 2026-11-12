// rea decompile_all
// name: FUN_20052db0
// address: 0x20052db0
// body: available
// range: 0x20052db0-0x20053041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20052db0(float *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float local_c;
  float local_8;
  
  if ((DAT_20390288 != 0) && (ABS(DAT_20390234) < 200.0 != (ABS(DAT_20390234) == 200.0))) {
    if ((*(float *)(DAT_20390290 + 0xbc) < -15.0 == (*(float *)(DAT_20390290 + 0xbc) == -15.0)) ||
       (*(short *)(DAT_20390290 + 0x26) < 1)) {
      if ((*(float *)(DAT_20390290 + 0xbc) < 15.0) || (*(short *)(DAT_20390290 + 0x26) < 1)) {
        if (*(short *)(DAT_20390290 + 0x2a) < 1) {
          if (*(short *)(DAT_20390290 + 0x2a) < 0) {
            param_1[2] = -200.0;
          }
          else {
            param_1[2] = 0.0;
          }
        }
        else {
          param_1[2] = 200.0;
        }
      }
      else {
        param_1[2] = -200.0;
      }
    }
    else {
      param_1[2] = 200.0;
    }
    if (-25.0 <= *param_1) {
      if (25.0 < *param_1) {
        *param_1 = 25.0;
      }
    }
    else {
      *param_1 = -25.0;
    }
    if (-25.0 <= param_1[1]) {
      if (25.0 < param_1[1]) {
        param_1[1] = 25.0;
      }
    }
    else {
      param_1[1] = -25.0;
    }
  }
  uVar1 = *(uint *)(DAT_20390290 + 0xe8);
  if ((uVar1 & 0xfc0000) != 0) {
    fVar2 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
    if ((uVar1 & 0x40000) != 0) {
      local_c = 1.0;
    }
    if ((uVar1 & 0x80000) != 0) {
      local_8 = 1.0;
    }
    if ((uVar1 & 0x100000) != 0) {
      local_c = local_c - 1.0;
    }
    if ((uVar1 & 0x200000) != 0) {
      local_8 = local_8 - 1.0;
    }
    if ((uVar1 & 0x400000) != 0) {
      fVar2 = 1.0;
    }
    if ((uVar1 & 0x800000) != 0) {
      fVar2 = fVar2 - 1.0;
    }
    fVar3 = _DAT_20137610;
    if ((*(int *)(DAT_20390290 + 0xec) == 1) && (*(int *)(DAT_20390290 + 0xe4) != 0)) {
      fVar3 = _DAT_20137610 * 0.5;
    }
    *param_1 = local_c * fVar3 + *param_1;
    param_1[1] = local_8 * fVar3 + param_1[1];
    param_1[2] = fVar3 * fVar2 + param_1[2];
  }
  if (*(int *)(DAT_20390290 + 0xe4) != 0) {
    local_c = 0.0;
    local_8 = 0.0;
    if ((DAT_20390278 & 0x40000) != 0) {
      local_c = 1.0;
    }
    if ((DAT_20390278 & 0x80000) != 0) {
      local_8 = 1.0;
    }
    if ((DAT_20390278 & 0x100000) != 0) {
      local_c = local_c - 1.0;
    }
    if ((DAT_20390278 & 0x200000) != 0) {
      local_8 = local_8 - 1.0;
    }
    fVar2 = 0.0;
    if ((DAT_20390278 & 0x400000) != 0) {
      fVar2 = 1.0;
    }
    if ((DAT_20390278 & 0x800000) != 0) {
      fVar2 = fVar2 - 1.0;
    }
    *param_1 = local_c * 100.0 + *param_1;
    param_1[1] = local_8 * 100.0 + param_1[1];
    param_1[2] = fVar2 * 100.0 + param_1[2];
  }
  return;
}

