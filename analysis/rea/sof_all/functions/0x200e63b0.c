// rea decompile_all
// name: FUN_200e63b0
// address: 0x200e63b0
// body: available
// range: 0x200e63b0-0x200e6407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200e63b0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  if ((in_ECX[0x17] != 0) && (param_1 < (uint)(in_ECX[0x18] - in_ECX[0x17] >> 2))) {
    return *(int *)(in_ECX[0x17] + param_1 * 4);
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = *(int *)(*piVar1 + 0x9c);
  if (in_ECX[0x10] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX[0x10] + 0x28);
  }
  iVar3 = FUN_200c64f0();
  return (((piVar1[0x12] + piVar1[0x10]) - iVar4) + iVar2) - iVar3;
}

