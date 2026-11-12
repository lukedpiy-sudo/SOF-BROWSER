// rea decompile_all
// name: FUN_500a5290
// address: 0x500a5290
// body: available
// range: 0x500a5290-0x500a5467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_500a5290(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  char *pcStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  void *pvStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114fc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x40))(param_1);
  if ((short)uVar3 == 0) {
    ExceptionList = pvStack_10;
    return uVar3 & 0xffff0000;
  }
  if (*(char *)((int)this + 0x28) != '\0') {
    uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x50))(uVar3,param_1,0);
    ExceptionList = pvStack_1c;
    return uVar3;
  }
  auStack_20[0] = param_1._0_1_;
  uVar6 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pvStack_1c = (void *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_50082bb0(auStack_20,(undefined4 *)param_1,~uVar6 - 1);
  puVar2 = *(undefined4 **)((int)this + 0x1c);
  puStack_8 = (undefined1 *)0x0;
  iVar4 = FUN_500a6b50(puVar2,puVar2[1]);
  puVar2[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  FUN_500a6db0((undefined1 *)(iVar4 + 8),auStack_20);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  puStack_8 = (undefined1 *)0xffffffff;
  if (pvStack_1c != (void *)0x0) {
    if (*(char *)((int)pvStack_1c + -1) == '\0') {
      FUN_50106b60((char *)((int)pvStack_1c + -1));
    }
    else {
      *(char *)((int)pvStack_1c + -1) = *(char *)((int)pvStack_1c + -1) + -1;
    }
  }
  auStack_30[0] = param_1._0_1_;
  FUN_500826d0(auStack_30,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar5 = FUN_50082c70(auStack_30,uVar6,'\x01');
  if ((char)uVar5 != '\0') {
    pcVar8 = param_1;
    pcVar9 = pcStack_2c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcStack_2c[uVar6] = '\0';
    uStack_28 = uVar6;
  }
  puStack_8 = (undefined1 *)0x1;
  FUN_500a6af0((void *)((int)this + 0x18),&uStack_34,*(int *)((int)this + 0x1c),auStack_30);
  puStack_8 = (undefined1 *)0xffffffff;
  if (pcStack_2c != (char *)0x0) {
    if (pcStack_2c[-1] == '\0') {
      FUN_50106b60(pcStack_2c + -1);
    }
    else {
      pcStack_2c[-1] = pcStack_2c[-1] + -1;
    }
  }
  pcStack_2c = (char *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uVar3 = (**(code **)(**(int **)(unaff_EBX + 0x24) + 0x4c))(uVar3,param_1,0);
  ExceptionList = pvStack_1c;
  return uVar3;
}

