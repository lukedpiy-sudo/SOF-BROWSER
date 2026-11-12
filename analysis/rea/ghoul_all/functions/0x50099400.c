// rea decompile_all
// name: FUN_50099400
// address: 0x50099400
// body: available
// range: 0x50099400-0x50099490 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50099400(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = 0;
  iVar2 = param_1;
  iVar1 = (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
  iVar2 = FUN_500856c0(iVar1,iVar2,uVar3);
  if ((*(float *)(param_1 + 0x2dc) < DAT_5015ccdc != (*(float *)(param_1 + 0x2dc) == DAT_5015ccdc))
     && (iVar2 != 0)) {
    uVar3 = 0;
    iVar2 = param_1;
    iVar1 = (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
    FUN_50085590(iVar1,iVar2,uVar3);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  *(code **)(param_1 + 0x2b8) = FUN_50099400;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.2;
  return;
}

