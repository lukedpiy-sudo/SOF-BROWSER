// rea decompile_all
// name: FUN_20058c00
// address: 0x20058c00
// body: available
// range: 0x20058c00-0x20058cad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20058c00(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = param_3;
  if (((*(int *)(in_ECX + 0x10) != 0) && (piVar1 = *(int **)(in_ECX + 4), param_2 == (int *)*piVar1)
      ) && (param_3 == piVar1)) {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != *(int **)(in_ECX + 8)) {
      do {
        FUN_2003c230(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_2004fa40();
        FUN_200f9f75(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 8));
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    *param_1 = **(undefined4 **)(in_ECX + 4);
    return;
  }
  while (param_2 != piVar2) {
    FUN_20075f90();
    FUN_20073590(&param_3,param_2);
  }
  *param_1 = param_2;
  return;
}

