// rea decompile_all
// name: FUN_2008aa90
// address: 0x2008aa90
// body: available
// range: 0x2008aa90-0x2008aca6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008aa90(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010c4fd;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_2008c530(&local_1c,**(undefined4 **)(in_ECX + 0x1b8),*(undefined4 **)(in_ECX + 0x1b8));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x1b8));
  *(undefined4 *)(in_ECX + 0x1b8) = 0;
  *(undefined4 *)(in_ECX + 0x1bc) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x150);
  local_4._0_1_ = 4;
  puVar2 = (undefined4 *)FUN_20083550(&local_1c);
  FUN_20083c00(local_14,*puVar2,uVar1);
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x150));
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined4 *)(in_ECX + 0x15c) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x154));
  *(undefined4 *)(in_ECX + 0x154) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x13c);
  local_4._0_1_ = 3;
  puVar2 = (undefined4 *)FUN_20083550(local_14);
  FUN_20083770(&local_1c,*puVar2,uVar1);
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x13c));
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x148) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x140));
  *(undefined4 *)(in_ECX + 0x140) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0x110);
  local_4._0_1_ = 2;
  puVar2 = (undefined4 *)FUN_20083550(local_14);
  FUN_2008c680(&local_1c,*puVar2,uVar1);
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x110));
  *(undefined4 *)(in_ECX + 0x110) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x114));
  *(undefined4 *)(in_ECX + 0x114) = 0;
  local_4._0_1_ = 1;
  FUN_2008c5d0(local_14,**(undefined4 **)(in_ECX + 0xfc),*(undefined4 **)(in_ECX + 0xfc));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xfc));
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x100));
  *(undefined4 *)(in_ECX + 0x100) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  puVar2 = *(undefined4 **)(in_ECX + 0xf0);
  local_1c = (undefined4 *)*puVar2;
  while (local_1c != puVar2) {
    puVar3 = (undefined4 *)FUN_2008d0b0(local_14,0);
    FUN_200ba400(local_10,*puVar3);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xf0));
  local_18 = in_ECX + 4;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  local_4 = 7;
  FUN_20081fb0();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_20081e90();
  local_4 = 0xffffffff;
  FUN_20092110();
  ExceptionList = local_c;
  return;
}

