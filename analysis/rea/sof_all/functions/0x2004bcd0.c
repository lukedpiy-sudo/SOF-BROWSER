// rea decompile_all
// name: FUN_2004bcd0
// address: 0x2004bcd0
// body: available
// range: 0x2004bcd0-0x2004bdc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004bcd0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_1 == 0xd) || (param_1 == 0xe)) {
    if (DAT_20367ea0 == 0) {
      pcVar4 = s_say___2013673c;
    }
    else {
      pcVar4 = s_say_team___20136744;
    }
    FUN_20018180(pcVar4);
    FUN_20018180(&DAT_20364b70);
    FUN_20018180(&DAT_20136738);
  }
  else if (param_1 != 0x1b) {
    if (param_1 == 8) {
      if (DAT_20367eac == 0) {
        return;
      }
      puVar1 = &DAT_20364b6f + DAT_20367eac;
      DAT_20367eac = DAT_20367eac + -1;
      *puVar1 = 0;
      return;
    }
    if (DAT_20367eac == 0xff) {
      return;
    }
    iVar3 = FUN_20057c80();
    if ((DAT_203647b0 == 0) && (DAT_203647c4 == 0)) {
      cVar2 = (&DAT_20135354)[iVar3 + param_1 * 0x10];
    }
    else {
      cVar2 = (&DAT_20135358)[iVar3 + param_1 * 0x10];
    }
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 == '\n') {
      return;
    }
    if (cVar2 == '\r') {
      return;
    }
    (&DAT_20364b70)[DAT_20367eac] = cVar2;
    puVar1 = &DAT_20364b71 + DAT_20367eac;
    DAT_20367eac = DAT_20367eac + 1;
    *puVar1 = 0;
    return;
  }
  DAT_20367eac = 0;
  DAT_20364b70 = 0;
  DAT_201c1f04 = 0;
  return;
}

