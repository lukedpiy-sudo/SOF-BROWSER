// rea decompile_all
// name: FUN_2009ce00
// address: 0x2009ce00
// body: available
// range: 0x2009ce00-0x2009cf59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009ce00(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010d0c3;
  local_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &local_c;
  FUN_2008c730(*(undefined4 *)(in_ECX + 0xc4),*(undefined4 *)(in_ECX + 200));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc4));
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  local_4._0_1_ = 5;
  FUN_2008c730(*(undefined4 *)(in_ECX + 0xac),*(undefined4 *)(in_ECX + 0xb0));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xac));
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  local_4._0_1_ = 4;
  FUN_2008c730(*(undefined4 *)(in_ECX + 0x94),*(undefined4 *)(in_ECX + 0x98));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x94));
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x7c));
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 100));
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x44));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  iVar1 = *(int *)(in_ECX + 0x28);
  iVar2 = *(int *)(in_ECX + 0x24);
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xd8) {
    FUN_2009f850(0);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x24));
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = local_c;
  return;
}

