// rea decompile_all
// name: FUN_20058800
// address: 0x20058800
// body: available
// range: 0x20058800-0x200588d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20058800(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_405;
  int local_404;
  undefined1 local_400 [1024];
  
  local_405 = (undefined1)(param_3 >> 8);
  FUN_20058d50(&local_404,&local_405);
  if (local_404 == DAT_20390db4) {
    Com_Error(1,s_String_package_not_registered_fo_20138c78,param_3 & 0xffff);
    iVar2 = 0;
  }
  else {
    iVar2 = (param_3 & 0xff) * 0x10 + 0x1c + *(int *)(local_404 + 0x10);
    if (iVar2 == 0) {
      Com_Error(1,s_String_ID__04x_not_defined_20138c5c,param_3 & 0xffff);
    }
  }
  *param_1 = 0;
  if (*(int *)(iVar2 + 0xc) == 0) {
    return 0;
  }
  FUN_20056b90(local_400,0x400,&stack0x00000010);
  uVar1 = FUN_20056ca0(param_1,param_2,local_400);
  return uVar1;
}

