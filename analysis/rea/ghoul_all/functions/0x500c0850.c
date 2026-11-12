// rea decompile_all
// name: FUN_500c0850
// address: 0x500c0850
// body: available
// range: 0x500c0850-0x500c0981 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c0850(int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0xc6] != 0) {
    iVar2 = param_1[0xc6] + -1;
    param_1[0xc6] = iVar2;
    if (iVar2 == 0) {
      if ((*(byte *)(param_1 + 0x6e) & 1) == 0) {
        (*DAT_5015cab0)(param_3,0x60c);
        uVar3 = (*DAT_5015c9f4)(s_Misc_Talk_wav_50147844,0x3f19999a,0x3f800000,0,0);
        (*DAT_5015ca48)(param_3,0,uVar3);
      }
      param_1[0xcb] = param_3;
      if ((float)param_1[0xad] == 0.0) {
        FUN_500c2f80(param_1,param_3);
        if (0.0 < (float)param_1[0xd8]) {
          param_1[0xae] = (int)&LAB_500c0310;
          param_1[0xad] = (int)(DAT_5015ccdc + (float)param_1[0xd8]);
          return;
        }
        param_1[0xb0] = 0;
        fVar1 = DAT_5015ccdc + 0.1;
        param_1[0xae] = (int)FUN_500c3880;
        param_1[0xad] = (int)fVar1;
      }
    }
    else if ((*(byte *)(param_1 + 0x6e) & 1) == 0) {
      (*DAT_5015cab0)(param_3,0x60b,iVar2);
      uVar3 = (*DAT_5015c9f4)(s_Misc_Talk_wav_50147844,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(param_3,0,uVar3);
      return;
    }
  }
  return;
}

