// rea decompile_all
// name: FUN_200f08d0
// address: 0x200f08d0
// body: available
// range: 0x200f08d0-0x200f094a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f08d0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 != 0) {
    param_2 = param_2 + 1;
    do {
      switch(param_2[-1]) {
      case 2:
        *param_1 = *param_2;
        break;
      case 3:
        if ((*param_2 == 0) || (param_2[1] == 0)) {
          param_1[6] = 0;
        }
        else {
          iVar2 = FUN_200f9e9e(param_2[1]);
          param_1[6] = iVar2;
        }
        break;
      case 4:
        param_1[1] = *param_2;
        break;
      case 5:
        param_1[2] = *param_2;
        break;
      case 7:
        param_1[3] = *param_2;
        break;
      case 8:
        param_1[4] = *param_2;
        break;
      case 9:
        param_1[5] = *param_2;
      }
      piVar1 = param_2 + 2;
      param_2 = param_2 + 3;
    } while (*piVar1 != 0);
  }
  return;
}

