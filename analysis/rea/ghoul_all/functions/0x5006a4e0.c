// rea decompile_all
// name: FUN_5006a4e0
// address: 0x5006a4e0
// body: available
// range: 0x5006a4e0-0x5006a558 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5006a4e0(void *this,uint param_1)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x460), 0 < iVar1)) && (iVar1 < 0x28)) {
    iVar1 = *(int *)((int)this + iVar1 * 4 + 4);
    local_8 = FUN_5000a7f0((void *)(iVar1 + 0x148),&param_1);
    if ((local_8 == *(undefined4 **)(iVar1 + 0x14c)) || (param_1 < (uint)local_8[3])) {
      local_4 = *(undefined4 **)(iVar1 + 0x14c);
      ppuVar2 = &local_4;
    }
    else {
      ppuVar2 = &local_8;
    }
    if (*ppuVar2 != *(undefined4 **)(iVar1 + 0x14c)) {
      return (*ppuVar2)[4];
    }
  }
  return 0;
}

