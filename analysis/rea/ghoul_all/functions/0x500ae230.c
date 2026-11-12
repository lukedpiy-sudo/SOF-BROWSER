// rea decompile_all
// name: FUN_500ae230
// address: 0x500ae230
// body: available
// range: 0x500ae230-0x500ae337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500ae230(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_104 [31];
  int aiStack_88 [33];
  int local_4;
  
  piVar7 = local_104;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  iVar6 = 0;
  iVar4 = local_4;
  if (0 < DAT_5015d8c8) {
    piVar7 = (int *)(DAT_5015d6c4 + 0x308);
    piVar5 = (int *)(DAT_5015cca0 + 0x4d8);
    do {
      if ((piVar5[1] != 0) && (*(int *)(*piVar5 + 800) == 0)) {
        iVar1 = *piVar7;
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            if (aiStack_88[iVar3 + 1] < iVar1) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar4);
        }
        for (; iVar3 < iVar4; iVar4 = iVar4 + -1) {
          local_104[iVar4] = local_104[iVar4 + -1];
          aiStack_88[iVar4 + 1] = aiStack_88[iVar4];
        }
        local_104[iVar3] = iVar6;
        aiStack_88[iVar3 + 1] = iVar1;
        iVar4 = local_4 + 1;
        local_4 = iVar4;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x119;
      piVar7 = piVar7 + 0x180;
    } while (iVar6 < DAT_5015d8c8);
  }
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = DAT_5015cca0 + (local_104[iVar6] + 1) * 0x464;
      cVar2 = (char)iVar6;
      iVar6 = iVar6 + 1;
      *(char *)(*(int *)(iVar1 + 0x74) + 0xc4) = cVar2 + '\x01';
      *(char *)(*(int *)(iVar1 + 0x74) + 0xc5) = (char)iVar4;
    } while (iVar6 < iVar4);
  }
  return;
}

