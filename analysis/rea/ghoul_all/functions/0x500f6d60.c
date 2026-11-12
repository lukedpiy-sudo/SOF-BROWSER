// rea decompile_all
// name: FUN_500f6d60
// address: 0x500f6d60
// body: available
// range: 0x500f6d60-0x500f70cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f6d60(float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  float unaff_EBX;
  float unaff_ESI;
  undefined4 unaff_EDI;
  float in_stack_ffffffe0;
  float fVar6;
  float fVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = param_1;
  iVar1 = *(int *)((int)param_1 + 0x74);
  FUN_500c3e40(param_1,unaff_EDI,unaff_ESI,unaff_EBX,in_stack_ffffffe0);
  fVar6 = (float)(*(int *)(iVar1 + 0x49c) + *(int *)(iVar1 + 0x494));
  if (fVar6 != 0.0) {
    if ((*(int *)(iVar1 + 0x544) < 3) && (*(int *)((int)param_1 + 0x20) == 0xff)) {
      *(undefined4 *)(iVar1 + 0x544) = 3;
      FUN_500fdd70((float *)(iVar1 + 0x1c),&local_18,(float *)0x0,(float *)0x0);
      local_c = *(float *)((int)param_1 + 0x24c);
      local_8 = *(undefined4 *)((int)param_1 + 0x250);
      local_4 = *(undefined4 *)((int)param_1 + 0x254);
      local_18 = local_18 * 100.0 + *(float *)((int)param_1 + 4);
      local_14 = local_14 * 100.0 + *(float *)((int)param_1 + 8);
      local_10 = local_10 * 100.0 + *(float *)((int)param_1 + 0xc);
      FUN_500fe050(&local_c);
    }
    if ((*(float *)((int)param_1 + 0x2dc) < DAT_5015ccdc) &&
       ((*(byte *)((int)param_1 + 0x1a0) & 0x10) == 0)) {
      FUN_50107636();
      *(float *)((int)param_1 + 0x2dc) = DAT_5015ccdc + 0.7;
    }
    fVar7 = fVar6;
    if (fVar6 < 10.0) {
      fVar7 = 10.0;
    }
    if (*(float *)(iVar1 + 0x4dc) < 0.0) {
      *(undefined4 *)(iVar1 + 0x4dc) = 0;
    }
    fVar2 = fVar7 * 0.01 + *(float *)(iVar1 + 0x4dc);
    *(float *)(iVar1 + 0x4dc) = fVar2;
    if (fVar2 < 0.2) {
      *(undefined4 *)(iVar1 + 0x4dc) = 0x3e4ccccd;
    }
    if (0.6 < *(float *)(iVar1 + 0x4dc)) {
      *(undefined4 *)(iVar1 + 0x4dc) = 0x3f19999a;
    }
    if (*(int *)(iVar1 + 0x494) != 0) {
      fVar6 = (float)*(int *)(iVar1 + 0x494) / fVar6;
      *(float *)(iVar1 + 0x4f0) = _DAT_50154670 * fVar6;
      *(float *)(iVar1 + 0x4f4) = _DAT_50154674 * fVar6;
      *(float *)(iVar1 + 0x4f8) = _DAT_50154678 * fVar6;
    }
    uVar5 = (int)*(uint *)(iVar1 + 0x498) >> 0x1f;
    fVar6 = (float)(int)((*(uint *)(iVar1 + 0x498) ^ uVar5) - uVar5);
    if ((fVar6 != 0.0) && (0 < *(int *)((int)param_1 + 0x2ec))) {
      param_1 = (fVar6 * 100.0) / (float)*(int *)((int)param_1 + 0x2ec);
      if (param_1 < fVar7 * 0.5) {
        param_1 = fVar7 * 0.5;
      }
      if (50.0 < param_1) {
        param_1 = 50.0;
      }
      local_18 = *(float *)(iVar1 + 0x4a0) - *(float *)((int)fVar3 + 4);
      local_14 = *(float *)(iVar1 + 0x4a4) - *(float *)((int)fVar3 + 8);
      local_10 = *(float *)(iVar1 + 0x4a8) - *(float *)((int)fVar3 + 0xc);
      FUN_500fe050(&local_18);
      *(float *)(iVar1 + 0x4c8) =
           (_DAT_5018b428 * local_18 + local_14 * _DAT_5018b42c + local_10 * _DAT_5018b430) *
           param_1 * -0.35;
      *(float *)(iVar1 + 0x4cc) =
           -(_DAT_5018b3f4 * local_18 + local_14 * _DAT_5018b3f8 + local_10 * _DAT_5018b3fc) *
           param_1 * 0.35;
      *(float *)(iVar1 + 0x4d0) = DAT_5015ccdc + 0.5;
    }
    *(undefined4 *)(iVar1 + 0x494) = 0;
    *(undefined4 *)(iVar1 + 0x498) = 0;
    *(undefined4 *)(iVar1 + 0x49c) = 0;
    if ((*(uint *)((int)fVar3 + 0x1a0) & 0x2000) != 0) {
      *(uint *)((int)fVar3 + 0x1a0) = *(uint *)((int)fVar3 + 0x1a0) - 0x2000;
    }
    if ((*(uint *)((int)fVar3 + 0x1a0) & 0x4000) != 0) {
      *(uint *)((int)fVar3 + 0x1a0) = *(uint *)((int)fVar3 + 0x1a0) - 0x4000;
    }
    if (-1 < *(int *)(iVar1 + 100)) {
      piVar4 = (int *)0x0;
      do {
        piVar4 = (int *)FUN_500c26a0((int)piVar4,0x1b4,s_func_remote_camera_50147b18,(void *)0x0);
        if (piVar4 == (int *)0x0) {
          return;
        }
      } while (*piVar4 != *(int *)(iVar1 + 100));
      FUN_50094690(piVar4);
    }
  }
  return;
}

