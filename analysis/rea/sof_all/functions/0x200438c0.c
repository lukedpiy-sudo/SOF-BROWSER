// rea decompile_all
// name: FUN_200438c0
// address: 0x200438c0
// body: available
// range: 0x200438c0-0x2004392a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200438c0(void)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *in_ECX) {
    do {
      FUN_2002dea0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *in_ECX);
  }
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    do {
      FUN_2002dea0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  piVar1 = in_ECX + 0x36d4;
  iVar2 = 0x100;
  do {
    *piVar1 = 0;
    piVar1 = piVar1 + 0xd3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

