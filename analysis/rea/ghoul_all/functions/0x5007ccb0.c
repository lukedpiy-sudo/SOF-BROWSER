// rea decompile_all
// name: FUN_5007ccb0
// address: 0x5007ccb0
// body: available
// range: 0x5007ccb0-0x5007d090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007ccb0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *unaff_EBX;
  int *piVar6;
  float10 fVar7;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  piVar6 = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_8 = 0;
  local_10 = 1.0;
  local_14 = 1.0;
  local_c = 2;
  local_18 = 0.0;
  if (*(int *)(param_1 + 0x148) == 0) {
    local_1c = (int *)0x0;
LAB_5007cd76:
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
  }
  else {
    local_1c = *(int **)(*(int *)(param_1 + 0x144) + 4);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    puVar4 = (undefined4 *)FUN_50049a30(&local_1c,&local_4);
    piVar3 = (int *)*puVar4;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_50106b60((undefined *)piVar3);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    local_1c = piVar2;
    if (piVar2 == (int *)0x0) goto LAB_5007cd76;
  }
  local_4 = (**(code **)(*local_1c + 0x14))();
  if ((bVar1 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x148) == 0) {
      local_20 = (int *)0x0;
LAB_5007ce0f:
      FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
    }
    else {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      local_18 = *(float *)(*(int *)(param_1 + 0x144) + 4);
      puVar4 = (undefined4 *)FUN_50049a30(&local_18,&local_20);
      piVar3 = (int *)*puVar4;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_50106b60((undefined *)piVar3);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
      local_20 = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_5007ce0f;
    }
    fVar7 = (float10)(**(code **)(*local_20 + 8))();
    local_18 = (float)fVar7;
  }
  if ((bVar1 & 8) != 0) {
    if (*(int *)(param_1 + 0x148) == 0) {
      local_24 = (int *)0x0;
LAB_5007ce6d:
      FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
    }
    else {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),&local_c,*(int **)(*(int *)(param_1 + 0x144) + 4));
      local_24 = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_5007ce6d;
    }
    local_c = (**(code **)(*local_24 + 4))();
  }
  if ((bVar1 & 4) != 0) {
    if (*(int *)(param_1 + 0x148) == 0) {
      local_28 = (int *)0x0;
LAB_5007cedd:
      FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
    }
    else {
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
      local_28 = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_5007cedd;
    }
    fVar7 = (float10)(**(code **)(*local_28 + 8))();
    local_14 = (float)fVar7;
  }
  if ((bVar1 & 2) != 0) {
    if (*(int *)(param_1 + 0x148) == 0) {
      local_2c = (int *)0x0;
LAB_5007cf69:
      FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
    }
    else {
      local_10 = *(float *)(*(int *)(param_1 + 0x144) + 4);
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      puVar4 = (undefined4 *)FUN_50049a30(&local_10,&local_2c);
      piVar3 = (int *)*puVar4;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_50106b60((undefined *)piVar3);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
      local_2c = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_5007cf69;
    }
    fVar7 = (float10)(**(code **)(*local_2c + 8))();
    local_10 = (float)fVar7;
  }
  if ((bVar1 & 1) == 0) goto LAB_5007cfe9;
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar6 = (int *)0x0;
LAB_5007cfcf:
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_PlaySound_501459fc);
  }
  else {
    piVar6 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    FUN_500499f0((void *)(param_1 + 0x140),&local_8,*(int **)(*(int *)(param_1 + 0x144) + 4));
    if (piVar6 == (int *)0x0) goto LAB_5007cfcf;
  }
  local_8 = (**(code **)(*piVar6 + 0x10))();
LAB_5007cfe9:
  if ((*(float *)(DAT_5015c97c + 0x18) == 0.0) || (DAT_5015d8d5 == '\0')) {
    uVar5 = (*DAT_5015c9f4)(local_4,local_10,local_14,local_18,0);
    (*DAT_5015ca48)(local_8,local_c,uVar5);
  }
  (**(code **)*local_1c)(1);
  if (piVar6 != (int *)0x0) {
    (**(code **)*piVar6)(1);
  }
  if (unaff_EBX != (undefined4 *)0x0) {
    (**(code **)*unaff_EBX)(1);
  }
  if (local_2c != (int *)0x0) {
    (**(code **)*local_2c)(1);
  }
  if (local_28 != (int *)0x0) {
    (**(code **)*local_28)(1);
  }
  if (local_24 != (int *)0x0) {
    (**(code **)*local_24)(1);
  }
  return;
}

