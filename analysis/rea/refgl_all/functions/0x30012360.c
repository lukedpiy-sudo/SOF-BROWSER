// rea decompile_all
// name: FUN_30012360
// address: 0x30012360
// body: available
// range: 0x30012360-0x3001242a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30012360(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  DAT_300a46e0 = DAT_300a46e0 | 8;
  if (((byte)DAT_300a4588 & 8) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a43c8)(1);
  (*DAT_300a446c)(0x1d00);
  (*DAT_300a4414)();
  (*DAT_300a45fc)(0xde1);
  (*DAT_300a421c)(0x1701);
  (*DAT_300a4624)();
  (*DAT_300a4410)();
  FUN_3000dd40(33.75084377109428,1.3333,SUB84((double)*(float *)(DAT_3008fc80 + 0x18),0),
               (int)((ulonglong)(double)*(float *)(DAT_3008fc80 + 0x18) >> 0x20),
               SUB84((double)*(float *)(DAT_3008ffa8 + 0x18),0),
               (int)((ulonglong)(double)*(float *)(DAT_3008ffa8 + 0x18) >> 0x20));
  uVar1 = 0x1700;
  (*DAT_300a421c)();
  uVar2 = CONCAT44(uVar1,&DAT_3009000c);
  uVar1 = 0xc11;
  (*DAT_300a4430)();
  (*DAT_300a44ec)(0xc11,uVar1,uVar2);
  return;
}

