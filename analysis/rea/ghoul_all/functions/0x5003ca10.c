// rea decompile_all
// name: FUN_5003ca10
// address: 0x5003ca10
// body: available
// range: 0x5003ca10-0x5003cc07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003ca10(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  fVar6 = param_2;
  if ((*(char *)((int)this + 0x54) == '\0') || (1.0 <= DAT_5015ccdc - *(float *)((int)this + 0x5c)))
  {
    fVar8 = (float10)*(float *)((int)param_2 + 0x14) * (float10)0.017453292519943295;
    local_18 = param_1[1];
    fVar5 = param_1[2];
    local_4 = 0.0;
    fVar9 = (float10)fcos(fVar8);
    local_c = (float)fVar9;
    fVar8 = (float10)fsin(fVar8);
    local_8 = (float)fVar8;
    local_14 = *param_1 * -1.0;
    if ((*(char *)((int)this + 0x54) != '\0') || (DAT_5015ccdc - *(float *)((int)this + 0x28) < 1.0)
       ) {
      fVar8 = (float10)(*DAT_5015cb20)(0xbf800000,0x3f800000);
      param_2 = (float)(fVar8 * fVar8 * fVar8 * fVar8);
      uVar7 = FUN_50107636();
      if (((uVar7 & 3) == 0) && (DAT_5015ccdc - *(float *)((int)this + 0x28) < 1.0)) {
        local_c = *(float *)((int)this + 0x2c);
        local_8 = *(float *)((int)this + 0x30);
        local_4 = *(float *)((int)this + 0x34);
      }
    }
    else {
      fVar8 = (float10)(*DAT_5015cb20)(0,0x40000000);
      param_2 = (float)((float10)1.0 - fVar8);
    }
    fVar1 = local_18 * local_c + local_14 * local_8 + fVar5 * local_4;
    if (fVar1 < param_2 != (fVar1 == param_2)) {
      local_18 = local_18 * -1.0;
      local_14 = local_14 * -1.0;
    }
    fVar8 = FUN_500fe130((float *)(*(int *)((int)fVar6 + 0x450) + 4));
    fVar8 = fVar8 + (float10)30.0;
    fVar9 = FUN_500fe130((float *)(*(int *)((int)fVar6 + 0x450) + 4));
    fVar9 = (fVar9 + (float10)30.0) * (float10)0.5;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = *(float *)((int)fVar6 + 8);
    fVar4 = *(float *)((int)fVar6 + 0xc);
    *(float *)((int)this + 0x38) =
         (float)((float10)local_18 * fVar8) + *(float *)((int)fVar6 + 4) +
         (float)(fVar9 * (float10)*param_1);
    *(float *)((int)this + 0x40) =
         (float)(fVar9 * (float10)fVar2 + (float10)((float)(fVar8 * (float10)fVar5) + fVar4));
    *(float *)((int)this + 0x3c) =
         (float)(fVar9 * (float10)fVar1) + (float)((float10)local_14 * fVar8) + fVar3;
    *(undefined1 *)((int)this + 0x54) = 1;
    *(float *)((int)this + 0x5c) = DAT_5015ccdc;
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return;
}

