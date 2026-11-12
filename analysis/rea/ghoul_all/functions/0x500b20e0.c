// rea decompile_all
// name: FUN_500b20e0
// address: 0x500b20e0
// body: available
// range: 0x500b20e0-0x500b2121 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500b20e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)((int)this + 0x120);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x124);
    do {
      if (*piVar3 == param_1) {
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar1 != 0x10) {
    *(int *)((int)this + iVar1 * 4 + 0x124) = param_1;
    *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
  }
  return;
}

