// rea decompile_all
// name: FUN_500f8d30
// address: 0x500f8d30
// body: available
// range: 0x500f8d30-0x500f8fd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f8d30(float param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float afStack_40 [2];
  int *piStack_38;
  int *piStack_34;
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  fVar1 = param_1;
  if (*(int *)((int)param_1 + 0x20) != 0xff) {
    return;
  }
  if (*(int *)((int)param_1 + 0x19c) == 1) {
    return;
  }
  iVar2 = *(int *)((int)param_1 + 0x74);
  if ((0.0 <= *(float *)(iVar2 + 0x520)) ||
     (*(float *)((int)param_1 + 0x254) <= *(float *)(iVar2 + 0x520))) {
    if (*(int *)((int)param_1 + 0x330) == 0) {
      return;
    }
  }
  else if (*(int *)((int)param_1 + 0x330) == 0) {
    fVar4 = *(float *)(iVar2 + 0x520);
    goto LAB_500f8daa;
  }
  fVar4 = *(float *)((int)param_1 + 0x254) - *(float *)(iVar2 + 0x520);
LAB_500f8daa:
  iVar2 = *(int *)((int)param_1 + 0x38c);
  param_1 = fVar4 * fVar4 * 0.0001;
  if (iVar2 != 3) {
    if (iVar2 == 2) {
      param_1 = param_1 * 0.25;
    }
    if (iVar2 == 1) {
      param_1 = param_1 * 0.5;
    }
    if (1.0 <= param_1) {
      iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
      if (iVar2 == 0) {
        iVar2 = *(int *)((int)fVar1 + 0x74);
        piStack_34 = *(int **)(iVar2 + 0x34c);
        fStack_30 = fVar1;
        uStack_2c = (*(uint *)(iVar2 + 0x47c) | *(uint *)(iVar2 + 0x484)) & 1;
        uStack_28 = (*(uint *)(iVar2 + 0x47c) | *(uint *)(iVar2 + 0x484)) & 4;
        (**(code **)(*piStack_34 + 0xf4))(&piStack_34);
        (**(code **)(*piStack_38 + 0xfc))();
      }
      iVar6 = 0;
      uVar5 = 1;
      fVar4 = fVar1;
      iVar2 = (*DAT_5015c9f8)(&DAT_50146f5c);
      FUN_50085340(&DAT_5015c518,iVar2,(int)fVar4,uVar5,iVar6);
      if (15.0 <= param_1) {
        *(float *)(*(int *)((int)fVar1 + 0x74) + 0x4d8) = param_1 * 0.5;
        if (40.0 < *(float *)(*(int *)((int)fVar1 + 0x74) + 0x4d8)) {
          *(undefined4 *)(*(int *)((int)fVar1 + 0x74) + 0x4d8) = 0x42200000;
        }
        *(float *)(*(int *)((int)fVar1 + 0x74) + 0x4d4) = DAT_5015ccdc + 0.3;
        if (12.0 < param_1) {
          if (0 < *(int *)((int)fVar1 + 0x2ec)) {
            if (param_1 < 55.0) {
              uVar5 = 8;
            }
            else {
              uVar5 = 9;
            }
            FUN_50083bb0((int)fVar1,uVar5);
          }
          *(float *)((int)fVar1 + 0x2dc) = DAT_5015ccdc;
          lVar3 = __ftol();
          iVar2 = (int)lVar3;
          if (iVar2 < 1) {
            return;
          }
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          afStack_40[0] = 0.0;
          afStack_40[1] = 0.0;
          piStack_38 = (int *)0x3f800000;
          iVar6 = (**(code **)(*DAT_5015c4d8 + 4))();
          if (((iVar6 != 0) && (iVar6 = (**(code **)(*DAT_5015c4d8 + 0x4c))(), iVar6 == 0)) &&
             (iVar6 = (**(code **)(*DAT_5015c4d8 + 0x48))(), iVar6 != 0)) {
            return;
          }
          FUN_5008bb10(fVar1,DAT_5015cca0,(float)DAT_5015cca0,afStack_40,(float *)((int)fVar1 + 4),
                       (float *)((int)fVar1 + 4),iVar2,0,0x2002,0x18,0,0);
          return;
        }
      }
      FUN_50083bb0((int)fVar1,7);
    }
  }
  return;
}

