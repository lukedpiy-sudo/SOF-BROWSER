// rea decompile_all
// name: FUN_500a5230
// address: 0x500a5230
// body: available
// range: 0x500a5230-0x500a528a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_500a5230(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined1 local_64 [100];
  
  FUN_50107654(local_64,(byte *)s_ghoul__s__s_ghl_5012f804);
  if (*(char *)((int)this + 0x28) != '\0') {
    uVar1 = (**(code **)(**(int **)((int)this + 0x24) + 0xc))(local_64);
    return uVar1;
  }
  uVar1 = (*DAT_5015ca24)(s_Tried_to_find_sequence__s_before_5014b2ec,param_1);
  return uVar1 & 0xffff0000;
}

