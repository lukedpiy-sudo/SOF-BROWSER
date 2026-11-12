// rea decompile_all
// name: FUN_20013960
// address: 0x20013960
// body: available
// range: 0x20013960-0x20013a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20013960(void)

{
  if ((DAT_201c1f00 == 1) || (DAT_201c1f00 == 4)) {
    DAT_20225e90 = 1.0;
  }
  else if (((DAT_201c1f00 == 8) && (DAT_201e7594 != '\0')) &&
          ((DAT_201c1f04 != 1 || (DAT_201e947c != '\0')))) {
    DAT_20225e90 = 0.0;
  }
  else {
    DAT_20225e90 = 0.5;
  }
  if (DAT_20225e98 <= DAT_20225e90) {
    if ((DAT_20225e98 < DAT_20225e90) &&
       (DAT_20225e98 = DAT_201c1f10 * *(float *)(DAT_20225a4c + 0x18) + DAT_20225e98,
       DAT_20225e90 < DAT_20225e98)) {
      DAT_20225e98 = DAT_20225e90;
    }
  }
  else {
    DAT_20225e98 = DAT_20225e98 - DAT_201c1f10 * *(float *)(DAT_20225a4c + 0x18);
    if (DAT_20225e98 < DAT_20225e90) {
      DAT_20225e98 = DAT_20225e90;
      return;
    }
  }
  return;
}

