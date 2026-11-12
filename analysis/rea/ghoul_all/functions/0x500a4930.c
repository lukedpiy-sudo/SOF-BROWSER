// rea decompile_all
// name: FUN_500a4930
// address: 0x500a4930
// body: available
// range: 0x500a4930-0x500a4c26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500a4930(void *this,char *param_1,char *param_2,undefined1 param_3,char *param_4,char *param_5)

{
  undefined1 *this_00;
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_120;
  uint auStack_11c [2];
  void *local_114;
  undefined1 auStack_110 [256];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114f3a;
  pvStack_c = ExceptionList;
  uVar8 = 0;
  this_00 = (undefined1 *)((int)this + 4);
  ExceptionList = &pvStack_c;
  *this_00 = uStack_120._3_1_;
  *(undefined1 *)((int)this + 5) = uStack_120._3_1_;
  *(undefined1 *)((int)this + 0x10) = 0;
  local_114 = this;
  pvVar3 = operator_new(0x18);
  *(undefined4 *)((int)pvVar3 + 4) = 0;
  *(undefined1 *)((int)pvVar3 + 0x14) = 1;
  *(undefined1 *)((int)pvVar3 + 0x15) = 0;
  *(void **)((int)this + 0xc) = pvVar3;
  *(undefined1 *)((int)pvVar3 + 0x15) = 1;
  **(undefined4 **)((int)this + 0xc) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 8) = 0;
  uVar4 = FUN_5006b2e0(*(undefined4 *)((int)this + 0xc),0);
  *(undefined4 *)((int)this + 8) = uVar4;
  *(undefined4 *)uVar4 = uVar4;
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x18) = uStack_120._3_1_;
  pvVar3 = operator_new(0x18);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  *(void **)((int)this + 0x1c) = pvVar3;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_LAB_50129854;
  puVar5 = (undefined4 *)((int)this + 0x2a);
  for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)this + 0x42a);
  for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar5 = (undefined4 *)((int)this + 0x48e);
  for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)this + 0x4f2);
  for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)this + 0x556);
  for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = param_3;
  uVar4 = (**(code **)*DAT_5015d28c)();
  *(undefined4 *)((int)this + 0x24) = uVar4;
  iVar7 = 0x42a - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)this + iVar7] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar7 = 0x48e - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)this + iVar7] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    *(undefined1 *)((int)this + 0x4f2) = 0;
  }
  else {
    iVar7 = 0x4f2 - (int)param_4;
    do {
      cVar1 = *param_4;
      param_4[(int)this + iVar7] = cVar1;
      param_4 = param_4 + 1;
    } while (cVar1 != '\0');
  }
  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    *(undefined1 *)((int)this + 0x556) = 0;
  }
  else {
    iVar7 = 0x556 - (int)param_5;
    do {
      cVar1 = *param_5;
      param_5[(int)this + iVar7] = cVar1;
      param_5 = param_5 + 1;
    } while (cVar1 != '\0');
    FUN_50107654(auStack_110,(byte *)s_ghoul__s__s_ghl_5012f804);
    (**(code **)**(undefined4 **)((int)this + 0x24))(auStack_110,0);
  }
  (*DAT_5015caf4)((int)this + 0x42a,(int)this + 0x48e,*(undefined4 *)((int)this + 0x24));
  if (*(char *)((int)this + 0x29) == '\0') {
    (**(code **)(**(int **)((int)this + 0x24) + 4))(0);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x24) + 4))(1);
    if ((*(int *)((int)this + 0x24) != 0) && (*(char *)((int)this + 0x28) == '\0')) {
      uStack_120 = operator_new(0x1c);
      puStack_8._0_1_ = 2;
      if (uStack_120 == (int *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_500a3800(uStack_120,(uint)this,0);
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      FUN_500a66f0(&DAT_5018b4b8,puVar5);
      if (puVar5[3] == 0) {
        FUN_500a67a0(&DAT_5018b4b8,puVar5);
        puVar5 = (undefined4 *)0x0;
      }
      else {
        auStack_11c[0] = puVar5[3];
        puVar6 = (undefined4 *)FUN_500a6440(this_00,auStack_11c);
        *puVar6 = puVar5;
      }
      if ((0.0 < *(float *)(DAT_5015d9b0 + 0x18)) && (0.0 < *(float *)(DAT_5015d2b8 + 0x18))) {
        uVar8 = 1;
      }
      (**(code **)(**(int **)((int)this + 0x24) + 8))(uVar8);
      auStack_11c[0] = puVar5[3];
      FUN_5006b100(this_00,&uStack_120,auStack_11c);
      piVar2 = uStack_120;
      if (uStack_120 != *(int **)((int)this + 8)) {
        FUN_500a6380(uStack_120 + 4);
        FUN_500c4640(this_00,&uStack_120,piVar2);
      }
    }
    *(undefined1 *)((int)this + 0x28) = 1;
  }
  ExceptionList = pvStack_10;
  return this;
}

