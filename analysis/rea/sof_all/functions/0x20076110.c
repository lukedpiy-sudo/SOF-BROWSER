// rea decompile_all
// name: FUN_20076110
// address: 0x20076110
// body: available
// range: 0x20076110-0x20076166 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20076110(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
joined_r0x2007611b:
  if (param_1 == param_2) {
    return;
  }
  *param_3 = *param_3 + 1;
  piVar3 = (int *)param_1[2];
  if (*(char *)((int)piVar3 + 0x11) != '\0') goto LAB_20076147;
  cVar1 = *(char *)(*piVar3 + 0x11);
  piVar2 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar2 + 0x11);
    piVar3 = piVar2;
    piVar2 = (int *)*piVar2;
  }
  goto LAB_2007615e;
LAB_20076147:
  piVar3 = (int *)param_1[1];
  if (param_1 == (int *)piVar3[2]) {
    do {
      param_1 = piVar3;
      piVar3 = (int *)param_1[1];
    } while (param_1 == (int *)piVar3[2]);
  }
  if ((int *)param_1[2] != piVar3) {
LAB_2007615e:
    param_1 = piVar3;
  }
  goto joined_r0x2007611b;
}

