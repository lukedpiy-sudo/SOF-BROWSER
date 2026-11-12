// rea decompile_all
// name: FUN_200eee10
// address: 0x200eee10
// body: available
// range: 0x200eee10-0x200eee6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200eee10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_200f44a0(*(undefined4 *)(param_1 + 0x390));
  iVar3 = 0;
  if (0 < iVar1) {
    while (iVar2 = FUN_200f44b0(*(undefined4 *)(param_1 + 0x390),iVar3),
          *(int *)(iVar2 + 0x10) != param_2) {
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
    if (iVar3 != -1) {
      return 1;
    }
  }
  return 0;
}

