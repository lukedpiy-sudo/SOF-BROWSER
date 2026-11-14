// rea decompile_all
// name: FUN_1000b5a0
// address: 0x1000b5a0
// body: available
// range: 0x1000b5a0-0x1000b719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000b5a0(void)

{
  char cVar1;
  HMODULE hModule;
  DWORD DVar2;
  char *pcVar3;
  char *pcVar4;
  
  hModule = GetModuleHandleA((LPCSTR)0x0);
  if (hModule == (HMODULE)0x0) {
    _DAT_10029468 = (FARPROC)0x0;
    _DAT_1002946c = (FARPROC)0x0;
    _DAT_10029470 = (FARPROC)0x0;
  }
  else {
    _DAT_10029468 = GetProcAddress(hModule,"Cvar_Get");
    _DAT_1002946c = GetProcAddress(hModule,"Cvar_Set");
    _DAT_10029470 = GetProcAddress(hModule,"Cvar_SetValue");
  }
  DVar2 = GetModuleFileNameA((HMODULE)0x0,&DAT_10029364,0x103);
  if (DVar2 == 0) {
    DAT_10029364 = 0;
  }
  if (DAT_10029365 == ':') {
    _strcpy_s(&DAT_10029260,0x104,&DAT_10029364);
    pcVar4 = &DAT_10029260;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    for (pcVar3 = pcVar3 + -0x10029261; pcVar3 != (char *)0x0; pcVar3 = pcVar3 + -1) {
      if ((pcVar3[0x10029260] == '\\') || (pcVar3[0x10029260] == '/')) {
        pcVar3[0x10029260] = '\0';
        break;
      }
    }
  }
  else {
    GetCurrentDirectoryA(0x103,&DAT_10029260);
  }
  _strcat_s(&DAT_10029260,0x104,"\\QeffectsGL.ini");
  pcVar3 = _strrchr(&DAT_10029364,0x5c);
  pcVar4 = _strrchr(&DAT_10029364,0x2f);
  if (pcVar4 < pcVar3) {
    pcVar4 = pcVar3;
  }
  if (pcVar4 != (char *)0x0) {
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _strncpy_s(&DAT_10029364,0x104,pcVar4 + 1,(int)pcVar3 - (int)(pcVar4 + 2));
  }
  pcVar4 = "Settings: %s\n";
  (*(code *)PTR_FUN_10028344)("Settings: %s\n",&DAT_10029260);
  FUN_10001bf0(pcVar4);
  pcVar4 = "Module: %s\n";
  (*(code *)PTR_FUN_10028344)("Module: %s\n",&DAT_10029364);
  FUN_10001bf0(pcVar4);
  return &DAT_10029260;
}

