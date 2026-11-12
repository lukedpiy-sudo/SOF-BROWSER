// rea decompile_all
// name: FUN_2004d390
// address: 0x2004d390
// body: available
// range: 0x2004d390-0x2004d3fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004d390(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000020;
  
  puVar2 = param_2;
  for (iVar1 = 0x2010; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&stack0x0000000c;
  puVar3 = param_2 + 5;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[1] = param_1;
  param_2[10] = in_stack_00000020;
  param_2[3] = DAT_20390d38;
  param_2[4] = DAT_20390d38;
  param_2[0xb] = 0;
  param_2[0xf] = 1;
  FUN_2001e700(param_2 + 0x12,param_2 + 0x17,DAT_20136a0c + -0x10);
  *(undefined1 *)(param_2 + 0x12) = 1;
  return;
}

