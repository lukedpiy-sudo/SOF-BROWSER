// rea decompile_all
// name: FUN_20023470
// address: 0x20023470
// body: available
// range: 0x20023470-0x200234c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20023470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < DAT_20130e04) {
    pcVar4 = &DAT_2024b2f9;
    do {
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(iVar2 + param_1) == *pcVar4) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      if (iVar2 == iVar1) {
        *(char *)(iVar1 + param_1) = *pcVar4;
        iVar1 = iVar1 + 1;
        if (param_2 <= iVar1) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x102;
    } while (iVar3 < DAT_20130e04);
  }
  return;
}

