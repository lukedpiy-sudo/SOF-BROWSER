// rea decompile_all
// name: FUN_500a9e40
// address: 0x500a9e40
// body: available
// range: 0x500a9e40-0x500a9eb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500a9e40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2ec);
  iVar2 = *(int *)(param_1 + 0x2f0);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x2ec) = param_2 + iVar1;
    if (iVar2 < param_2 + iVar1) {
      *(int *)(param_1 + 0x2ec) = iVar2;
    }
    uVar3 = (*DAT_5015c9f4)(s_dm_healthpu_wav_50144c88,0x3f800000,0x40000000,0,0);
    (*DAT_5015ca48)(param_1,3,uVar3);
    FUN_500f2810(param_1,iVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x348) = 0;
    return 1;
  }
  return 0;
}

