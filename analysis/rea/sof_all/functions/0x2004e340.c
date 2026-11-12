// rea decompile_all
// name: FUN_2004e340
// address: 0x2004e340
// body: available
// range: 0x2004e340-0x2004e44a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004e340(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 == 3) {
    return 1;
  }
  if (param_1 == 2) {
    if ((char)(byte)param_2 < '\0') {
      if (((byte)param_2 & 0xc0) == 0x80) {
        iVar1 = 0;
        if (0 < DAT_20390158) {
          while( true ) {
            if (((byte)param_2 == (&DAT_20390144)[iVar1 * 4]) &&
               (param_2._1_1_ == (&DAT_20390145)[iVar1 * 4])) {
              return 1;
            }
            if (((byte)param_2 == 0xac) &&
               ((((&DAT_20390144)[iVar1 * 4] == 0xac && ((param_2._1_1_ & 0xf0) == 0x10)) &&
                (((&DAT_20390145)[iVar1 * 4] & 0xf0) == 0x10)))) break;
            iVar1 = iVar1 + 1;
            if (DAT_20390158 <= iVar1) {
              return 0;
            }
          }
          return 1;
        }
      }
      else {
        iVar1 = 0;
        if (0 < DAT_20390158) {
          do {
            if ((((byte)param_2 == (&DAT_20390144)[iVar1 * 4]) &&
                (param_2._1_1_ == (&DAT_20390145)[iVar1 * 4])) &&
               (param_2._2_1_ == (&DAT_20390146)[iVar1 * 4])) {
              return 1;
            }
            if ((((byte)param_2 == 0xc0) && ((&DAT_20390144)[iVar1 * 4] == 0xc0)) &&
               ((param_2._1_1_ == 0xa8 && ((&DAT_20390145)[iVar1 * 4] == -0x58)))) {
              return 1;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < DAT_20390158);
        }
      }
    }
    else {
      iVar1 = 0;
      if (0 < DAT_20390158) {
        do {
          if ((byte)param_2 == (&DAT_20390144)[iVar1 * 4]) {
            return 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < DAT_20390158);
        return 0;
      }
    }
  }
  return 0;
}

