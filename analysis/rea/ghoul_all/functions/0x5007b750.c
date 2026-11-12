// rea decompile_all
// name: FUN_5007b750
// address: 0x5007b750
// body: available
// range: 0x5007b750-0x5007b983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5007b750(int param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined **ppuVar10;
  int *piVar11;
  float10 fVar12;
  int *local_c;
  uint local_8;
  
  piVar4 = FUN_500c3690();
  bVar2 = *(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  local_8 = (uint)bVar2;
  if (bVar2 != 0) {
    do {
      if (*(int *)(param_1 + 0x148) == 0) {
        local_c = (int *)0x0;
      }
      else {
        local_c = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
        piVar11 = *(int **)(*(int *)(param_1 + 0x144) + 4);
        *(int *)piVar11[1] = *piVar11;
        *(int *)(*piVar11 + 4) = piVar11[1];
        FUN_50106b60((undefined *)piVar11);
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
      }
      if (*(int *)(param_1 + 0x148) == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
        piVar9 = *(int **)(*(int *)(param_1 + 0x144) + 4);
        *(int *)piVar9[1] = *piVar9;
        *(int *)(*piVar9 + 4) = piVar9[1];
        FUN_50106b60((undefined *)piVar9);
        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
      }
      if ((local_c == (int *)0x0) || (piVar11 == (int *)0x0)) {
        FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleSpawn___50145774);
      }
      pcVar5 = (char *)(**(code **)(*local_c + 0x14))();
      ppuVar10 = &PTR_s_classname_5014ed70;
      puVar3 = PTR_s_classname_5014ed70;
      while (puVar3 != (undefined *)0x0) {
        iVar6 = __strcmpi(*ppuVar10,pcVar5);
        if (iVar6 == 0) {
          piVar9 = &DAT_5015cb90;
          if (((uint)ppuVar10[3] & 1) == 0) {
            piVar9 = piVar4;
          }
          switch(ppuVar10[2]) {
          case (undefined *)0x0:
            uVar7 = (**(code **)(*piVar11 + 4))();
            *(undefined4 *)(ppuVar10[1] + (int)piVar9) = uVar7;
            break;
          case (undefined *)0x2:
            fVar12 = (float10)(**(code **)(*piVar11 + 8))();
            *(float *)(ppuVar10[1] + (int)piVar9) = (float)fVar12;
            break;
          case (undefined *)0x3:
            pcVar5 = (char *)(**(code **)(*piVar11 + 0x14))();
            uVar7 = FUN_500bd6d0(pcVar5);
            *(undefined4 *)(ppuVar10[1] + (int)piVar9) = uVar7;
            break;
          case (undefined *)0x4:
            (**(code **)(*piVar11 + 0xc))(ppuVar10[1] + (int)piVar9);
            break;
          case (undefined *)0x5:
            *(undefined4 *)(ppuVar10[1] + (int)piVar9) = 0;
            fVar12 = (float10)(**(code **)(*piVar11 + 8))();
            *(float *)(ppuVar10[1] + 4 + (int)piVar9) = (float)fVar12;
            *(undefined4 *)(ppuVar10[1] + 8 + (int)piVar9) = 0;
          }
          break;
        }
        ppuVar1 = ppuVar10 + 4;
        ppuVar10 = ppuVar10 + 4;
        puVar3 = *ppuVar1;
      }
      (**(code **)*local_c)(1);
      if (piVar11 != (int *)0x0) {
        (**(code **)*piVar11)(1);
      }
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  FUN_500bd570(piVar4);
  puVar8 = operator_new(0x50);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = &PTR_LAB_50129390;
    _strncpy((char *)(puVar8 + 1),&DAT_5015911c,0x40);
    puVar8[0x13] = piVar4;
    puVar8[0x11] = 3;
    puVar8[0x12] = 0xffffffff;
    *puVar8 = &PTR_FUN_501294c0;
    return puVar8;
  }
  return (undefined4 *)0x0;
}

