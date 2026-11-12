// rea decompile_all
// name: FUN_500c3690
// address: 0x500c3690
// body: available
// range: 0x500c3690-0x500c3822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_500c3690(void)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = __ftol();
  iVar1 = (int)lVar3 + 1;
  piVar2 = (int *)(DAT_5015cca0 + iVar1 * 0x464);
  do {
    if (DAT_5015c938 <= iVar1) {
      if (iVar1 == DAT_5015d8cc) {
        (*DAT_5015cb10)(s_ED_Alloc__no_free_edicts_50151528);
      }
      DAT_5015c938 = DAT_5015c938 + 1;
      piVar2[0x1e] = 1;
      piVar2[0x6d] = (int)s_noclass_50142f34;
LAB_500c375b:
      iVar1 = (int)piVar2 - DAT_5015cca0;
      piVar2[0xa3] = 0x3f800000;
      piVar2[0xa1] = 0x3f800000;
      piVar2[0xa2] = 0x3f800000;
      piVar2[0xc6] = 0;
      piVar2[0xf3] = 0;
      piVar2[0xf4] = 0;
      piVar2[0x59] = 0;
      piVar2[9] = -1;
      piVar2[0xa5] = 0x3f000000;
      piVar2[0xa4] = 0;
      *piVar2 = iVar1 / 0x464;
      piVar2[0x5c] = 0x447a0000;
      piVar2[0x5b] = 0x447a0000;
      piVar2[0x5a] = 0x447a0000;
      piVar2[0x5f] = -0x3b860000;
      piVar2[0x5e] = -0x3b860000;
      piVar2[0x5d] = -0x3b860000;
      piVar2[0x62] = 0x461c4000;
      piVar2[0x61] = 0x461c4000;
      piVar2[0x60] = 0x461c4000;
      piVar2[99] = -1;
      return piVar2;
    }
    if ((piVar2[0x1e] == 0) &&
       (((float)piVar2[0x6a] < 2.0 || (0.5 < DAT_5015ccdc - (float)piVar2[0x6a])))) {
      piVar2[0x1e] = 1;
      piVar2[0x6d] = (int)s_noclass_50142f34;
      goto LAB_500c375b;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x119;
  } while( true );
}

