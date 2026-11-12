// rea decompile_all
// name: FUN_20042f10
// address: 0x20042f10
// body: available
// range: 0x20042f10-0x20042f79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20042f10(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b219;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_200fb4ef(in_ECX + 0x6c08,0x6c,0x100,FUN_20041bc0);
  local_4 = 0xffffffff;
  FUN_200fb4ef(in_ECX + 8,0x6c,0x100,FUN_20041bc0);
  ExceptionList = local_c;
  return;
}

