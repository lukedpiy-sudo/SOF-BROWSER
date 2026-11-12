// rea decompile_all
// name: FUN_20058110
// address: 0x20058110
// body: available
// range: 0x20058110-0x20058196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20058110(uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int local_4;
  
  uVar1 = param_1;
  param_1 = CONCAT31(param_1._1_3_,(char)(param_1 >> 8));
  FUN_20058d50(&local_4,&param_1);
  if (local_4 == DAT_20390db4) {
    Com_Error(1,s_String_package_not_registered_fo_20138c78,uVar1 & 0xffff);
    iVar3 = 0;
  }
  else {
    iVar3 = (uVar1 & 0xff) * 0x10 + 0x1c + *(int *)(local_4 + 0x10);
    if (iVar3 == 0) {
      Com_Error(1,s_String_ID__04x_not_defined_20138c5c,uVar1 & 0xffff);
    }
  }
  puVar2 = *(undefined1 **)(iVar3 + 0xc);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_2015ee44;
  }
  return puVar2;
}

