// rea decompile_all
// name: FUN_30008600
// address: 0x30008600
// body: available
// range: 0x30008600-0x30008656 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30008600(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
joined_r0x3000860b:
  if (param_1 == param_2) {
    return;
  }
  *param_3 = *param_3 + 1;
  piVar3 = (int *)param_1[2];
  if (*(char *)((int)piVar3 + 0x21) != '\0') goto LAB_30008637;
  cVar1 = *(char *)(*piVar3 + 0x21);
  piVar2 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar2 + 0x21);
    piVar3 = piVar2;
    piVar2 = (int *)*piVar2;
  }
  goto LAB_3000864e;
LAB_30008637:
  piVar3 = (int *)param_1[1];
  if (param_1 == (int *)piVar3[2]) {
    do {
      param_1 = piVar3;
      piVar3 = (int *)param_1[1];
    } while (param_1 == (int *)piVar3[2]);
  }
  if ((int *)param_1[2] != piVar3) {
LAB_3000864e:
    param_1 = piVar3;
  }
  goto joined_r0x3000860b;
}

