// rea decompile_all
// name: FUN_50085590
// address: 0x50085590
// body: available
// range: 0x50085590-0x500855e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50085590(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  psVar2 = (short *)(param_2 + 0x5e);
  while ((psVar2[-1] != param_1 || ((param_3 != 0 && ((uint)param_3 != (int)*psVar2))))) {
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 3;
    if (3 < iVar1) {
      return;
    }
  }
  if (iVar1 != -1) {
    *(undefined2 *)(param_2 + 0x5c + iVar1 * 6) = 0;
  }
  return;
}

