// rea decompile_all
// name: FUN_2007cf40
// address: 0x2007cf40
// body: available
// range: 0x2007cf40-0x2007cf9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007cf40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xf0);
  piVar2 = (int *)*piVar1;
  if (piVar2 != piVar1) {
    while (piVar2[3] != param_1) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar1) {
        return;
      }
    }
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_200f9f75(piVar2);
    *(int *)(in_ECX + 0xf4) = *(int *)(in_ECX + 0xf4) + -1;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined2 *)(param_1 + 0x1cc) = 0;
  }
  return;
}

