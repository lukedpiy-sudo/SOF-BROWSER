// rea decompile_all
// name: FUN_50106fb4
// address: 0x50106fb4
// body: available
// range: 0x50106fb4-0x50106fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50106fb4(void *param_1)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)((int)param_1 + 4);
  if (((_Str != (char *)0x0) && (_Str[-1] != '\0')) && (_Str[-1] != -1)) {
    FUN_500826d0(param_1,'\x01');
    sVar1 = _strlen(_Str);
    FUN_50082bb0(param_1,(undefined4 *)_Str,sVar1);
  }
  return;
}

