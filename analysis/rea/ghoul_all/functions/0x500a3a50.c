// rea decompile_all
// name: FUN_500a3a50
// address: 0x500a3a50
// body: available
// range: 0x500a3a50-0x500a3bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500a3a50(void *this,uint param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  char *pcVar7;
  int local_90;
  uint local_8c;
  int iStack_88;
  void *local_84;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  char acStack_70 [100];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114e5e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = this;
  pvVar3 = operator_new(0xc);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar3 + 8) = 0;
  }
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)this + 4) = pvVar3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_50129848;
  if ((param_1 == 0) || (param_3 == (int *)0x0)) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0x90))(0);
    *(undefined4 *)((int)this + 0xc) = uVar4;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined2 *)((int)this + 0x18) = 0;
    *(uint *)((int)this + 0x14) = param_1;
    local_8c = param_1;
    if (param_1 != 0) {
      FUN_5006b100(&DAT_5018b468,&local_90,&local_8c);
      if (local_90 == DAT_5018b46c) {
        iStack_88 = DAT_501546ec;
        DAT_501546ec = DAT_501546ec + 1;
        local_90 = 0;
        puVar5 = (uint *)FUN_50010d00(auStack_78,&local_8c,&local_90);
        piVar6 = (int *)FUN_5000a2e0(&DAT_5018b468,auStack_80,puVar5);
        *(int *)(*piVar6 + 0x10) = iStack_88;
        puVar5 = (uint *)FUN_50010ba0(&DAT_5018b47c,&iStack_88);
        *puVar5 = local_8c;
      }
    }
    *(int *)((int)this + 0x10) = param_2;
    *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)((int)this + 0xc);
    (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 0x164) + 0x54))(*(int *)((int)this + 0x10))
    ;
    pcVar7 = (char *)(param_1 + 0x42a);
    iVar2 = -(int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[(int)(acStack_70 + iVar2)] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar7 = (char *)(param_1 + 0x48e);
    iVar2 = -(int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[(int)(acStack_70 + iVar2)] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  ExceptionList = pvStack_c;
  return this;
}

