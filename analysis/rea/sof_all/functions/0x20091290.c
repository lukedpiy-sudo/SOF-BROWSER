// rea decompile_all
// name: FUN_20091290
// address: 0x20091290
// body: available
// range: 0x20091290-0x20091364 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20091290(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  undefined1 local_16;
  undefined1 local_15 [5];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c891;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2008f730(param_1,param_2);
  local_4 = 0;
  *in_ECX = &PTR_LAB_201124cc;
  pvVar2 = operator_new(0xb0);
  local_4._0_1_ = 1;
  local_10 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    FUN_2009df30(&param_2);
    *(undefined1 *)((int)pvVar2 + 1) = 0;
    local_4._0_1_ = 2;
    FUN_2009df30(&param_1);
    *(undefined1 *)((int)pvVar2 + 0x21) = 0;
    local_4._0_1_ = 3;
    FUN_2009df30(&local_16);
    *(undefined1 *)((int)pvVar2 + 0x41) = 0;
    local_4._0_1_ = 4;
    FUN_2009df30(local_15);
    *(undefined1 *)((int)pvVar2 + 0x61) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x3a] = pvVar2;
  FUN_20067de0(uVar1);
  ExceptionList = local_c;
  return;
}

