// rea decompile_all
// name: FUN_500f63e0
// address: 0x500f63e0
// body: available
// range: 0x500f63e0-0x500f650b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f63e0(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x470) = 1;
  }
  *(undefined4 *)(param_1 + 4) = DAT_5015d1d4;
  *(undefined4 *)(param_1 + 8) = DAT_5015d1d8;
  *(undefined4 *)(param_1 + 0xc) = DAT_5015d1dc;
  lVar2 = __ftol();
  *(short *)(*(int *)(param_1 + 0x74) + 4) = (short)lVar2;
  lVar2 = __ftol();
  *(short *)(*(int *)(param_1 + 0x74) + 6) = (short)lVar2;
  lVar2 = __ftol();
  *(short *)(*(int *)(param_1 + 0x74) + 8) = (short)lVar2;
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar1 + 0x1c) = DAT_5015d1e0;
  *(undefined4 *)(iVar1 + 0x20) = DAT_5015d1e4;
  *(undefined4 *)(iVar1 + 0x24) = DAT_5015d1e8;
  **(int **)(param_1 + 0x74) = (uint)((*(int **)(param_1 + 0x74))[0xb7] != 0) * 2 + 5;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 0;
  *(uint *)(*(int *)(param_1 + 0x74) + 0x98) =
       *(uint *)(*(int *)(param_1 + 0x74) + 0x98) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffbfffff;
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    (**(code **)(*DAT_5015c4d8 + 0xc4))(param_1,0,param_2);
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x6c) = 0;
  return;
}

