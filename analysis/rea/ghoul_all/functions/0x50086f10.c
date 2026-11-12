// rea decompile_all
// name: FUN_50086f10
// address: 0x50086f10
// body: available
// range: 0x50086f10-0x50087034 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086f10(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [3];
  float local_44 [3];
  undefined1 local_38 [4];
  float fStack_34;
  
  pfVar1 = (float *)(param_1 + 0x10);
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  FUN_500fdd70(pfVar1,&local_5c,local_44,local_50);
  pfVar2 = (float *)(param_1 + 4);
  local_68 = local_5c * 20.0 + *pfVar2;
  local_64 = local_58 * 20.0 + *(float *)(param_1 + 8);
  local_60 = local_54 * 20.0 + *(float *)(param_1 + 0xc);
  (*DAT_5015cac0)(pfVar2,0,0,&local_68,param_1,*(undefined4 *)(param_1 + 0x15c),local_38);
  if (fStack_34 < 1.0) {
    fStack_34 = fStack_34 * -20.0;
    *pfVar2 = local_5c * fStack_34 + *pfVar2;
    *(float *)(param_1 + 8) = local_58 * fStack_34 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = local_54 * fStack_34 + *(float *)(param_1 + 0xc);
  }
  *pfVar1 = *pfVar1 + 40.0;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  *(undefined4 *)(param_1 + 300) = 0x41100000;
  *(undefined4 *)(param_1 + 0x130) = 0x41900000;
  (*DAT_5015cb28)(param_1);
  return;
}

