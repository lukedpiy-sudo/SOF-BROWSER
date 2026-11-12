// rea decompile_all
// name: FUN_50080d30
// address: 0x50080d30
// body: available
// range: 0x50080d30-0x50080e1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50080d30(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined1 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_4 != (int *)0x0) && (param_3 != (int *)0x0)) {
    FUN_50041700(&local_44);
    local_24 = param_7 & 0xff;
    local_1c = param_1;
    local_30 = *param_5;
    local_2c = param_5[1];
    local_28 = param_5[2];
    local_3c = *param_6;
    local_38 = param_6[1];
    local_34 = param_6[2];
    local_18 = param_2;
    local_14 = param_11;
    local_40 = param_10;
    local_20 = param_13;
    local_10 = param_9;
    local_4 = param_15;
    local_44 = param_16;
    local_8 = param_14;
    local_c = param_12;
    (**(code **)(*param_4 + 0xb4))(param_3,param_12,&local_44);
    (**(code **)(*param_3 + 0x48))(param_5);
    (**(code **)(*param_3 + 0x54))(0);
  }
  return;
}

