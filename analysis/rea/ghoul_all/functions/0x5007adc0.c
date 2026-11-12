// rea decompile_all
// name: FUN_5007adc0
// address: 0x5007adc0
// body: available
// range: 0x5007adc0-0x5007ae88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007adc0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_4;
  
  iVar5 = (*DAT_5015cb64)(param_1,(int *)(param_1 + 0x104),0);
  *(int *)(param_1 + 0x110) = iVar5;
  if (iVar5 == -1) {
    FUN_500adb20(&DAT_501456ec);
    FUN_500adb20(&DAT_501456d0);
    FUN_500adb20(&DAT_501456ec);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x114);
  iVar4 = *(int *)(param_1 + 0x104);
  uVar1 = *(undefined1 *)(iVar4 + iVar5);
  *(int *)(param_1 + 0x114) = iVar5 + 1;
  uVar2 = *(undefined1 *)(iVar5 + 1 + iVar4);
  *(int *)(param_1 + 0x114) = iVar5 + 2;
  uVar3 = *(undefined1 *)(iVar5 + 2 + iVar4);
  *(int *)(param_1 + 0x114) = iVar5 + 3;
  uStack_4 = CONCAT13(*(undefined1 *)(iVar5 + 3 + iVar4),CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
  *(int *)(param_1 + 0x114) = iVar5 + 4;
  if (uStack_4 != 3) {
    FUN_500adb20(&DAT_501456ec);
    FUN_500adb20(&DAT_5014569c);
    FUN_500adb20(&DAT_501456ec);
    return;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}

