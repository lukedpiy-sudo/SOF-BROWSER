// rea decompile_all
// name: FUN_200dbf10
// address: 0x200dbf10
// body: available
// range: 0x200dbf10-0x200dc01d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dbf10(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  piVar1 = param_5;
  iVar2 = *(int *)(in_ECX + 0xa0) + 0x80;
  *param_5 = iVar2;
  iVar2 = *(int *)(in_ECX + 0x20) / iVar2;
  *param_3 = iVar2;
  if (iVar2 < 1) {
    *param_3 = 1;
  }
  *param_4 = (*(int *)(in_ECX + 0x20) - *param_5 * *param_3) / (*param_3 + 1);
  iVar2 = FUN_200c66a0();
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    param_5 = (int *)0x0;
  }
  else {
    param_5 = (int *)**(int **)(in_ECX + 0x68);
  }
  iVar2 = ((iVar2 - (*param_4 + *(int *)(in_ECX + 0xa0) >> 1)) - (int)param_5) -
          *(int *)(in_ECX + 0xc);
  if (*(int *)(in_ECX + 0x20) < iVar2) {
    iVar2 = *(int *)(in_ECX + 0x20);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_1 = iVar2;
  *param_1 = iVar2 / (*param_4 + *piVar1);
  iVar2 = *(int *)(in_ECX + 4);
  iVar3 = FUN_200c66d0();
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(in_ECX + 0x68);
  }
  iVar2 = (((iVar3 + *(int *)(iVar2 + 0x80)) - (*(int *)(in_ECX + 0xa0) >> 1)) - iVar4) -
          *(int *)(in_ECX + 0x10);
  if (*(int *)(in_ECX + 0x24) < iVar2) {
    iVar2 = *(int *)(in_ECX + 0x24);
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_2 = iVar2;
  iVar2 = (*DAT_20403640)(in_ECX + 0x8c);
  *param_2 = *param_2 / ((iVar2 + 0x20) * 3 + *(int *)(in_ECX + 0xa0));
  return;
}

