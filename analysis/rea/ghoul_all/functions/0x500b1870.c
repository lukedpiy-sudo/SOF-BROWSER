// rea decompile_all
// name: FUN_500b1870
// address: 0x500b1870
// body: available
// range: 0x500b1870-0x500b191c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b1870(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  char local_38 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + 1.0;
  local_44 = *puVar1;
  local_40 = *(undefined4 *)(param_1 + 8);
  local_3c = *(float *)(param_1 + 0xc) - 256.0;
  (*DAT_5015cac0)(puVar1,param_1 + 0x11c,param_1 + 0x128,&local_44,param_1,0x2020003,local_38);
  if ((fStack_34 != 1.0) && (local_38[0] == '\0')) {
    *puVar1 = uStack_30;
    *(undefined4 *)(param_1 + 8) = uStack_2c;
    *(undefined4 *)(param_1 + 0xc) = uStack_28;
    (*DAT_5015cb28)(param_1);
    FUN_500b1470(param_1);
    FUN_500b15b0(param_1);
  }
  return;
}

