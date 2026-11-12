// rea decompile_all
// name: FUN_5003c760
// address: 0x5003c760
// body: available
// range: 0x5003c760-0x5003c967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003c760(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [7];
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if ((*(int *)(param_2 + 0x330) == 0) && (*(int *)(param_2 + 0x19c) != 6)) {
    pfVar8 = (float *)&DAT_5018bf0c;
    pfVar7 = (float *)&DAT_5018bf0c;
    pfVar6 = (float *)&DAT_5018bf0c;
    pfVar5 = (float *)&DAT_5018bf0c;
LAB_5003c94d:
    iVar1 = *(int *)this;
    uVar4 = (**(code **)(iVar1 + 0x14))(param_1,param_2,pfVar5,pfVar6,0,0,pfVar7,pfVar8,0,0,0);
    (**(code **)(iVar1 + 0x28))(param_1,param_2,uVar4);
    return;
  }
  iVar2 = (**(code **)(*(int *)this + 0x90))(param_1);
  if (iVar2 == 0) {
    FUN_500fdd70((float *)(param_2 + 0x10),&fStack_c,(float *)0x0,(float *)0x0);
    fStack_30 = fStack_c + *(float *)(param_2 + 4);
    pfVar8 = &fStack_30;
    pfVar7 = &fStack_30;
    pfVar6 = &fStack_30;
    fStack_2c = fStack_8 + *(float *)(param_2 + 8);
    afStack_28[0] = fStack_4 + *(float *)(param_2 + 0xc);
    pfVar5 = &fStack_30;
    goto LAB_5003c94d;
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x160))();
  }
  iVar1 = *(int *)((int)this + 0x60);
  if ((iVar1 != 0) &&
     (((*(int *)(iVar1 + 0x450) != 0 || (*(int *)(iVar1 + 0x74) != 0)) &&
      (iVar1 = (**(code **)(*(int *)this + 0xc))(), iVar1 != 0)))) {
    iVar1 = (**(code **)(*param_1 + 0x18c))();
    if (iVar1 == 0) {
LAB_5003c83d:
      (**(code **)(*param_1 + 0x24))(param_2,3);
    }
    else {
      piVar3 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar3 + 0xc4))();
      if (iVar1 != 0) goto LAB_5003c83d;
      (**(code **)(*param_1 + 0x24))(param_2,2);
    }
    (**(code **)(*param_1 + 0x4c))
              (*(undefined4 *)((int)this + 0x70),*(undefined4 *)((int)this + 0x60),&stack0xffffffcc)
    ;
  }
  (**(code **)(*(int *)this + 0x98))(param_1,param_2);
  iVar1 = (**(code **)(*(int *)this + 0x9c))
                    (param_1,param_2,param_2 + 4,&stack0xffffffcc,afStack_28);
  if (*(char *)((int)this + 0x54) == '\0') {
    if (iVar1 != 0) goto LAB_5003c8d5;
  }
  else {
    if (iVar1 != 0) {
LAB_5003c8d5:
      (**(code **)(*(int *)this + 0xa0))(param_1,param_2,&stack0xffffffb8,&stack0xffffffc4);
      return;
    }
    iVar1 = (**(code **)(*(int *)this + 0xac))(param_1,param_2);
    if (iVar1 != 0) {
      return;
    }
  }
  (**(code **)(*(int *)this + 0xa4))(param_1,param_2,&stack0xffffffb8,&stack0xffffffc4);
  return;
}

