// rea decompile_all
// name: FUN_501127d0
// address: 0x501127d0
// body: available
// range: 0x501127d0-0x50112842 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __cdecl FUN_501127d0(uint *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  
  if (DAT_5018c61c == 0) {
    puVar2 = FUN_50109160(param_1,(char)param_2);
    return puVar2;
  }
  while( true ) {
    uVar1 = (ushort)(byte)*param_1;
    if (uVar1 == 0) break;
    if ((*(byte *)((int)&DAT_5018c720 + uVar1 + 1) & 4) == 0) {
      puVar2 = param_1;
      if (param_2 == uVar1) break;
    }
    else {
      puVar2 = (uint *)((int)param_1 + 1);
      if (*(byte *)((int)param_1 + 1) == 0) {
        return (uint *)0x0;
      }
      if (param_2 == CONCAT11((byte)*param_1,*(byte *)((int)param_1 + 1))) {
        return param_1;
      }
    }
    param_1 = (uint *)((int)puVar2 + 1);
  }
  return (uint *)(~-(uint)(param_2 != uVar1) & (uint)param_1);
}

