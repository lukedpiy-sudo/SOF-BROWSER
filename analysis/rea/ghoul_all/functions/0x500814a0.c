// rea decompile_all
// name: FUN_500814a0
// address: 0x500814a0
// body: available
// range: 0x500814a0-0x50081517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500814a0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)**(undefined4 **)(param_1 + 0x174);
  iVar1 = *(int *)(param_1 + 0x178);
  do {
    if (iVar1 == 0) {
      return;
    }
    cVar2 = (**(code **)(*(int *)piVar3[2] + 4))(param_1);
    if (cVar2 == '\0') {
      piVar3 = (int *)*piVar3;
      if (piVar3 == *(int **)(param_1 + 0x174)) {
        return;
      }
    }
    else {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_50106b60((undefined *)piVar3);
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
      piVar3 = (int *)**(undefined4 **)(param_1 + 0x174);
    }
    iVar1 = *(int *)(param_1 + 0x178);
  } while( true );
}

