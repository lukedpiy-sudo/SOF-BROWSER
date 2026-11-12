// rea decompile_all
// name: FUN_50068970
// address: 0x50068970
// body: available
// range: 0x50068970-0x50068b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x50068a9f) */

undefined4 __fastcall FUN_50068970(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_25;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011462b;
  local_c = ExceptionList;
  local_20 = (int *)((int)param_1 + 4);
  iVar7 = 0;
  ExceptionList = &local_c;
  do {
    iVar1 = *local_20;
    pvVar5 = (void *)(iVar1 + 0x148);
    *(undefined **)(iVar1 + 0xa4) = &DAT_50143508 + *(int *)(iVar1 + 0x54) * 0x28;
    puVar4 = *(undefined4 **)(iVar1 + 0x14c);
    local_24 = (undefined4 *)*puVar4;
    if (((*(int *)(iVar1 + 0x158) == 0) ||
        (piVar2 = (int *)FUN_500fc2d0(pvVar5,&local_18), local_24 != (undefined4 *)*piVar2)) ||
       (puVar4 != *(undefined4 **)(iVar1 + 0x14c))) {
      while (puVar3 = local_24, local_24 != puVar4) {
        puVar3 = (undefined4 *)FUN_500fc520(&local_24,&local_14);
        FUN_500c4640(pvVar5,&local_10,(int *)*puVar3);
      }
    }
    else {
      FUN_5006b210(pvVar5,(int *)(*(undefined4 **)(iVar1 + 0x14c))[1]);
      *(undefined4 *)(*(int *)(iVar1 + 0x14c) + 4) = *(undefined4 *)(iVar1 + 0x150);
      *(undefined4 *)(iVar1 + 0x158) = 0;
      *(undefined4 *)*(undefined4 *)(iVar1 + 0x14c) = *(undefined4 *)(iVar1 + 0x14c);
      *(int *)(*(int *)(iVar1 + 0x14c) + 8) = *(int *)(iVar1 + 0x14c);
      FUN_500fc2d0(pvVar5,&local_1c);
      puVar3 = local_1c;
    }
    local_1c = puVar3;
    FUN_500698d0(param_1,iVar7);
    FUN_50069aa0(param_1,iVar7);
    FUN_50069bf0(param_1,iVar7);
    FUN_50069d20(param_1,iVar7);
    FUN_50069d40(param_1,iVar7);
    FUN_5006a2e0(param_1,iVar7);
    iVar7 = iVar7 + 1;
    local_20 = local_20 + 1;
  } while (iVar7 < 0x28);
  *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)((int)param_1 + 0xa8);
  if (*(float *)(DAT_5015d9a8 + 0x18) != 0.0) {
    puVar4 = operator_new(0x38);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *(undefined1 *)(puVar4 + 1) = local_25;
      *(undefined1 *)((int)puVar4 + 5) = local_25;
      *(undefined1 *)(puVar4 + 4) = 0;
      local_10 = puVar4;
      pvVar5 = operator_new(0x18);
      *(undefined4 *)((int)pvVar5 + 4) = 0;
      *(undefined1 *)((int)pvVar5 + 0x14) = 1;
      *(undefined1 *)((int)pvVar5 + 0x15) = 0;
      puVar4[3] = pvVar5;
      *(undefined1 *)((int)pvVar5 + 0x15) = 1;
      *(undefined4 *)puVar4[3] = 0;
      *(undefined4 *)(puVar4[3] + 8) = 0;
      uVar6 = FUN_5006b2e0(puVar4[3],0);
      puVar4[2] = uVar6;
      *(undefined4 *)uVar6 = uVar6;
      *(undefined4 *)(puVar4[2] + 8) = puVar4[2];
      puVar4[5] = 0;
      *puVar4 = &PTR_FUN_5012881c;
      puVar4[6] = 0;
      *(undefined2 *)(puVar4 + 7) = 0;
      puVar4[0xc] = 0;
      *(undefined1 *)(puVar4 + 0xd) = 0;
    }
    *(undefined4 **)((int)param_1 + 0xb4) = puVar4;
  }
  ExceptionList = local_c;
  return 1;
}

