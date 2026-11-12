// rea decompile_all
// name: FUN_500bcf10
// address: 0x500bcf10
// body: available
// range: 0x500bcf10-0x500bcfd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bcf10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_500bcd50();
  iVar2 = DAT_5015c938;
  uVar3 = DAT_5015cca0;
  if (DAT_5015cca0 < DAT_5015cca0 + DAT_5015c938 * 0x464) {
    do {
      if ((((*(int *)(uVar3 + 0x78) != 0) && (*(char **)(uVar3 + 0x1e8) != (char *)0x0)) &&
          (iVar1 = __strcmpi(*(char **)(uVar3 + 0x1e8),&DAT_5015911c), iVar2 = DAT_5015c938,
          iVar1 != 0)) &&
         ((iVar1 = FUN_500bce60(uVar3,&DAT_50175d18,DAT_5018891c), iVar2 = DAT_5015c938, iVar1 == 0
          && (iVar1 = FUN_500bce60(uVar3,&DAT_5017c118,DAT_50188920), iVar2 = DAT_5015c938,
             iVar1 == 0)))) {
        FUN_500bce60(uVar3,&DAT_50182518,DAT_50188924);
        iVar2 = DAT_5015c938;
      }
      uVar3 = uVar3 + 0x464;
    } while (uVar3 < DAT_5015cca0 + iVar2 * 0x464);
  }
  return;
}

