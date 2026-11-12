// rea decompile_all
// name: FUN_50060990
// address: 0x50060990
// body: available
// range: 0x50060990-0x500609f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50060990(void *this,ushort param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x98) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98)) / 0x1c;
  }
  uVar1 = iVar3 - 1;
  if (0 < (int)uVar1) {
    puVar2 = (ushort *)(*(int *)((int)this + 0x98) + 4 + uVar1 * 0x1c);
    do {
      if ((puVar2[-1] <= param_1) && (param_1 <= *puVar2)) {
        return uVar1;
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + -0xe;
    } while (0 < (int)uVar1);
  }
  return uVar1 & 0xffffff00;
}

