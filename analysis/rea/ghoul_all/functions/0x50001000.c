// rea decompile_all
// name: FUN_50001000
// address: 0x50001000
// body: available
// range: 0x50001000-0x50001085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_50001000(char *param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = __strcmpi(param_1,&DAT_5015cd20);
  if (iVar1 == 0) {
    return true;
  }
  FUN_500fe2b0();
  iVar1 = __strcmpi(param_1,&DAT_5015cd20);
  if (iVar1 == 0) {
    return true;
  }
  puVar2 = FUN_50107030((uint *)&DAT_5015cd20,param_1);
  if (puVar2 != (uint *)0x0) {
    return true;
  }
  iVar1 = __strcmpi(param_1,&DAT_5015d968);
  return (bool)('\x01' - (iVar1 != 0));
}

