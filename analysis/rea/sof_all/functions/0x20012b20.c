// rea decompile_all
// name: FUN_20012b20
// address: 0x20012b20
// body: available
// range: 0x20012b20-0x20012b9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20012b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  iVar1 = (DAT_20225e9c & 0x3ff) * 0x28;
  *(undefined4 *)(&DAT_20225ee8 + iVar1) = param_1;
  *(undefined4 *)(&DAT_20225efc + iVar1) = param_2;
  *(undefined4 *)(&DAT_20225eec + iVar1) = param_3;
  *(undefined4 *)(&DAT_20225f00 + iVar1) = param_4;
  *(undefined4 *)(&DAT_20225ef0 + iVar1) = param_5;
  *(undefined4 *)(&DAT_20225f04 + iVar1) = param_6;
  *(undefined4 *)(&DAT_20225ef4 + iVar1) = param_7;
  *(undefined4 *)(&DAT_20225f08 + iVar1) = param_8;
  *(undefined4 *)(&DAT_20225ef8 + iVar1) = param_9;
  *(undefined4 *)(&DAT_20225f0c + iVar1) = param_10;
  DAT_20225e9c = DAT_20225e9c + 1;
  return;
}

