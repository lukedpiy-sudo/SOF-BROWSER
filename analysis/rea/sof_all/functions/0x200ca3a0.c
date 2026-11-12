// rea decompile_all
// name: FUN_200ca3a0
// address: 0x200ca3a0
// body: available
// range: 0x200ca3a0-0x200ca3c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200ca3a0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "";
  if (*(char **)(in_ECX + 0x50) != (char *)0x0) {
    pcVar3 = *(char **)(in_ECX + 0x50);
  }
  iVar2 = -1;
  pcVar4 = pcVar3;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return -(uint)(iVar2 != -2) & (uint)pcVar3;
}

