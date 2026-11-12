// rea decompile_all
// name: FUN_500b0d40
// address: 0x500b0d40
// body: available
// range: 0x500b0d40-0x500b0e64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_500b0d40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  
  local_58 = *(undefined4 *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_2 + 4);
  local_5c = *(undefined4 *)(param_1 + 4);
  local_54 = (float)*(int *)(param_1 + 0x304) + *(float *)(param_1 + 0xc);
  local_4c = *(undefined4 *)(param_2 + 8);
  local_48 = (float)*(int *)(param_2 + 0x304) + *(float *)(param_2 + 0xc);
  iVar1 = (*DAT_5015cad0)(&local_5c,&local_50);
  if (iVar1 != 0) {
    (*DAT_5015cac0)(&local_5c,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x19,auStack_38);
    if (fStack_34 == 1.0) {
      return 1;
    }
    if ((param_3 != 0) && (*(int *)(param_2 + 0x74) != 0)) {
      iVar1 = FUN_500f7190(param_2);
      if (iVar1 != 0) {
        uStack_44 = *(undefined4 *)(iVar1 + 4);
        uStack_40 = *(undefined4 *)(iVar1 + 8);
        fStack_3c = *(float *)(iVar1 + 0xc) + 16.0;
        (*DAT_5015cac0)(&local_5c,&DAT_5018bf0c,&DAT_5018bf0c,&uStack_44,param_1,0x19,auStack_38);
        if (fStack_34 == 1.0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

