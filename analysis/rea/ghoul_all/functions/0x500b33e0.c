// rea decompile_all
// name: FUN_500b33e0
// address: 0x500b33e0
// body: available
// range: 0x500b33e0-0x500b341d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500b33e0(byte param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = param_2;
  if (param_2[0xab] != 0) {
    param_1 = *(byte *)(param_2[0xab] + 0x1c);
    lVar2 = __ftol();
    param_2 = (int *)(uint)(byte)lVar2;
  }
  FUN_500b30a0(piVar1,param_1,(char)param_2,param_4);
  return;
}

