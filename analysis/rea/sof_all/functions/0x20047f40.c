// rea decompile_all
// name: FUN_20047f40
// address: 0x20047f40
// body: available
// range: 0x20047f40-0x20047ff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20047f40(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  puVar2 = operator_new(200);
  if (param_1 == (char *)0x0) {
    *puVar2 = 0;
  }
  else {
    iVar4 = (int)puVar2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  if (param_2 == (char *)0x0) {
    puVar2[0x32] = 0;
  }
  else {
    iVar4 = 0x32 - (int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(puVar2 + iVar4)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '0')) {
    puVar2[0x96] = 0;
  }
  else {
    iVar4 = 0x96 - (int)param_3;
    do {
      cVar1 = *param_3;
      param_3[(int)(puVar2 + iVar4)] = cVar1;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  iVar4 = *(int *)(in_ECX + 0x2fc);
  piVar5 = *(int **)(iVar4 + 4);
  piVar3 = operator_new(0xc);
  *piVar3 = iVar4;
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar3;
  }
  piVar3[1] = (int)piVar5;
  *(int **)(iVar4 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)puVar2;
  }
  *(int *)(in_ECX + 0x300) = *(int *)(in_ECX + 0x300) + 1;
  return;
}

