// rea decompile_all
// name: FUN_50054c00
// address: 0x50054c00
// body: available
// range: 0x50054c00-0x50054e74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong __fastcall FUN_50054c00(undefined4 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined2 extraout_var;
  uint uVar7;
  int extraout_EDX;
  float10 fVar8;
  float10 fVar9;
  longlong lVar10;
  int iVar11;
  
  iVar6 = param_3;
  if ((*(int *)(*(int *)(param_3 + 0x45c) + 0x30) == 0) &&
     (*(float *)(*(int *)(param_3 + 0x45c) + 0x3b0) < DAT_5015ccdc)) {
    fVar8 = (float10)(*DAT_5015cb20)(0x42960000,0x42c80000);
    *(float *)(*(int *)(param_3 + 0x45c) + 0x3b0) = (float)(fVar8 + (float10)DAT_5015ccdc);
    FUN_50053690(param_3);
    param_2 = extraout_EDX;
  }
  iVar2 = *(int *)(param_3 + 0x45c);
  if (((*(int *)(iVar2 + 0x30) != 0) && (DAT_5015ccdc < *(float *)(iVar2 + 0x294))) &&
     (param_2 = *(int *)(iVar2 + 0x400), 2 < *(int *)(param_2 + 0x210))) {
    *(undefined4 *)(iVar2 + 0x2a4) = 0;
    *(float *)(*(int *)(param_3 + 0x45c) + 0x294) = DAT_5015ccdc - 1.0;
  }
  uVar7 = *(uint *)(param_3 + 0x45c);
  if (((*(int *)(uVar7 + 0x30) != 0) && (2 < *(int *)(*(int *)(uVar7 + 0x400) + 0x210))) ||
     (uVar4 = (ushort)(*(float *)(uVar7 + 0x294) < DAT_5015ccdc),
     uVar5 = (ushort)(*(float *)(uVar7 + 0x294) == DAT_5015ccdc),
     uVar7 = (uint)(ushort)(uVar4 << 8 | uVar5 << 0xe), uVar4 != 0 || uVar5 != 0)) {
    return CONCAT44(param_2,uVar7) & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x14) = 0;
  lVar10 = __ftol();
  *(short *)(param_4 + 6) = (short)lVar10;
  lVar10 = __ftol();
  iVar11 = (int)((ulonglong)lVar10 >> 0x20);
  *(short *)(param_4 + 4) = (short)lVar10;
  *(undefined2 *)(param_4 + 8) = 0;
  iVar2 = *(int *)(param_3 + 0x45c);
  uVar4 = (ushort)(DAT_5015ccdc + 0.2 < *(float *)(iVar2 + 0x294));
  uVar5 = (ushort)(DAT_5015ccdc + 0.2 == *(float *)(iVar2 + 0x294));
  uVar7 = (uint)(ushort)(uVar4 << 8 | uVar5 << 0xe);
  if (((uVar4 != 0 || uVar5 != 0) || (*(int *)(iVar2 + 0x2a4) == 0)) || (iVar2 == 0))
  goto LAB_50054e6a;
  *(undefined4 *)(iVar2 + 0x2a0) = *(undefined4 *)(iVar2 + 0x29c);
  FUN_500572e0(param_3,0,*(int *)(param_3 + 0x45c) + 0x2b0);
  uVar7 = *(uint *)(param_3 + 0x45c);
  iVar2 = *(int *)(uVar7 + 0x290);
  if (iVar2 != 0) {
    iVar11 = *(int *)(uVar7 + 0x2a4);
    uVar7 = 0;
    if ((*(int *)(iVar2 + 0x458) != 0) && (uVar7 = 0, *(int *)(iVar2 + 0x45c) != 0)) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x45c) + 0x2ac);
      lVar10 = __ftol();
      param_3 = (int)lVar10;
      if ((0x5a < param_3) && (iVar3 < 0x5a)) {
        param_3 = 0x5a;
      }
      fVar9 = (float10)(*DAT_5015cb20)(0,0x42c80000);
      fVar8 = (float10)param_3;
      uVar7 = CONCAT22(extraout_var,
                       (ushort)(fVar9 < fVar8) << 8 | (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                       (ushort)(fVar9 == fVar8) << 0xe);
      if (fVar9 < fVar8 != (fVar9 == fVar8)) {
        fVar1 = *(float *)(*(int *)(iVar2 + 0x45c) + 0x294);
        uVar4 = (ushort)(fVar1 < DAT_5015ccdc);
        uVar5 = (ushort)(fVar1 == DAT_5015ccdc);
        uVar7 = (uint)(ushort)(uVar4 << 8 | uVar5 << 0xe);
        if ((uVar4 != 0 || uVar5 != 0) || (*(int *)(*(int *)(iVar2 + 0x45c) + 0x2a4) < 5)) {
          if (iVar11 == 1) {
            iVar11 = 5;
          }
          else if (iVar11 == 2) {
            iVar11 = 6;
          }
          else {
            if (iVar11 != 3) goto LAB_50054e41;
            iVar11 = 4;
          }
          uVar7 = FUN_50056d20(iVar2,iVar6,iVar11);
        }
      }
    }
  }
LAB_50054e41:
  *(undefined4 *)(*(int *)(iVar6 + 0x45c) + 0x2a4) = 0;
  iVar11 = *(int *)(iVar6 + 0x45c);
  *(float *)(iVar11 + 0x294) = DAT_5015ccdc - 1.0;
LAB_50054e6a:
  return CONCAT44(iVar11,CONCAT31((int3)(uVar7 >> 8),1));
}

