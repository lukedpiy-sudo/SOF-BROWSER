// rea decompile_all
// name: FUN_500adb60
// address: 0x500adb60
// body: available
// range: 0x500adb60-0x500adbad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500adb60(int *param_1,byte *param_2)

{
  int iVar1;
  undefined1 auStack_400 [1024];
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xc4))();
    if (iVar1 != 0) {
      FUN_501082c2(auStack_400,param_2,(undefined4 *)&stack0x0000000c);
      (*DAT_5015ca24)(&DAT_50142f40,auStack_400);
    }
  }
  return;
}

