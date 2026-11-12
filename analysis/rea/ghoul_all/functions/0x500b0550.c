// rea decompile_all
// name: FUN_500b0550
// address: 0x500b0550
// body: available
// range: 0x500b0550-0x500b0642 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b0550(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x30c) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x30c) = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if ((DAT_5015cc74 < 1) || (0x2a < DAT_5015cc74)) {
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  else {
    *(int *)(param_1 + 0x3c0) = DAT_5015cc74;
  }
  if (*(int *)(param_1 + 0x2ec) == 0) {
    if ((*(int *)(param_1 + 0x31c) == 7) || (*(int *)(param_1 + 0x3c0) == 0x25)) {
      *(undefined4 *)(param_1 + 0x2ec) = 0x32;
    }
    else {
      *(undefined4 *)(param_1 + 0x2ec) = 100;
    }
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    *(undefined1 **)(param_1 + 0x2c4) = &LAB_500b0530;
  }
  *(code **)(param_1 + 0x2d0) = FUN_500b0490;
  if ((DAT_5015cc00 < 0x23) && (-1 < DAT_5015cc00)) {
    *(int *)(param_1 + 0x31c) = DAT_5015cc00;
  }
  else {
    *(undefined4 *)(param_1 + 0x31c) = 0xffffffff;
  }
  if ((uVar1 & 2) != 0) {
    *(undefined1 **)(param_1 + 0x2cc) = &LAB_500b0290;
  }
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  (*DAT_5015cb28)(param_1);
  return;
}

