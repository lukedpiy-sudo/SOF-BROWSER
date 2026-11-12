// rea decompile_all
// name: FUN_201077ab
// address: 0x201077ab
// body: available
// range: 0x201077ab-0x201077e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_201077ab(void)

{
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_20 [4];
  byte bStack_1c;
  
  FUN_201077e4(in_ECX);
  __CxxThrowException_8(local_20,&DAT_20119f40);
  FUN_2010776e();
  if ((bStack_1c & 1) != 0) {
    FUN_200f9f75(extraout_ECX);
  }
  return extraout_ECX;
}

