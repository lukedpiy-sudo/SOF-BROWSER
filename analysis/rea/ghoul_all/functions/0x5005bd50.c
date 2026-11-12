// rea decompile_all
// name: FUN_5005bd50
// address: 0x5005bd50
// body: available
// range: 0x5005bd50-0x5005bf11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005bd50(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_501140cf;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  uVar2 = FUN_5005c070(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_1 + 8),
                       *(undefined4 **)(param_1 + 4));
  FUN_50043230();
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_5005c070(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x18),
                       *(undefined4 **)(param_1 + 0x14));
  FUN_50043230();
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_5005c070(*(undefined4 **)(param_1 + 0x28),*(undefined4 **)(param_1 + 0x28),
                       *(undefined4 **)(param_1 + 0x24));
  FUN_50043230();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_5005c070(*(undefined4 **)(param_1 + 0x38),*(undefined4 **)(param_1 + 0x38),
                       *(undefined4 **)(param_1 + 0x34));
  FUN_50043230();
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  FUN_5005a970((void *)(param_1 + 0x40),*(undefined4 **)(param_1 + 0x44),
               *(undefined4 **)(param_1 + 0x48));
  FUN_5005a970((void *)(param_1 + 0x50),*(undefined4 **)(param_1 + 0x54),
               *(undefined4 **)(param_1 + 0x58));
  pvVar1 = *(void **)(param_1 + 0x58);
  this = *(void **)(param_1 + 0x54);
  local_4 = CONCAT31(local_4._1_3_,4);
  for (; this != pvVar1; this = (void *)((int)this + 0x200)) {
    FUN_5005c3b0(this,0);
  }
  FUN_50106b60(*(undefined **)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_50043230();
  FUN_50106b60(*(undefined **)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_5006af10(param_1 + 0x10);
  FUN_5006af10(param_1);
  ExceptionList = local_c;
  return;
}

