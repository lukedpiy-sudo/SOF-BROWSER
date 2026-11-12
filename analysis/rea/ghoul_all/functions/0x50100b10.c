// rea decompile_all
// name: FUN_50100b10
// address: 0x50100b10
// body: available
// range: 0x50100b10-0x50100beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50100b10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  char local_38;
  char cStack_37;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    iVar1 = 0x6000083;
  }
  (*DAT_5015cac0)(param_2,param_1 + 0x11c,param_1 + 0x128,param_3,*(undefined4 *)(param_1 + 0x160),
                  iVar1,&local_38);
  if ((cStack_37 == '\0') && (local_38 == '\0')) {
    if (fStack_34 < 0.99) {
      *(undefined4 *)(param_1 + 4) = uStack_30;
      *(undefined4 *)(param_1 + 8) = uStack_2c;
      *(undefined4 *)(param_1 + 0xc) = uStack_28;
      (*DAT_5015cb28)();
      return uStack_8;
    }
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = param_3[1];
    *(undefined4 *)(param_1 + 0xc) = param_3[2];
    (*DAT_5015cb28)(param_1);
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  (*DAT_5015cb28)(param_1);
  return DAT_5015cca0;
}

