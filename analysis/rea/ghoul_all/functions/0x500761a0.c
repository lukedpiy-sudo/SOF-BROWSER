// rea decompile_all
// name: FUN_500761a0
// address: 0x500761a0
// body: available
// range: 0x500761a0-0x5007629f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500761a0(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (DAT_5015c508 != 0) {
    do {
      piVar1 = (int *)*DAT_5015c504;
      puVar2 = (undefined *)piVar1[2];
      if (puVar2 != (undefined *)0x0) {
        FUN_5007abf0(puVar2);
        FUN_50106b60(puVar2);
      }
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_50106b60((undefined *)piVar1);
      DAT_5015c508 = DAT_5015c508 + -1;
    } while (DAT_5015c508 != 0);
    DAT_5015c508 = 0;
  }
  iVar3 = 0;
  if (0 < DAT_5015c938) {
    puVar4 = (undefined4 *)(DAT_5015cca0 + 0x454);
    do {
      *puVar4 = 0;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x119;
    } while (iVar3 < DAT_5015c938);
  }
  for (; DAT_5015c4e8 != 0; DAT_5015c4e8 = DAT_5015c4e8 + -1) {
    piVar1 = (int *)*DAT_5015c4e4;
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
  }
  DAT_5015c4e8 = 0;
  while (DAT_5015c4fc != 0) {
    piVar1 = (int *)*DAT_5015c4f0;
    iVar3 = piVar1[7];
    if (iVar3 != 0) {
      (*DAT_5015cb68)(iVar3);
    }
    FUN_50082720(&DAT_5015c4ec,&uStack_4,piVar1);
  }
  return;
}

