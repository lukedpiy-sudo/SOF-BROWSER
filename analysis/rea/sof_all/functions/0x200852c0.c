// rea decompile_all
// name: FUN_200852c0
// address: 0x200852c0
// body: available
// range: 0x200852c0-0x200852f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200852c0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 != *(int **)(in_ECX + 8)) {
    do {
      FUN_200852c0(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_200f9f75(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 8));
  }
  return;
}

