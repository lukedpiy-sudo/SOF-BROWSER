// rea decompile_all
// name: FUN_200eee70
// address: 0x200eee70
// body: available
// range: 0x200eee70-0x200eeed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200eee70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_200f9430(0x158,0x7f,FUN_200ef110,&LAB_200ef150,FUN_200eeee0);
  *(int *)(param_1 + 0x37c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_200f4400(0x158,0,0);
  *(int *)(param_1 + 0x380) = iVar1;
  if (iVar1 == 0) {
    FUN_200f9510(*(undefined4 *)(param_1 + 0x37c));
    return 0;
  }
  return 1;
}

