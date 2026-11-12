// rea decompile_all
// name: FUN_500a4c30
// address: 0x500a4c30
// body: available
// range: 0x500a4c30-0x500a4dbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a4c30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_50114f66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_50129854;
  local_4 = 1;
  piVar5 = *(int **)param_1[2];
  local_1c = param_1;
  if (piVar5 != (int *)param_1[2]) {
    do {
      if ((*(undefined4 **)((int)piVar5 + 0x10) != (undefined4 *)0x0) &&
         (local_24 = *(undefined4 **)((int)piVar5 + 0x10),
         FUN_5006b100(&DAT_5018b4b8,(int *)&local_20,(uint *)&local_24), piVar1 = local_20,
         local_20 != DAT_5018b4bc)) {
        puVar2 = (undefined4 *)FUN_5006b1a0(&DAT_5018b4cc,&local_18,local_20 + 4);
        FUN_500a6c30(&DAT_5018b4cc,&local_14,(int *)*puVar2);
        FUN_500a6c30(&DAT_5018b4b8,&local_10,piVar1);
        if (local_24 != (undefined4 *)0x0) {
          FUN_500a4dc0(local_24,1);
        }
      }
      *(undefined4 *)((int)piVar5 + 0x10) = 0;
      if (*(char *)((int)*(int **)((int)piVar5 + 8) + 0x15) == '\0') {
        iVar3 = FUN_500a6ce0(*(int **)((int)piVar5 + 8));
LAB_500a4d0d:
        piVar5 = (int *)iVar3;
      }
      else {
        iVar3 = *(int *)((int)piVar5 + 4);
        if (piVar5 == (int *)*(int *)(iVar3 + 8)) {
          do {
            piVar5 = (int *)iVar3;
            iVar3 = *(int *)((int)piVar5 + 4);
          } while (piVar5 == (int *)*(int *)(iVar3 + 8));
        }
        if (*(int *)((int)piVar5 + 8) != iVar3) goto LAB_500a4d0d;
      }
    } while (piVar5 != (int *)param_1[2]);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0x6c))();
  }
  puVar2 = (undefined4 *)param_1[7];
  local_4 = local_4 & 0xffffff00;
  local_24 = (undefined4 *)*puVar2;
  while (local_24 != puVar2) {
    puVar4 = (undefined4 *)FUN_50049a30(&local_24,&local_10);
    FUN_500a6d00(param_1 + 6,&local_14,(int *)*puVar4);
  }
  FUN_50106b60((undefined *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_500a6a40(param_1 + 1,&local_10,*(int **)param_1[2],(int *)param_1[2]);
  FUN_50106b60((undefined *)param_1[2]);
  param_1[2] = 0;
  param_1[5] = 0;
  FUN_50106b60((undefined *)param_1[3]);
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}

