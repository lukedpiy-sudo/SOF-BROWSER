// rea decompile_all
// name: FUN_500ba400
// address: 0x500ba400
// body: available
// range: 0x500ba400-0x500ba45d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500ba400(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (0 < param_3) {
      do {
        uVar1 = (param_1 - *(int *)(param_2 + iVar2 * 8)) / param_4;
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 4 + iVar2 * 8))) {
          return iVar2 << 0x10 | uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    FUN_500adb20(&DAT_5014e35c);
  }
  return 0xffffffff;
}

