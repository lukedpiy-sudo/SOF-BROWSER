// rea decompile_all
// name: FUN_200a7040
// address: 0x200a7040
// body: available
// range: 0x200a7040-0x200a7086 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a7040(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc4) + param_1 * 4);
  *param_2 = *(undefined4 *)(iVar1 + 0xec);
  param_2[1] = *(undefined4 *)(iVar1 + 0xf0);
  param_2[2] = *(undefined4 *)(iVar1 + 0xf4);
  param_2[3] = *(undefined4 *)(iVar1 + 0xf8);
  param_2[4] = *(undefined4 *)(iVar1 + 0xfc);
  param_2[5] = *(undefined4 *)(iVar1 + 0x100);
  *(undefined1 *)(param_2 + 6) = *(undefined1 *)(iVar1 + 0x104);
  *(undefined1 *)((int)param_2 + 0x19) = *(undefined1 *)(iVar1 + 0x105);
  return;
}

