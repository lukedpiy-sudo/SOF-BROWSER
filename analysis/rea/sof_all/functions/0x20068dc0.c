// rea decompile_all
// name: FUN_20068dc0
// address: 0x20068dc0
// body: available
// range: 0x20068dc0-0x20068e25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20068dc0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (*pcVar1 == '\0') {
    iVar2 = (*DAT_204058ac)(&param_1,4,1,*(undefined4 *)(pcVar1 + 4));
    pcVar1[2] = pcVar1[2] | iVar2 != 1;
    return param_1;
  }
  if (*(int **)(pcVar1 + 0x20) < *(int **)(pcVar1 + 0x18) + 1) {
    pcVar1[2] = '\x01';
    *(int **)(pcVar1 + 0x18) = *(int **)(pcVar1 + 0x20);
    return param_1;
  }
  iVar2 = **(int **)(pcVar1 + 0x18);
  *(int *)(pcVar1 + 0x18) = *(int *)(pcVar1 + 0x18) + 4;
  return iVar2;
}

