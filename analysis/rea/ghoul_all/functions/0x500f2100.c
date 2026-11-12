// rea decompile_all
// name: FUN_500f2100
// address: 0x500f2100
// body: available
// range: 0x500f2100-0x500f2215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f2100(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_64 [100];
  
  if (((param_1 == 0) || (0 < *(int *)(param_1 + 0x2ec))) &&
     (*(int *)(*(int *)(param_1 + 0x74) + 0x354) == 0)) {
    if (param_4 == 0x1b) {
      pcVar2 = s_impact_gore_sizzle_wav_50133c78;
    }
    else {
      if (0 < param_2) {
        (*DAT_5015cb24)(1,3);
        FUN_500fe2b0();
        uVar1 = (*DAT_5015c9f4)(auStack_64,0x3f800000,0x3f800000,0,0);
        (*DAT_5015ca48)(param_1,4,uVar1);
        (*DAT_5015cb24)(1,4);
        FUN_500fe2b0();
        uVar1 = (*DAT_5015c9f4)(auStack_64,0x3f800000,0x3f800000,0,0);
        (*DAT_5015ca48)(param_1,2,uVar1);
        return;
      }
      pcVar2 = s_impact_player_armor_wav_5015448c;
    }
    uVar1 = (*DAT_5015c9f4)(pcVar2,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca48)(param_1,4,uVar1);
  }
  return;
}

