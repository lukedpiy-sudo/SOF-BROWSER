// rea decompile_all
// name: FUN_1000a290
// address: 0x1000a290
// body: available
// range: 0x1000a290-0x1000a33a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a290(void)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int unaff_EDI;
  
  fVar1 = (float)*(double *)(in_EAX + 0x70);
  fVar2 = ((float)*(double *)(in_EAX + 0x50) + 1.0) / (1.0 - (float)*(double *)(in_EAX + 0x50));
  fVar2 = (fVar1 * (fVar2 + 1.0)) / (fVar2 * 2.0);
  *(float *)(unaff_EDI + 0x2c) = fVar2;
  *(float *)(unaff_EDI + 0x28) = (fVar2 * fVar1) / (fVar1 - fVar2 * 2.0);
  if (fVar2 < 0.0) {
    *(float *)(unaff_EDI + 0x2c) = -fVar2;
  }
  if (*(int *)(unaff_EDI + 0x74) != 0) {
    (*(code *)PTR_FUN_10028344)();
    FUN_10001bf0("%5i: SetupZDimensions zn = %f, zf = %f\n");
  }
  return;
}

