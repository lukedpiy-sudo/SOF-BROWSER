// rea decompile_all
// name: FUN_20068ef0
// address: 0x20068ef0
// body: available
// range: 0x20068ef0-0x20068f74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20068ef0(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = *(char **)(param_1 + 4);
  if (*pcVar2 == '\0') {
    iVar3 = (*DAT_204058ac)(&param_1,1,1,*(undefined4 *)(pcVar2 + 4));
    pcVar2[2] = pcVar2[2] | iVar3 != 1;
    *(bool *)param_2 = (char)param_1 == '\x01';
    return;
  }
  if (*(char **)(pcVar2 + 0x20) < *(char **)(pcVar2 + 0x18) + 1) {
    pcVar2[2] = '\x01';
    *(char **)(pcVar2 + 0x18) = *(char **)(pcVar2 + 0x20);
    *(bool *)param_2 = (char)param_1 == '\x01';
    return;
  }
  cVar1 = **(char **)(pcVar2 + 0x18);
  *(int *)(pcVar2 + 0x18) = *(int *)(pcVar2 + 0x18) + 1;
  *(bool *)param_2 = cVar1 == '\x01';
  return;
}

