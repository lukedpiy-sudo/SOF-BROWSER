// rea decompile_all
// name: FUN_200914f0
// address: 0x200914f0
// body: available
// range: 0x200914f0-0x2009155b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200914f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2008f730(param_1,param_2);
  local_4 = 0;
  *in_ECX = &PTR_LAB_201124e0;
  FUN_20068ef0(param_1,in_ECX + 0x3c);
  uVar1 = FUN_200950b0(param_1);
  in_ECX[0x3b] = uVar1;
  ExceptionList = local_c;
  return;
}

