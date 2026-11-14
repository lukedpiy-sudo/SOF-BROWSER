// rea decompile_all
// name: glTexParameterf
// address: 0x10001630
// body: available
// range: 0x10001630-0x1000166b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void glTexParameterf(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  
                    /* 0x1630  304  glTexParameterf */
  if ((param_2 == 0x84fe) && (1.0 < param_3)) {
    iVar1 = (*(code *)PTR_FUN_1002833c)();
    *(undefined1 *)(iVar1 + 10) = 1;
  }
  (*DAT_10029950)(param_1,param_2,param_3);
  return;
}

