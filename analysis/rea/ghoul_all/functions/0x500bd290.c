// rea decompile_all
// name: FUN_500bd290
// address: 0x500bd290
// body: available
// range: 0x500bd290-0x500bd307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd290(int *param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str2;
  
  _Str1 = (char *)param_1[0x7a];
  if (_Str1 != (char *)0x0) {
    iVar2 = 0;
    _Str2 = &DAT_5017c118;
    do {
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) {
        if (iVar2 != -1) {
          param_1[0xf] = iVar2;
          param_1[0x10] = 0xf8;
          param_1[0xc] = param_1[0xc] | 0x100;
          param_1[0xae] = 0;
          param_1[0xad] = 0;
          return;
        }
        break;
      }
      _Str2 = _Str2 + 100;
      iVar2 = iVar2 + 1;
    } while ((int)_Str2 < 0x50182518);
  }
  FUN_500adb20((byte *)s_Soundgen_with_invalid_name__5014e968);
  FUN_500c3880(param_1);
  return;
}

