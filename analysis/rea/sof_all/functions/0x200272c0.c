// rea decompile_all
// name: FUN_200272c0
// address: 0x200272c0
// body: available
// range: 0x200272c0-0x20027321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200272c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (param_1 != *(int **)(in_ECX + 8)) {
    do {
      FUN_200272c0(param_1[2]);
      iVar1 = param_1[4];
      piVar2 = (int *)*param_1;
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + -1) == '\0') {
          FUN_200f9f75((char *)(iVar1 + -1));
        }
        else {
          *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
        }
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      FUN_200f9f75(param_1);
      param_1 = piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 8));
  }
  return;
}

