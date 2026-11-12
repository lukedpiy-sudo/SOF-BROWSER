// rea decompile_all
// name: FUN_20091bb0
// address: 0x20091bb0
// body: available
// range: 0x20091bb0-0x20091d08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20091bb0(void)

{
  undefined4 *in_ECX;
  undefined1 local_12;
  undefined1 local_11 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010cb43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_2011242c;
  local_4 = 0;
  FUN_200920f0();
  local_4._0_1_ = 1;
  FUN_200920f0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_20092130();
  *in_ECX = &PTR_FUN_20112584;
  in_ECX[0x21] = 0;
  *(undefined1 *)(in_ECX + 0x20) = local_12;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  *(undefined1 *)((int)in_ECX + 0x79) = 0;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x26) = local_12;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  *(undefined1 *)((int)in_ECX + 0x91) = 0;
  in_ECX[0x2d] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = local_12;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  *(undefined1 *)((int)in_ECX + 0xa9) = 0;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  FUN_200920f0();
  local_4._0_1_ = 7;
  FUN_2009df30(&local_12);
  *(undefined1 *)((int)in_ECX + 0xe1) = 0;
  local_4._0_1_ = 8;
  FUN_2009df30(local_11);
  *(undefined1 *)((int)in_ECX + 0xf9) = 0;
  local_4._0_1_ = 9;
  FUN_200920f0();
  local_4._0_1_ = 10;
  FUN_200920f0();
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_2009df30(local_11);
  *(undefined1 *)((int)in_ECX + 0x151) = 0;
  *in_ECX = &PTR_FUN_201125b4;
  ExceptionList = local_c;
  return;
}

