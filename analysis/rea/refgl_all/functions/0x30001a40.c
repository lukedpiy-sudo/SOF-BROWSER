// rea decompile_all
// name: FUN_30001a40
// address: 0x30001a40
// body: available
// range: 0x30001a40-0x30001aae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30001a40(int param_1,int param_2,byte *param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = *param_5;
  bVar1 = *param_3;
  iVar2 = 0;
  while( true ) {
    if (bVar1 == 0) {
      return;
    }
    param_5 = (undefined4 *)(uint)bVar1;
    param_3 = param_3 + 1;
    if (param_4 <= iVar2) break;
    if (bVar1 < 0x20) {
      local_4 = *(undefined4 *)(&DAT_3008fba0 + (int)param_5 * 4);
    }
    else {
      FUN_30001850(param_1,param_2,(uint)param_5,(undefined1 *)&local_4);
      param_1 = param_1 + 8;
      iVar2 = iVar2 + 1;
    }
    bVar1 = *param_3;
  }
  return;
}

