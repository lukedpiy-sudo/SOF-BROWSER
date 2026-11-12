// rea decompile_all
// name: FUN_50058e90
// address: 0x50058e90
// body: available
// range: 0x50058e90-0x50059049 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50058e90(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_50113fdf;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_5005a970((void *)(param_1 + 4),*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_1 + 0xc));
  FUN_5005a970((void *)(param_1 + 0x14),*(undefined4 **)(param_1 + 0x18),
               *(undefined4 **)(param_1 + 0x1c));
  uVar1 = FUN_5005c070(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x2c),
                       *(undefined4 **)(param_1 + 0x28));
  FUN_50043230();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  FUN_5005a970((void *)(param_1 + 0x34),*(undefined4 **)(param_1 + 0x38),
               *(undefined4 **)(param_1 + 0x3c));
  FUN_5005a970((void *)(param_1 + 0x44),*(undefined4 **)(param_1 + 0x48),
               *(undefined4 **)(param_1 + 0x4c));
  pvVar2 = (void *)FUN_5005c070(*(undefined4 **)(param_1 + 0x5c),*(undefined4 **)(param_1 + 0x5c),
                                *(undefined4 **)(param_1 + 0x58));
  FUN_50043230();
  local_4._0_1_ = 4;
  *(void **)(param_1 + 0x5c) = pvVar2;
  for (this = *(void **)(param_1 + 0x58); this != pvVar2; this = (void *)((int)this + 0x200)) {
    FUN_5005c3b0(this,0);
  }
  FUN_50106b60(*(undefined **)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  local_4._0_1_ = 3;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_4._0_1_ = 2;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_4._0_1_ = 1;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_5006af10(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_5006af10(param_1 + 4);
  ExceptionList = local_c;
  return;
}

