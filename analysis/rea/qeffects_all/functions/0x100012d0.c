// rea decompile_all
// name: glFrustum
// address: 0x100012d0
// body: available
// range: 0x100012d0-0x100013dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void glFrustum(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6)

{
  int iVar1;
  int aiStack_74 [28];
  
                    /* 0x12d0  98  glFrustum */
  (*DAT_10029618)(param_1,param_2,param_3,param_4,param_5,param_6);
  if (DAT_10028340 == 0x1701) {
    if ((DAT_10029494 & 0x20) != 0) {
      aiStack_74[0] = 0;
      (*DAT_10029638)(0x8ca6,aiStack_74);
      if (aiStack_74[0] != 0) {
        return;
      }
    }
    iVar1 = (*(code *)PTR_FUN_1002833c)();
    *(float *)(iVar1 + 0x28) = (float)param_5;
    *(float *)(iVar1 + 0x2c) = (float)param_6;
    if (*(int *)(iVar1 + 0x74) != 0) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0("%5i: SetupZDimensions zn = %f, zf = %f\n");
    }
    iVar1 = (*(code *)PTR_FUN_1002833c)();
    if (*(int *)(iVar1 + 0x74) != 0) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0("%5i: ortho = %s\n");
    }
    if (*(int *)(iVar1 + 0x48) != *(int *)(iVar1 + 0x18)) {
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x18);
      (*DAT_10029638)(0xba2,iVar1 + 0x4c);
    }
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}

