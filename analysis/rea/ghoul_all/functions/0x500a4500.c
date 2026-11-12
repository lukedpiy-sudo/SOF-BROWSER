// rea decompile_all
// name: FUN_500a4500
// address: 0x500a4500
// body: available
// range: 0x500a4500-0x500a474d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a4500(void *this,int param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_12c;
  void *pvStack_128;
  undefined4 uStack_124;
  uint auStack_120 [4];
  int aiStack_110 [3];
  undefined1 auStack_104 [260];
  
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x29);
  _strncpy((char *)((int)this + 0x42a),(char *)(param_1 + 0x42a),100);
  _strncpy((char *)((int)this + 0x48e),(char *)(param_1 + 0x48e),100);
  _strncpy((char *)((int)this + 0x4f2),(char *)(param_1 + 0x4f2),100);
  _strncpy((char *)((int)this + 0x556),(char *)(param_1 + 0x556),100);
  uVar1 = *(undefined1 *)((int)this + 0x28);
  puVar5 = (undefined4 *)(param_1 + 0x2a);
  puVar6 = (undefined4 *)((int)this + 0x2a);
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((int)this + 0x28) = 0;
  uStack_12c = (char *)CONCAT13(uVar1,(undefined3)uStack_12c);
  uVar3 = (**(code **)*DAT_5015d28c)();
  *(undefined4 *)((int)this + 0x24) = uVar3;
  if (*(char *)((int)this + 0x556) != '\0') {
    FUN_500fe2b0();
    (**(code **)**(undefined4 **)((int)this + 0x24))(auStack_104,0);
  }
  (*DAT_5015caf4)((int)this + 0x42a,(int)this + 0x48e,*(undefined4 *)((int)this + 0x24));
  if (*(char *)((int)this + 0x29) == '\0') {
    (**(code **)(**(int **)((int)this + 0x24) + 4))(0);
    (*DAT_5015cb48)(0x47474f4e,&pvStack_128,4,0);
    iVar4 = 0;
    if (0 < (int)pvStack_128 / 2) {
      do {
        (*DAT_5015cb48)(0x53545247,0,0,&uStack_12c);
        (*DAT_5015cb48)(0x53545247,0,0,auStack_120);
        FUN_500a5290(this,uStack_12c);
        (*DAT_5015cb3c)(uStack_12c);
        (*DAT_5015cb3c)(auStack_120[0]);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)pvStack_128 / 2);
    }
  }
  else {
    (**(code **)(**(int **)((int)this + 0x24) + 4))(1);
  }
  auStack_120[0] = *(uint *)((int)this + 0x24);
  *(char *)((int)this + 0x28) = (char)((uint)unaff_EBX >> 0x18);
  auStack_120[1] = 0;
  FUN_5000a3d0(&DAT_5015c79c,aiStack_110,auStack_120);
  *(void **)(aiStack_110[0] + 0x10) = this;
  uStack_12c = this;
  FUN_5006b100(&DAT_5018b468,(int *)&pvStack_128,&uStack_12c);
  pvVar2 = DAT_501546ec;
  if (pvStack_128 == DAT_5018b46c) {
    DAT_501546ec = (void *)((int)DAT_501546ec + 1);
    pvStack_128 = uStack_12c;
    uStack_124 = 0;
    FUN_5000a3d0(&DAT_5018b468,auStack_120 + 2,(uint *)&pvStack_128);
    *(void **)(auStack_120[2] + 0x10) = pvVar2;
    pvStack_128 = pvVar2;
    uStack_124 = 0;
    FUN_5000a5e0(&DAT_5018b47c,auStack_120 + 2,(int *)&pvStack_128);
    *(char **)(auStack_120[2] + 0x10) = uStack_12c;
  }
  return;
}

