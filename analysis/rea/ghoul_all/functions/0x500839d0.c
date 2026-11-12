// rea decompile_all
// name: FUN_500839d0
// address: 0x500839d0
// body: available
// range: 0x500839d0-0x50083aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500839d0(float *param_1,float *param_2,undefined4 param_3)

{
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  float afStack_30 [3];
  float afStack_24 [5];
  int iStack_10;
  int iStack_8;
  
  local_44 = *param_2 * 5.0 + *param_1;
  local_40 = param_2[1] * 5.0 + param_1[1];
  local_3c = param_2[2] * 5.0 + param_1[2];
  local_50 = *param_1 - *param_2 * 35.0;
  local_4c = param_1[1] - param_2[1] * 35.0;
  local_48 = param_1[2] - param_2[2] * 35.0;
  (*DAT_5015cac0)(&local_44,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_3,3,local_38);
  if (fStack_34 < 0.99) {
    FUN_50083830(iStack_8,afStack_30,afStack_24,iStack_10);
    return;
  }
  FUN_50083830(DAT_5015cca0,param_1,(float *)0x0,0);
  return;
}

