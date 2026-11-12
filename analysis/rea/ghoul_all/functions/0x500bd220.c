// rea decompile_all
// name: FUN_500bd220
// address: 0x500bd220
// body: available
// range: 0x500bd220-0x500bd284 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd220(int param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str2;
  
  if ((*(uint *)(param_1 + 0x30) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    return;
  }
  _Str1 = *(char **)(param_1 + 0x1e8);
  if (_Str1 != (char *)0x0) {
    iVar2 = 0;
    _Str2 = &DAT_5017c118;
    do {
      iVar1 = __strcmpi(_Str1,_Str2);
      if (iVar1 == 0) goto LAB_500bd26d;
      _Str2 = _Str2 + 100;
      iVar2 = iVar2 + 1;
    } while ((int)_Str2 < 0x50182518);
  }
  iVar2 = -1;
LAB_500bd26d:
  *(int *)(param_1 + 0x3c) = iVar2;
  *(undefined4 *)(param_1 + 0x40) = 0xf8;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
  return;
}

