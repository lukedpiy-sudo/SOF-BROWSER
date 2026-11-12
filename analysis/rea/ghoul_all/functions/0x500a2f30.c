// rea decompile_all
// name: FUN_500a2f30
// address: 0x500a2f30
// body: available
// range: 0x500a2f30-0x500a3196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500a2f30(void *this,undefined4 *param_1,short param_2,undefined4 *param_3,short param_4,
            int param_5,undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  void *local_140 [17];
  undefined4 local_fc [17];
  float local_b8;
  undefined1 auStack_b4 [64];
  undefined4 local_74;
  char acStack_70 [100];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114dbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_140[0] = this;
  uVar5 = FUN_500a69e0();
  *(undefined4 *)((int)this + 4) = uVar5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_LAB_5012982c;
  *(undefined1 *)((int)this + 0xc) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x10) = param_1;
  FUN_500150e0(&DAT_5018b490,param_1);
  *(undefined4 *)((int)this + 0x28) = param_6;
  *(short *)((int)this + 0x18) = param_2;
  *(short *)((int)this + 0x20) = param_4;
  *(undefined2 *)((int)this + 0x22) = 0;
  local_74 = 0;
  local_fc[0] = 0;
  local_b8 = 0.0;
  *(undefined4 **)((int)this + 0x24) = param_3;
  FUN_5000a1e0(&DAT_5018b468,param_3);
  if (param_1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return this;
  }
  if (param_2 == 0) {
    ExceptionList = local_c;
    return this;
  }
  if (param_3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return this;
  }
  if (param_4 == 0) {
    ExceptionList = local_c;
    return this;
  }
  uVar5 = (**(code **)(*(int *)param_3[9] + 0x60))();
  *(undefined4 *)((int)this + 0x1c) = uVar5;
  if (*(char *)(param_1 + 3) == '\0') {
    if (param_1[4] != 0) {
      uVar5 = FUN_500a32f0(param_1[4]);
      goto LAB_500a303b;
    }
  }
  else if (param_1[5] != 0) {
    uVar5 = *(undefined4 *)(param_1[5] + 0x10);
    goto LAB_500a303b;
  }
  uVar5 = 0;
LAB_500a303b:
  (**(code **)(**(int **)((int)this + 0x1c) + 0x54))(uVar5);
  (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 0x1c) + 0x70))
            (param_1,*(undefined4 *)((int)this + 0x1c),param_3);
  if ((1.00001 < *(float *)((int)this + 0x28)) || (*(float *)((int)this + 0x28) < 0.99999)) {
    (**(code **)(**(int **)((int)this + 0x1c) + 8))(auStack_b4);
    FUN_500ecdc0(local_140);
    FUN_500ed060(local_140,*(undefined4 *)((int)this + 0x28));
    FUN_500ed0d0(local_fc,&local_b8,(float *)local_140);
    (**(code **)**(undefined4 **)((int)this + 0x1c))(local_fc);
  }
  if (param_5 != 0) {
    pcVar6 = (char *)((int)param_3 + 0x48e);
    iVar7 = -(int)pcVar6;
    do {
      cVar1 = *pcVar6;
      pcVar6[(int)(acStack_70 + iVar7)] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar7 = (**(code **)(*(int *)param_3[9] + 0x40))(acStack_70);
    if ((short)iVar7 == 0) {
      uVar3 = (**(code **)(*(int *)param_3[9] + 0x44))();
      iVar7 = 1;
      if (uVar3 != 0) {
        do {
          sVar4 = (**(code **)(*(int *)param_3[9] + 0x50))(iVar7,param_5,0);
          if (sVar4 != 0) {
            if ((short)iVar7 == 0) {
              ExceptionList = local_c;
              return this;
            }
            goto LAB_500a3146;
          }
          iVar7 = iVar7 + 1;
        } while ((ushort)iVar7 <= uVar3);
      }
    }
    else {
LAB_500a3146:
      piVar2 = *(int **)((int)this + 0x1c);
      if ((short)iVar7 != 0) {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x88))();
        uVar5 = (**(code **)(*piVar8 + 0x50))(iVar7,param_5,0);
        if ((short)uVar5 != 0) {
          (**(code **)(*piVar2 + 0x2c))(iVar7,uVar5,0);
        }
      }
    }
  }
  ExceptionList = local_c;
  return this;
}

