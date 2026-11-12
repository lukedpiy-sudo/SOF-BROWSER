// rea decompile_all
// name: FUN_5005a400
// address: 0x5005a400
// body: available
// range: 0x5005a400-0x5005a5f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5005a400(void *this,int *param_1)

{
  undefined1 local_e1;
  undefined1 local_e0 [4];
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [4];
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined4 local_80;
  int local_7c [2];
  int local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114045;
  local_c = ExceptionList;
  local_dc = (undefined4 *)0x0;
  local_d8 = (undefined4 *)0x0;
  local_d4 = 0;
  local_cc = (undefined4 *)0x0;
  local_c8 = (undefined4 *)0x0;
  local_c4 = 0;
  ExceptionList = &local_c;
  FUN_5005a370(local_c0,&local_e1);
  FUN_5005a370(local_b0,&local_e1);
  FUN_5005a370(local_a0,&local_e1);
  FUN_5005a370(local_90,&local_e1);
  local_80 = 0;
  local_4 = 0;
  local_74 = *param_1;
  FUN_5005a6c0(local_70,local_e0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_5005aa30(this,local_7c,&local_74);
  FUN_5005a390((int)local_70);
  FUN_5005a390((int)local_60);
  FUN_5005a390((int)local_50);
  FUN_5005a390((int)local_40);
  FUN_5005a390((int)local_30);
  FUN_5005a390((int)local_20);
  FUN_5006af10((int)local_20);
  FUN_5006af10((int)local_30);
  FUN_5006af10((int)local_40);
  FUN_5006af10((int)local_50);
  FUN_5006af10((int)local_60);
  FUN_5006af10((int)local_70);
  local_4 = 7;
  FUN_5005a970(local_e0,local_dc,local_d8);
  FUN_5005a970(local_d0,local_cc,local_c8);
  FUN_5005a390((int)local_c0);
  FUN_5005a390((int)local_b0);
  FUN_5005a390((int)local_a0);
  FUN_5005a390((int)local_90);
  FUN_5006af10((int)local_90);
  FUN_5006af10((int)local_a0);
  FUN_5006af10((int)local_b0);
  FUN_5006af10((int)local_c0);
  FUN_5006af10((int)local_d0);
  FUN_5006af10((int)local_e0);
  ExceptionList = local_c;
  return local_7c[0] + 0x10;
}

