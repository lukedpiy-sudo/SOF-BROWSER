// rea decompile_all
// name: FUN_20063040
// address: 0x20063040
// body: available
// range: 0x20063040-0x20063133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20063040(void)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(DAT_203fec94 + 0x5258) != 0) {
    iVar2 = *(int *)(DAT_203fec94 + 0x525c) - *(int *)(DAT_203fec94 + 0x5260);
    if (0x400 < iVar2) {
      iVar2 = 0x400;
    }
    FUN_2001cb00(DAT_203fec94 + 0x52b4,0x13);
    FUN_2001cb70(DAT_203fec94 + 0x52b4,iVar2);
    *(int *)(DAT_203fec94 + 0x5260) = *(int *)(DAT_203fec94 + 0x5260) + iVar2;
    iVar1 = *(int *)(DAT_203fec94 + 0x525c);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    FUN_2001cb00(DAT_203fec94 + 0x52b4,(*(int *)(DAT_203fec94 + 0x5260) * 100) / iVar1);
    FUN_2001e7b0(DAT_203fec94 + 0x52b4,
                 (*(int *)(DAT_203fec94 + 0x5260) + *(int *)(DAT_203fec94 + 0x5258)) - iVar2,iVar2);
    if (*(int *)(DAT_203fec94 + 0x5260) == *(int *)(DAT_203fec94 + 0x525c)) {
      FS_FreeFile(*(undefined4 *)(DAT_203fec94 + 0x5258));
      *(undefined4 *)(DAT_203fec94 + 0x5258) = 0;
    }
  }
  return;
}

