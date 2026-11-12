// rea decompile_all
// name: FUN_500b0ba0
// address: 0x500b0ba0
// body: available
// range: 0x500b0ba0-0x500b0caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b0ba0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_5015d1ec == 0) {
    iVar3 = 1;
    iVar5 = iVar3;
  }
  else {
    iVar3 = (DAT_5015d1ec - DAT_5015cca0) / 0x464;
    iVar5 = iVar3;
  }
  do {
    iVar3 = iVar3 + 1;
    if (DAT_5015d8c8 < iVar3) {
      iVar3 = 1;
    }
    DAT_5015d1ec = DAT_5015cca0 + iVar3 * 0x464;
    if (*(int *)(DAT_5015cca0 + 0x78 + iVar3 * 0x464) != 0) goto LAB_500b0c0a;
  } while (iVar3 != iVar5);
  DAT_5015d1ec = 0;
LAB_500b0c0a:
  iVar5 = DAT_5015cca0;
  iVar3 = DAT_5015d8c8;
  iVar4 = DAT_5015d8c8;
  if (DAT_5015d1f0 != 0) {
    iVar3 = (DAT_5015d1f0 - DAT_5015cca0) / 0x464;
    iVar4 = iVar3;
  }
  while( true ) {
    iVar3 = iVar3 + 1;
    if (DAT_5015c938 <= iVar3) {
      iVar3 = DAT_5015d8c8;
    }
    iVar1 = iVar5 + iVar3 * 0x464;
    if ((((*(int *)(iVar5 + 0x78 + iVar3 * 0x464) != 0) && (0 < *(int *)(iVar1 + 0x2ec))) &&
        ((*(byte *)(iVar1 + 0x1a0) & 0x20) == 0)) &&
       ((*(int **)(iVar1 + 0x450) != (int *)0x0 &&
        (iVar2 = (**(code **)(**(int **)(iVar1 + 0x450) + 0x44))(), iVar5 = DAT_5015cca0, iVar2 != 0
        )))) break;
    if (iVar3 == iVar4) {
      DAT_5015d1f0 = 0;
      return;
    }
  }
  DAT_5015d1f0 = iVar1;
  return;
}

