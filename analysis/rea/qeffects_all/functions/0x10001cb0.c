// rea decompile_all
// name: FUN_10001cb0
// address: 0x10001cb0
// body: available
// range: 0x10001cb0-0x10001d09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_10001cb0(char *param_1)

{
  int *unaff_ESI;
  
  if ((*unaff_ESI != 0) && ((char *)unaff_ESI[1] != (char *)0x0)) {
    __vsnprintf_s((char *)unaff_ESI[1],0x2000,0x1fff,param_1,&stack0x00000008);
    _fprintf((FILE *)*unaff_ESI,"WARNING: %s",unaff_ESI[1]);
    _fflush((FILE *)*unaff_ESI);
    if ((code *)unaff_ESI[2] != (code *)0x0) {
      (*(code *)unaff_ESI[2])("WARNING: %s",unaff_ESI[1]);
    }
  }
  return;
}

