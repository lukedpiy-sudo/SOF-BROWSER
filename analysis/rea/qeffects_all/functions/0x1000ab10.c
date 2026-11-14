// rea decompile_all
// name: FUN_1000ab10
// address: 0x1000ab10
// body: available
// range: 0x1000ab10-0x1000ad7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ab10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  iVar1 = *(int *)(unaff_ESI + 0x54);
  iVar2 = *(int *)(unaff_ESI + 0x58);
  iVar3 = iVar1 >> 1;
  iVar4 = iVar2 >> 1;
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xd8));
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x58),
                  *(undefined4 *)(unaff_ESI + 0x54),*(int *)(unaff_ESI + 0x58));
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xdc));
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x58),
                  *(undefined4 *)(unaff_ESI + 0x54),*(int *)(unaff_ESI + 0x58));
  (*DAT_10029a64)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf4) + 4));
  (*DAT_10029a74)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf4) + 0x10),
                  *(float *)(unaff_ESI + 0x28) + *(float *)(unaff_ESI + 0x28),
                  *(float *)(unaff_ESI + 0x2c) - *(float *)(unaff_ESI + 0x28),(float)iVar1,
                  (float)iVar2);
  (*DAT_10029a74)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf4) + 0x14),
                  *(undefined4 *)(unaff_ESI + 0xac),*(undefined4 *)(unaff_ESI + 0xb0),
                  *(undefined4 *)(unaff_ESI + 0xa8),0);
  FUN_1000a540(iVar3,iVar4,iVar1,iVar2);
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xe0));
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - iVar4,iVar3,iVar4);
  (*DAT_10029a64)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf8) + 4));
  (*DAT_10029a74)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf8) + 0x10),0x3f800000,0,0,0);
  (*DAT_10029a38)(0x84c1);
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xdc));
  (*DAT_10029a38)(0x84c0);
  FUN_1000a470(iVar3,iVar4);
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - iVar4,iVar3,iVar4);
  (*DAT_10029a74)(*(undefined4 *)(*(int *)(unaff_ESI + 0xf8) + 0x10),0,0x3f800000,0,0);
  FUN_1000a470(iVar3,iVar4);
  (*DAT_10029578)(0x84f5,0,0,0,0,*(int *)(unaff_ESI + 0x24) - iVar4,iVar3,iVar4);
  (*DAT_10029a64)(*(undefined4 *)(*(int *)(unaff_ESI + 0xfc) + 4));
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xd8));
  (*DAT_10029a38)(0x84c1);
  (*DAT_100294ac)(0x84f5,*(undefined4 *)(unaff_ESI + 0xe0));
  (*DAT_10029a38)(0x84c0);
  FUN_1000a470(iVar1,iVar2);
  (*DAT_10029a64)(0);
  return;
}

