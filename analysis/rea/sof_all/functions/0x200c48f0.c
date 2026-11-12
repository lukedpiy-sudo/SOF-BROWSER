// rea decompile_all
// name: FUN_200c48f0
// address: 0x200c48f0
// body: available
// range: 0x200c48f0-0x200c491e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c48f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)**(undefined4 **)(param_1 + 4);
  FUN_200c4760(*(undefined4 *)(iVar1 + 0x9c),
               *(int *)(iVar1 + 0xa0) - (*(undefined4 **)(param_1 + 4))[0x20],0);
  return;
}

