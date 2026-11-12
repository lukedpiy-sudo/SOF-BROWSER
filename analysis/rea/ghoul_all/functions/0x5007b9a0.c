// rea decompile_all
// name: FUN_5007b9a0
// address: 0x5007b9a0
// body: available
// range: 0x5007b9a0-0x5007bef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5007b9a0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  void *pvVar10;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114c4c;
  local_c = ExceptionList;
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  local_14 = (undefined4 *)CONCAT31(local_14._1_3_,uVar1);
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  puVar5 = local_10;
  switch(uVar1) {
  case 0:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
      pvVar10 = (void *)0x0;
      pcVar3 = (char *)(**(code **)(iRam00000000 + 0x14))();
      iVar6 = 0x1c8;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
      pvVar10 = (void *)0x0;
      pcVar3 = (char *)(**(code **)(*piVar7 + 0x14))();
      iVar6 = 0x1c8;
    }
    goto LAB_5007bd1f;
  case 1:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
    }
    puVar5 = operator_new(0x50);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = puVar5;
      fVar9 = (float10)(**(code **)(*piVar7 + 8))();
      fVar9 = (float10)fsin(fVar9 * (float10)0.01745329252);
      *puVar5 = &PTR_LAB_50129390;
      local_14 = (undefined4 *)(float)fVar9;
      _strncpy((char *)(puVar5 + 1),&DAT_5015911c,0x40);
      puVar5[0x11] = 1;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_501293f0;
      puVar5[0x13] = local_14;
    }
    local_4 = 0xffffffff;
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
    }
    puVar5 = operator_new(0x50);
    local_4 = 1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = puVar5;
      fVar9 = (float10)(**(code **)(*piVar7 + 8))();
      fVar9 = (float10)fcos(fVar9 * (float10)0.01745329252);
      *puVar5 = &PTR_LAB_50129390;
      local_14 = (undefined4 *)(float)fVar9;
      _strncpy((char *)(puVar5 + 1),&DAT_5015911c,0x40);
      puVar5[0x11] = 1;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_501293f0;
      puVar5[0x13] = local_14;
    }
    local_4 = 0xffffffff;
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_10,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
    }
    pvVar10 = (void *)0x0;
    pcVar3 = (char *)(**(code **)(*piVar7 + 0x14))();
    iVar6 = 0x1cc;
LAB_5007bd1f:
    uVar4 = FUN_500c26a0(0,iVar6,pcVar3,pvVar10);
    puVar5 = operator_new(0x50);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar5 + 1),&DAT_5015911c,0x40);
      puVar5[0x11] = 3;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_501294c0;
      puVar5[0x13] = uVar4;
    }
    if (((DAT_5015d8d5 != '\0') && (uVar4 != 0)) && (*(int *)(uVar4 + 0x450) != 0)) {
      *(undefined4 *)(uVar4 + 0x318) = 0xff;
    }
    (**(code **)*piVar7)(1);
    break;
  case 4:
    uVar4 = FUN_500c26a0(0,0x1b4,s_player_50142e48,(void *)0x0);
    puVar5 = operator_new(0x50);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar5 + 1),&DAT_5015911c,0x40);
      puVar5[0x11] = 3;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_501294c0;
      puVar5[0x13] = uVar4;
    }
    break;
  case 5:
    puVar5 = FUN_5007b750(param_1);
    break;
  case 6:
    puVar5 = operator_new(0x50);
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x11c);
      FUN_50076c50(puVar5,&DAT_5015911c,3);
      *puVar5 = &PTR_FUN_501294c0;
      puVar5[0x13] = uVar2;
      ExceptionList = local_c;
      return puVar5;
    }
    goto LAB_5007be18;
  case 7:
    puVar5 = operator_new(0x50);
    if (puVar5 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x120);
      FUN_50076c50(puVar5,&DAT_5015911c,3);
      *puVar5 = &PTR_FUN_501294c0;
      puVar5[0x13] = uVar2;
      ExceptionList = local_c;
      return puVar5;
    }
LAB_5007be18:
    puVar5 = (undefined4 *)0x0;
    break;
  case 8:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
    }
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)(param_1 + 0x140),(int *)&local_14,
                   *(int **)(*(int *)(param_1 + 0x144) + 4));
    }
    puVar5 = operator_new(0x50);
    local_4 = 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = puVar5;
      uVar2 = (**(code **)(*piVar8 + 4))();
      uVar2 = (**(code **)(*piVar7 + 4))(uVar2);
      iVar6 = (*DAT_5015cb24)(uVar2);
      local_14 = (undefined4 *)(float)iVar6;
      *puVar5 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar5 + 1),&DAT_5015911c,0x40);
      puVar5[0x11] = 1;
      puVar5[0x12] = 0xffffffff;
      *puVar5 = &PTR_FUN_501293f0;
      puVar5[0x13] = local_14;
    }
    local_4 = 0xffffffff;
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)*piVar8)(1);
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x148) == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
      FUN_50082630(param_1 + 0x140);
    }
    puVar5 = operator_new(0x50);
    local_4 = 3;
    local_10 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      iVar6 = (**(code **)(*piVar7 + 4))();
      puVar5 = FUN_50077d20(puVar5,DAT_5015cca0 + (iVar6 + 1) * 0x464);
    }
    local_4 = 0xffffffff;
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
  }
  ExceptionList = local_c;
  return puVar5;
}

