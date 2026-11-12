// rea decompile_all
// name: FUN_500f5200
// address: 0x500f5200
// body: available
// range: 0x500f5200-0x500f5360 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f5200(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  int *local_34;
  int local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  
  local_34 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  local_30 = param_1;
  (**(code **)(*local_34 + 0xf4))(&local_34);
  iVar2 = *(int *)(param_1 + 0x74);
  if (((((byte)*(undefined4 *)(iVar2 + 0x484) | (byte)*(undefined4 *)(iVar2 + 0x47c)) & 1) == 0) ||
     (local_30 = 1, *(int *)(iVar2 + 0x488) == 0)) {
    local_30 = 0;
  }
  uStack_2c = (*(uint *)(iVar2 + 0x484) | *(uint *)(iVar2 + 0x47c)) & 4;
  uStack_28 = (*(uint *)(iVar2 + 0x484) | *(uint *)(iVar2 + 0x47c)) & 8;
  uStack_24 = (*(uint *)(iVar2 + 0x484) | *(uint *)(iVar2 + 0x47c)) & 0x10;
  uStack_20 = (uint)(0.0 < (double)*(int *)(param_1 + 0x308));
  uStack_1c = (uint)((double)*(int *)(param_1 + 0x308) < 0.0);
  iStack_10 = iVar2 + 0x4b0;
  uStack_18 = (uint)*(byte *)(iVar2 + 199);
  uStack_14 = (uint)(*(char *)(iVar2 + 0x68) != '\0');
  pbVar1 = FUN_500fe320((byte *)(iVar2 + 0xcc),(byte *)s_predicting_50154644);
  iVar3 = 2;
  bVar5 = false;
  iVar2 = 0;
  bVar6 = true;
  pbVar4 = &DAT_50144958;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar5 = *pbVar1 < *pbVar4;
    bVar6 = *pbVar1 == *pbVar4;
    pbVar1 = pbVar1 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  }
  (**(code **)(*unaff_EBX + 0x124))(iVar2);
  iStack_10 = 0x3f800000;
  (**(code **)(*unaff_EBP + 0xc))();
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if ((iVar2 != 0) && (local_30 != 0 || local_34 != (int *)0x0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x564) = 0;
  }
  return;
}

