// rea decompile_all
// name: FUN_2005d2d0
// address: 0x2005d2d0
// body: available
// range: 0x2005d2d0-0x2005d311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005d2d0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_2001e290(param_1);
  if (iVar2 < 0) {
    pcVar3 = (char *)FUN_2001e3b0(param_1);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *param_2 = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    return;
  }
  pcVar3 = (&PTR_DAT_201217b0)[iVar2];
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *param_2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

