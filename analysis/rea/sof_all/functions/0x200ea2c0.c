// rea decompile_all
// name: FUN_200ea2c0
// address: 0x200ea2c0
// body: available
// range: 0x200ea2c0-0x200ea360 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ea2c0(int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (*(char *)((int)param_1 + 0x89) == '\0') {
    *param_3 = *(int *)(*piVar1 + 0x9c) + piVar1[0x10];
    *param_4 = *(int *)(*piVar1 + 0xa0) + piVar1[0x11];
    *param_5 = piVar1[0x12];
    iVar2 = piVar1[0x13];
  }
  else {
    *param_3 = *(int *)(*piVar1 + 0x9c) + piVar1[0x10];
    *param_4 = *(int *)(*(int *)*param_1 + 0xa0) + ((int *)*param_1)[0x11];
    *param_5 = *(int *)(*(int *)*param_1 + 0xa4);
    iVar2 = *(int *)(*(int *)*param_1 + 0xa8);
  }
  *param_6 = iVar2;
  (*DAT_204035fc)(*param_3,*param_4,*param_5,iVar2);
  return;
}

