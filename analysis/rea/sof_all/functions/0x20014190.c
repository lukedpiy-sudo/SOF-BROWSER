// rea decompile_all
// name: FUN_20014190
// address: 0x20014190
// body: available
// range: 0x20014190-0x2001421a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20014190(int param_1,int param_2,int param_3,int param_4)

{
  if (param_1 < DAT_20225a38) {
    DAT_20225a38 = param_1;
  }
  if (DAT_20225a40 < param_1) {
    DAT_20225a40 = param_1;
  }
  if (param_2 < DAT_20225a3c) {
    DAT_20225a3c = param_2;
  }
  if (DAT_20225a44 < param_2) {
    DAT_20225a44 = param_2;
  }
  param_4 = param_4 + param_2;
  param_3 = param_3 + param_1;
  if (param_3 < DAT_20225a38) {
    DAT_20225a38 = param_3;
  }
  if (DAT_20225a40 < param_3) {
    DAT_20225a40 = param_3;
  }
  if (param_4 < DAT_20225a3c) {
    DAT_20225a3c = param_4;
  }
  if (DAT_20225a44 < param_4) {
    DAT_20225a44 = param_4;
  }
  return;
}

