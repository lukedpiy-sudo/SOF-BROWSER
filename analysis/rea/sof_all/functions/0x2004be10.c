// rea decompile_all
// name: FUN_2004be10
// address: 0x2004be10
// body: available
// range: 0x2004be10-0x2004be9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004be10(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_1 != -1) && ((DAT_201c1f04 != 3 || ((&DAT_2013535d)[param_1 * 0x10] == '\0')))) {
    if ((&DAT_20365298)[param_1] != 0) {
      Z_Free((&DAT_20365298)[param_1]);
      (&DAT_20365298)[param_1] = 0;
    }
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = Z_Malloc(~uVar3);
    iVar4 = iVar2 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[iVar4] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)(iVar2 + (~uVar3 - 1)) = 0;
    (&DAT_20365298)[param_1] = iVar2;
    DAT_20364d70 = 1;
  }
  return;
}

