// rea decompile_all
// name: FUN_20012980
// address: 0x20012980
// body: available
// range: 0x20012980-0x20012a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20012980(void)

{
  int iVar1;
  int local_4;
  
  if (((*(float *)(DAT_20249f44 + 0x18) != 2.0) && (*(float *)(DAT_20225a60 + 0x18) == 0.0)) &&
     (*(float *)(DAT_2022fef4 + 0x18) == 0.0)) {
    iVar1 = 0;
    if (0 < DAT_201c23c0) {
      do {
        FUN_20012b20(0x41f00000,0x7f000040,0,0xffffffff,0,0xffffffff,0,0xffffffff,0,0xffffffff);
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_201c23c0);
    }
    iVar1 = 0;
    if (0 < DAT_201e7f64) {
      do {
        FUN_20012b20(0x41f00000,0x7f0000df,0,0xffffffff,0,0xffffffff,0,0xffffffff,0,0xffffffff);
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_201e7f64);
    }
    local_4 = (DAT_201c1f0c - *(int *)(&DAT_201e7bb4 + (DAT_201c23e8 & 0x3f) * 4)) / 0x1e;
    if (0x1e < local_4) {
      local_4 = 0x1e;
    }
    FUN_20012b20((float)local_4,0x7f0000d0,0,0xffffffff,0,0xffffffff,0,0xffffffff,0,0xffffffff);
  }
  return;
}

