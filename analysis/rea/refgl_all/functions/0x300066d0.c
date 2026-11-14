// rea decompile_all
// name: FUN_300066d0
// address: 0x300066d0
// body: available
// range: 0x300066d0-0x300067b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300066d0(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = 0;
  ppuVar4 = &PTR_s_GL_NEAREST_3002e3b0;
  do {
    iVar2 = __strcmpi(*ppuVar4,param_1);
    if (iVar2 == 0) break;
    ppuVar4 = ppuVar4 + 3;
    iVar5 = iVar5 + 1;
  } while ((int)ppuVar4 < 0x3002e3f8);
  if (iVar5 == 6) {
    (*DAT_3008fde8)(0,s_Bad_filter_name_3002e9b4);
    return;
  }
  iVar2 = 0;
  puVar6 = &DAT_30034e08;
  DAT_3008ffe4 = *(undefined4 *)(iVar5 * 0xc + 0x3002e3b4);
  DAT_3008ffe8 = *(undefined4 *)(iVar5 * 0xc + 0x3002e3b8);
  if (0 < DAT_3004c508) {
    do {
      puVar3 = puVar6;
      if ((*(float *)(DAT_3008fcd8 + 0x18) != 0.0) && (DAT_30034dcc != (undefined *)0x0)) {
        puVar3 = DAT_30034dcc;
      }
      if ((&DAT_3008ffd8)[DAT_3008ffe0] != *(int *)(puVar3 + 0x50)) {
        (&DAT_3008ffd8)[DAT_3008ffe0] = *(int *)(puVar3 + 0x50);
        uVar1 = *(undefined4 *)(puVar3 + 0x50);
        (*DAT_300a4778)(0xde1,uVar1);
        *(undefined4 *)(&DAT_300a41e8 + DAT_300a44b8 * 4) = uVar1;
      }
      FUN_30006570((int)puVar6);
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 0x78;
    } while (iVar2 < DAT_3004c508);
  }
  return;
}

