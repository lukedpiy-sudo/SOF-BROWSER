// rea decompile_all
// name: FUN_200e21a0
// address: 0x200e21a0
// body: available
// range: 0x200e21a0-0x200e21fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_200e21a0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0xa4);
  if ((iVar2 == 0) || (*(int *)(in_ECX + 0xa8) - iVar2 >> 4 == 0)) {
    pcVar3 = s________20139448;
  }
  else {
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_ECX + 0xa8) - iVar2 >> 4;
    }
    iVar2 = irand(0,iVar1 + -1);
    pcVar3 = *(char **)(iVar2 * 0x10 + *(int *)(in_ECX + 0xa4) + 4);
    if (pcVar3 == (char *)0x0) {
      return "";
    }
  }
  return pcVar3;
}

