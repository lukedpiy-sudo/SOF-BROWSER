// rea decompile_all
// name: FUN_5008f230
// address: 0x5008f230
// body: available
// range: 0x5008f230-0x5008f290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008f230(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  ushort uVar5;
  
  uVar5 = 0;
  iVar3 = param_1;
  iVar2 = (*DAT_5015c9f8)(*(undefined4 *)(param_1 + 0x1e8));
  iVar3 = FUN_500856c0(iVar2,iVar3,uVar5);
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = (*DAT_5015c9f8)(*(undefined4 *)(param_1 + 0x1e8));
    FUN_50085590(iVar3,param_1,uVar5);
    return;
  }
  uVar4 = 0;
  uVar1 = (*DAT_5015c9f8)(*(undefined4 *)(param_1 + 0x1e8));
  FUN_50085530(uVar1,param_1,uVar4);
  return;
}

