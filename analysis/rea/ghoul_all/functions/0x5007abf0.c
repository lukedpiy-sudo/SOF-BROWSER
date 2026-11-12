// rea decompile_all
// name: FUN_5007abf0
// address: 0x5007abf0
// body: available
// range: 0x5007abf0-0x5007adb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007abf0(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_50114c10;
  local_c = ExceptionList;
  local_4 = 7;
  ExceptionList = &local_c;
  FUN_5007ae90(param_1,1);
  local_4._0_1_ = 6;
  FUN_5005acf0((void *)((int)param_1 + 0x17c),&local_14,(int *)**(int **)((int)param_1 + 0x180),
               *(int **)((int)param_1 + 0x180));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x180));
  *(undefined4 *)((int)param_1 + 0x180) = 0;
  *(undefined4 *)((int)param_1 + 0x184) = 0;
  local_4._0_1_ = 5;
  FUN_5005acf0((void *)((int)param_1 + 0x170),&local_14,(int *)**(int **)((int)param_1 + 0x174),
               *(int **)((int)param_1 + 0x174));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x174));
  *(undefined4 *)((int)param_1 + 0x174) = 0;
  *(undefined4 *)((int)param_1 + 0x178) = 0;
  local_4._0_1_ = 4;
  FUN_5005acf0((void *)((int)param_1 + 0x164),&local_14,(int *)**(int **)((int)param_1 + 0x168),
               *(int **)((int)param_1 + 0x168));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x168));
  *(undefined4 *)((int)param_1 + 0x168) = 0;
  *(undefined4 *)((int)param_1 + 0x16c) = 0;
  local_4._0_1_ = 3;
  FUN_5005acf0((void *)((int)param_1 + 0x158),&local_14,(int *)**(int **)((int)param_1 + 0x15c),
               *(int **)((int)param_1 + 0x15c));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x15c));
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)((int)param_1 + 0x160) = 0;
  local_4._0_1_ = 2;
  FUN_5005acf0((void *)((int)param_1 + 0x14c),&local_14,(int *)**(int **)((int)param_1 + 0x150),
               *(int **)((int)param_1 + 0x150));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x150));
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  *(undefined4 *)((int)param_1 + 0x154) = 0;
  local_4._0_1_ = 1;
  FUN_5005acf0((void *)((int)param_1 + 0x140),&local_14,(int *)**(int **)((int)param_1 + 0x144),
               *(int **)((int)param_1 + 0x144));
  FUN_50106b60(*(undefined **)((int)param_1 + 0x144));
  *(undefined4 *)((int)param_1 + 0x144) = 0;
  *(undefined4 *)((int)param_1 + 0x148) = 0;
  piVar1 = *(int **)((int)param_1 + 0x138);
  local_4 = (uint)local_4._1_3_ << 8;
  puVar2 = (undefined4 *)FUN_500fc2d0((void *)((int)param_1 + 0x134),&local_14);
  FUN_5005acf0((void *)((int)param_1 + 0x134),&local_10,(int *)*puVar2,piVar1);
  FUN_50106b60(*(undefined **)((int)param_1 + 0x138));
  *(undefined4 *)((int)param_1 + 0x138) = 0;
  *(undefined4 *)((int)param_1 + 0x13c) = 0;
  local_4 = 0xffffffff;
  FUN_50043ef0((int)param_1 + 0x128);
  ExceptionList = local_c;
  return;
}

