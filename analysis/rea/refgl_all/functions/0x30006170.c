// rea decompile_all
// name: FUN_30006170
// address: 0x30006170
// body: available
// range: 0x30006170-0x30006288 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30006170(char param_1)

{
  int iVar1;
  
  if (DAT_3008fc44 != param_1) {
    if (DAT_300a458c == (code *)0x0) {
      DAT_3008fc44 = 0;
      return;
    }
    DAT_3008fc44 = param_1;
    if (DAT_3008ffe0 != 1) {
      DAT_3008ffe0 = 1;
      (*DAT_300a458c)(0x84c1);
    }
    if (param_1 == '\0') {
      (*DAT_300a44ec)(0xde1);
      iVar1 = DAT_3008ffe0;
      if ((&DAT_3002e3a8)[DAT_3008ffe0] != 0x1e01) {
        (*DAT_300a450c)(0x2300,0x2200,0x45f00800);
        iVar1 = DAT_3008ffe0;
        (&DAT_3002e3a8)[DAT_3008ffe0] = 0x1e01;
      }
    }
    else {
      (*DAT_300a45fc)();
      iVar1 = DAT_3008ffe0;
      if ((&DAT_3002e3a8)[DAT_3008ffe0] != 0x2100) {
        (*DAT_300a450c)(0x2300,0x2200,0x46040000);
        iVar1 = DAT_3008ffe0;
        (&DAT_3002e3a8)[DAT_3008ffe0] = 0x2100;
      }
    }
    if ((DAT_300a458c != (code *)0x0) && (iVar1 != 0)) {
      DAT_3008ffe0 = 0;
      (*DAT_300a458c)(0x84c0);
      iVar1 = DAT_3008ffe0;
    }
    if ((&DAT_3002e3a8)[iVar1] != 0x1e01) {
      (*DAT_300a450c)(0x2300,0x2200,0x45f00800);
      (&DAT_3002e3a8)[DAT_3008ffe0] = 0x1e01;
    }
  }
  return;
}

