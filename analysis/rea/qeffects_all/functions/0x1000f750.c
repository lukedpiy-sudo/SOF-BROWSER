// rea decompile_all
// name: __ioterm
// address: 0x1000f750
// body: available
// range: 0x1000f750-0x1000f7a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2010 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  LPCRITICAL_SECTION p_Var2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar3;
  
  puVar3 = &DAT_10029aa0;
  do {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x800) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar1 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          p_Var2 = lpCriticalSection + 2;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].LockSemaphore;
        } while (&p_Var2->LockCount < (undefined1 *)(*puVar3 + 0x800));
      }
      _free((void *)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x10029ba0);
  return;
}

