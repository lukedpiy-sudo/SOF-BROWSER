// rea decompile_all
// name: FUN_5010925a
// address: 0x5010925a
// body: available
// range: 0x5010925a-0x501092cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5010925a(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  
  if (DAT_5018c964 == 3) {
    if ((param_1 <= DAT_5018c95c) && (piVar1 = FUN_5010d83a(param_1), piVar1 != (int *)0x0)) {
      return;
    }
  }
  else if (DAT_5018c964 == 2) {
    if (param_1 == (uint *)0x0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
    }
    if ((dwBytes <= DAT_5015886c) && (piVar1 = FUN_5010e2dd(dwBytes >> 4), piVar1 != (int *)0x0)) {
      return;
    }
    goto LAB_501092bd;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_501092bd:
  HeapAlloc(DAT_5018c960,0,dwBytes);
  return;
}

