// rea decompile_all
// name: FUN_50076430
// address: 0x50076430
// body: available
// range: 0x50076430-0x50076560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50076430(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  (*DAT_5015cb48)(0x53435652,&local_8,4,0);
  if (local_8 != 3) {
    (*DAT_5015cb10)(s_LoadScripts____Expecting_version_50145568,3,local_8);
  }
  iVar3 = 0;
  if (0 < DAT_5015c938) {
    puVar6 = (undefined4 *)(DAT_5015cca0 + 0x454);
    do {
      *puVar6 = 0;
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 0x119;
    } while (iVar3 < DAT_5015c938);
  }
  (*DAT_5015cb48)(0x5343535a,&iStack_c,4,0);
  iVar3 = 0;
  if (0 < iStack_c) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_4,4,0);
      piVar4 = &DAT_501451d0;
      puVar1 = PTR_FUN_501451d4;
      while (puVar1 != (undefined *)0x0) {
        if (*piVar4 == iStack_4) {
          iVar7 = (*(code *)piVar4[1])(0);
          goto LAB_50076504;
        }
        piVar5 = piVar4 + 3;
        piVar4 = piVar4 + 2;
        puVar1 = (undefined *)*piVar5;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      iVar7 = 0;
LAB_50076504:
      iVar2 = DAT_5015c504;
      piVar4 = *(int **)(DAT_5015c504 + 4);
      piVar5 = operator_new(0xc);
      *piVar5 = iVar2;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar5;
      }
      piVar5[1] = (int)piVar4;
      *(int **)(iVar2 + 4) = piVar5;
      *(int **)piVar5[1] = piVar5;
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = iVar7;
      }
      DAT_5015c508 = DAT_5015c508 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_c);
  }
  return;
}

