// rea decompile_all
// name: FUN_10009ff0
// address: 0x10009ff0
// body: available
// range: 0x10009ff0-0x1000a18a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009ff0(void)

{
  HMODULE hInstance;
  BOOL BVar1;
  int unaff_EDI;
  char *pcVar2;
  
  pcVar2 = "ShutdownGL\n";
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar2);
  if (*(int *)(unaff_EDI + 0xe8) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xe8) = 0;
  }
  if (*(int *)(unaff_EDI + 0xec) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xec) = 0;
  }
  if (*(int *)(unaff_EDI + 0xf0) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xf0) = 0;
  }
  if (*(int *)(unaff_EDI + 0xf4) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xf4) = 0;
  }
  if (*(int *)(unaff_EDI + 0xf8) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xf8) = 0;
  }
  if (*(int *)(unaff_EDI + 0xfc) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0xfc) = 0;
  }
  if (*(int *)(unaff_EDI + 0x100) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0x100) = 0;
  }
  if (*(int *)(unaff_EDI + 0x104) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0x104) = 0;
  }
  if (*(int *)(unaff_EDI + 0x108) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0x108) = 0;
  }
  if (*(int *)(unaff_EDI + 0x10c) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0x10c) = 0;
  }
  if (*(int *)(unaff_EDI + 0x110) != 0) {
    FUN_1000a190();
    *(undefined4 *)(unaff_EDI + 0x110) = 0;
  }
  if (*(int *)(unaff_EDI + 0xe0) != 0) {
    (*DAT_10029584)(1,(undefined4 *)(unaff_EDI + 0xe0));
    *(undefined4 *)(unaff_EDI + 0xe0) = 0;
  }
  if (*(int *)(unaff_EDI + 0xe4) != 0) {
    (*DAT_10029584)(1,(undefined4 *)(unaff_EDI + 0xe4));
    *(undefined4 *)(unaff_EDI + 0xe4) = 0;
  }
  if (*(int *)(unaff_EDI + 0xd8) != 0) {
    (*DAT_10029584)(1,(undefined4 *)(unaff_EDI + 0xd8));
    *(undefined4 *)(unaff_EDI + 0xd8) = 0;
  }
  if (*(int *)(unaff_EDI + 0xdc) != 0) {
    (*DAT_10029584)(1,(undefined4 *)(unaff_EDI + 0xdc));
    *(undefined4 *)(unaff_EDI + 0xdc) = 0;
  }
  if (*(char *)(unaff_EDI + 0x44) != '\0') {
    hInstance = GetModuleHandleA((LPCSTR)0x0);
    BVar1 = UnregisterClassA("QeffectsGL",hInstance);
    if (BVar1 == 0) {
      pcVar2 = "ShutdownGL: UnregisterClass failed\n";
      (*(code *)PTR_FUN_10028344)();
      FUN_10001c50(pcVar2);
    }
    *(undefined1 *)(unaff_EDI + 0x44) = 0;
  }
  return;
}

