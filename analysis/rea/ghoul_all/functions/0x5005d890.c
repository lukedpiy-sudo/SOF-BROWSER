// rea decompile_all
// name: FUN_5005d890
// address: 0x5005d890
// body: available
// range: 0x5005d890-0x5005dbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005d890(void *this,char *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  void *this_00;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *extraout_ECX;
  undefined *puVar6;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *pvVar7;
  void *extraout_ECX_05;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  float10 fVar13;
  longlong lVar14;
  longlong lVar15;
  undefined *local_420 [2];
  void *local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined *local_40c;
  float local_408;
  float local_404;
  byte local_400 [512];
  byte local_200 [512];
  
  iVar11 = 0;
  iVar9 = 0;
  puVar6 = this;
  if (0 < param_2) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      puVar6 = (undefined *)CONCAT31((int3)((uint)puVar6 >> 8),cVar1);
      if (cVar1 == ' ') break;
      iVar9 = iVar9 + 1;
      pcVar3[(int)(local_400 + -(int)param_1)] = cVar1;
      iVar11 = iVar11 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar11 < param_2);
  }
  local_400[iVar9] = 0;
  local_418 = this;
  FUN_50107ece(puVar6,local_400,(int *)0x0);
  lVar14 = __ftol();
  iVar9 = 0;
  while ((iVar10 = iVar11 + 1, iVar10 < param_2 && (param_1[iVar10] != 0x20))) {
    local_400[iVar9] = param_1[iVar10];
    iVar9 = iVar9 + 1;
    iVar11 = iVar10;
  }
  local_400[iVar9] = 0;
  FUN_50107ece(local_400,local_400,(int *)0x0);
  lVar15 = __ftol();
  local_410 = (undefined4)lVar15;
  iVar9 = 0;
  puVar6 = extraout_ECX;
  for (iVar11 = iVar11 + 3; iVar11 < param_2; iVar11 = iVar11 + 1) {
    bVar2 = param_1[iVar11];
    puVar6 = (undefined *)CONCAT31((int3)((uint)puVar6 >> 8),bVar2);
    if (bVar2 == 0x20) break;
    local_400[iVar9] = bVar2;
    iVar9 = iVar9 + 1;
  }
  local_400[iVar9] = 0;
  fVar13 = FUN_50107ece(puVar6,local_400,(int *)0x0);
  local_420[0] = (undefined *)(float)fVar13;
  puVar6 = (undefined *)0x0;
  while ((iVar9 = iVar11 + 1, iVar9 < param_2 && (param_1[iVar9] != 0x20))) {
    local_400[(int)puVar6] = param_1[iVar9];
    puVar6 = puVar6 + 1;
    iVar11 = iVar9;
  }
  iVar9 = 0;
  local_400[(int)puVar6] = 0;
  fVar13 = FUN_50107ece(puVar6,local_400,(int *)0x0);
  for (iVar11 = iVar11 + 2; (iVar11 < param_2 && (param_1[iVar11] != 0x29)); iVar11 = iVar11 + 1) {
    local_400[iVar9] = param_1[iVar11];
    iVar9 = iVar9 + 1;
  }
  local_408 = (float)fVar13;
  local_400[iVar9] = 0;
  iVar11 = iVar11 + 1;
  local_40c = local_420[0];
  fVar13 = FUN_50107ece(local_420[0],local_400,(int *)0x0);
  this_00 = local_418;
  local_404 = (float)fVar13;
  local_420[0] = (undefined *)0x0;
  pvVar7 = extraout_ECX_00;
  if ((iVar11 < param_2) && (4 < *(int *)((int)local_418 + 0x38))) {
    do {
      uVar4 = FUN_50108038(pvVar7,(int)param_1[iVar11]);
      if (uVar4 == 0) break;
      iVar11 = iVar11 + 1;
      pvVar7 = extraout_ECX_01;
    } while (iVar11 < param_2);
    pvVar7 = extraout_ECX_01;
    if (param_1[iVar11] == 'c') {
      iVar9 = 0;
      while ((iVar11 = iVar11 + 1, iVar11 < param_2 && (param_1[iVar11] != ' '))) {
        *(char *)((int)local_420 + iVar9) = param_1[iVar11];
        iVar9 = iVar9 + 1;
      }
      *(undefined1 *)((int)local_420 + iVar9) = 0;
      FUN_50107ece((undefined *)local_420,(byte *)local_420,(int *)0x0);
      lVar15 = __ftol();
      local_420[0] = (undefined *)lVar15;
      pvVar7 = extraout_ECX_02;
    }
  }
  local_414 = 0;
  if (iVar11 < param_2) {
    if (1 < *(int *)((int)this_00 + 0x38)) {
      do {
        uVar4 = FUN_50108038(pvVar7,(int)param_1[iVar11]);
        if (uVar4 == 0) break;
        iVar11 = iVar11 + 1;
        pvVar7 = extraout_ECX_03;
      } while (iVar11 < param_2);
      FUN_50108004(param_1 + iVar11,&DAT_501431b4);
      iVar11 = iVar11 + 1;
      pvVar7 = extraout_ECX_04;
      if (param_2 <= iVar11) {
        return;
      }
      while (uVar4 = FUN_50108038(pvVar7,(int)param_1[iVar11]), uVar4 == 0) {
        iVar11 = iVar11 + 1;
        pvVar7 = extraout_ECX_05;
        if (param_2 <= iVar11) {
          return;
        }
      }
    }
    if (iVar11 < param_2) {
      if (*(float *)(DAT_5015c978 + 0x18) == 0.0) {
        iVar9 = FUN_5005d3a0(this_00,&local_40c,(int)lVar14,local_410,local_414);
      }
      else {
        iVar9 = FUN_5005d530(this_00,&local_40c,(int)lVar14,local_410,local_414);
      }
      iVar10 = 0;
      if (iVar9 != 0) {
        *(undefined **)(iVar9 + 0x28) = local_420[0];
      }
      if (2 < *(int *)((int)local_418 + 0x38)) {
        pbVar12 = local_200;
        for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12 = pbVar12 + 4;
        }
        local_420[0] = (undefined *)0x0;
        do {
          if ((param_1[iVar10 + iVar11] == 0xd) || (param_1[iVar11 + 1] == '$')) break;
          local_200[iVar10] = param_1[iVar10 + iVar11];
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x200);
        pcVar3 = (char *)FUN_50107f68(local_200,(byte *)&DAT_501431b0);
        while (pcVar3 != (char *)0x0) {
          FUN_50108004(pcVar3,&DAT_501430a0);
          pcVar3 = (char *)FUN_50107f68((byte *)0x0,(byte *)&DAT_501431b0);
          FUN_50108004(pcVar3,&DAT_501431b4);
          puVar5 = operator_new(0xc);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[2] = local_420[0];
            *(undefined2 *)(puVar5 + 1) = 0;
          }
          if (iVar9 != 0) {
            *puVar5 = *(undefined4 *)(iVar9 + 0x30);
            *(undefined4 **)(iVar9 + 0x30) = puVar5;
          }
          pcVar3 = (char *)FUN_50107f68((byte *)0x0,(byte *)&DAT_501431b0);
        }
      }
    }
  }
  return;
}

