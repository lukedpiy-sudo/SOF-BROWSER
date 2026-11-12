// rea decompile_all
// name: FUN_500b9300
// address: 0x500b9300
// body: available
// range: 0x500b9300-0x500b9461 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b9300(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  char cStack_37;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_1c;
  int iStack_8;
  
  local_5c = *(undefined4 *)(param_1 + 4);
  local_58 = *(undefined4 *)(param_1 + 8);
  local_54 = *(float *)(param_1 + 0xc) - 0.25;
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0x158) == 4)) {
    local_54 = *(float *)(param_1 + 0xc) - 2.5;
  }
  if (*(int *)(param_1 + 0x158) == 5) {
    local_3c = *(undefined4 *)(param_1 + 0x124);
    uVar3 = *(undefined4 *)(param_1 + 0x15c);
    puVar2 = &local_50;
    puVar1 = &local_44;
    local_44 = 0xc1000000;
    local_40 = 0xc1000000;
    local_50 = 0x41000000;
    local_4c = 0x41000000;
    local_48 = 0x41000000;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x15c);
    puVar2 = (undefined4 *)(param_1 + 0x128);
    puVar1 = (undefined4 *)(param_1 + 0x11c);
  }
  (*DAT_5015cac0)((undefined4 *)(param_1 + 4),puVar1,puVar2,&local_5c,param_1,uVar3,&local_38);
  if (cStack_37 == '\0') {
    if (fStack_34 == 1.0) {
      *(undefined4 *)(param_1 + 0x330) = 0;
      return;
    }
    if (0.7 <= fStack_1c) {
      *(undefined4 *)(param_1 + 8) = uStack_2c;
      *(undefined4 *)(param_1 + 4) = uStack_30;
      *(undefined4 *)(param_1 + 0xc) = uStack_28;
      *(int *)(param_1 + 0x330) = iStack_8;
      *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(iStack_8 + 0x7c);
      return;
    }
  }
  else if (local_38 != '\0') {
    *(int *)(param_1 + 0x330) = iStack_8;
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(iStack_8 + 0x7c);
    return;
  }
  *(undefined4 *)(param_1 + 0x330) = 0;
  return;
}

