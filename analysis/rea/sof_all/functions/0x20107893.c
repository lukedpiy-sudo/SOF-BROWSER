// rea decompile_all
// name: FUN_20107893
// address: 0x20107893
// body: available
// range: 0x20107893-0x201078cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20107893(void)

{
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_20 [4];
  byte bStack_1c;
  
  FUN_201078cc(in_ECX);
  __CxxThrowException_8(local_20,&DAT_2011a068);
  FUN_20107856();
  if ((bStack_1c & 1) != 0) {
    FUN_200f9f75(extraout_ECX);
  }
  return extraout_ECX;
}

