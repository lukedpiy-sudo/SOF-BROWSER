// rea decompile_all
// name: FUN_5010fe5f
// address: 0x5010fe5f
// body: available
// range: 0x5010fe5f-0x5010fec2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_5010fe5f(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_5010fec3(&local_10,(uint *)&stack0x00000004);
  _DAT_5018c5c8 = FUN_50111a7e(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_5018c5a0);
  _DAT_5018c5c0 = (int)DAT_5018c5a2;
  _DAT_5018c5c4 = (int)DAT_5018c5a0;
  _DAT_5018c5cc = &DAT_5018c5a4;
  return &DAT_5018c5c0;
}

