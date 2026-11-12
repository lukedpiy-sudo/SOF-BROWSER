// rea decompile_all
// name: FUN_50059410
// address: 0x50059410
// body: available
// range: 0x50059410-0x50059486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50059410(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)((int)this + 0x9c);
  piVar4 = (int *)*piVar1;
  if (piVar4 != piVar1) {
    while (piVar4[2] != param_1) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar1) {
        return;
      }
    }
    piVar1 = *(int **)((int)this + 0x9c);
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      if (piVar3[2] == piVar4[2]) {
        piVar2 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_50106b60((undefined *)piVar3);
        *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + -1;
        piVar3 = piVar2;
      }
      else {
        piVar3 = (int *)*piVar3;
      }
    }
  }
  return;
}

