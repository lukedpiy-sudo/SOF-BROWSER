// rea decompile_all
// name: FUN_50054940
// address: 0x50054940
// body: available
// range: 0x50054940-0x50054bfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50054940(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((*(int *)(*(int *)(param_1 + 0x45c) + 0x30) == 0) && (*(float *)(DAT_5015c950 + 0x18) == 0.0))
  {
    FUN_500526d0(param_1);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x45c) + 0x30);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = FUN_500b0d40(param_1,iVar7,0);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x45c);
    if ((((*(int *)(iVar7 + 0x30) != 0) && (iVar7 != 0)) &&
        ((*(int *)(iVar7 + 0x34) == 0 ||
         (*(float *)(iVar7 + 0x3c) < DAT_5015ccdc == (*(float *)(iVar7 + 0x3c) == DAT_5015ccdc)))))
       && (iVar7 = FUN_50050980(param_1), iVar7 == 0)) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x45c) + 0x30);
      if ((*(float *)(iVar7 + 0xc) < *(float *)(param_1 + 0xc) + 15.0) &&
         (2 < *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210))) {
        iVar7 = FUN_5005e010(&DAT_50159a60,param_1,iVar7);
        if (iVar7 == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x80) = 1;
        }
        else {
          *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar7;
          FUN_50061fb0(&DAT_50159a60,param_1);
        }
        *(float *)(*(int *)(param_1 + 0x45c) + 0x84) = DAT_5015ccdc + 10.0;
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x30) = 0;
        return;
      }
    }
    iVar7 = *(int *)(param_1 + 0x45c);
    if ((*(int *)(iVar7 + 0x30) != 0) &&
       ((iVar7 == 0 ||
        (((*(int *)(iVar7 + 0x34) != 0 &&
          (*(float *)(iVar7 + 0x3c) < DAT_5015ccdc != (*(float *)(iVar7 + 0x3c) == DAT_5015ccdc)))
         || (iVar7 = FUN_50050980(param_1), iVar7 != 0)))))) {
      iVar7 = *(int *)(param_1 + 0x45c);
      iVar1 = *(int *)(iVar7 + 0x30);
      if ((((*(float *)(iVar1 + 0xc) < *(float *)(param_1 + 0xc) + 15.0) &&
           (3 < *(int *)(*(int *)(iVar7 + 0x400) + 0x210))) &&
          (fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar1 + 4),
          fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar1 + 8),
          fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar1 + 0xc),
          fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 < 262144.0)) &&
         (((*(float *)(iVar1 + 0xc) < *(float *)(param_1 + 0xc) + 5.0 &&
           (*(float *)(param_1 + 0xc) < *(float *)(iVar1 + 0xc) + 5.0)) &&
          (*(float *)(DAT_5015ccb4 + 0x18) != 0.0)))) {
        *(undefined4 *)(iVar7 + 0x3f0) = 1;
      }
    }
    iVar7 = *(int *)(param_1 + 0x45c);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x45c);
    iVar1 = *(int *)(iVar7 + 0x30);
    if (((((0 < *(int *)(iVar1 + 0x2ec)) && (iVar2 = *(int *)(iVar1 + 0x74), iVar2 != 0)) &&
         (*(int *)(iVar2 + 0x34c) != 0)) &&
        ((*(int *)(iVar2 + 0x2dc) == 0 && (*(int *)(iVar2 + 800) == 0)))) &&
       (*(int *)(iVar1 + 0x45c) != 0)) {
      bVar6 = FUN_500887e0(param_1,iVar1);
      iVar7 = *(int *)(param_1 + 0x45c);
      if (CONCAT31(extraout_var,bVar6) != 0) {
        *(undefined4 *)(iVar7 + 0x30) = 0;
        return;
      }
      if (param_1 == *(int *)(iVar7 + 0x30)) {
        *(undefined4 *)(iVar7 + 0x30) = 0;
        return;
      }
      bVar6 = FUN_5006e1d0(param_1,*(int *)(iVar7 + 0x30));
      if (CONCAT31(extraout_var_00,bVar6) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x30) = 0;
        return;
      }
      if (*(float *)(DAT_5015c950 + 0x18) == 0.0) {
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x30) = 0;
      return;
    }
  }
  *(undefined4 *)(iVar7 + 0x30) = 0;
  return;
}

