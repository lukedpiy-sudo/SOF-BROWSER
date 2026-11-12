// rea decompile_all
// name: FUN_200f4450
// address: 0x200f4450
// body: available
// range: 0x200f4450-0x200f4490 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f4450(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      if ((code *)param_1[4] != (code *)0x0) {
        (*(code *)param_1[4])(param_1[2] * iVar1 + param_1[5]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  FUN_200f9d32(param_1[5]);
  FUN_200f9d32(param_1);
  return;
}

