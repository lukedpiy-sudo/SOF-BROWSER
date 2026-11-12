// rea decompile_all
// name: FUN_5007ca10
// address: 0x5007ca10
// body: available
// range: 0x5007ca10-0x5007cca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007ca10(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  int *piVar4;
  int *piVar5;
  int *local_18;
  int *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  piVar5 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  local_10 = (undefined1 *)CONCAT31(local_10._1_3_,bVar1);
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  local_c = 2;
  local_8 = 0;
  if (*(int *)(param_1 + 0x148) == 0) {
LAB_5007cab2:
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_Print_501459e4);
  }
  else {
    local_10 = *(undefined1 **)(*(int *)(param_1 + 0x144) + 4);
    piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    puVar3 = (undefined4 *)FUN_50049a30(&local_10,&local_4);
    piVar4 = (int *)*puVar3;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_50106b60((undefined *)piVar4);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar5 == (int *)0x0) goto LAB_5007cab2;
  }
  if (piVar5[0x11] == 4) {
    local_10 = (undefined1 *)(**(code **)(*piVar5 + 0x14))();
  }
  else {
    local_10 = &DAT_5015911c;
    local_4 = (**(code **)(*piVar5 + 4))();
  }
  if ((bVar1 & 4) != 0) {
    if (*(int *)(param_1 + 0x148) == 0) {
      local_14 = (int *)0x0;
LAB_5007cb59:
      FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_Print_501459e4);
    }
    else {
      local_c = *(undefined4 *)(*(int *)(param_1 + 0x144) + 4);
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      puVar3 = (undefined4 *)FUN_50049a30(&local_c,&local_14);
      piVar2 = (int *)*puVar3;
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_50106b60((undefined *)piVar2);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
      local_14 = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_5007cb59;
    }
    local_c = (**(code **)(*local_14 + 4))();
  }
  if ((bVar1 & 1) == 0) goto LAB_5007cc13;
  if (*(int *)(param_1 + 0x148) == 0) {
    local_18 = (int *)0x0;
LAB_5007cbfa:
    piVar4 = local_18;
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_Print_501459e4);
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    local_8 = *(int *)(*(int *)(param_1 + 0x144) + 4);
    puVar3 = (undefined4 *)FUN_50049a30(&local_8,&local_18);
    piVar2 = (int *)*puVar3;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_50106b60((undefined *)piVar2);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    local_18 = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_5007cbfa;
  }
  local_8 = (**(code **)(*piVar4 + 0x10))();
LAB_5007cc13:
  if ((*(float *)(DAT_5015c97c + 0x18) == 0.0) || (DAT_5015d8d5 == '\0')) {
    if (piVar5[0x11] == 4) {
      if (local_8 == 0) {
        (*DAT_5015ca20)(local_c,local_10);
      }
      else {
        (*DAT_5015ca28)(local_8,local_c,local_10);
      }
    }
    else {
      (*DAT_5015cab0)(local_8,local_4);
    }
  }
  (**(code **)*piVar5)(1);
  if (unaff_EBX != (undefined4 *)0x0) {
    (**(code **)*unaff_EBX)(1);
  }
  if (local_18 != (int *)0x0) {
    (**(code **)*local_18)(1);
  }
  return;
}

