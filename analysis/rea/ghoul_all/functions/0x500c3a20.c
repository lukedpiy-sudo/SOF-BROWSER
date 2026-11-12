// rea decompile_all
// name: FUN_500c3a20
// address: 0x500c3a20
// body: available
// range: 0x500c3a20-0x500c3a86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500c3a82 to 0x500a58f0 FUN_500a58f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500c3a20(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = DAT_5015d8cc;
  piVar3 = DAT_5015cca0;
  if (0 < DAT_5015d8cc) {
    do {
      if (piVar3[0x1e] != 0) {
        FUN_500c3880(piVar3);
        iVar2 = DAT_5015d8cc;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x119;
    } while (iVar4 < iVar2);
  }
  piVar3 = DAT_5015cca0;
  for (uVar1 = iVar2 * 0x119 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  FUN_500a58f0(&DAT_5015c79c);
  return;
}

