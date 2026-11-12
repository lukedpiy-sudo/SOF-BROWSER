// rea decompile_all
// name: FUN_200fac3c
// address: 0x200fac3c
// body: available
// range: 0x200fac3c-0x200facaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200fac3c(uint param_1)

{
  int iVar1;
  uint dwBytes;
  
  if (DAT_20408b68 == 3) {
    if ((param_1 <= DAT_20408b84) && (iVar1 = FUN_200fd407(param_1), iVar1 != 0)) {
      return;
    }
  }
  else if (DAT_20408b68 == 2) {
    if (param_1 == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = param_1 + 0xf & 0xfffffff0;
    }
    if ((dwBytes <= DAT_2015d28c) && (iVar1 = FUN_200fdeaa(dwBytes >> 4), iVar1 != 0)) {
      return;
    }
    goto LAB_200fac9f;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_200fac9f:
  HeapAlloc(DAT_20408b64,0,dwBytes);
  return;
}

