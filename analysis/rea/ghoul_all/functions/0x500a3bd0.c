// rea decompile_all
// name: FUN_500a3bd0
// address: 0x500a3bd0
// body: available
// range: 0x500a3bd0-0x500a3d22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a3bd0(undefined4 *param_1)

{
  int *this;
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114e7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_50129848;
  this = param_1 + 1;
  puVar7 = *(undefined4 **)param_1[1];
  local_4 = 0;
  iVar6 = param_1[2];
  local_18 = param_1;
  if (0 < (int)param_1[2]) {
    do {
      local_24 = iVar6;
      puVar1 = (undefined4 *)*puVar7;
      if (((undefined4 *)puVar7[2] != (undefined4 *)0x0) &&
         (local_28 = (undefined4 *)puVar7[2],
         FUN_5006b100(&DAT_5018b490,(int *)&local_20,(uint *)&local_28), piVar2 = local_20,
         local_20 != DAT_5018b494)) {
        FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_1c,local_20 + 4);
        FUN_500c4640(&DAT_5018b4a4,&local_14,local_1c);
        FUN_500c4640(&DAT_5018b490,&local_10,piVar2);
        puVar5 = local_28;
        if (local_28 != (undefined4 *)0x0) {
          FUN_500a31a0(local_28);
          FUN_50106b60((undefined *)puVar5);
        }
      }
      puVar7[2] = 0;
      puVar7 = puVar1;
      iVar6 = local_24 + -1;
    } while (local_24 + -1 != 0);
    local_24 = 0;
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0x164) = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0xd4))();
  }
  piVar2 = (int *)*this;
  local_4 = 0xffffffff;
  piVar4 = (int *)*piVar2;
  while (piVar4 != piVar2) {
    piVar3 = (int *)*piVar4;
    FUN_500a6340(this,&local_10,piVar4);
    piVar4 = piVar3;
  }
  FUN_50106b60((undefined *)*this);
  *this = 0;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

