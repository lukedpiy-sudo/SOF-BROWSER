// rea decompile_all
// name: FUN_20090fd0
// address: 0x20090fd0
// body: available
// range: 0x20090fd0-0x20091036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20090fd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2008f730(param_1,param_2);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x41) = 1;
  *(undefined1 *)((int)in_ECX + 0x105) = 0;
  *in_ECX = &PTR_LAB_201124b8;
  in_ECX[0x3a] = 0;
  FUN_200674d0(param_1);
  ExceptionList = local_c;
  return;
}

