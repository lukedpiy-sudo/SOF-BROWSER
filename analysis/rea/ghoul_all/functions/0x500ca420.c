// rea decompile_all
// name: FUN_500ca420
// address: 0x500ca420
// body: available
// range: 0x500ca420-0x500ca7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ca420(void *this,int param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  char *pcVar9;
  char cVar10;
  undefined4 *puStack_d8;
  int iStack_d4;
  float fStack_d0;
  undefined1 auStack_cc [64];
  float local_8c [17];
  float local_48 [17];
  undefined4 local_4;
  
  local_8c[0] = 0.0;
  local_4 = 0;
  local_48[0] = 0.0;
  FUN_500046f0(this,param_1);
  FUN_500071c0(this,0,0xc1000000,0xc1000000,0xc2000000,0x41000000,0x41000000,0x42240000);
  FUN_500071c0(this,1,0xc1000000,0xc1000000,0xc1800000,0x41000000,0x41000000,0x41e00000);
  FUN_500071c0(this,2,0xc2000000,0xc2000000,0xc1000000,0x42000000,0x42000000,0x41800000);
  FUN_500071c0(this,3,0xc1000000,0xc1000000,0xc1000000,0x41000000,0x41000000,0);
  FUN_500071c0(this,4,0xc2000000,0xc2000000,0xc1000000,0x42000000,0x42000000,0x41000000);
  FUN_500071c0(this,5,0xc2240000,0xc2240000,0xc2180000,0x42240000,0x42240000,0xc1c00000);
  FUN_500071c0(this,6,0xc2240000,0xc2240000,0xc2000000,0x42240000,0x42240000,0xc1c00000);
  FUN_500071c0(this,7,0xc2240000,0xc2240000,0xc2000000,0x42240000,0x42240000,0xc1c00000);
  FUN_500071c0(this,8,0,0,0,0,0,0);
  if ((*(int *)(param_1 + 0x160) == 0) ||
     (piVar3 = *(int **)(*(int *)(param_1 + 0x160) + 0x164), piVar3 == (int *)0x0)) {
    cVar10 = '\0';
    pcVar9 = param_3;
    uVar4 = (**(code **)(*(int *)this + 0x18))(param_2);
    pcVar5 = (char *)(**(code **)(*(int *)this + 0x1c))(param_2,param_3,uVar4);
    puStack_d8 = FUN_500a5c10(&DAT_5015c79c,param_2,param_3,0,pcVar5,pcVar9,cVar10);
    *(undefined4 **)((int)this + 0x230) = puStack_d8;
    if (puStack_d8 == (undefined4 *)0x0) goto LAB_500ca6f0;
    FUN_5006b100(&DAT_5018b468,(int *)&fStack_d0,(uint *)&puStack_d8);
    if (fStack_d0 != DAT_5018b46c) goto LAB_500ca6f0;
    iStack_d4 = DAT_501546ec;
    DAT_501546ec = DAT_501546ec + 1;
    piVar3 = (int *)FUN_500a6440(&DAT_5018b468,(uint *)&puStack_d8);
    *piVar3 = iStack_d4;
  }
  else {
    uVar1 = (**(code **)(*piVar3 + 0x88))();
    iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar1);
    puStack_d8 = FUN_500a5c10(&DAT_5015c79c,(char *)(iVar2 + 0x42a),(char *)(iVar2 + 0x48e),0,
                              (char *)(iVar2 + 0x4f2),(char *)(iVar2 + 0x556),'\0');
    *(undefined4 **)((int)this + 0x230) = puStack_d8;
    if (puStack_d8 == (undefined4 *)0x0) goto LAB_500ca6f0;
    FUN_5006b100(&DAT_5018b468,(int *)&fStack_d0,(uint *)&puStack_d8);
    if (fStack_d0 != DAT_5018b46c) goto LAB_500ca6f0;
    iStack_d4 = DAT_501546ec;
    DAT_501546ec = DAT_501546ec + 1;
    piVar3 = (int *)FUN_500a6440(&DAT_5018b468,(uint *)&puStack_d8);
    *piVar3 = iStack_d4;
  }
  puVar6 = (undefined4 *)FUN_50010ba0(&DAT_5018b47c,&iStack_d4);
  *puVar6 = puStack_d8;
LAB_500ca6f0:
  if (*(int *)((int)this + 0x230) == 0) {
    (*DAT_5015cb10)(s_Couldn_t_find_enemy_model__s__s__50152074,param_2,param_3);
  }
  (**(code **)(*(int *)this + 0x228))();
  FUN_500a4de0(*(void **)((int)this + 0x230));
  if (*(int *)((int)this + 0x22c) != 0) {
    FUN_500a5d10(*(void **)((int)this + 0x230),param_1);
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(auStack_cc);
    FUN_500ecdc0(local_48);
    pfVar7 = &fStack_d0;
    pfVar8 = local_8c;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_500ecef0(local_48,2,-1.5707964);
    FUN_500ed0d0(&fStack_d0,local_48,local_8c);
    FUN_500ecdc0(local_8c);
    uVar4 = *(undefined4 *)((int)this + 0x1b8);
    pfVar7 = &fStack_d0;
    pfVar8 = local_48;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_500ed060(local_8c,uVar4);
    FUN_500ed0d0(&fStack_d0,local_48,local_8c);
    (**(code **)**(undefined4 **)(param_1 + 0x164))(&fStack_d0);
  }
  return;
}

