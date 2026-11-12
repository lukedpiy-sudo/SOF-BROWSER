// rea decompile_all
// name: FUN_50083c80
// address: 0x50083c80
// body: available
// range: 0x50083c80-0x50083d40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_50083c80(float *param_1,float *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  int iStack_8;
  
  if ((DAT_5015c514 == '\0') && (param_4 != 0)) {
    local_44 = *param_2 * 128.0 + *param_1;
    local_40 = param_2[1] * 128.0 + param_1[1];
    local_3c = param_2[2] * 128.0 + param_1[2];
    (*DAT_5015cac0)(param_1,0,0,&local_44,param_5,3,local_38);
    if ((fStack_34 <= 0.99) && ((iStack_8 == 0 || (*(int *)(iStack_8 + 0x158) == 3)))) {
      (*DAT_5015ca70)(1);
      (*DAT_5015ca70)(3);
      FUN_500839b0((int)local_38);
      (*DAT_5015ca60)(param_1,1);
    }
  }
  return;
}

