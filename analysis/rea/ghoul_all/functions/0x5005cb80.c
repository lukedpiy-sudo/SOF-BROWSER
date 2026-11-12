// rea decompile_all
// name: FUN_5005cb80
// address: 0x5005cb80
// body: available
// range: 0x5005cb80-0x5005cd3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005cb80(undefined4 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_501141c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_50128718;
  local_4 = 6;
  iVar3 = FUN_50064270((undefined4 *)param_1[7],(undefined4 *)param_1[7],(undefined4 *)param_1[6]);
  FUN_50063890(iVar3,param_1[7]);
  param_1[7] = iVar3;
  iVar3 = FUN_500642a0((undefined1 *)param_1[0x27],(undefined1 *)param_1[0x27],
                       (undefined1 *)param_1[0x26]);
  FUN_50063c80(iVar3,param_1[0x27]);
  param_1[0x27] = iVar3;
  puVar5 = (undefined4 *)param_1[0x2a];
  if (puVar5 != (undefined4 *)param_1[0x2b]) {
    do {
      puVar1 = (undefined *)*puVar5;
      if (puVar1 != (undefined *)0x0) {
        *puVar1 = 0;
        FUN_50106b60(puVar1);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined4 *)param_1[0x2b]);
  }
  uVar4 = FUN_500b75b0((undefined4 *)param_1[0x2b],(undefined4 *)param_1[0x2b],
                       (undefined4 *)param_1[0x2a]);
  FUN_50043230();
  param_1[0x2b] = uVar4;
  FUN_50106b60((undefined *)param_1[0x2a]);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  pvVar2 = (void *)param_1[0x27];
  pvVar6 = (void *)param_1[0x26];
  local_4._0_1_ = 4;
  for (; pvVar6 != pvVar2; pvVar6 = (void *)((int)pvVar6 + 0x1c)) {
    FUN_50064930(pvVar6,0);
  }
  FUN_50106b60((undefined *)param_1[0x26]);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_4._0_1_ = 3;
  FUN_500631e0(param_1 + 0x1e);
  local_4._0_1_ = 2;
  FUN_500631e0(param_1 + 0x19);
  local_4._0_1_ = 1;
  FUN_500631e0(param_1 + 0x14);
  pvVar2 = (void *)param_1[7];
  pvVar6 = (void *)param_1[6];
  local_4 = (uint)local_4._1_3_ << 8;
  for (; pvVar6 != pvVar2; pvVar6 = (void *)((int)pvVar6 + 0x34)) {
    FUN_500648f0(pvVar6,0);
  }
  FUN_50106b60((undefined *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_50106b60((undefined *)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

