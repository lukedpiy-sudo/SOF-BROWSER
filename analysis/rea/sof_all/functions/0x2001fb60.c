// rea decompile_all
// name: FUN_2001fb60
// address: 0x2001fb60
// body: available
// range: 0x2001fb60-0x2001fbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_2001fb60(int param_1)

{
  int iVar1;
  
  if (*(float *)(DAT_20249618 + 0x18) != 0.0) {
    return (char *)(param_1 * 0xd2ac + -0xd010 + DAT_20396eec);
  }
  if (0 < param_1) {
    iVar1 = FUN_200f9e9e(&DAT_201e9c8c);
    if (param_1 <= iVar1) {
      return &DAT_20221dc0 + param_1 * 0x15c;
    }
  }
  return s____________2012179c;
}

