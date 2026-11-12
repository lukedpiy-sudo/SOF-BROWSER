// rea decompile_all
// name: FUN_500a3320
// address: 0x500a3320
// body: available
// range: 0x500a3320-0x500a354d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500a3320(void *this,undefined4 param_1,undefined4 *param_2,int param_3,int param_4,
            undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  ushort uVar8;
  void *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114dfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = this;
  if (this != (void *)0x0) {
    ExceptionList = &local_c;
    piVar3 = (int *)FUN_5006b100(&DAT_5018b490,(int *)&local_10,(uint *)&local_18);
    if (*piVar3 == DAT_5018b494) {
      local_14 = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      piVar3 = (int *)FUN_500a6440(&DAT_5018b490,(uint *)&local_18);
      *piVar3 = local_14;
      puVar4 = (undefined4 *)FUN_50010ba0(&DAT_5018b4a4,&local_14);
      *puVar4 = local_18;
    }
  }
  local_10 = operator_new(0x2c);
  puVar4 = param_2;
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    param_2 = FUN_500a2f30(local_10,this,(short)param_1,param_2,(short)param_3,param_4,param_5);
  }
  local_4 = 0xffffffff;
  param_5 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    FUN_5006b100(&DAT_5018b490,&param_3,(uint *)&param_5);
    if (param_3 == DAT_5018b494) {
      param_4 = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      piVar3 = (int *)FUN_500a6440(&DAT_5018b490,(uint *)&param_5);
      *piVar3 = param_4;
      puVar5 = (undefined4 *)FUN_50010ba0(&DAT_5018b4a4,&param_4);
      *puVar5 = param_5;
    }
  }
  iVar2 = *(int *)((int)this + 4);
  piVar3 = *(int **)(iVar2 + 4);
  piVar6 = operator_new(0xc);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6[2] = 0;
  }
  piVar6[2] = (int)param_2;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar6;
  }
  piVar6[1] = (int)piVar3;
  *piVar6 = iVar2;
  *(int **)(iVar2 + 4) = piVar6;
  *(int **)piVar6[1] = piVar6;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  if ((puVar4[9] == 0) || (*(char *)(puVar4 + 10) != '\0')) {
    *(undefined1 *)(puVar4 + 10) = 1;
  }
  else {
    puVar5 = FUN_500a5110(puVar4,0);
    fVar1 = *(float *)(DAT_5015d9b0 + 0x18);
    uVar8 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe;
    if ((fVar1 < 0.0 || (fVar1 == 0.0) != 0) ||
       (fVar1 = *(float *)(DAT_5015d2b8 + 0x18),
       uVar8 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe,
       fVar1 < 0.0 || (fVar1 == 0.0) != 0)) {
      uVar7 = (uint)uVar8;
    }
    else {
      uVar7 = CONCAT31((uint3)(byte)(uVar8 >> 8),1);
    }
    (**(code **)(*(int *)puVar4[9] + 8))(uVar7);
    param_5 = (undefined4 *)puVar5[3];
    puVar5 = (undefined4 *)FUN_5006b100(puVar4 + 1,&param_4,(uint *)&param_5);
    piVar3 = (int *)*puVar5;
    if (piVar3 != (int *)puVar4[2]) {
      FUN_500a6380(piVar3 + 4);
      FUN_500a6c30(puVar4 + 1,&param_1,piVar3);
    }
    *(undefined1 *)(puVar4 + 10) = 1;
  }
  ExceptionList = local_c;
  return param_2;
}

