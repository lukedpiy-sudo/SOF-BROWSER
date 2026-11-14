// rea decompile_all
// name: FUN_300190e0
// address: 0x300190e0
// body: available
// range: 0x300190e0-0x30019253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_300190e0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_300a41d0 != '\0') {
    (*DAT_300a4624)();
    (*DAT_300a4698)(DAT_3008fecc,DAT_3008fed0,DAT_3008fed4);
    (*DAT_300a43b8)(_DAT_300a410c * DAT_3008fd38,_DAT_300a4100,_DAT_300a4104,_DAT_300a4108);
    iVar2 = 0;
    do {
      iVar1 = (&DAT_300a4110)[(&DAT_3002ffa0)[iVar2]];
      if ((iVar1 != DAT_3008fc64) && ((&DAT_300a41d4)[iVar2] != '\0')) {
        if ((_DAT_300a410c != 0.0) || (_DAT_3008fcfc < 90.0)) {
          (&DAT_300a4198)[iVar2] = 0xbf800000;
          (&DAT_300a41b0)[iVar2] = 0xbf800000;
          (&DAT_300a4128)[iVar2] = 0x3f800000;
          (&DAT_300a4140)[iVar2] = 0x3f800000;
        }
        FUN_30006400(iVar1);
        FUN_3001b650();
        (*DAT_300a4710)(7);
        FUN_30019260((float)(&DAT_300a4198)[iVar2],(float)(&DAT_300a41b0)[iVar2],iVar2);
        FUN_30019260((float)(&DAT_300a4198)[iVar2],(float)(&DAT_300a4140)[iVar2],iVar2);
        FUN_30019260((float)(&DAT_300a4128)[iVar2],(float)(&DAT_300a4140)[iVar2],iVar2);
        FUN_30019260((float)(&DAT_300a4128)[iVar2],(float)(&DAT_300a41b0)[iVar2],iVar2);
        (*DAT_300a45f4)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
                    /* WARNING: Could not recover jumptable at 0x3001924d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_300a47f0)();
    return;
  }
  return;
}

