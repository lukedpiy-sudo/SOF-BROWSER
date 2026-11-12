// rea decompile_all
// name: FUN_2004d2f0
// address: 0x2004d2f0
// body: available
// range: 0x2004d2f0-0x2004d38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004d2f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 **ppuVar5;
  undefined1 *apuStack_1c [4];
  undefined1 *puStack_c;
  
  FUN_200fa720();
  puStack_c = &stack0x00004034;
  apuStack_1c[2] = &DAT_2036bef0;
  apuStack_1c[1] = (undefined1 *)0x2004d316;
  FUN_200fb04d();
  iVar2 = -1;
  pcVar4 = &DAT_2036bef0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  apuStack_1c[0] = &stack0x00000014;
  apuStack_1c[1] = (undefined1 *)DAT_20136a0c;
  FUN_2001e700();
  FUN_2001cbf0();
  FUN_2001e7b0();
  puVar3 = (undefined4 *)&stack0x0000401c;
  ppuVar5 = apuStack_1c;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar5 = (undefined1 *)*puVar3;
    puVar3 = puVar3 + 1;
    ppuVar5 = ppuVar5 + 1;
  }
  FUN_2004e9a0();
  return;
}

