// rea decompile_all
// name: FUN_2002fb90
// address: 0x2002fb90
// body: available
// range: 0x2002fb90-0x2002fc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_2002fb90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    piVar2 = &DAT_2026aea0;
    iVar1 = 0;
    do {
      if (*piVar2 == param_1) goto LAB_2002fbf2;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xb;
    } while (iVar1 < 0x20);
  }
  piVar2 = &DAT_2026aea0;
  iVar1 = 0;
  while( true ) {
    if ((float)piVar2[8] < (float)DAT_201c1f1c) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xb;
    if (0x1f < iVar1) {
      puVar3 = &DAT_2026aea0;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      DAT_2026aea0 = param_1;
      return &DAT_2026aea0;
    }
  }
LAB_2002fbf2:
  piVar4 = piVar2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *piVar2 = param_1;
  return piVar2;
}

