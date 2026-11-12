// rea decompile_all
// name: FUN_500872e0
// address: 0x500872e0
// body: available
// range: 0x500872e0-0x50087401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500872e0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  undefined1 local_38 [4];
  float fStack_34;
  
  pfVar1 = (float *)(param_1 + 0x10);
  local_5c = 0.0;
  local_58 = 0.0;
  local_54 = 0.0;
  FUN_500fdd70(pfVar1,&local_50,local_44,(float *)0x0);
  pfVar2 = (float *)(param_1 + 4);
  local_5c = *pfVar2 - local_50 * 30.0;
  local_58 = *(float *)(param_1 + 8) - local_4c * 30.0;
  local_54 = *(float *)(param_1 + 0xc) - local_48 * 30.0;
  (*DAT_5015cac0)(pfVar2,0,0,&local_5c,param_1,*(undefined4 *)(param_1 + 0x15c),local_38);
  if (fStack_34 < 1.0) {
    fStack_34 = fStack_34 * 30.0;
    *pfVar2 = local_50 * fStack_34 + *pfVar2;
    *(float *)(param_1 + 8) = local_4c * fStack_34 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = local_48 * fStack_34 + *(float *)(param_1 + 0xc);
  }
  *pfVar1 = *pfVar1 - 37.0;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0b00000;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  *(undefined4 *)(param_1 + 300) = 0x41100000;
  *(undefined4 *)(param_1 + 0x130) = 0x41900000;
  (*DAT_5015cb28)(param_1);
  return;
}

