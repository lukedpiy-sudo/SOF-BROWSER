// rea decompile_all
// name: FUN_50085530
// address: 0x50085530
// body: available
// range: 0x50085530-0x50085582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50085530(undefined2 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  psVar2 = (short *)(param_2 + 0x5c);
  do {
    if (*psVar2 == 0) {
      iVar1 = param_2 + iVar3 * 6;
      *(undefined2 *)(iVar1 + 0x5c) = param_1;
      *(undefined2 *)(iVar1 + 0x5e) = param_3;
      lVar4 = __ftol();
      *(short *)(param_2 + (iVar3 * 3 + 0x30) * 2) = (short)lVar4;
      return;
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 3;
  } while (iVar3 < 4);
  return;
}

