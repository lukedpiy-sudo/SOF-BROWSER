// rea decompile_all
// name: FUN_500b2c20
// address: 0x500b2c20
// body: available
// range: 0x500b2c20-0x500b2ebd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b2c20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  longlong lVar8;
  
  fVar1 = *(float *)(param_1 + 0x120);
  fVar2 = *(float *)(param_1 + 0x124);
  fVar3 = *(float *)(param_1 + 0x128);
  fVar4 = *(float *)(param_1 + 300);
  fVar5 = *(float *)(param_1 + 0x130);
  lVar8 = __ftol();
  iVar6 = (int)lVar8;
  if (iVar6 == 0x5a) {
    *(float *)(param_1 + 0x11c) = fVar2;
    *(float *)(param_1 + 0x128) = fVar5;
    *(float *)(param_1 + 0x124) = fVar3 * -1.0;
    fVar7 = (float10)-1.0 * extraout_ST0;
  }
  else {
    if (iVar6 != 0xb4) {
      if (iVar6 == 0x10e) {
        *(float *)(param_1 + 0x130) = fVar3;
        *(float *)(param_1 + 0x11c) = fVar5 * -1.0;
        *(float *)(param_1 + 0x124) = (float)extraout_ST0;
        *(float *)(param_1 + 0x128) = fVar2 * -1.0;
      }
      goto LAB_500b2d27;
    }
    *(float *)(param_1 + 0x11c) = fVar3 * -1.0;
    *(float *)(param_1 + 0x124) = fVar5 * -1.0;
    *(float *)(param_1 + 0x128) = (float)((float10)-1.0 * extraout_ST0);
    fVar7 = (float10)fVar2 * (float10)-1.0;
  }
  *(float *)(param_1 + 0x130) = (float)fVar7;
LAB_500b2d27:
  lVar8 = __ftol();
  iVar6 = (int)lVar8;
  if (iVar6 == 0x5a) {
    *(float *)(param_1 + 300) = fVar3;
    *(float *)(param_1 + 0x11c) = fVar4 * -1.0;
    *(float *)(param_1 + 0x120) = (float)extraout_ST0_00;
    *(float *)(param_1 + 0x128) = fVar1 * -1.0;
  }
  else if (iVar6 == 0xb4) {
    *(float *)(param_1 + 0x11c) = fVar3 * -1.0;
    *(float *)(param_1 + 0x120) = fVar4 * -1.0;
    *(float *)(param_1 + 0x128) = (float)(extraout_ST0_00 * (float10)-1.0);
    *(float *)(param_1 + 300) = fVar1 * -1.0;
  }
  else if (iVar6 == 0x10e) {
    *(float *)(param_1 + 0x11c) = fVar1;
    *(float *)(param_1 + 0x128) = fVar4;
    *(float *)(param_1 + 0x120) = fVar3 * -1.0;
    *(float *)(param_1 + 300) = (float)(extraout_ST0_00 * (float10)-1.0);
  }
  lVar8 = __ftol();
  iVar6 = (int)lVar8;
  if (iVar6 == 0x5a) {
    *(float *)(param_1 + 0x124) = fVar1;
    *(float *)(param_1 + 0x130) = fVar4;
    *(float *)(param_1 + 0x120) = fVar5 * -1.0;
    *(float *)(param_1 + 300) = fVar2 * -1.0;
  }
  else {
    if (iVar6 == 0xb4) {
      *(float *)(param_1 + 0x120) = fVar4 * -1.0;
      *(float *)(param_1 + 0x124) = fVar5 * -1.0;
      *(float *)(param_1 + 300) = fVar1 * -1.0;
      *(float *)(param_1 + 0x130) = fVar2 * -1.0;
      return;
    }
    if (iVar6 == 0x10e) {
      *(float *)(param_1 + 0x120) = fVar2;
      *(float *)(param_1 + 300) = fVar5;
      *(float *)(param_1 + 0x124) = fVar4 * -1.0;
      *(float *)(param_1 + 0x130) = fVar1 * -1.0;
      return;
    }
  }
  return;
}

