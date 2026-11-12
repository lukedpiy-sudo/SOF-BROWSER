// rea decompile_all
// name: FUN_500eb990
// address: 0x500eb990
// body: available
// range: 0x500eb990-0x500ebb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_500eb990(int *param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  float10 extraout_ST0;
  longlong lVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_4;
  
  iVar4 = (**(code **)(*param_1 + 0x228))();
  uVar5 = 0;
  if (iVar4 != 0) {
    iVar1 = param_1[0x61];
    fStack_4 = *(float *)(iVar4 + 0x4c);
    fStack_24 = *(float *)(iVar4 + 0x44) - *(float *)(iVar1 + 4);
    fStack_20 = *(float *)(iVar4 + 0x48) - *(float *)(iVar1 + 8);
    fStack_1c = fStack_4 - *(float *)(iVar1 + 0xc);
    if ((char)param_1[0xa0] != '\0') {
      fStack_24 = -fStack_24;
      fStack_20 = -fStack_20;
    }
    FUN_500c3570(&fStack_24,&fStack_18);
    iVar4 = param_1[0x61];
    if (180.0 < *(float *)(iVar4 + 0x14)) {
      *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) - 360.0;
    }
    iVar4 = param_1[0x61];
    fVar2 = fStack_14 - *(float *)(iVar4 + 0x14);
    lVar7 = __ftol();
    *(float *)(iVar4 + 0x14) = (float)((uint)lVar7 & 0xffff) * 0.005493164;
    if (ABS(fVar2) < 1.5) {
      *(float *)(param_1[0x61] + 0x14) = fStack_14;
      iVar4 = param_1[0x61];
      *(undefined4 *)(iVar4 + 0x25c) = 0;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    lVar7 = __ftol();
    dVar3 = (double)((uint)lVar7 & 0xffff) * 0.0054931640625;
    uVar6 = (ushort)(dVar3 < 180.0) << 8 | (ushort)NAN(dVar3) << 10 |
            (ushort)(dVar3 == 180.0) << 0xe;
    uVar5 = (uint)uVar6;
    if (dVar3 < 180.0) {
      *(float *)(param_1[0x61] + 0x25c) = (float)extraout_ST0;
      return (uint)(byte)(uVar6 >> 8) << 8;
    }
    *(float *)(param_1[0x61] + 0x25c) = (float)-extraout_ST0;
  }
  return uVar5;
}

