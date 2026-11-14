// rea decompile_all
// name: FUN_10001a10
// address: 0x10001a10
// body: available
// range: 0x10001a10-0x10001b22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001a10(void)

{
  HMODULE hModule;
  errno_t eVar1;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  DAT_1002947c = (FILE *)0x0;
  DAT_10029480 = (void *)0x0;
  hModule = GetModuleHandleA((LPCSTR)0x0);
  if (hModule == (HMODULE)0x0) {
    _DAT_10029484 = (FARPROC)0x0;
  }
  else {
    _DAT_10029484 = GetProcAddress(hModule,"Com_Printf");
  }
  eVar1 = _fopen_s(&DAT_1002947c,"QeffectsGL.log","w");
  if (eVar1 == 0) {
    DAT_10029480 = operator_new(0x2000);
    local_50 = 0;
    local_4c = 0;
    __time64((__time64_t *)&local_50);
    _memset(local_48,0,0x40);
    __ctime64_s(local_48,0x40,(__time64_t *)&local_50);
    _fprintf(DAT_1002947c,"==================================================================\n");
    _fprintf(DAT_1002947c," QeffectsGL initialized at %s",local_48);
    _fprintf(DAT_1002947c,"==================================================================\n");
    _fprintf(DAT_1002947c,"\n");
    _fflush(DAT_1002947c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

