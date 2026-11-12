// rea decompile_all
// name: FUN_50089bb0
// address: 0x50089bb0
// body: available
// range: 0x50089bb0-0x50089d44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50089bb0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  char local_940 [64];
  int local_900 [256];
  char local_500 [1280];
  
  puVar6 = (undefined4 *)0x0;
  iVar7 = 1;
  lVar12 = __ftol();
  if (1 < (int)lVar12) {
    piVar9 = (int *)(DAT_5015cca0 + 0x4d8);
    do {
      if ((piVar9[1] != 0) && (*(int *)(*piVar9 + 0x2f8) != 0)) {
        local_900[(int)puVar6] = iVar7;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 0x119;
      lVar12 = __ftol();
    } while (iVar7 < (int)lVar12);
  }
  FUN_50107a3c(local_900,puVar6,4,&LAB_50089b50);
  iVar7 = 0;
  local_500[0] = '\0';
  if (0 < (int)puVar6) {
    do {
      FUN_500fe320((byte *)(*(int *)(DAT_5015cca0 + 0x74 + local_900[iVar7] * 0x464) + 0xcc),
                   &DAT_50146b64);
      FUN_500fe2b0();
      uVar2 = 0xffffffff;
      pcVar8 = local_940;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar8 = local_500;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      if (0x49c < ~uVar2 + (~uVar3 - 2)) {
        pcVar8 = local_500;
        goto code_r0x50089d06;
      }
      pcVar8 = local_940;
      do {
        pcVar11 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar8 = local_500;
      do {
        pcVar10 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      pcVar8 = pcVar11 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      iVar7 = iVar7 + 1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
    } while (iVar7 < (int)puVar6);
  }
  goto LAB_50089d19;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
    if (cVar1 == '\0') break;
code_r0x50089d06:
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
  }
  *(undefined4 *)(pcVar11 + -1) = DAT_50146b50;
  pcVar11[3] = DAT_50146b54;
LAB_50089d19:
  (*DAT_5015ca28)(param_1,2,s__s__i_players_50146b40,local_500,puVar6);
  return;
}

