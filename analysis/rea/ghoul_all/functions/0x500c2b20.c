// rea decompile_all
// name: FUN_500c2b20
// address: 0x500c2b20
// body: available
// range: 0x500c2b20-0x500c2b94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500c2b20(int param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  uint *puVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_500c2d00(0,param_2,param_3,2);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0x2c8) != 0) &&
       (puVar2 = FUN_50107030(*(uint **)(iVar1 + 0x1b4),s_trigger_501426a4), puVar2 != (uint *)0x0))
    break;
    iVar1 = FUN_500c2d00(iVar1,param_2,param_3,2);
  }
  return iVar1;
}

