// rea decompile_all
// name: FUN_3000f3d0
// address: 0x3000f3d0
// body: available
// range: 0x3000f3d0-0x3000f54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000f3d0(void)

{
  (*DAT_300a4418)(0,0,DAT_3008ffc4,DAT_3008ffc8);
  (*DAT_300a421c)(0x1701);
  (*DAT_300a4410)();
  (*DAT_300a4314)(0,0,(double)DAT_3008ffc4,(double)DAT_3008ffc8,0,0,0,0x40c38780,0,0xc0c38780);
  (*DAT_300a421c)(0x1700);
  (*DAT_300a4410)();
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
  if (((byte)DAT_300a4588 & 8) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
  if (((byte)DAT_300a4588 & 2) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a445c = 0x204;
  DAT_300a4604 = 0x3d4ccccd;
  if ((DAT_300a4780 == 0x204) && (_DAT_300a42e8 == 0.05)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 4;
  if (((byte)DAT_300a4588 & 4) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
  return;
}

