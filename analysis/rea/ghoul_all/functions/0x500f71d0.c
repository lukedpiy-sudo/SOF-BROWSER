// rea decompile_all
// name: FUN_500f71d0
// address: 0x500f71d0
// body: available
// range: 0x500f71d0-0x500f7428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f71d0(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_20;
  float local_18 [3];
  float local_c [3];
  
  fVar4 = param_1;
  if (param_1 != 0.0) {
    fVar2 = *(float *)((int)param_1 + 0x340);
    fVar1 = param_1;
    while ((fVar5 = fVar2, fVar5 != 0.0 && (fVar5 != param_1))) {
      if ((*(uint *)((int)fVar5 + 0x1a0) & 0x200000) != 0) {
        iVar6 = *(int *)((int)fVar1 + 0x340);
        goto LAB_500f7208;
      }
      fVar1 = fVar5;
      fVar2 = *(float *)((int)fVar5 + 0x340);
    }
  }
  iVar6 = 0;
LAB_500f7208:
  param_1 = 15.0;
  local_4c = 42.0;
  if (iVar6 != 0) {
    iVar3 = *(int *)((int)fVar4 + 0x74);
    local_48 = *(float *)(iVar3 + 0x1c);
    local_44 = *(undefined4 *)(iVar3 + 0x20);
    local_40 = *(undefined4 *)(iVar3 + 0x24);
    if ((*(byte *)(iVar3 + 0x10) & 1) == 0) {
      if (local_48 <= 28.0) {
        if (local_48 < -50.0) {
          local_48 = -50.0;
        }
      }
      else {
        local_48 = 28.0;
      }
    }
    else {
      param_1 = -1.0;
      local_4c = 26.0;
      if (local_48 <= 28.0) {
        if (local_48 < -5.0) {
          local_48 = -5.0;
        }
      }
      else {
        local_48 = 28.0;
      }
    }
    FUN_500fdd70(&local_48,&local_3c,local_c,local_18);
    fVar1 = *(float *)((int)fVar4 + 4);
    fVar2 = *(float *)((int)fVar4 + 8);
    local_28 = *(float *)((int)fVar4 + 0xc);
    *(float *)(iVar6 + 4) = fVar1;
    *(float *)(iVar6 + 0xc) = local_28;
    *(float *)(iVar6 + 8) = fVar2;
    fVar4 = local_3c * 48.0 + fVar1;
    local_20 = local_38 * 48.0 + fVar2;
    fVar5 = local_34 * 48.0 + local_28;
    if (local_34 <= 0.0) {
      *(float *)(iVar6 + 0x124) = fVar5;
      fVar5 = local_28 + local_4c;
    }
    else {
      *(float *)(iVar6 + 0x124) = local_28 + param_1;
      fVar5 = fVar5 + 32.0;
    }
    *(float *)(iVar6 + 0x130) = fVar5;
    if (local_3c <= 0.0) {
      *(float *)(iVar6 + 0x11c) = fVar4;
      *(float *)(iVar6 + 0x128) = fVar1;
    }
    else {
      *(float *)(iVar6 + 0x128) = fVar4;
      *(float *)(iVar6 + 0x11c) = fVar1;
    }
    if (local_38 <= 0.0) {
      *(float *)(iVar6 + 300) = fVar2;
      *(float *)(iVar6 + 0x120) = local_20;
    }
    else {
      *(float *)(iVar6 + 0x120) = fVar2;
      *(float *)(iVar6 + 300) = local_20;
    }
    *(float *)(iVar6 + 0x128) = *(float *)(iVar6 + 0x128) - fVar1;
    *(float *)(iVar6 + 300) = *(float *)(iVar6 + 300) - fVar2;
    *(float *)(iVar6 + 0x130) = *(float *)(iVar6 + 0x130) - local_28;
    *(float *)(iVar6 + 0x11c) = *(float *)(iVar6 + 0x11c) - fVar1;
    *(float *)(iVar6 + 0x120) = *(float *)(iVar6 + 0x120) - fVar2;
    *(float *)(iVar6 + 0x124) = *(float *)(iVar6 + 0x124) - local_28;
    (*DAT_5015cb28)(iVar6);
  }
  return;
}

