// rea decompile_all
// name: FUN_2001e690
// address: 0x2001e690
// body: available
// range: 0x2001e690-0x2001e6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001e690(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  if (*(int *)(param_1 + 0xc) < iVar1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10));
  }
  *(int *)(param_1 + 0x10) = iVar1;
  if (0xf9 < (int)uVar2) {
    Com_Error(1,s_MSF_ReadDir__out_of_range_201213a8);
  }
  *param_2 = (&DAT_20120648)[uVar2 * 3];
  param_2[1] = (&DAT_2012064c)[uVar2 * 3];
  param_2[2] = (&DAT_20120650)[uVar2 * 3];
  return;
}

