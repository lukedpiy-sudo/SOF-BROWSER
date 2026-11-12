// rea decompile_all
// name: FUN_200ab2b0
// address: 0x200ab2b0
// body: available
// range: 0x200ab2b0-0x200ab357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_200ab2b0(void)

{
  int in_ECX;
  undefined4 local_14;
  
  if (*(int *)(in_ECX + 0x108) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x108) + 8);
  }
  FUN_200fabac(&DAT_20403ed0,s_Mat_Blocks__d_cPos__d_cTex__d_cN_20157b48,
               *(int *)(in_ECX + 0x34) - *(int *)(in_ECX + 0x30),
               *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34),
               *(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x38),
               *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c),
               *(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40),
               *(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44),
               *(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48),
               *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c),
               *(int *)(in_ECX + 0x54) - *(int *)(in_ECX + 0x50),
               *(int *)(in_ECX + 0xa4) - *(int *)(in_ECX + 0x54),local_14);
  return &DAT_20403ed0;
}

