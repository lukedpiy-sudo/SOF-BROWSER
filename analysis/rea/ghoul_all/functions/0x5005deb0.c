// rea decompile_all
// name: FUN_5005deb0
// address: 0x5005deb0
// body: available
// range: 0x5005deb0-0x5005df01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5005deb0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
    if (iVar2 < 0) {
      return 0;
    }
  }
  piVar1 = (int *)(*(int *)((int)this + 0x18) + 0xc);
  do {
    if (*piVar1 == param_1) {
      return *(int *)((int)this + 0x18) + iVar3 * 0x34;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xd;
  } while (iVar3 <= iVar2);
  return 0;
}

