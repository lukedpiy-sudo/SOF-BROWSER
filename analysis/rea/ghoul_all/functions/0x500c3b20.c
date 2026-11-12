// rea decompile_all
// name: FUN_500c3b20
// address: 0x500c3b20
// body: available
// range: 0x500c3b20-0x500c3ba0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500c3b20(int param_1)

{
  float *pfVar1;
  undefined1 local_38 [48];
  float fStack_8;
  
  pfVar1 = (float *)(param_1 + 4);
  do {
    (*DAT_5015cac0)(pfVar1,param_1 + 0x11c,param_1 + 0x128,pfVar1,0,0x2010003,local_38);
    if (fStack_8 == 0.0) {
      return 1;
    }
    FUN_5008bb10(fStack_8,param_1,(float)param_1,(float *)&DAT_5018bf0c,pfVar1,pfVar1,100000,0,0x20,
                 0x17,0,0);
  } while (*(int *)((int)fStack_8 + 0x158) == 0);
  return 0;
}

