// rea decompile_all
// name: FUN_50068be0
// address: 0x50068be0
// body: available
// range: 0x50068be0-0x50068ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x50068cb8) */

void __fastcall FUN_50068be0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piStack_4;
  
  piStack_4 = param_1;
  if (1.0 < *(float *)(DAT_5015d9a8 + 0x18)) {
    FUN_50068dc0(param_1,2);
  }
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
  }
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar1 = (undefined4 *)param_1[0x32];
  while (puVar1 != (undefined4 *)0x0) {
    param_1[0x32] = puVar1[1];
    (**(code **)*puVar1)(1);
    puVar1 = (undefined4 *)param_1[0x32];
  }
  iVar3 = 0x28;
  piVar4 = param_1;
  do {
    piVar4 = piVar4 + 1;
    piVar2 = *(int **)(*piVar4 + 0x14c);
    FUN_5006b050((void *)(*piVar4 + 0x148),&piStack_4,(int *)*piVar2,piVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)param_1[0x2a];
  if (piVar4 != (int *)param_1[0x2b]) {
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)param_1[0x2b]);
  }
  param_1[0x2b] = param_1[0x2a];
  return;
}

