// rea decompile_all
// name: FUN_500762f0
// address: 0x500762f0
// body: available
// range: 0x500762f0-0x500763c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500762f0(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  (*DAT_5015cb48)(0x53474e4d,&local_8,4,0);
  iVar6 = 0;
  if (0 < local_8) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_4,4,0);
      piVar3 = &DAT_501451d0;
      puVar1 = PTR_FUN_501451d4;
      while (puVar1 != (undefined *)0x0) {
        if (*piVar3 == iStack_4) {
          iVar5 = (*(code *)piVar3[1])(0);
          goto LAB_50076364;
        }
        piVar4 = piVar3 + 3;
        piVar3 = piVar3 + 2;
        puVar1 = (undefined *)*piVar4;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      iVar5 = 0;
LAB_50076364:
      iVar2 = DAT_5015c4e4;
      piVar3 = *(int **)(DAT_5015c4e4 + 4);
      piVar4 = operator_new(0xc);
      *piVar4 = iVar2;
      if (piVar3 == (int *)0x0) {
        piVar3 = piVar4;
      }
      piVar4[1] = (int)piVar3;
      *(int **)(iVar2 + 4) = piVar4;
      *(int **)piVar4[1] = piVar4;
      if (piVar4 + 2 != (int *)0x0) {
        piVar4[2] = iVar5;
      }
      DAT_5015c4e8 = DAT_5015c4e8 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_8);
  }
  return;
}

