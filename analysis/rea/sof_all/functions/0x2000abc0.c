// rea decompile_all
// name: FUN_2000abc0
// address: 0x2000abc0
// body: available
// range: 0x2000abc0-0x2000abfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000abc0(void)

{
  int iVar1;
  int local_4;
  
  iVar1 = DAT_20367ec8 + -8;
  local_4 = iVar1;
  FUN_20025300(&local_4,4,DAT_201ca51c);
  FUN_20025300(DAT_20367ec0 + 8,iVar1,DAT_201ca51c);
  return;
}

