// rea decompile_all
// name: FUN_1000afa0
// address: 0x1000afa0
// body: available
// range: 0x1000afa0-0x1000b057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000afa0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x58);
  iVar2 = *(int *)(unaff_ESI + 0x54);
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xd8));
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x58),
                  *(undefined4 *)(unaff_ESI + 0x54),*(int *)(unaff_ESI + 0x58));
  (*DAT_10029a64)(*(undefined4 *)(*(int *)(unaff_ESI + 0x100) + 4));
  (*DAT_10029a74)(*(undefined4 *)(*(int *)(unaff_ESI + 0x100) + 0x10),
                  (float)*(int *)(unaff_ESI + 0xb4) / 255.0,
                  (float)*(int *)(unaff_ESI + 0xb8) / 255.0,
                  (float)*(int *)(unaff_ESI + 0xbc) / 255.0,0);
  FUN_1000a470(iVar2,iVar1);
  (*DAT_10029a64)(0);
  return;
}

