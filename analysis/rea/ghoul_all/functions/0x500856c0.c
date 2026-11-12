// rea decompile_all
// name: FUN_500856c0
// address: 0x500856c0
// body: available
// range: 0x500856c0-0x50085710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_500856c0(int param_1,int param_2,ushort param_3)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = (short *)(param_2 + 0x5e);
  while ((psVar1[-1] != param_1 || ((param_3 != 0 && ((uint)param_3 != (int)*psVar1))))) {
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 3;
    if (3 < iVar2) {
      return 0;
    }
  }
  if (iVar2 == -1) {
    return 0;
  }
  return 1;
}

