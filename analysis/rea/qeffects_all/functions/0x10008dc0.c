// rea decompile_all
// name: wglUseFontBitmapsA
// address: 0x10008dc0
// body: available
// range: 0x10008dc0-0x10008de0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BOOL wglUseFontBitmapsA(HDC param_1,DWORD param_2,DWORD param_3,DWORD param_4)

{
  BOOL BVar1;
  
                    /* 0x8dc0  357  wglUseFontBitmapsA */
  if ((DAT_10029a88 == 0) && (DAT_10029a8c == '\0')) {
    FUN_10001d10();
  }
                    /* WARNING: Could not recover jumptable at 0x10008ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = (*_DAT_10029a24)();
  return BVar1;
}

