// rea decompile_all
// name: FUN_2009ae50
// address: 0x2009ae50
// body: available
// range: 0x2009ae50-0x2009aea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009ae50(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_4 == 0) && (-2 < param_2)) {
    piVar1 = *(int **)(param_3 + 0xb8);
    param_1 = (piVar1[1] + 1) * param_1;
    iVar2 = piVar1[3];
    if (*(int *)(iVar2 + 8 + (param_1 + param_2) * 8) == *piVar1) {
      return *(undefined4 *)(iVar2 + 0xc + (param_1 + param_2) * 8);
    }
    if (*(int *)(iVar2 + param_1 * 8) == *piVar1) {
      uVar3 = *(undefined4 *)(iVar2 + 4 + param_1 * 8);
    }
  }
  return uVar3;
}

