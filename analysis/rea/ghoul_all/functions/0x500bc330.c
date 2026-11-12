// rea decompile_all
// name: FUN_500bc330
// address: 0x500bc330
// body: available
// range: 0x500bc330-0x500bc3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bc330(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 uVar6;
  ushort uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 4) == 0) {
    uVar7 = 0;
    *(uint *)(param_1 + 0x1b8) = uVar1 | 4;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if ((uVar1 & 8) == 0) {
      pcVar5 = s_environ_roadflare_5014e86c;
    }
    else {
      pcVar5 = s_environ_roadflare_blue_5014e880;
    }
    iVar4 = (*DAT_5015c9f8)(pcVar5);
    FUN_50085590(iVar4,param_1,uVar7);
    return;
  }
  *(uint *)(param_1 + 0x1b8) = uVar1 & 0xfffffffb;
  uVar3 = (*DAT_5015c9f4)(s_Ambient_Gen_FireFX_FlareLP_wav_5014e898);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = 0xf8;
  uVar6 = 0;
  if ((*(byte *)(param_1 + 0x1b8) & 8) != 0) {
    uVar2 = (*DAT_5015c9f8)(s_environ_roadflare_blue_5014e880);
    FUN_50085530(uVar2,param_1,uVar6);
    return;
  }
  uVar2 = (*DAT_5015c9f8)(s_environ_roadflare_5014e86c,param_1,0,0);
  FUN_50085530(uVar2,param_1,uVar6);
  return;
}

