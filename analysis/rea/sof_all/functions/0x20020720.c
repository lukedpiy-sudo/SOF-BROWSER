// rea decompile_all
// name: FUN_20020720
// address: 0x20020720
// body: available
// range: 0x20020720-0x2002087c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20020720(void)

{
  int iVar1;
  
  if (DAT_2024af7c != 0) {
    Z_Free(DAT_2024af7c);
  }
  if (DAT_2024af74 != 0) {
    Z_Free(DAT_2024af74);
  }
  DAT_2024af70 = 0;
  DAT_2024af98 = (DAT_2040365c >> 3) + -2;
  if (DAT_2024af98 < 1) {
    DAT_2024af98 = 0x4e;
  }
  DAT_2024af78 = __ftol();
  if (DAT_2024af78 < 0x20) {
    DAT_2024af78 = 0x20;
    Cvar_SetValue(s_con_maxlines_2013058c,0x42000000);
  }
  DAT_2024af74 = Z_Malloc(DAT_2024af78 * 4);
  iVar1 = 0;
  if (0 < DAT_2024af78) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(DAT_2024af74 + -4 + iVar1 * 4) = 0xffffffff;
    } while (iVar1 < DAT_2024af78);
  }
  DAT_2024af80 = __ftol();
  if (DAT_2024af80 < 0x400) {
    DAT_2024af80 = 0x400;
    Cvar_SetValue(s_con_buffersize_2013057c,0x44800000);
  }
  DAT_2024af7c = Z_Malloc(DAT_2024af80);
  DAT_2024af88 = 0;
  DAT_2024af8c = 0;
  *(undefined4 *)(DAT_2024af74 + (int)(0 % (longlong)DAT_2024af78) * 4) = 0;
  _DAT_2024afa4 = 0;
  _DAT_2024afa8 = 0;
  _DAT_2024afac = 0;
  _DAT_2024afb0 = 0;
  *(undefined4 *)(DAT_2024afc0 + 0x14) = 0;
  *(undefined4 *)(DAT_2024afb4 + 0x14) = 0;
  DAT_2024af70 = 1;
  Com_Printf(&DAT_20130564);
  return;
}

