// rea decompile_all
// name: FUN_5009d5c0
// address: 0x5009d5c0
// body: available
// range: 0x5009d5c0-0x5009d693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009d5c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_38 [4];
  float fStack_34;
  
  uVar1 = FUN_500c26a0(0,0x1b4,s_player_50142e48,(void *)0x0);
  if (uVar1 != 0) {
    param_1[0x58] = uVar1;
    (*DAT_5015cac0)(param_1 + 1,0,0,(float *)(uVar1 + 4),param_1,param_1[0x57],local_38);
    param_1[0x58] = 0;
    if (fStack_34 == 1.0) {
      iVar2 = FUN_500b4a80((int)param_1,(float *)(uVar1 + 4),(float)param_1[0xd7]);
      if ((char)iVar2 != '\0') {
        uVar3 = (*DAT_5015c9f4)(s_Ambient_Models_Camera_Alarm_wav_5014afcc,0x3f19999a,0x3f800000,0,0
                               );
        (*DAT_5015ca48)(param_1,2,uVar3);
        FUN_500c2f80(param_1,uVar1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x6e) & 4) == 0) {
    param_1[0xad] = (int)(DAT_5015ccdc + 1.0);
  }
  return;
}

