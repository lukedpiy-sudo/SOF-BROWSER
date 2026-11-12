// rea decompile_all
// name: FUN_200473b0
// address: 0x200473b0
// body: available
// range: 0x200473b0-0x20047461 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_200473b0(int *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  while (0 < *param_1) {
    while( true ) {
      cVar1 = *(char *)*param_2;
      if (((((cVar1 != '\f') && (cVar1 != '\v')) && (cVar1 != '{')) &&
          (((cVar1 != '\t' && (cVar1 != '\r')) && ((cVar1 != '\n' && (cVar1 != ' ')))))) ||
         (*param_1 < 1)) break;
      *param_2 = (int)((char *)*param_2 + 1);
      *param_1 = *param_1 + -1;
    }
    pcVar2 = (char *)*param_2;
    if ((*pcVar2 != '/') || (pcVar2[1] != '/')) break;
    *param_2 = (int)(pcVar2 + 1);
    *param_1 = *param_1 + -1;
    *param_2 = *param_2 + 1;
    iVar3 = *param_1 + -1;
    *param_1 = iVar3;
    pcVar2 = (char *)*param_2;
    cVar1 = *pcVar2;
    while ((((cVar1 != '\f' && (cVar1 != '\v')) && (cVar1 != '\r')) &&
           ((cVar1 != '\n' && (0 < iVar3))))) {
      *param_2 = (int)(pcVar2 + 1);
      iVar3 = *param_1 + -1;
      *param_1 = iVar3;
      pcVar2 = (char *)*param_2;
      cVar1 = *pcVar2;
    }
  }
  return 0 < *param_1;
}

