// rea decompile_all
// name: FUN_50084270
// address: 0x50084270
// body: available
// range: 0x50084270-0x50084367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_50084270(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            char param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,uint param_9)

{
  uint uVar1;
  
  if (((param_5 != ' ') || (DAT_5015c514 == '\0')) &&
     ((uVar1 = param_9 & 0xff, DAT_5015c558 != uVar1 ||
      (DAT_5015ccdc < _DAT_5015c510 + 0.1 == (DAT_5015ccdc == _DAT_5015c510 + 0.1))))) {
    _DAT_5015c510 = DAT_5015ccdc;
    DAT_5015c558 = uVar1;
    (*DAT_5015ca70)(1);
    (*DAT_5015ca70)(0x12);
    (*DAT_5015ca84)(param_1);
    (*DAT_5015ca88)(param_2);
    (*DAT_5015ca70)(param_3);
    (*DAT_5015ca70)(param_4);
    (*DAT_5015ca70)(param_5);
    (*DAT_5015ca70)(param_6);
    (*DAT_5015ca70)(param_7);
    (*DAT_5015ca70)(param_8);
    (*DAT_5015ca70)(uVar1);
    (*DAT_5015ca60)(param_1,1);
  }
  return;
}

