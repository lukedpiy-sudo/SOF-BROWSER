// rea decompile_all
// name: FUN_50082120
// address: 0x50082120
// body: available
// range: 0x50082120-0x5008245a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50082120(void *this,int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 uVar11;
  float fVar12;
  void *this_00;
  undefined *extraout_ECX;
  byte *pbVar13;
  bool bVar14;
  float10 fVar15;
  char *pcVar16;
  void *pvVar17;
  float *local_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  undefined4 local_1c;
  float *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114cd6;
  local_c = ExceptionList;
  pbVar10 = (byte *)(param_1 + 1);
  ppvVar4 = &local_c;
  if ((*(int *)((int)this + 0x13c) != 0) &&
     (local_28 = (float *)**(float **)((int)this + 0x138), ExceptionList = &local_c,
     ppvVar4 = &local_c, local_28 != *(float **)((int)this + 0x138))) {
    do {
      pbVar5 = (byte *)((int)local_28[2] + 4);
      pbVar13 = pbVar10;
      do {
        bVar1 = *pbVar13;
        bVar14 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_5008218d:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_50082192;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar13[1];
        bVar14 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_5008218d;
        pbVar13 = pbVar13 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_50082192:
      if (iVar6 == 0) {
        fVar12 = local_28[2];
        ppvVar4 = ExceptionList;
        if (fVar12 != 0.0) goto LAB_50082444;
        break;
      }
      FUN_50049a30(&local_28,&local_20);
      ppvVar4 = ExceptionList;
    } while (local_28 != *(float **)((int)this + 0x138));
  }
  ExceptionList = ppvVar4;
  FUN_5000a290((void *)((int)this + 0x134),&local_1c,*(int *)((int)this + 0x138),(int *)&param_1);
  if (*(int *)((int)this + 0x16c) == 0) {
    FUN_500817d0(this,(byte *)s_Missing_Parameter_50145ef4);
  }
  piVar2 = (int *)**(undefined4 **)((int)this + 0x168);
  piVar3 = (int *)piVar2[2];
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
  FUN_50106b60((undefined *)piVar2);
  *(int *)((int)this + 0x16c) = *(int *)((int)this + 0x16c) + -1;
  fVar12 = (float)param_1[0x11];
  switch(fVar12) {
  case 0.0:
    puVar9 = operator_new(0x50);
    local_4 = 0;
    local_20 = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      pbVar10 = (byte *)(**(code **)(*piVar3 + 0x14))();
      iVar6 = FUN_50108313(this_00,pbVar10);
      *puVar9 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar9 + 1),&DAT_501455a0,0x40);
      puVar9[0x11] = 0;
      puVar9[0x12] = 0xffffffff;
      *puVar9 = &PTR_FUN_50129328;
      puVar9[0x13] = iVar6;
      local_4 = 0xffffffff;
      goto LAB_50082414;
    }
    break;
  case 1.4013e-45:
    puVar9 = operator_new(0x50);
    local_4 = 1;
    local_20 = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      pbVar10 = (byte *)(**(code **)(*piVar3 + 0x14))();
      fVar15 = FUN_501083a9(extraout_ECX,pbVar10);
      local_28 = (float *)(float)fVar15;
      *puVar9 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar9 + 1),&DAT_501455a0,0x40);
      puVar9[0x11] = 1;
      puVar9[0x12] = 0xffffffff;
      *puVar9 = &PTR_FUN_501293f0;
      puVar9[0x13] = local_28;
      local_4 = 0xffffffff;
      goto LAB_50082414;
    }
    break;
  case 2.8026e-45:
    pcVar16 = s__f__f__f_50145ee8;
    pcVar7 = (char *)(**(code **)(*piVar3 + 0x14))
                               (s__f__f__f_50145ee8,&local_18,&local_14,&local_10);
    FUN_50108004(pcVar7,(byte *)pcVar16);
    puVar9 = operator_new(0x58);
    if (puVar9 != (undefined4 *)0x0) {
      local_20 = local_10;
      uStack_24 = local_14;
      local_28 = local_18;
      *puVar9 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar9 + 1),&DAT_501455a0,0x40);
      puVar9[0x11] = 2;
      *puVar9 = &PTR_FUN_50129458;
      puVar9[0x13] = local_28;
      puVar9[0x14] = uStack_24;
      puVar9[0x15] = local_20;
      puVar9[0x12] = 0xffffffff;
      goto LAB_50082414;
    }
    goto LAB_50082412;
  case 4.2039e-45:
    pvVar17 = (void *)0x0;
    pcVar7 = (char *)(**(code **)(*piVar3 + 0x14))();
    uVar8 = FUN_500c26a0(0,0x1c8,pcVar7,pvVar17);
    puVar9 = operator_new(0x50);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar9 + 1),&DAT_5015911c,0x40);
      puVar9[0x11] = 3;
      *puVar9 = &PTR_FUN_501294c0;
      puVar9[0x13] = uVar8;
      puVar9[0x12] = 0xffffffff;
      goto LAB_50082414;
    }
LAB_50082412:
    puVar9 = (undefined4 *)0x0;
    goto LAB_50082414;
  default:
    if (piVar3 != (int *)0x0) {
      fVar12 = (float)(**(code **)*piVar3)(1);
    }
LAB_50082444:
    ExceptionList = local_c;
    return (uint)fVar12 & 0xffffff00;
  }
  puVar9 = (undefined4 *)0x0;
  local_4 = 0xffffffff;
LAB_50082414:
  uVar11 = (**(code **)(*param_1 + 0x44))(puVar9);
  if (puVar9 != (undefined4 *)0x0) {
    uVar11 = (**(code **)*puVar9)(1);
  }
  if (piVar3 != (int *)0x0) {
    uVar11 = (**(code **)*piVar3)(1);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar11 >> 8),1);
}

