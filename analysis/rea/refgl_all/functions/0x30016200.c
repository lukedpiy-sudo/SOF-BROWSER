// rea decompile_all
// name: FUN_30016200
// address: 0x30016200
// body: available
// range: 0x30016200-0x300162ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30016200(char param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_300062f0(DAT_3008ffd0 + (~-(uint)(param_1 != '\0') & DAT_30090024));
  (*DAT_300a457c)(0xde1,0x2801,0x46180400);
  (*DAT_300a457c)(0xde1,0x2800,0x46180400);
  if (param_1 != '\0') {
    piVar1 = &DAT_3009042c;
    do {
      if (iVar2 < *piVar1) {
        iVar2 = *piVar1;
      }
      piVar1 = piVar1 + 1;
    } while ((int)piVar1 < 0x3009062c);
    (*DAT_300a475c)(0xde1,0,0,0,0x80,iVar2,0x1908,0x1401,&DAT_3009062c);
    return;
  }
  (*DAT_300a43f4)(0xde1,0,DAT_30090020,0x80,0x80,0,0x1908,0x1401,&DAT_3009062c);
  DAT_30090024 = DAT_30090024 + 1;
  if (DAT_30090024 == 0x80) {
    (*DAT_3008fdc8)(1,s_LM_UploadBlock_____MAX_LIGHTMAPS_3002f9c8);
  }
  return;
}

