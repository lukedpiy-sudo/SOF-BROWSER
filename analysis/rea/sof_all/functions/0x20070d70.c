// rea decompile_all
// name: FUN_20070d70
// address: 0x20070d70
// body: available
// range: 0x20070d70-0x20070e72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20070d70(undefined2 *param_1)

{
  int local_40 [2];
  undefined1 local_38;
  undefined1 local_37;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24 [4];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010bdc0;
  local_c = ExceptionList;
  local_37 = param_1._0_1_;
  local_38 = param_1._0_1_;
  local_2c = 0;
  ExceptionList = &local_c;
  FUN_20084e00();
  local_24[0] = *param_1;
  local_4 = 0;
  FUN_20073d60(&local_38);
  local_4._0_1_ = 1;
  FUN_20074960(local_40,local_24);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_20073ea0(&param_1,*local_1c,local_1c);
  FUN_200f9f75(local_1c);
  local_1c = (undefined4 *)0x0;
  local_10 = 0;
  FUN_200f9f75(local_18);
  local_18 = 0;
  local_4 = 0xffffffff;
  FUN_20073ea0(&param_1,*local_34,local_34);
  FUN_200f9f75(local_34);
  local_34 = (undefined4 *)0x0;
  local_28 = 0;
  FUN_200f9f75(local_30);
  ExceptionList = local_c;
  return local_40[0] + 0x10;
}

