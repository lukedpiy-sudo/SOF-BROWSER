// rea decompile_all
// name: FUN_5008ca40
// address: 0x5008ca40
// body: available
// range: 0x5008ca40-0x5008cb0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008ca40(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  ushort uVar5;
  
  uVar5 = 0;
  iVar3 = param_1;
  iVar2 = (*DAT_5015c9f8)(s_environ_normalsteam_501472d4);
  iVar3 = FUN_500856c0(iVar2,iVar3,uVar5);
  if (iVar3 != 0) {
    uVar5 = 0;
    iVar3 = param_1;
    iVar2 = (*DAT_5015c9f8)(s_environ_normalsteam_501472d4);
    FUN_50085590(iVar2,iVar3,uVar5);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
    return;
  }
  uVar4 = 0;
  iVar3 = param_1;
  uVar1 = (*DAT_5015c9f8)(s_environ_normalsteam_501472d4,param_1,0,
                          (float)(*(int *)(param_1 + 0x2ec) / 0x23));
  FUN_50085530(uVar1,iVar3,uVar4);
  *(float *)(param_1 + 0x2a0) = DAT_5015ccdc + *(float *)(param_1 + 0x360);
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

