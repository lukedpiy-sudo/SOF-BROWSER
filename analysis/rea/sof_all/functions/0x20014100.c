// rea decompile_all
// name: FUN_20014100
// address: 0x20014100
// body: available
// range: 0x20014100-0x20014182 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20014100(void)

{
  int iVar1;
  int iVar2;
  
  if (0 < DAT_20225a38) {
    DAT_20225a38 = 0;
  }
  if (DAT_20225a40 < 0) {
    DAT_20225a40 = 0;
  }
  if (0 < DAT_20225a3c) {
    DAT_20225a3c = 0;
  }
  if (DAT_20225a44 < 0) {
    DAT_20225a44 = 0;
  }
  iVar1 = DAT_20403660 + -1;
  iVar2 = DAT_2040365c + -1;
  if (iVar2 < DAT_20225a38) {
    DAT_20225a38 = iVar2;
  }
  if (DAT_20225a40 < iVar2) {
    DAT_20225a40 = iVar2;
  }
  if (iVar1 < DAT_20225a3c) {
    DAT_20225a3c = iVar1;
  }
  if (DAT_20225a44 < iVar1) {
    DAT_20225a44 = iVar1;
  }
  return;
}

