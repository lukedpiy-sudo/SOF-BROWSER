// rea decompile_all
// name: FUN_500ba4c0
// address: 0x500ba4c0
// body: available
// range: 0x500ba4c0-0x500ba511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500ba4c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar2 = (int *)*DAT_5015c504;
    if (piVar2 != DAT_5015c504) {
      do {
        uVar1 = FUN_5007b200((void *)piVar2[2],param_1);
        if (-1 < (int)uVar1) {
          return iVar3 << 0x10 | uVar1;
        }
        piVar2 = (int *)*piVar2;
        iVar3 = iVar3 + 1;
      } while (piVar2 != DAT_5015c504);
    }
    FUN_500adb20(&DAT_5014e384);
  }
  return 0xffffffff;
}

