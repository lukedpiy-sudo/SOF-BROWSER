// rea decompile_all
// name: FUN_200d72b0
// address: 0x200d72b0
// body: available
// range: 0x200d72b0-0x200d7367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d72b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ed64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840(param_1,param_3);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x26) = (undefined1)param_3;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x2a) = (undefined1)param_3;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 0x32) = (undefined1)param_3;
  FUN_2000a5b0(0);
  in_ECX[0x36] = &PTR_LAB_20112a38;
  in_ECX[0x37] = &PTR_LAB_20112a34;
  in_ECX[0x38] = &PTR_LAB_20112a30;
  *in_ECX = &PTR_FUN_201129e0;
  FUN_200d7060();
  ExceptionList = local_c;
  return;
}

