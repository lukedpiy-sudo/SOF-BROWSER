// rea decompile_all
// name: FUN_30014be0
// address: 0x30014be0
// body: available
// range: 0x30014be0-0x30014c22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30014be0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = iVar1 + 8;
  (*DAT_300a45a4)(*(undefined4 *)(param_1 + 4));
  (*DAT_300a4710)(6);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      (*DAT_300a4520)(iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < *(int *)(iVar1 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x30014c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_300a45f4)();
  return;
}

