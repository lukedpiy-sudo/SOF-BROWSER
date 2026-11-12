// rea decompile_all
// name: FUN_5004f7f0
// address: 0x5004f7f0
// body: available
// range: 0x5004f7f0-0x5004f89d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5004f7f0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  int iStack_8;
  
  local_44 = *param_1;
  local_40 = param_1[1];
  local_3c = param_1[2];
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = param_2[2];
  iVar1 = (*DAT_5015cad0)(&local_44,&local_50);
  if (iVar1 != 0) {
    (*DAT_5015cac0)(&local_44,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_3,0x2010003,auStack_38);
    if (fStack_34 == 1.0) {
      return 1;
    }
    if ((iStack_8 != 0) && (*(int *)(iStack_8 + 0x74) != 0)) {
      return 1;
    }
  }
  return 0;
}

