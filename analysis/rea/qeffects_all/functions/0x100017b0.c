// rea decompile_all
// name: wglMakeCurrent
// address: 0x100017b0
// body: available
// range: 0x100017b0-0x10001845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


BOOL wglMakeCurrent(HDC param_1,HGLRC param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x17b0  350  wglMakeCurrent */
  if ((DAT_10029a88 == 0) && (DAT_10029a8c == '\0')) {
    FUN_10001d10();
  }
  iVar1 = (*DAT_10029a04)(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)(*(code *)PTR_FUN_1002833c)();
  if (((param_1 != (HDC)0x0) && (param_2 != (HGLRC)0x0)) &&
     ((param_1 != (HDC)*piVar2 || (param_2 != (HGLRC)piVar2[1])))) {
    *piVar2 = (int)param_1;
    piVar2[1] = (int)param_2;
    FUN_10006970();
    FUN_100098d0();
    if (piVar2[0x23] != 0) {
      (*DAT_100295b8)(0x809d);
      if (piVar2[0x24] != 0) {
        (*DAT_10029698)(0x8534,0x1102);
      }
    }
  }
  return 1;
}

