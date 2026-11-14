// rea decompile_all
// name: FUN_1000a540
// address: 0x1000a540
// body: available
// range: 0x1000a540-0x1000a615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a540(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)param_1;
  fVar1 = (float)param_2;
  (*DAT_100294a8)(7,fVar1,fVar2);
  (*DAT_100298c4)(0,(float)param_4);
  (*DAT_10029978)(0,0);
  (*DAT_100298c4)((float)param_3,(float)param_4);
  (*DAT_10029978)(fVar2,0);
  (*DAT_100298c4)((float)param_3,0);
  (*DAT_10029978)(fVar2,fVar1);
  (*DAT_100298c4)(0,0);
  (*DAT_10029978)(0,fVar1);
  (*DAT_100295c0)();
  return;
}

