// rea decompile_all
// name: ___timet_from_ft
// address: 0x200fbae5
// body: available
// range: 0x200fbae5-0x200fbb48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Release */

undefined4 ___timet_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_c,&local_1c);
      if (BVar1 != 0) {
        uVar2 = FUN_200ff705(local_1c.wYear,local_1c.wMonth,local_1c.wDay,local_1c.wHour,
                             local_1c.wMinute,local_1c.wSecond,0xffffffff);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

