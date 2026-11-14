// rea decompile_all
// name: FUN_3000e410
// address: 0x3000e410
// body: available
// range: 0x3000e410-0x3000e5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000e410(void)

{
  if (_DAT_3008fca8 != 0.0) {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
    if (((byte)DAT_300a4588 & 4) == 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
    if (((byte)DAT_300a4588 & 8) == 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a44ec)(0xde1);
    DAT_300a46e0 = DAT_300a46e0 | 1;
    if (((byte)DAT_300a4588 & 1) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a4410)();
    (*DAT_300a43b8)(0xc2b40000,0x3f800000,0,0);
    (*DAT_300a43b8)(0x42b40000,0,0,0x3f800000);
    (*DAT_300a46dc)(&DAT_3008fc9c);
    FUN_3001b650();
    (*DAT_300a4710)(7);
    (*DAT_300a47c4)(0x417e6666,0x42c80000,0x42c80000);
    (*DAT_300a47c4)(0x417e6666,0xc2c80000,0x42c80000);
    (*DAT_300a47c4)(0x417e6666,0xc2c80000,0xc2c80000);
    (*DAT_300a47c4)(0x417e6666,0x42c80000,0xc2c80000);
    (*DAT_300a45f4)();
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
    if (((byte)DAT_300a4588 & 1) == 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 4;
    if (((byte)DAT_300a4588 & 4) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 8;
    if (((byte)DAT_300a4588 & 8) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_3000d880(DAT_3008fcd4,0xde1);
  }
  return;
}

