// rea decompile_all
// name: FUN_500570e0
// address: 0x500570e0
// body: available
// range: 0x500570e0-0x5005714e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_500570e0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  puVar6 = (undefined4 *)&DAT_50159478;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar3 = 0;
  cVar2 = DAT_5015cd20;
  if (DAT_5015cd20 != '\0') {
    do {
      if ((cVar2 == '/') || (cVar2 == '\\')) {
        iVar3 = iVar4;
      }
      cVar2 = (&DAT_5015cd21)[iVar4];
      iVar4 = iVar4 + 1;
    } while (cVar2 != '\0');
    if (iVar3 != 0) {
      iVar4 = 0;
      puVar5 = &DAT_5015cd21 + iVar3;
      cVar2 = (&DAT_5015cd21)[iVar3];
      while (cVar2 != '\0') {
        (&DAT_50159478)[iVar4] = cVar2;
        pcVar1 = puVar5 + 1;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
        cVar2 = *pcVar1;
      }
      (&DAT_50159478)[iVar4] = 0;
      return &DAT_50159478;
    }
  }
  return &DAT_5015cd20;
}

