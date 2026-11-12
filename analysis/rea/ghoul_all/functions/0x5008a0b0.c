// rea decompile_all
// name: FUN_5008a0b0
// address: 0x5008a0b0
// body: available
// range: 0x5008a0b0-0x5008a1f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5008a0b0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  char local_5c8 [79];
  char acStack_579 [1401];
  
  acStack_579[1] = 0;
  iVar7 = 0;
  lVar11 = __ftol();
  if ((int)lVar11 < 1) {
    return;
  }
  iVar6 = DAT_5015cca0 + 0x4d8;
  do {
    if (*(int *)(iVar6 + 4) != 0) {
      FUN_50107654(local_5c8,(byte *)s__02d__02d__4d__3d__s_s_50146bb0);
      uVar2 = 0xffffffff;
      pcVar8 = local_5c8;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar8 = acStack_579;
      uVar3 = 0xffffffff;
      do {
        pcVar8 = pcVar8 + 1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
      } while (*pcVar8 != '\0');
      uVar4 = 0xffffffff;
      if (0x546 < ~uVar2 + (~uVar3 - 2)) {
        pcVar8 = acStack_579;
        break;
      }
      pcVar8 = local_5c8;
      do {
        pcVar10 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar8 = acStack_579 + 1;
      do {
        pcVar9 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar4;
      pcVar10 = pcVar9 + -1;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x464;
    lVar11 = __ftol();
    if ((int)lVar11 <= iVar7) {
      return;
    }
  } while( true );
  while (uVar4 = uVar4 - 1, *pcVar8 != '\0') {
    pcVar8 = pcVar8 + 1;
    if (uVar4 == 0) break;
  }
  FUN_50107654(acStack_579 + ~uVar4,(byte *)s_And_more____50146ba0);
  return;
}

