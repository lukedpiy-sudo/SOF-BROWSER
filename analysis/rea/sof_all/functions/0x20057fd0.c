// rea decompile_all
// name: FUN_20057fd0
// address: 0x20057fd0
// body: available
// range: 0x20057fd0-0x2005806c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20057fd0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_8;
  int local_4;
  
  uVar2 = param_1;
  param_1 = CONCAT31(param_1._1_3_,(char)(param_1 >> 8));
  local_8 = FUN_20059330(&param_1);
  if ((local_8 == DAT_20390db4) || ((byte)param_1 < *(byte *)(local_8 + 0xc))) {
    local_4 = DAT_20390db4;
    piVar3 = &local_4;
  }
  else {
    piVar3 = &local_8;
  }
  if (*piVar3 == DAT_20390db4) {
    Com_Error(1,s_String_package_not_registered_fo_20138c78,uVar2 & 0xffff);
    return 0;
  }
  iVar1 = (uVar2 & 0xff) * 0x10 + 0x1c + *(int *)(*piVar3 + 0x10);
  if (iVar1 == 0) {
    Com_Error(1,s_String_ID__04x_not_defined_20138c5c,uVar2 & 0xffff);
  }
  return iVar1;
}

