// rea decompile_all
// name: FUN_500fed70
// address: 0x500fed70
// body: available
// range: 0x500fed70-0x500fede5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500fed70(int param_1,int param_2)

{
  int iVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  undefined3 extraout_var;
  char *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x74);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 8) == 0) {
      *(undefined4 *)(iVar1 + 0x558) = 0;
      uVar3 = (undefined3)((uint)iVar1 >> 8);
      if (DAT_5015d8d5 != '\0') goto LAB_500fede2;
      pcVar4 = s_Weapons_Goggles_off_wav_5015598c;
    }
    else {
      *(undefined4 *)(iVar1 + 0x558) = 1;
      pcVar4 = s_Weapons_Goggles_on_wav_501559a4;
    }
    uVar2 = (*DAT_5015c9f4)(pcVar4,0x3f19999a,0x40000000,0,0);
    (*DAT_5015ca48)(param_1,2,uVar2);
    uVar3 = extraout_var;
  }
LAB_500fede2:
  return CONCAT31(uVar3,1);
}

