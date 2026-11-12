// rea decompile_all
// name: FUN_500b4a40
// address: 0x500b4a40
// body: available
// range: 0x500b4a40-0x500b4a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500b4a40(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(iVar1 + 8) - iVar2 >> 2;
    }
    if (((param_2 <= uVar3) && (0 < (int)param_2)) &&
       (iVar1 = *(int *)(iVar2 + -4 + param_2 * 4), iVar1 != 0)) {
      return *(undefined4 *)(iVar1 + 0x1c);
    }
  }
  return 0;
}

