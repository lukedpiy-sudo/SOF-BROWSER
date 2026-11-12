// rea decompile_all
// name: FUN_500578f0
// address: 0x500578f0
// body: available
// range: 0x500578f0-0x50057a9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500578f0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *this;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_50113d3b;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  uVar2 = FUN_5005c0b0(*(undefined4 **)(param_1 + 0x14),*(undefined4 **)(param_1 + 0x14),
                       *(undefined4 **)(param_1 + 0x10));
  FUN_50043230();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  pcVar3 = FUN_5005c0e0(*(char **)(param_1 + 0x24),*(char **)(param_1 + 0x24),
                        *(char **)(param_1 + 0x20));
  FUN_50043230();
  *(char **)(param_1 + 0x24) = pcVar3;
  FUN_5005ac40((void *)(param_1 + 0x2c),&local_10,(int *)**(int **)(param_1 + 0x30),
               *(int **)(param_1 + 0x30));
  local_4._0_1_ = 4;
  FUN_5005acf0((void *)(param_1 + 0xa4),&local_10,(int *)**(int **)(param_1 + 0xa8),
               *(int **)(param_1 + 0xa8));
  FUN_50106b60(*(undefined **)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  local_4._0_1_ = 3;
  FUN_5005acf0((void *)(param_1 + 0x98),&local_10,(int *)**(int **)(param_1 + 0x9c),
               *(int **)(param_1 + 0x9c));
  FUN_50106b60(*(undefined **)(param_1 + 0x9c));
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_4._0_1_ = 2;
  FUN_5005acf0((void *)(param_1 + 0x8c),&local_10,(int *)**(int **)(param_1 + 0x90),
               *(int **)(param_1 + 0x90));
  FUN_50106b60(*(undefined **)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  local_4._0_1_ = 1;
  FUN_5005a600((void *)(param_1 + 0x2c));
  pvVar1 = *(void **)(param_1 + 0x24);
  this = *(void **)(param_1 + 0x20);
  local_4 = (uint)local_4._1_3_ << 8;
  for (; this != pvVar1; this = (void *)((int)this + 0x21c)) {
    FUN_5005c3b0(this,0);
  }
  FUN_50106b60(*(undefined **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = 0xffffffff;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_c;
  return;
}

