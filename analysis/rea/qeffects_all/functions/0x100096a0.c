// rea decompile_all
// name: FUN_100096a0
// address: 0x100096a0
// body: available
// range: 0x100096a0-0x100098cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100096a0(void)

{
  undefined1 uVar1;
  char cVar2;
  int unaff_EDI;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = "Checking hardware caps:\n";
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar4);
  if ((((*(int *)(unaff_EDI + 0x94) == 0) || (DAT_1002948c < 2)) || ((DAT_10029494 & 2) == 0)) ||
     (((DAT_10029494 & 4) == 0 || ((DAT_10029494 & 8) == 0)))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(unaff_EDI + 0x6c) = cVar2;
  if (((*(int *)(unaff_EDI + 0xa4) == 0) || (DAT_1002948c < 2)) ||
     (((DAT_10029494 & 2) == 0 ||
      ((((DAT_10029494 & 4) == 0 || ((DAT_10029494 & 8) == 0)) || ((DAT_10029494 & 0x10) == 0))))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_EDI + 0x6d) = uVar1;
  if ((((*(int *)(unaff_EDI + 0xb4) == 0) && (*(int *)(unaff_EDI + 0xb8) == 0)) &&
      (*(int *)(unaff_EDI + 0xbc) == 0)) ||
     ((((DAT_10029494 & 2) == 0 || ((DAT_10029494 & 4) == 0)) || ((DAT_10029494 & 8) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_EDI + 0x6e) = uVar1;
  if ((((*(int *)(unaff_EDI + 0xc0) == 0) || ((DAT_10029494 & 2) == 0)) || ((DAT_10029494 & 4) == 0)
      ) || ((DAT_10029494 & 8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_EDI + 0x6f) = uVar1;
  if (((*(int *)(unaff_EDI + 200) == 0) || (DAT_1002948c < 3)) ||
     ((((DAT_10029494 & 2) == 0 || (((DAT_10029494 & 4) == 0 || ((DAT_10029494 & 8) == 0)))) ||
      ((DAT_10029494 & 0x10) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(unaff_EDI + 0x70) = uVar1;
  if (*(int *)(unaff_EDI + 0x94) == 0) {
    pcVar4 = "DISABLED";
  }
  else if (cVar2 == '\0') {
    pcVar4 = "NO";
  }
  else {
    pcVar4 = "YES";
  }
  pcVar3 = "Bloom effect: %s\n";
  (*(code *)PTR_FUN_10028344)("Bloom effect: %s\n",pcVar4);
  FUN_10001bf0(pcVar3);
  if (*(int *)(unaff_EDI + 0xa4) == 0) {
    pcVar4 = "DISABLED";
  }
  else if (*(char *)(unaff_EDI + 0x6d) == '\0') {
    pcVar4 = "NO";
  }
  else {
    pcVar4 = "YES";
  }
  pcVar3 = "SSAO effect: %s\n";
  (*(code *)PTR_FUN_10028344)("SSAO effect: %s\n",pcVar4);
  FUN_10001bf0(pcVar3);
  if (((*(int *)(unaff_EDI + 0xb4) == 0) && (*(int *)(unaff_EDI + 0xb8) == 0)) &&
     (*(int *)(unaff_EDI + 0xbc) == 0)) {
    pcVar4 = "DISABLED";
  }
  else {
    pcVar4 = "YES";
    if (*(char *)(unaff_EDI + 0x6e) == '\0') {
      pcVar4 = "NO";
    }
  }
  pcVar3 = "Color correction: %s\n";
  (*(code *)PTR_FUN_10028344)("Color correction: %s\n",pcVar4);
  FUN_10001bf0(pcVar3);
  if (*(int *)(unaff_EDI + 0xc0) == 0) {
    pcVar4 = "DISABLED";
  }
  else if (*(char *)(unaff_EDI + 0x6f) == '\0') {
    pcVar4 = "NO";
  }
  else {
    pcVar4 = "YES";
  }
  pcVar3 = "Emboss: %s\n";
  (*(code *)PTR_FUN_10028344)("Emboss: %s\n",pcVar4);
  FUN_10001bf0(pcVar3);
  if (*(int *)(unaff_EDI + 200) == 0) {
    pcVar4 = "DISABLED";
  }
  else if (*(char *)(unaff_EDI + 0x70) == '\0') {
    pcVar4 = "NO";
  }
  else {
    pcVar4 = "YES";
  }
  pcVar3 = "DOF effect: %s\n";
  (*(code *)PTR_FUN_10028344)("DOF effect: %s\n",pcVar4);
  FUN_10001bf0(pcVar3);
  return;
}

