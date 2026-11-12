// rea decompile_all
// name: FUN_200275c0
// address: 0x200275c0
// body: available
// range: 0x200275c0-0x20027628 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200275c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *param_2;
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  iVar2 = param_2[3];
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
    }
  }
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_200f9f75(param_2);
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  *param_1 = iVar1;
  return;
}

