// rea decompile_all
// name: FUN_500611d0
// address: 0x500611d0
// body: available
// range: 0x500611d0-0x500616b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500611d0(void *this,int param_1,int *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  int **ppiVar5;
  int *piVar6;
  undefined *puVar7;
  int iVar8;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar9;
  undefined *extraout_ECX_01;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 local_231;
  int *local_230;
  int *local_22c;
  int local_228;
  undefined2 local_224;
  int local_220;
  void *local_21c;
  int local_218;
  undefined2 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  byte local_200 [512];
  
  if (*(int *)((int)this + 0x38) < 4) {
    return;
  }
  pbVar11 = local_200;
  for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    pbVar11[3] = 0;
    pbVar11 = pbVar11 + 4;
  }
  if (*param_2 < param_3) {
LAB_50061212:
    if (*(char *)(*param_2 + param_1) != 'b') goto code_r0x5006121a;
    iVar8 = *param_2;
    while ((iVar8 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
      iVar8 = *param_2 + 1;
      *param_2 = iVar8;
    }
  }
LAB_50061236:
  iVar8 = *param_2 + 2;
  *param_2 = iVar8;
  puVar9 = (undefined *)0x0;
  local_21c = this;
  while (iVar8 < param_3) {
    iVar10 = 0;
    if (*(char *)(iVar8 + param_1) == 'e') goto joined_r0x5006130e;
    while (iVar8 < param_3) {
      iVar8 = *param_2;
      bVar2 = *(byte *)(iVar8 + param_1);
      puVar9 = (undefined *)CONCAT31((int3)((uint)puVar9 >> 8),bVar2);
      if (bVar2 == 0x20) break;
      local_200[iVar10] = bVar2;
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 1;
      *param_2 = iVar8;
    }
    local_200[iVar10] = 0;
    *param_2 = *param_2 + 1;
    FUN_50107ece(puVar9,local_200,(int *)0x0);
    lVar12 = __ftol();
    iVar8 = *param_2;
    iVar10 = 0;
    while (iVar8 < param_3) {
      iVar8 = *param_2;
      bVar2 = *(byte *)(iVar8 + param_1);
      if (bVar2 == 0xd) break;
      local_200[iVar10] = bVar2;
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 1;
      *param_2 = iVar8;
    }
    local_200[iVar10] = 0;
    FUN_50107ece(local_200,local_200,(int *)0x0);
    lVar13 = __ftol();
    local_214 = (undefined2)lVar13;
    local_218 = (int)lVar12;
    FUN_5000a5e0((void *)((int)local_21c + 0x50),&local_228,&local_218);
    iVar8 = *param_2 + 2;
    *param_2 = iVar8;
    puVar9 = extraout_ECX;
  }
LAB_5006131f:
  iVar8 = *param_2 + 2;
  *param_2 = iVar8;
  while ((iVar8 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
    iVar8 = *param_2 + 1;
    *param_2 = iVar8;
  }
  iVar8 = *param_2 + 2;
  *param_2 = iVar8;
  while (iVar8 < param_3) {
    iVar10 = 0;
    if (*(char *)(iVar8 + param_1) == 'e') goto joined_r0x500614ef;
    while (iVar8 < param_3) {
      iVar8 = *param_2;
      bVar2 = *(byte *)(iVar8 + param_1);
      if (bVar2 == 0x20) break;
      local_200[iVar10] = bVar2;
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 1;
      *param_2 = iVar8;
    }
    iVar8 = *param_2;
    local_200[iVar10] = 0;
    *param_2 = iVar8 + 1;
    FUN_50107ece((undefined *)(iVar8 + 1),local_200,(int *)0x0);
    lVar12 = __ftol();
    local_220 = (int)lVar12;
    iVar8 = *param_2;
    puVar9 = extraout_ECX_00;
    while (iVar8 < param_3) {
      iVar8 = *param_2;
      bVar2 = *(byte *)(iVar8 + param_1);
      puVar9 = (undefined *)CONCAT31((int3)((uint)puVar9 >> 8),bVar2);
      if (bVar2 == 0xd) break;
      local_200[iVar10] = bVar2;
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 1;
      *param_2 = iVar8;
    }
    local_200[iVar10] = 0;
    FUN_50107ece(puVar9,local_200,(int *)0x0);
    lVar12 = __ftol();
    local_224 = (undefined2)lVar12;
    local_228 = local_220;
    pvVar1 = (void *)((int)local_21c + 100);
    bVar4 = true;
    local_230 = *(int **)((int)local_21c + 0x68);
    piVar3 = (int *)(*(int **)((int)local_21c + 0x68))[1];
    while (piVar3 != *(int **)((int)local_21c + 0x6c)) {
      bVar4 = local_220 < piVar3[3];
      local_230 = piVar3;
      if (bVar4) {
        piVar3 = (int *)*piVar3;
      }
      else {
        piVar3 = (int *)piVar3[2];
      }
    }
    if (*(char *)((int)local_21c + 0x70) == '\0') {
      local_22c = local_230;
      if (bVar4) {
        piVar6 = (int *)FUN_500fc2d0(pvVar1,&local_208);
        if (local_22c == (int *)*piVar6) {
          puVar15 = &local_231;
          local_231 = 1;
          ppiVar5 = (int **)FUN_5000a820(pvVar1,&local_210,(int)piVar3,local_230,&local_228);
          goto LAB_500614c8;
        }
        FUN_5000acc0((int *)&local_22c);
      }
      puVar15 = &local_231;
      if (local_22c[3] < local_228) {
        local_231 = 1;
        ppiVar5 = (int **)FUN_5000a820(pvVar1,&local_20c,(int)piVar3,local_230,&local_228);
      }
      else {
        ppiVar5 = &local_22c;
        local_231 = 0;
      }
    }
    else {
      puVar15 = &local_231;
      local_231 = 1;
      ppiVar5 = (int **)FUN_5000a820(pvVar1,&local_204,(int)piVar3,local_230,&local_228);
    }
LAB_500614c8:
    FUN_50010d30(&local_218,ppiVar5,puVar15);
    iVar8 = *param_2 + 2;
    *param_2 = iVar8;
  }
LAB_50061500:
  puVar9 = (undefined *)(*param_2 + 2);
  *param_2 = (int)puVar9;
  puVar7 = puVar9;
  while (((int)puVar7 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
    puVar7 = (undefined *)(*param_2 + 1);
    *param_2 = (int)puVar7;
  }
  iVar8 = *param_2 + 2;
  *param_2 = iVar8;
  if (iVar8 < param_3) {
    while (iVar10 = 0, *(char *)(iVar8 + param_1) != 'e') {
      while (iVar8 < param_3) {
        iVar8 = *param_2;
        bVar2 = *(byte *)(iVar8 + param_1);
        puVar9 = (undefined *)CONCAT31((int3)((uint)puVar9 >> 8),bVar2);
        if (bVar2 == 0x20) break;
        local_200[iVar10] = bVar2;
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 1;
        *param_2 = iVar8;
      }
      iVar8 = *param_2;
      local_200[iVar10] = 0;
      *param_2 = iVar8 + 1;
      FUN_50107ece(puVar9,local_200,(int *)0x0);
      lVar12 = __ftol();
      local_220 = (int)lVar12;
      iVar8 = *param_2;
      while (iVar8 < param_3) {
        iVar8 = *param_2;
        bVar2 = *(byte *)(iVar8 + param_1);
        if (bVar2 == 0xd) break;
        local_200[iVar10] = bVar2;
        iVar10 = iVar10 + 1;
        iVar8 = iVar8 + 1;
        *param_2 = iVar8;
      }
      local_200[iVar10] = 0;
      FUN_50107ece(local_200,local_200,(int *)0x0);
      lVar12 = __ftol();
      local_224 = (undefined2)lVar12;
      local_228 = local_220;
      piVar3 = *(int **)((int)local_21c + 0x7c);
      pvVar1 = (void *)((int)local_21c + 0x78);
      bVar4 = true;
      local_230 = piVar3;
      piVar6 = (int *)piVar3[1];
      while (piVar6 != *(int **)((int)local_21c + 0x80)) {
        bVar4 = local_220 < piVar6[3];
        local_230 = piVar6;
        if (bVar4) {
          piVar6 = (int *)*piVar6;
        }
        else {
          piVar6 = (int *)piVar6[2];
        }
      }
      if (*(char *)((int)local_21c + 0x84) == '\0') {
        local_22c = local_230;
        if (bVar4) {
          if (local_230 == (int *)*piVar3) {
            puVar14 = &local_210;
            goto LAB_50061660;
          }
          FUN_5000acc0((int *)&local_22c);
        }
        puVar9 = (undefined *)local_22c[3];
        if ((int)puVar9 < local_228) {
          puVar14 = &local_208;
          goto LAB_50061660;
        }
      }
      else {
        puVar14 = &local_20c;
LAB_50061660:
        FUN_5000a820(pvVar1,puVar14,(int)piVar6,local_230,&local_228);
        puVar9 = extraout_ECX_01;
      }
      iVar10 = *param_2;
      iVar8 = iVar10 + 2;
      *param_2 = iVar8;
      if (param_3 <= iVar8) {
        *param_2 = iVar10 + 4;
        return;
      }
    }
    while ((iVar8 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
      iVar8 = *param_2 + 1;
      *param_2 = iVar8;
    }
  }
  *param_2 = *param_2 + 2;
  return;
code_r0x5006121a:
  iVar8 = *param_2 + 1;
  *param_2 = iVar8;
  if (param_3 <= iVar8) goto LAB_50061236;
  goto LAB_50061212;
joined_r0x5006130e:
  while ((iVar8 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
    iVar8 = *param_2 + 1;
    *param_2 = iVar8;
  }
  goto LAB_5006131f;
joined_r0x500614ef:
  while ((iVar8 < param_3 && (*(char *)(*param_2 + param_1) != '\r'))) {
    iVar8 = *param_2 + 1;
    *param_2 = iVar8;
  }
  goto LAB_50061500;
}

