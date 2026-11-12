// rea decompile_all
// name: FUN_500fb050
// address: 0x500fb050
// body: available
// range: 0x500fb050-0x500fb1b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500fb050(void *param_1)

{
  void *this;
  undefined4 *puVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  undefined4 *local_20;
  void *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50115a38;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)((int)param_1 + 0x18);
  this = (void *)((int)param_1 + 0x14);
  local_20 = (undefined4 *)*puVar1;
  local_4 = 0;
  ppvVar2 = &local_c;
  local_1c = param_1;
  if (*(int *)((int)param_1 + 0x24) == 0) {
    while (ExceptionList = ppvVar2, local_20 != puVar1) {
      puVar3 = (undefined4 *)FUN_500fc520(&local_20,&local_14);
      FUN_500c4640(this,&local_10,(int *)*puVar3);
      ppvVar2 = ExceptionList;
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_500fc600(this,(int *)puVar1[1]);
    *(undefined4 *)(*(int *)((int)param_1 + 0x18) + 4) = *(undefined4 *)((int)param_1 + 0x1c);
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)*(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x18);
    *(int *)(*(int *)((int)param_1 + 0x18) + 8) = *(int *)((int)param_1 + 0x18);
    FUN_500fc2d0(this,&local_18);
  }
  FUN_50106b60(*(undefined **)((int)param_1 + 0x18));
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  FUN_50106b60(*(undefined **)((int)param_1 + 0x1c));
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  local_20 = (undefined4 *)*puVar1;
  local_4 = 0xffffffff;
  if (*(int *)((int)param_1 + 0x10) == 0) {
    while (local_20 != puVar1) {
      puVar3 = (undefined4 *)FUN_500fc520(&local_20,&local_14);
      FUN_500c4640(param_1,&local_18,(int *)*puVar3);
    }
  }
  else {
    FUN_500fc5c0(param_1,(int *)puVar1[1]);
    *(undefined4 *)(*(int *)((int)param_1 + 4) + 4) = *(undefined4 *)((int)param_1 + 8);
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
    *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
    FUN_500fc2d0(param_1,&local_10);
  }
  FUN_50106b60(*(undefined **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  FUN_50106b60(*(undefined **)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

