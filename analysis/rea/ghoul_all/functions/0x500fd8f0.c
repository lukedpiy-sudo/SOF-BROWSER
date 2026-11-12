// rea decompile_all
// name: FUN_500fd8f0
// address: 0x500fd8f0
// body: available
// range: 0x500fd8f0-0x500fd947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500fd8f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 0x18);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    do {
      (**(code **)(*(int *)piVar4[4] + 4))();
      piVar3 = (int *)piVar4[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar2 = (int *)*piVar3;
        while (piVar4 = piVar3, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        piVar3 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar3[2]) {
          do {
            piVar4 = piVar3;
            piVar3 = (int *)piVar4[1];
          } while (piVar4 == (int *)piVar3[2]);
        }
        if ((int *)piVar4[2] != piVar3) {
          piVar4 = piVar3;
        }
      }
    } while (piVar4 != *(int **)(param_1 + 0x18));
  }
  return;
}

