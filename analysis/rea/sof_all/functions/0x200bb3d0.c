// rea decompile_all
// name: FUN_200bb3d0
// address: 0x200bb3d0
// body: available
// range: 0x200bb3d0-0x200bb427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bb3d0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *in_ECX;
  
  *in_ECX = *param_3;
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 4);
  *(undefined4 **)(in_ECX + 4) = puVar2;
  for (iVar1 = param_1; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_2;
    }
    puVar2 = puVar2 + 1;
  }
  iVar1 = *(int *)(in_ECX + 4) + param_1 * 4;
  *(int *)(in_ECX + 8) = iVar1;
  *(int *)(in_ECX + 0xc) = iVar1;
  return;
}

