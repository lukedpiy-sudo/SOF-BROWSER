// rea decompile_all
// name: FUN_500af6d0
// address: 0x500af6d0
// body: available
// range: 0x500af6d0-0x500af718 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500af6d0(int param_1)

{
  int iVar1;
  
  if (0x1f < *(int *)(param_1 + 0x3bc)) {
    iVar1 = *(int *)(param_1 + 0x3bc) + 0x487;
    *(code **)(param_1 + 0x2c4) = FUN_500af660;
    if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
      (*DAT_5015cb00)(iVar1,&DAT_50144224);
      return;
    }
    (*DAT_5015cb00)(iVar1,&DAT_50133b5c);
  }
  return;
}

