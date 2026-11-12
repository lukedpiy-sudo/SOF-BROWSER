// rea decompile_all
// name: FUN_2006fd90
// address: 0x2006fd90
// body: available
// range: 0x2006fd90-0x20070067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006fd90(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *in_ECX;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25 [5];
  undefined4 *local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010bc90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_20112110;
  FUN_20071720(&local_2a,0,&local_2b);
  *(undefined2 *)(in_ECX + 6) = 1;
  local_4 = 0;
  FUN_20071720(&local_28,0,&local_29);
  *(undefined2 *)(in_ECX + 0xc) = 1;
  local_4._0_1_ = 1;
  FUN_20083db0(&local_2b,0,&local_2a);
  local_20 = in_ECX + 0x15;
  local_4._0_1_ = 2;
  FUN_2009df30(&local_28);
  local_4._0_1_ = 3;
  FUN_2009df30(&local_29);
  local_4._0_1_ = 4;
  FUN_2006f600(&local_2b,&local_2a);
  local_4._0_1_ = 5;
  FUN_20070070(&DAT_2015ee44,&local_27);
  local_4._0_1_ = 6;
  FUN_20069fd0(local_1c);
  local_4._0_1_ = 5;
  FUN_2000a5b0(1);
  local_20 = in_ECX + 0x22;
  local_4._0_1_ = 7;
  FUN_2009df30(&local_26);
  local_4._0_1_ = 8;
  FUN_2009df30(&local_27);
  local_4._0_1_ = 9;
  FUN_2006f600(&local_29,&local_28);
  local_4._0_1_ = 10;
  FUN_20070070(&DAT_2015ee44,&local_2a);
  local_4._0_1_ = 0xb;
  FUN_20069fd0(local_1c);
  local_4._0_1_ = 10;
  FUN_2000a5b0(1);
  local_4._0_1_ = 0xc;
  FUN_20083db0(local_25,0,&local_2b);
  local_4._0_1_ = 0xd;
  FUN_20083db0(&local_27,1,&local_26);
  local_4._0_1_ = 0xe;
  FUN_20083f70(&local_28,0,local_25);
  local_4._0_1_ = 0xf;
  FUN_20083f70(&local_27,0,&local_26);
  local_4._0_1_ = 0x10;
  FUN_20083f70(&local_28,0,local_25);
  local_4._0_1_ = 0x11;
  FUN_20083db0(&local_27,0,&local_26);
  in_ECX[0x4f] = 0;
  *(undefined1 *)(in_ECX + 0x4e) = param_2;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x53] = 0;
  *(undefined1 *)(in_ECX + 0x52) = param_2;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x57] = 0;
  *(undefined1 *)(in_ECX + 0x56) = param_2;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  local_4._0_1_ = 0x15;
  FUN_2009df30(local_25);
  local_4._0_1_ = 0x16;
  FUN_20071470();
  in_ECX[0x14] = param_1;
  *(undefined1 *)((int)in_ECX + 0x35) = param_3;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  *in_ECX = &PTR_FUN_20112048;
  *(undefined1 *)((int)in_ECX + 0x37) = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  *(undefined1 *)(in_ECX + 0xd) = param_2;
  *(undefined1 *)((int)in_ECX + 0x36) = param_4;
  FUN_20070fc0();
  ExceptionList = local_c;
  return;
}

