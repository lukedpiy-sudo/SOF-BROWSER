// rea decompile_all
// name: FUN_500a5470
// address: 0x500a5470
// body: available
// range: 0x500a5470-0x500a567d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_500a5470(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  uint uStack_c4;
  undefined1 auStack_c0 [4];
  char *pcStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  void *local_94;
  undefined4 uStack_90;
  char acStack_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114fe6;
  local_c = ExceptionList;
  uVar3 = CONCAT31((int3)((uint)ExceptionList >> 8),*(char *)((int)this + 0x28));
  if (*(char *)((int)this + 0x28) == '\0') {
    ExceptionList = &local_c;
    local_94 = this;
    uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x44))();
    uStack_c4 = 1;
    if ((short)uVar3 != 0) {
      pvVar7 = this;
      uStack_98 = uVar3;
      do {
        iStack_ac = (**(code **)(**(int **)((int)pvVar7 + 0x24) + 0x4c))(uStack_c4,param_1,0);
        (**(code **)(**(int **)((int)pvVar7 + 0x24) + 0x48))(uStack_c4,&uStack_98);
        uVar3 = 0xffffffff;
        pcVar8 = acStack_8c;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        FUN_50082bb0(auStack_b0,(undefined4 *)acStack_8c,~uVar3 - 1);
        puVar2 = *(undefined4 **)((int)this + 0x1c);
        uStack_4 = 0;
        iVar4 = FUN_500a6b50(puVar2,puVar2[1]);
        puVar2[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        FUN_500a6db0((undefined1 *)(iVar4 + 8),auStack_b0);
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
        uStack_4 = 0xffffffff;
        if (iStack_ac != 0) {
          if (*(char *)(iStack_ac + -1) == '\0') {
            FUN_50106b60((char *)(iStack_ac + -1));
          }
          else {
            *(char *)(iStack_ac + -1) = *(char *)(iStack_ac + -1) + -1;
          }
        }
        iStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        FUN_500826d0(auStack_c0,'\0');
        uVar3 = 0xffffffff;
        pcVar8 = param_1;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        uStack_9c = uVar3;
        uVar5 = FUN_50082c70(auStack_c0,uVar3,'\x01');
        if ((char)uVar5 != '\0') {
          pcVar8 = param_1;
          pcVar9 = pcStack_bc;
          for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar6 = uVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          }
          pcStack_bc[uVar3] = '\0';
          uStack_b8 = uVar3;
        }
        uStack_4 = 1;
        FUN_500a6af0((void *)((int)this + 0x18),&uStack_90,*(int *)((int)this + 0x1c),auStack_c0);
        uStack_4 = 0xffffffff;
        if (pcStack_bc != (char *)0x0) {
          if (pcStack_bc[-1] == '\0') {
            FUN_50106b60(pcStack_bc + -1);
          }
          else {
            pcStack_bc[-1] = pcStack_bc[-1] + -1;
          }
        }
        pcStack_bc = (char *)0x0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        if ((short)uStack_a0 != 0) {
          ExceptionList = local_c;
          return uStack_a0;
        }
        uVar3 = uStack_c4 + 1;
        pvVar7 = local_94;
        uStack_c4 = uVar3;
      } while ((ushort)uVar3 <= (ushort)uStack_98);
    }
  }
  ExceptionList = local_c;
  return uVar3 & 0xffff0000;
}

