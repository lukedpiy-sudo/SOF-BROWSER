// rea decompile_all
// name: FUN_20070310
// address: 0x20070310
// body: available
// range: 0x20070310-0x20070564 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20070310(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010bd9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20112048;
  local_4 = 0xf;
  FUN_2006cda0();
  local_4._0_1_ = 0xe;
  FUN_20092110();
  FUN_200f9f75(in_ECX[0x5b]);
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  FUN_200f9f75(in_ECX[0x57]);
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  local_4._0_1_ = 0xb;
  FUN_2008c730(in_ECX[0x53],in_ECX[0x54]);
  FUN_200f9f75(in_ECX[0x53]);
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  local_4._0_1_ = 10;
  FUN_2008c730(in_ECX[0x4f],in_ECX[0x50]);
  FUN_200f9f75(in_ECX[0x4f]);
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  local_4._0_1_ = 9;
  FUN_2006eee0();
  local_4._0_1_ = 8;
  FUN_20070e80();
  local_4._0_1_ = 7;
  FUN_20070e80();
  local_4._0_1_ = 6;
  FUN_20070e80();
  local_4._0_1_ = 5;
  FUN_200709b0();
  local_4._0_1_ = 4;
  FUN_200706d0();
  local_14 = in_ECX + 0x22;
  local_4._0_1_ = 0x11;
  FUN_20070570();
  FUN_20092110();
  local_4._0_1_ = 3;
  FUN_2008c730(in_ECX[0x23],in_ECX[0x24]);
  FUN_200f9f75(in_ECX[0x23]);
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  local_14 = in_ECX + 0x15;
  local_4._0_1_ = 0x13;
  FUN_20070570();
  FUN_20092110();
  FUN_20092110();
  local_4._0_1_ = 1;
  FUN_20070620();
  uVar1 = in_ECX[8];
  local_4 = (uint)local_4._1_3_ << 8;
  puVar2 = (undefined4 *)FUN_20083550(&local_14);
  FUN_20071d80(local_10,*puVar2,uVar1);
  FUN_200f9f75(in_ECX[8]);
  in_ECX[8] = 0;
  in_ECX[0xb] = 0;
  FUN_200f9f75(in_ECX[9]);
  in_ECX[9] = 0;
  local_4 = 0xffffffff;
  FUN_20071d80(local_10,*(undefined4 *)in_ECX[2],(undefined4 *)in_ECX[2]);
  FUN_200f9f75(in_ECX[2]);
  in_ECX[2] = 0;
  in_ECX[5] = 0;
  FUN_200f9f75(in_ECX[3]);
  in_ECX[3] = 0;
  ExceptionList = local_c;
  return;
}

