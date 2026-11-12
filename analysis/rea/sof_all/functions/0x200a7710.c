// rea decompile_all
// name: FUN_200a7710
// address: 0x200a7710
// body: available
// range: 0x200a7710-0x200a77cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a7710(float *param_1)

{
  int in_ECX;
  
  if (0.5 <= *param_1) {
    *(float *)(in_ECX + 0x154) = param_1[1];
    *(float *)(in_ECX + 0x158) = param_1[2];
    *(float *)(in_ECX + 0x164) = param_1[3];
    *(float *)(in_ECX + 0x168) = param_1[4];
    *(float *)(in_ECX + 0x174) = *param_1;
  }
  else {
    *(float *)(in_ECX + 0x164) = param_1[1];
    *(float *)(in_ECX + 0x168) = param_1[2];
    *(float *)(in_ECX + 0x154) = param_1[3];
    *(float *)(in_ECX + 0x158) = param_1[4];
    *(float *)(in_ECX + 0x174) = 1.0 - *param_1;
  }
  *(int *)(in_ECX + 0x160) = in_ECX + 0x11c;
  *(int *)(in_ECX + 0x170) = in_ECX + 0x11c;
  *(int *)(in_ECX + 0x15c) =
       *(int *)(*(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x154) * 4) + *(int *)(in_ECX + 0x158);
  *(int *)(in_ECX + 0x16c) =
       *(int *)(*(int *)(in_ECX + 0x120) + *(int *)(in_ECX + 0x164) * 4) + *(int *)(in_ECX + 0x168);
  return;
}

