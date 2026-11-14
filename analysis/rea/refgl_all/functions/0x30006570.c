// rea decompile_all
// name: FUN_30006570
// address: 0x30006570
// body: available
// range: 0x30006570-0x300066b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30006570(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 3:
  case 7:
    (*DAT_300a457c)(0xde1,0x2801,0x46180000);
    (*DAT_300a457c)(0xde1,0x2800,0x46180000);
    return;
  case 4:
  case 6:
  case 8:
    (*DAT_300a457c)(0xde1,0x2801,(float)DAT_3008ffe8);
    (*DAT_300a457c)(0xde1,0x2800,(float)DAT_3008ffe8);
    return;
  }
  (*DAT_300a457c)(0xde1,0x2801,(float)DAT_3008ffe4);
  (*DAT_300a457c)(0xde1,0x2800,(float)DAT_3008ffe8);
  if (DAT_3008fc45 != '\0') {
    if (*(float *)(DAT_3008fc60 + 0x18) != 0.0) {
      (*DAT_300a457c)(0xde1,0x84fe,0x40000000);
      return;
    }
    (*DAT_300a457c)(0xde1,0x84fe,0x3f800000);
  }
  return;
}

