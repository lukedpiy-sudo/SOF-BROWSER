// rea decompile_all
// name: FUN_2006b1f0
// address: 0x2006b1f0
// body: available
// range: 0x2006b1f0-0x2006b41c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006b1f0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010b92f;
  local_c = ExceptionList;
  local_4 = 0xd;
  ExceptionList = &local_c;
  FUN_2006eee0();
  local_4._0_1_ = 0xc;
  FUN_2006ee20();
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xe0));
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  local_4._0_1_ = 10;
  FUN_20092110();
  iVar1 = *(int *)(in_ECX + 0xc4);
  iVar2 = *(int *)(in_ECX + 0xc0);
  local_4._0_1_ = 9;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x14) {
    FUN_200765a0(0);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc0));
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  local_4._0_1_ = 8;
  FUN_20092110();
  iVar1 = *(int *)(in_ECX + 0xa4);
  iVar2 = *(int *)(in_ECX + 0xa0);
  local_4._0_1_ = 7;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x14) {
    FUN_200765a0(0);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xa0));
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  local_4._0_1_ = 6;
  FUN_20092110();
  iVar1 = *(int *)(in_ECX + 0x84);
  iVar2 = *(int *)(in_ECX + 0x80);
  local_4._0_1_ = 5;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_20076580(0);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x80));
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  local_4._0_1_ = 4;
  FUN_2006ecf0();
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x5c));
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  local_4._0_1_ = 2;
  FUN_2008c730(*(undefined4 *)(in_ECX + 0x4c),*(undefined4 *)(in_ECX + 0x50));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  local_4._0_1_ = 1;
  FUN_200716d0(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_20092110();
  local_4 = 0xffffffff;
  FUN_2008c730(*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  ExceptionList = local_c;
  return;
}

