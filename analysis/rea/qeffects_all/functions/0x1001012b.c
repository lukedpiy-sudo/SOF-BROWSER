// rea decompile_all
// name: __mtinitlocknum
// address: 0x1001012b
// body: available
// range: 0x1001012b-0x100101e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_100289c8 == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_10027490 + _LockNum * 2;
  if (*piVar1 == 0) {
    lpCriticalSection = __malloc_crt(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
        if (BVar2 == 0) {
          _free(lpCriticalSection);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)lpCriticalSection;
        }
      }
      else {
        _free(lpCriticalSection);
      }
      FUN_100101e4();
      iVar3 = local_20;
    }
  }
  return iVar3;
}

