// rea decompile_all
// name: FUN_500131d0
// address: 0x500131d0
// body: available
// range: 0x500131d0-0x5001321c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500131d0(void *this,char param_1)

{
  int iVar1;
  
  *(char *)((int)this + 0xb0) = param_1;
  iVar1 = *(int *)((int)this + 0x44);
  if (param_1 == '\0') {
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0x1c) != (int *)0x0)) {
      FUN_500b41d0(*(int **)(iVar1 + 0x1c),s_barrel_still_5012fa0c,0);
    }
  }
  else if ((iVar1 != 0) && (*(int **)(iVar1 + 0x1c) != (int *)0x0)) {
    FUN_500b41d0(*(int **)(iVar1 + 0x1c),s_barrel_5012fa1c,1);
    return;
  }
  return;
}

