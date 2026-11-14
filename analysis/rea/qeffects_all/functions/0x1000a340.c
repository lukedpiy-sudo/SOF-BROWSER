// rea decompile_all
// name: FUN_1000a340
// address: 0x1000a340
// body: available
// range: 0x1000a340-0x1000a3cc inclusive
// range: 0x1000a3d0-0x1000a46a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a340(void)

{
  int iVar1;
  float fVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  int unaff_EDI;
  int local_8;
  
  DVar4 = timeGetTime();
  local_8 = DVar4 - *(int *)(unaff_EDI + 0x38);
  fVar2 = (float)local_8;
  if (local_8 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(DWORD *)(unaff_EDI + 0x38) = DVar4;
  *(float *)(unaff_EDI + 0x34) = fVar2 * 0.001;
  if ((*(int *)(unaff_EDI + 0x78) != 0) && (2000 < DVar4 - *(int *)(unaff_EDI + 0x3c))) {
    uVar6 = 1;
    *(uint *)(unaff_EDI + 0x30) = *(uint *)(unaff_EDI + 0x30) ^ 1;
    *(DWORD *)(unaff_EDI + 0x3c) = DVar4;
    iVar1 = *(int *)(unaff_EDI + 0x88);
    if ((1 < iVar1) && ((1 < DAT_10029490 && (*(char *)(unaff_EDI + 10) == '\0')))) {
      if (*(int *)(unaff_EDI + 0x30) == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = DAT_10029490;
        if (iVar1 <= DAT_10029490) {
          iVar5 = iVar1;
        }
      }
      (*DAT_10029638)(0x8069,&local_8);
      do {
        cVar3 = (*DAT_100296dc)(uVar6);
        if (cVar3 != '\0') {
          (*DAT_100294ac)(0xde1,uVar6);
          (*DAT_10029958)(0xde1,0x84fe,iVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 9999);
      (*DAT_100294ac)(0xde1,local_8);
    }
    if ((*(char *)(unaff_EDI + 0xc) != '\0') && (*(char *)(unaff_EDI + 0xb) == '\0')) {
      if (*(int *)(unaff_EDI + 0x30) == 0) {
        (*DAT_10029594)(0x809d);
      }
      else {
        (*DAT_100295b8)();
      }
    }
  }
  if (*(int *)(unaff_EDI + 0x30) != 0) {
    if (*(int *)(unaff_EDI + 0x74) != 0) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001bf0("%5i: Postprocess at %i\n");
    }
    FUN_1000a620(unaff_EDI);
  }
  return;
}

