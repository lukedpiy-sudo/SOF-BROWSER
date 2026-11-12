// rea decompile_all
// name: FUN_500bd6d0
// address: 0x500bd6d0
// body: available
// range: 0x500bd6d0-0x500bd72d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd6d0(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = (char *)(*DAT_5015cb38)(uVar4,0x2fe);
  iVar5 = 0;
  if (0 < (int)uVar4) {
    do {
      if ((param_1[iVar5] == '\\') && (iVar5 < (int)(uVar4 - 1))) {
        iVar1 = iVar5 + 1;
        iVar5 = iVar5 + 1;
        if (param_1[iVar1] == 'n') {
          *pcVar3 = '\n';
        }
        else {
          *pcVar3 = '\\';
        }
      }
      else {
        *pcVar3 = param_1[iVar5];
      }
      pcVar3 = pcVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  return;
}

