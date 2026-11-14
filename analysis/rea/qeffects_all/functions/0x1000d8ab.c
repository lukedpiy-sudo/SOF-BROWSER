// rea decompile_all
// name: write_string
// address: 0x1000d8ab
// body: available
// range: 0x1000d8ab-0x1000d91e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2010 Release */

void __cdecl write_string(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int in_ECX;
  int unaff_EDI;
  
  piVar2 = __errno();
  iVar1 = *piVar2;
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    piVar2 = __errno();
    *piVar2 = 0;
    while (0 < in_ECX) {
      in_ECX = in_ECX + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar2 = __errno();
        if (*piVar2 != 0x2a) break;
        write_char();
      }
    }
    piVar2 = __errno();
    if (*piVar2 == 0) {
      piVar2 = __errno();
      *piVar2 = iVar1;
    }
  }
  else {
    *in_EAX = *in_EAX + in_ECX;
  }
  return;
}

