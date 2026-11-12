// rea decompile_all
// name: FUN_500eb650
// address: 0x500eb650
// body: available
// range: 0x500eb650-0x500eb69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500eb650(int param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  bVar3 = (uVar1 & 1) == 0;
  if (bVar3) {
    uVar1 = uVar1 | 1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffe;
  }
  uVar4 = (uint)bVar3;
  *(uint *)(param_1 + 0x1b8) = uVar1;
  if (*(int **)(param_1 + 0x450) != (int *)0x0) {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x450) + 0x228))(uVar4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x134))(uVar4);
    }
  }
  return;
}

