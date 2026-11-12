// rea decompile_all
// name: FUN_500a29e0
// address: 0x500a29e0
// body: available
// range: 0x500a29e0-0x500a2bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a29e0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iStack_30;
  undefined4 auStack_20 [2];
  undefined4 auStack_18 [3];
  void *apvStack_c [3];
  
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 0xc);
  iStack_30 = 0x500a29ff;
  uVar2 = FUN_50015070(&DAT_5018b4b8,*(int *)(param_1 + 0x14));
  *(undefined4 *)((int)this + 0x14) = uVar2;
  iStack_30 = 0x500a2a10;
  uVar2 = FUN_50015070(&DAT_5018b490,*(int *)(param_1 + 0x10));
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined2 *)((int)this + 0x18) = *(undefined2 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)(param_1 + 0x22);
  iStack_30 = 0x500a2a3f;
  iVar3 = FUN_50015070(&DAT_5018b468,*(int *)(param_1 + 0x24));
  *(int *)((int)this + 0x24) = iVar3;
  iStack_30 = *(int *)(iVar3 + 0x24);
  piVar4 = FUN_500baf60();
  *(int **)((int)this + 0x1c) = piVar4;
  apvStack_c[0] = this;
  if (*(char *)((int)this + 0xc) != '\0') {
    iStack_30 = 0x500a2a6c;
    (**(code **)(*piVar4 + 0x54))();
    iStack_30 = CONCAT22((short)((uint)*(int *)((int)this + 0x14) >> 0x10),
                         *(undefined2 *)((int)this + 0x20));
    (**(code **)(**(int **)(*(int *)((int)this + 0x14) + 0xc) + 0x70))
              (CONCAT22((short)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x10),
                        *(undefined2 *)((int)this + 0x18)),*(undefined4 *)((int)this + 0x1c));
    iVar3 = *(int *)((int)this + 0x14);
    FUN_500150e0(&DAT_5018b490,this);
    FUN_500a6a10((void *)(iVar3 + 4),*(int *)(iVar3 + 4),(int *)apvStack_c);
    return;
  }
  iVar3 = *(int *)((int)this + 0x10);
  if (*(char *)(iVar3 + 0xc) == '\0') {
    if (*(int *)(iVar3 + 0x10) != 0) {
      uVar5 = FUN_500a32f0(*(int *)(iVar3 + 0x10));
      goto LAB_500a2ad8;
    }
  }
  else if (*(int *)(iVar3 + 0x14) != 0) {
    uVar5 = *(uint *)(*(int *)(iVar3 + 0x14) + 0x10);
    goto LAB_500a2ad8;
  }
  uVar5 = 0;
LAB_500a2ad8:
  iStack_30 = 0x500a2ae1;
  (**(code **)(**(int **)((int)this + 0x1c) + 0x54))();
  iStack_30 = CONCAT22((short)((uint)*(int *)((int)this + 0x10) >> 0x10),
                       *(undefined2 *)((int)this + 0x20));
  (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 0x1c) + 0x70))
            (CONCAT22((short)((uint)*(undefined4 *)((int)this + 0x1c) >> 0x10),
                      *(undefined2 *)((int)this + 0x18)),*(undefined4 *)((int)this + 0x1c));
  iVar3 = *(int *)((int)this + 0x10);
  FUN_5006b100(&DAT_5018b490,(int *)&stack0xffffffd4,(uint *)apvStack_c);
  if (uVar5 == DAT_5018b494) {
    iStack_30 = DAT_501546ec;
    DAT_501546ec = DAT_501546ec + 1;
    piVar4 = (int *)FUN_5000a2e0(&DAT_5018b490,auStack_20,(uint *)&stack0xffffffd4);
    *(int *)(*piVar4 + 0x10) = iStack_30;
    piVar4 = (int *)FUN_50010d00(auStack_20,&iStack_30,(undefined4 *)&stack0xffffffd4);
    piVar4 = (int *)FUN_500c7c80(&DAT_5018b4a4,auStack_18,piVar4);
    *(void **)(*piVar4 + 0x10) = apvStack_c[0];
  }
  iVar1 = *(int *)(iVar3 + 4);
  iVar6 = FUN_500a6c50((int *)&stack0xffffffdc,iVar1,*(int **)(iVar1 + 4));
  *(int *)(iVar1 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  return;
}

