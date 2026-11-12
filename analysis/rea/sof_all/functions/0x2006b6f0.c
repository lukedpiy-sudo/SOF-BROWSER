// rea decompile_all
// name: FUN_2006b6f0
// address: 0x2006b6f0
// body: available
// range: 0x2006b6f0-0x2006b74b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2006b6f0(short param_1)

{
  int *piVar1;
  int in_ECX;
  int local_8;
  int local_4;
  
  local_8 = FUN_20074e70(&param_1);
  if ((local_8 == *(int *)(in_ECX + 0x128)) || (param_1 < *(short *)(local_8 + 0xc))) {
    local_4 = *(int *)(in_ECX + 0x128);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 == *(int *)(in_ECX + 0x128)) {
    return 0;
  }
  return *(undefined4 *)(*piVar1 + 0x10);
}

