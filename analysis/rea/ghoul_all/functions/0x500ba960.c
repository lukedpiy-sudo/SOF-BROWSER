// rea decompile_all
// name: FUN_500ba960
// address: 0x500ba960
// body: available
// range: 0x500ba960-0x500ba9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500ba960(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0xffffffff) {
    return 0;
  }
  iVar2 = (int)param_1 >> 0x10;
  puVar1 = (undefined4 *)*DAT_5015c504;
  if (0 < iVar2) {
    do {
      puVar1 = (undefined4 *)*puVar1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_5007b230((void *)puVar1[2],param_1 & 0xffff);
  if (iVar2 == 0) {
    FUN_500adb20(&DAT_5014e410);
  }
  return iVar2;
}

