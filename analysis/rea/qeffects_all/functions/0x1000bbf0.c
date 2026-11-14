// rea decompile_all
// name: FUN_1000bbf0
// address: 0x1000bbf0
// body: available
// range: 0x1000bbf0-0x1000bc5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bbf0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int local_8;
  
  (*DAT_10029a80)();
  if (0 < local_8) {
    pcVar2 = operator_new(local_8 + 1);
    (*DAT_10029a7c)();
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar2 + 1) {
      pcVar3 = "Compile log: %s\n";
      (*(code *)PTR_FUN_10028344)("Compile log: %s\n",pcVar2);
      FUN_10001bf0(pcVar3);
    }
    FUN_1000c526(pcVar2);
  }
  return;
}

