// rea decompile_all
// name: FUN_500b1470
// address: 0x500b1470
// body: available
// range: 0x500b1470-0x500b15a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b1470(int param_1)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  char local_38;
  char cStack_37;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  int iStack_8;
  
  iVar1 = *(int *)(param_1 + 0x330);
  if ((*(byte *)(param_1 + 0x1a0) & 3) == 0) {
    if (30.0 < *(float *)(param_1 + 0x254)) {
      *(undefined4 *)(param_1 + 0x330) = 0;
      return;
    }
    local_3c = *(float *)(param_1 + 0xc) - 0.25;
    local_44 = *(undefined4 *)(param_1 + 4);
    local_40 = *(undefined4 *)(param_1 + 8);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x158) == 4)) {
      local_3c = *(float *)(param_1 + 0xc) - 2.5;
    }
    (*DAT_5015cac0)((undefined4 *)(param_1 + 4),param_1 + 0x11c,param_1 + 0x128,&local_44,param_1,
                    0x2020003,&local_38);
    if (0.7 <= fStack_1c) {
      if ((cStack_37 == '\0') && (local_38 == '\0')) {
        *(undefined4 *)(param_1 + 4) = uStack_30;
        *(undefined4 *)(param_1 + 8) = uStack_2c;
        *(undefined4 *)(param_1 + 0xc) = uStack_28;
        *(int *)(param_1 + 0x330) = iStack_8;
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(iStack_8 + 0x7c);
        if ((iStack_8 != iVar1) && (*(code **)(iStack_8 + 0x2c0) != (code *)0x0)) {
          (**(code **)(iStack_8 + 0x2c0))(iStack_8,param_1,0,0);
        }
        *(undefined4 *)(param_1 + 0x254) = 0;
      }
    }
    else if (cStack_37 == '\0') {
      *(undefined4 *)(param_1 + 0x330) = 0;
      return;
    }
  }
  return;
}

