// rea decompile_all
// name: FUN_2001e360
// address: 0x2001e360
// body: available
// range: 0x2001e360-0x2001e3a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_2001e360(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x10) + 4;
  if (*(int *)(param_1 + 0xc) < iVar1) {
    *(int *)(param_1 + 0x10) = iVar1;
    return (float10)-1.0;
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 4));
  *(int *)(param_1 + 0x10) = iVar1;
  return (float10)fVar2;
}

