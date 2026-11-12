// rea decompile_all
// name: FUN_50095b80
// address: 0x50095b80
// body: available
// range: 0x50095b80-0x50095bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_50095b80(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_2 + 0x1b8) & 4) != 0) {
    uVar1 = (**(code **)(**(int **)(param_2 + 0x164) + 0x4c))(DAT_5015ccdc);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  uVar1 = (*DAT_5015c9f4)(s_Ambient_Models_Banner_BanFlap_wa_5014aa34);
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = 0xf8;
  uVar1 = FUN_500b4160(param_2,PTR_s_banner_50147f74,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

