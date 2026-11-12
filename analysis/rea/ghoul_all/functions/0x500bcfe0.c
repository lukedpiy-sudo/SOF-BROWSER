// rea decompile_all
// name: FUN_500bcfe0
// address: 0x500bcfe0
// body: available
// range: 0x500bcfe0-0x500bd051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500bcfe0(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str2;
  
  if (param_1 != (char *)0x0) {
    iVar1 = __strcmpi(param_1,&DAT_5015911c);
    if (iVar1 != 0) {
      iVar1 = 0;
      _Str2 = &DAT_50182518;
      do {
        iVar2 = __strcmpi(param_1,_Str2);
        if (iVar2 == 0) {
          uVar3 = (*DAT_5015c9f4)(&DAT_50165d18 +
                                  (uint)*(ushort *)(&DAT_5018255c + (param_2 + iVar1 * 0x32) * 2) *
                                  0x40);
          return uVar3;
        }
        _Str2 = _Str2 + 100;
        iVar1 = iVar1 + 1;
      } while ((int)_Str2 < 0x50188918);
    }
  }
  return 0xffffffff;
}

