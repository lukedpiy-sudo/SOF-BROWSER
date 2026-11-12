// rea decompile_all
// name: FUN_2000e990
// address: 0x2000e990
// body: available
// range: 0x2000e990-0x2000ea14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000e990(void)

{
  int iVar1;
  
  iVar1 = FUN_2001e290(&DAT_20367ebc);
  if ((iVar1 < 0) || (0xde2 < iVar1)) {
    Com_Error(1,s_configstring_>_MAX_CONFIGSTRINGS_2011ef10);
  }
  if ((((iVar1 < 0x487) || (0x586 < iVar1)) && (iVar1 != 1)) &&
     (((0x122 < iVar1 && (iVar1 < 0x287)) &&
      ((DAT_201e7594 != '\0' && (*(int *)(&DAT_20221100 + iVar1 * 4) != 0)))))) {
    (*DAT_20390d90)(*(int *)(&DAT_20221100 + iVar1 * 4));
    *(undefined4 *)(&DAT_20221100 + iVar1 * 4) = 0;
  }
  (&DAT_201e94cc)[iVar1 * 0x40] = 0;
  return;
}

