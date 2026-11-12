// rea decompile_all
// name: FUN_5007d860
// address: 0x5007d860
// body: available
// range: 0x5007d860-0x5007dc81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_5007d860(void *param_1)

{
  float fVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  int *local_40;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  float fStack_2c;
  float fStack_28;
  int *piStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  piVar7 = (int *)0x0;
  local_34 = (undefined4 *)0x0;
  bVar2 = *(byte *)(*(int *)((int)param_1 + 0x114) + *(int *)((int)param_1 + 0x104));
  local_30 = (int *)CONCAT31(local_30._1_3_,bVar2);
  local_40 = (int *)0x0;
  *(int *)((int)param_1 + 0x114) = *(int *)((int)param_1 + 0x114) + 1;
  if ((bVar2 & 4) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_40 = (int *)0x0;
    }
    else {
      local_40 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_30,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
  }
  if ((bVar2 & 2) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_34 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_30,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
      local_34 = puVar3;
    }
  }
  if (((bVar2 & 1) != 0) && (*(int *)((int)param_1 + 0x148) != 0)) {
    FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_30,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    local_30 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_30,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    local_30 = piVar4;
  }
  piVar4 = local_30;
  if (*(int *)((int)param_1 + 0x148) != 0) {
    piVar7 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_38,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
  }
  (**(code **)(*piVar4 + 0xc))(&local_20);
  fVar6 = (float)(**(code **)(*piVar7 + 0x10))();
  if (fVar6 == 0.0) goto LAB_5007da3c;
  if ((local_38 == (int *)0x0) && (local_40 == (int *)0x0)) {
    *(float *)((int)fVar6 + 0x10) = (float)piStack_24 + *(float *)((int)fVar6 + 0x10);
    *(float *)((int)fVar6 + 0x14) = local_20 + *(float *)((int)fVar6 + 0x14);
    *(float *)((int)fVar6 + 0x18) = fStack_1c + *(float *)((int)fVar6 + 0x18);
    iVar5 = *(int *)((int)fVar6 + 800);
    if (iVar5 != 0) {
      *(float *)(iVar5 + 0x10) = (float)piStack_24 + *(float *)(iVar5 + 0x10);
      *(float *)(iVar5 + 0x14) = local_20 + *(float *)(iVar5 + 0x14);
      *(float *)(iVar5 + 0x18) = fStack_1c + *(float *)(iVar5 + 0x18);
    }
    goto LAB_5007da3c;
  }
  if ((bVar2 & 8) == 0) {
    local_30 = (int *)((float)piStack_24 + *(float *)((int)fVar6 + 0x10));
    fStack_2c = local_20 + *(float *)((int)fVar6 + 0x14);
    fStack_28 = fStack_1c + *(float *)((int)fVar6 + 0x18);
  }
  else {
    local_30 = piStack_24;
    fStack_2c = local_20;
    fStack_28 = fStack_1c;
  }
  fStack_18 = *(float *)((int)fVar6 + 0x10) - (float)local_30;
  fStack_14 = *(float *)((int)fVar6 + 0x14) - fStack_2c;
  fStack_10 = *(float *)((int)fVar6 + 0x18) - fStack_28;
  fVar8 = FUN_500fe130(&fStack_18);
  if (local_38 == (int *)0x0) {
    fVar9 = (float10)(**(code **)(*local_40 + 8))();
    fVar9 = (float10)(float)fVar8 / fVar9;
LAB_5007db72:
    *(float *)((int)fVar6 + 0x414) = (float)fVar9;
    piVar4 = local_30;
    fVar1 = fStack_2c;
  }
  else {
    if (local_40 == (int *)0x0) {
      fVar9 = (float10)(**(code **)(*local_38 + 8))();
      goto LAB_5007db72;
    }
    fVar8 = (float10)(**(code **)(*local_38 + 8))();
    *(float *)((int)fVar6 + 0x414) = (float)fVar8;
    fVar8 = (float10)(**(code **)(*local_40 + 8))();
    fVar9 = (float10)(**(code **)(*local_38 + 8))();
    fVar1 = (float)(fVar9 * (float10)(float)fVar8);
    FUN_500fe050(&fStack_18);
    fStack_28 = fStack_10 * fVar1 + *(float *)((int)fVar6 + 0x18);
    piVar4 = (int *)(fStack_18 * fVar1 + *(float *)((int)fVar6 + 0x10));
    fVar1 = fStack_14 * fVar1 + *(float *)((int)fVar6 + 0x14);
  }
  *(float *)((int)fVar6 + 1000) = fStack_28;
  *(int **)((int)fVar6 + 0x3e0) = piVar4;
  *(float *)((int)fVar6 + 0x3e4) = fVar1;
  *(int **)((int)fVar6 + 0x3f8) = piVar4;
  *(float *)((int)fVar6 + 0x400) = fStack_28;
  *(float *)((int)fVar6 + 0x3fc) = fVar1;
  if ((*(byte *)((int)param_1 + 0x124) & 4) != 0) {
    FUN_50081800(param_1,(byte *)s_________________________________5014585c);
    FUN_50081800(param_1,(byte *)s_Script___s_50145850);
    FUN_50081800(param_1,(byte *)s_DEBUG_at__d_50145840);
    (**(code **)(*piVar7 + 4))();
    FUN_50081800(param_1,(byte *)s_Rotating_Entity__d_50145b34);
    FUN_50081800(param_1,(byte *)s_From___7_3f___7_3f___7_3f__50145af8);
    FUN_50081800(param_1,(byte *)s_To___7_3f___7_3f___7_3f__50145ad4);
    FUN_50081800(param_1,(byte *)s_________________________________5014585c);
  }
  if (unaff_EBX != (undefined4 *)0x0) {
    FUN_50081520(param_1,fVar6,unaff_EBX,1);
    unaff_EBX = (undefined4 *)0x0;
  }
  FUN_50081220(param_1,fVar6);
LAB_5007da3c:
  (**(code **)*local_34)();
  (**(code **)*piVar7)(1);
  if (unaff_EBX != (undefined4 *)0x0) {
    (**(code **)*unaff_EBX)();
  }
  if (local_40 != (int *)0x0) {
    (**(code **)*local_40)();
  }
  if (&stack0x00000000 != (undefined1 *)0x4) {
    (*(code *)*unaff_EBP)();
  }
  return;
}

