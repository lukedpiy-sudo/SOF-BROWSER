// rea decompile_all
// name: FUN_20060230
// address: 0x20060230
// body: available
// range: 0x20060230-0x20060350 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_20060230(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0x1234abcd;
  _DAT_203fecd4 = FUN_20055390(param_1);
  DAT_203fecd8 = 0;
  FUN_2001c940(s_Attempting_write_of_chunk__s_len_20139f88,&DAT_203fecd4,param_3);
  uVar1 = param_2;
  if (*(float *)(DAT_203fec9c + 0x18) == 0.0) {
    uStack_8 = FUN_2004d150(param_2,param_3);
    iVar2 = FUN_200facde(&param_1,1,4,DAT_203fecdc);
    iVar3 = FUN_200facde(&param_3,1,4,DAT_203fecdc);
    iVar4 = FUN_200facde(&uStack_8,1,4,DAT_203fecdc);
    iVar5 = FUN_200facde(uVar1,1,param_3,DAT_203fecdc);
    iVar6 = FUN_200facde(&local_4,1,4,DAT_203fecdc);
    if (iVar2 + iVar3 + iVar4 + iVar5 + iVar6 != param_3 + 0x10) {
      _DAT_203fecd4 = FUN_20055390(param_1);
      DAT_203fecd8 = 0;
      Com_Printf(&DAT_20139f6c,&DAT_203fecd4);
      return 0;
    }
  }
  return 1;
}

