// rea decompile_all
// name: FUN_500b6c40
// address: 0x500b6c40
// body: available
// range: 0x500b6c40-0x500b6de4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500b6c40(void *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  uint auStack_80 [8];
  int local_60 [2];
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  (*DAT_5015cb48)(0x45444f49,local_60,0x60,0);
  iVar1 = FUN_500ba8c0(local_60[0]);
  *(int *)((int)param_1 + 0x10) = iVar1;
  *(undefined4 *)((int)param_1 + 0x20) = uStack_50;
  *(undefined4 *)((int)param_1 + 0x24) = uStack_4c;
  *(undefined4 *)((int)param_1 + 0x18) = uStack_58;
  iVar1 = FUN_500ba8c0(iStack_54);
  *(int *)((int)param_1 + 0x1c) = iVar1;
  FUN_500b7060((void *)((int)param_1 + 0x28),(int)auStack_48);
  *(void **)(*(int *)((int)param_1 + 0x10) + 0x210) = param_1;
  (*DAT_5015cb48)(0x4544424e,&iStack_9c,4,0);
  if (iStack_9c != 0) {
    puVar2 = operator_new(iStack_9c << 2);
    (*DAT_5015cb48)(0x4544424c,puVar2,iStack_9c * 4,0);
    iVar1 = 0;
    if (0 < iStack_9c) {
      do {
        iStack_84 = *(int *)(puVar2 + iVar1 * 4);
        uVar3 = 0;
        if (iStack_84 != 0) {
          FUN_5006b1a0(&DAT_5018b4a4,&iStack_90,&iStack_84);
          if (iStack_90 == DAT_5018b4a8) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iStack_90 + 0x10);
          }
        }
        uStack_98 = uVar3;
        uStack_8c = uVar3;
        if (uVar3 != 0) {
          FUN_5006b100(&DAT_5018b490,&iStack_88,&uStack_98);
          if (iStack_88 == DAT_5018b494) {
            iStack_94 = DAT_501546ec;
            DAT_501546ec = DAT_501546ec + 1;
            auStack_80[0] = uStack_98;
            auStack_80[1] = 0;
            piVar4 = (int *)FUN_5000a2e0(&DAT_5018b490,auStack_80 + 2,auStack_80);
            *(int *)(*piVar4 + 0x10) = iStack_94;
            puVar5 = (uint *)FUN_50010ba0(&DAT_5018b4a4,&iStack_94);
            *puVar5 = uStack_98;
          }
        }
        FUN_500632d0(param_1,*(undefined4 **)((int)param_1 + 8),1,&uStack_8c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iStack_9c);
    }
    FUN_50106b60(puVar2);
  }
  return;
}

