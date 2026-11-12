// rea decompile_all
// name: FUN_500673d0
// address: 0x500673d0
// body: available
// range: 0x500673d0-0x5006757f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500673d0(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *local_20;
  undefined4 *local_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_501143db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_5012881c;
  local_4 = 0;
  piVar4 = *(int **)param_1[2];
  local_1c = param_1;
  if (piVar4 != (int *)param_1[2]) {
    do {
      if (*(undefined4 **)((int)piVar4 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)piVar4 + 0x10))(1);
      }
      if (*(char *)((int)*(int **)((int)piVar4 + 8) + 0x15) == '\0') {
        iVar2 = FUN_500a6ce0(*(int **)((int)piVar4 + 8));
LAB_5006743f:
        piVar4 = (int *)iVar2;
      }
      else {
        iVar2 = *(int *)((int)piVar4 + 4);
        if (piVar4 == (int *)*(int *)(iVar2 + 8)) {
          do {
            piVar4 = (int *)iVar2;
            iVar2 = *(int *)((int)piVar4 + 4);
          } while (piVar4 == (int *)*(int *)(iVar2 + 8));
        }
        if (*(int *)((int)piVar4 + 8) != iVar2) goto LAB_5006743f;
      }
    } while (piVar4 != (int *)param_1[2]);
  }
  puVar1 = (undefined4 *)param_1[2];
  this = param_1 + 1;
  local_20 = (undefined4 *)*puVar1;
  if (param_1[5] == 0) {
    while (local_20 != puVar1) {
      puVar3 = (undefined4 *)FUN_500fc520(&local_20,&iStack_18);
      FUN_500c4640(this,&uStack_14,(int *)*puVar3);
    }
  }
  else {
    FUN_5006b250(this,(int *)puVar1[1]);
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
    param_1[5] = 0;
    *(undefined4 *)param_1[2] = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
  }
  if ((FILE *)param_1[0xc] != (FILE *)0x0) {
    FUN_50107c0a((FILE *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  local_4 = 0xffffffff;
  local_20 = (undefined4 *)*puVar1;
  if (((param_1[5] == 0) ||
      (puVar3 = (undefined4 *)FUN_500fc2d0(this,&uStack_14), local_20 != (undefined4 *)*puVar3)) ||
     (puVar1 != (undefined4 *)param_1[2])) {
    while (local_20 != puVar1) {
      puVar3 = (undefined4 *)FUN_500fc520(&local_20,(int *)&local_1c);
      FUN_500c4640(this,&uStack_10,(int *)*puVar3);
    }
  }
  else {
    FUN_5006b250(this,(int *)((undefined4 *)param_1[2])[1]);
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
    param_1[5] = 0;
    *(undefined4 *)param_1[2] = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    FUN_500fc2d0(this,&iStack_18);
  }
  FUN_50106b60((undefined *)param_1[2]);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_50106b60((undefined *)param_1[3]);
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}

