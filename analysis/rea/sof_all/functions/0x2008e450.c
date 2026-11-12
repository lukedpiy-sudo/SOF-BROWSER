// rea decompile_all
// name: FUN_2008e450
// address: 0x2008e450
// body: available
// range: 0x2008e450-0x2008e4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2008e450(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 extraout_var;
  uint in_ECX;
  uint local_4;
  
  puVar1 = param_1;
  local_4 = in_ECX & 0xffffff00;
  *param_1 = 0;
  uVar2 = FUN_200be390(&param_1,1);
  uVar3 = (undefined3)((uint)uVar2 >> 8);
  if ((char)param_1 != '\0') {
    FUN_200be390(&local_4,2);
    FUN_200be390(puVar1,(local_4 & 0xff) * 4 + 4);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,*(undefined1 *)(in_ECX + 0x14));
}

