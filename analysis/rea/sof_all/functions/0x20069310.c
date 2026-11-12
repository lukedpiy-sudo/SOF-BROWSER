// rea decompile_all
// name: FUN_20069310
// address: 0x20069310
// body: available
// range: 0x20069310-0x20069339 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20069310(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)*param_1;
  iVar2 = FUN_200facde(&stack0x00000008,1,1,*(undefined4 *)(pbVar1 + 4));
  *pbVar1 = *pbVar1 | iVar2 != 1;
  return;
}

