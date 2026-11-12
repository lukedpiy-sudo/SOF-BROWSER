// rea decompile_all
// name: FUN_200ff1db
// address: 0x200ff1db
// body: available
// range: 0x200ff1db-0x200ff276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200ff1db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_20113550;
  puStack_10 = &LAB_20101b04;
  local_14 = ExceptionList;
  DAT_20408430 = param_1;
  DAT_20408434 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_200fa047(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_200ff2a1();
  ExceptionList = local_14;
  return uVar1;
}

