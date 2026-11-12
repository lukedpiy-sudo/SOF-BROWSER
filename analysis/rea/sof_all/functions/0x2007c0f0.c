// rea decompile_all
// name: FUN_2007c0f0
// address: 0x2007c0f0
// body: available
// range: 0x2007c0f0-0x2007cbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007c0f0(undefined4 param_1,int param_2,int param_3,char param_4)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  int iVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  char local_3bd;
  float *local_3bc;
  float *local_3b8;
  char local_3b1;
  float *local_3b0;
  char local_3a9;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  undefined1 local_396;
  undefined1 local_395;
  float local_394;
  double local_390;
  float local_388 [2];
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 *local_378;
  undefined1 local_374;
  undefined4 local_370 [5];
  undefined4 local_35c [2];
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined1 *puStack_34c;
  undefined1 uStack_348;
  undefined1 auStack_344 [4];
  undefined1 auStack_340 [4];
  undefined1 local_33c [4];
  undefined1 auStack_338 [4];
  undefined4 local_334 [5];
  undefined4 local_320 [16];
  undefined4 local_2e0;
  undefined4 local_2dc [16];
  undefined4 local_29c;
  int local_298;
  float local_294;
  undefined1 local_290 [64];
  undefined4 local_250;
  undefined4 local_24c [16];
  undefined4 local_20c;
  int local_208;
  float local_204;
  undefined1 local_200 [64];
  undefined4 local_1c0;
  undefined1 local_1bc [64];
  undefined4 local_17c;
  undefined1 local_178 [64];
  undefined4 local_138;
  int iStack_134;
  float fStack_130;
  undefined1 local_12c [64];
  undefined4 local_ec;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  int local_a4;
  float local_a0;
  undefined1 local_9c [64];
  undefined4 local_5c;
  undefined4 local_58 [5];
  undefined1 local_44 [64];
  undefined4 local_4;
  
  if (*(short *)(in_ECX + 0xae) == 0) {
    return;
  }
  if (*(char *)(in_ECX + 0x96) == '\0') {
    return;
  }
  *(undefined4 *)(in_ECX + 0x120) = param_1;
  fVar14 = (float10)FUN_2007d090(param_1,&local_395,local_33c);
  local_3bc = (float *)(float)fVar14;
  local_3a0 = FUN_200884a0(CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 0xae)),&local_3a8);
  if (local_3a0 == 0) {
    return;
  }
  local_250 = 0;
  local_20c = 0;
  puVar5 = (undefined4 *)FUN_2007cfa0(local_370,local_3bc,local_3a8);
  puVar6 = local_334;
  for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_4 != '\0') {
    local_ec = 0;
    local_a8 = 0;
    if ((*(short *)(in_ECX + 0x94) == 0) ||
       (cVar4 = FUN_20088d00(*(undefined2 *)(in_ECX + 0xae),*(short *)(in_ECX + 0x94),local_334,
                             local_12c), cVar4 == '\0')) {
      FUN_200a1100(in_ECX + 4,param_2);
      FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
      local_208 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
      local_204 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
    }
    else {
      local_2e0 = 0;
      local_29c = 0;
      FUN_200a1100(in_ECX + 4,param_2);
      FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
      local_298 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
      local_294 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
      FUN_200a1100(local_e8,local_320);
      FUN_200a1100(local_2dc,local_12c);
      local_208 = local_a4 * local_298;
      local_204 = local_294 / local_a0;
    }
    local_3b8 = local_3bc;
    bVar3 = false;
    if (*(int *)(in_ECX + 0xb0) == 0) {
      local_39c = *(int *)(in_ECX + 0x134);
      local_3a4 = local_39c + -1;
      pfVar1 = (float *)((float)local_3a4 / (float)local_39c - 0.001);
      if ((float)pfVar1 < (float)local_3bc) {
        bVar3 = true;
        local_3b8 = pfVar1;
      }
    }
    else if (1.0 < (float)local_3bc + 0.001) {
      bVar3 = true;
    }
    local_5c = 0;
    local_1c0 = 0;
    local_2e0 = 0;
    local_29c = 0;
    local_17c = 0;
    local_138 = 0;
    local_3bc = (float *)**(float **)(in_ECX + 0x150);
    if (local_3bc != *(float **)(in_ECX + 0x150)) {
      do {
        pfVar1 = local_3bc;
        FUN_2007ba00(local_3bc[4],&local_3b1,&local_3bd,&local_396);
        if (local_3a9 == '\0') {
          cVar4 = FUN_20088d00(CONCAT22((short)((uint)local_320 >> 0x10),
                                        *(undefined2 *)(in_ECX + 0xae)),
                               CONCAT22(extraout_var_00,*(undefined2 *)(pfVar1 + 3)),local_334,
                               local_320);
          if (cVar4 != '\0') {
            puVar5 = operator_new(0x44);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar5[0x10] = 0;
            }
            if (local_3b1 == '\0') {
              if (local_3bd == '\0') {
                uVar15 = CONCAT44(local_290,local_320);
LAB_2007c6c2:
                FUN_200a1100(uVar15);
              }
              else {
                puVar6 = local_320;
                puVar13 = puVar5;
                for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *puVar13 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar13 = puVar13 + 1;
                }
              }
            }
            else {
              if (local_3bd == '\0') {
                uVar15 = CONCAT44(local_2dc,local_24c);
                goto LAB_2007c6c2;
              }
              puVar6 = local_2dc;
              puVar13 = puVar5;
              for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar13 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar13 = puVar13 + 1;
              }
            }
            local_380 = *(undefined4 *)(in_ECX + 0x160);
            local_37c = *(undefined4 *)(in_ECX + 0x120);
            local_388[0] = local_3bc[5];
            local_374 = 1;
            local_378 = puVar5;
            FUN_20082430(&local_3a4,*(undefined4 *)(param_3 + 4),local_388);
          }
        }
        else if (*(float *)(in_ECX + 300) < 0.0 == (*(float *)(in_ECX + 300) == 0.0)) {
          FUN_2007cfa0(local_370,local_3b8,local_3a8);
          cVar4 = FUN_20088d00(CONCAT22((short)((uint)local_370 >> 0x10),
                                        *(undefined2 *)(in_ECX + 0xae)),
                               CONCAT22((short)((uint)local_320 >> 0x10),
                                        *(undefined2 *)(local_3bc + 3)),local_370,local_320);
          if (cVar4 != '\0') {
            if (bVar3) {
              puVar5 = local_58;
              fVar2 = (float)local_3b8 - 0.001;
            }
            else {
              puVar5 = local_35c;
              fVar2 = (float)local_3b8 + 0.001;
            }
            puVar5 = (undefined4 *)FUN_2007cfa0(puVar5,CONCAT44(local_3a8,fVar2));
            puVar6 = local_370;
            for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            cVar4 = FUN_20088d00(CONCAT22((short)((uint)local_370 >> 0x10),
                                          *(undefined2 *)(in_ECX + 0xae)),
                                 CONCAT22((short)((uint)local_1bc >> 0x10),
                                          *(undefined2 *)(local_3bc + 3)),local_370,local_1bc);
            if (cVar4 != '\0') {
              puVar5 = operator_new(0x44);
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                puVar5[0x10] = 0;
              }
              if (local_3b1 == '\0') {
                if (local_3bd == '\0') {
                  if (bVar3) {
                    uVar15 = CONCAT44(local_178,local_320);
                  }
                  else {
                    uVar15 = CONCAT44(local_2dc,local_1bc);
                  }
                  FUN_200a1100(uVar15);
                  uVar15 = CONCAT44(local_290,local_200);
                }
                else {
                  if (bVar3) {
                    puVar12 = local_178;
                    puVar6 = local_320;
                    goto LAB_2007c5cf;
                  }
                  uVar15 = CONCAT44(local_2dc,local_1bc);
                }
              }
              else if (local_3bd == '\0') {
                if (bVar3) {
                  uVar15 = CONCAT44(local_2dc,local_1bc);
                }
                else {
                  uVar15 = CONCAT44(local_2dc,local_320);
                }
                FUN_200a1100(uVar15);
                puVar12 = local_200;
                puVar6 = local_24c;
LAB_2007c5cf:
                uVar15 = CONCAT44(puVar12,puVar6);
              }
              else if (bVar3) {
                uVar15 = CONCAT44(local_2dc,local_1bc);
              }
              else {
                uVar15 = CONCAT44(local_178,local_320);
              }
              FUN_200a1100(uVar15);
              local_4 = 0;
              FUN_200a0fb0();
              uVar15 = CONCAT44(local_44,local_9c);
              goto LAB_2007c6c2;
            }
          }
        }
        FUN_20020020();
      } while (local_3bc != *(float **)(in_ECX + 0x150));
    }
  }
  fVar14 = (float10)FUN_2007d2e0();
  local_3b0 = *(float **)(in_ECX + 0x124);
  if ((float10)(float)local_3b0 <= fVar14) {
    *(float *)(in_ECX + 0x124) = (float)fVar14;
    local_390 = (double)fVar14;
    fVar14 = (float10)FUN_200fc6f3((double)(float)local_3b0);
    local_3b8 = (float *)(float)((float10)local_390 - fVar14);
    local_390 = (double)(float)local_3b0;
    fVar14 = (float10)FUN_200fc6f3(local_390);
    iVar11 = *(int *)(*(int *)(local_3a0 + 0x110) + local_3a8 * 4);
    local_3a0 = iVar11 + 0x20;
    local_394 = (float)(((float10)local_390 - fVar14) * (float10)*(float *)(in_ECX + 300) *
                       (float10)1000.0);
    for (local_3bc = *(float **)(iVar11 + 0x24);
        (local_3bc != *(float **)(iVar11 + 0x28) && (*local_3bc < local_394));
        local_3bc = local_3bc + 10) {
    }
    if (2.0 < (float)local_3b8) {
      local_3b8 = (float *)0x40000000;
    }
    else if ((float)local_3b8 <= 0.0) goto LAB_2007ca5d;
    do {
      local_394 = (float)local_3b8 * *(float *)(in_ECX + 300) * 1000.0;
      if (local_3bc != *(float **)(local_3a0 + 8)) {
        local_3b0 = local_3bc + 3;
        do {
          if (local_394 <= *local_3bc) break;
          local_39c = (**(code **)(**(int **)(in_ECX + 0x1c4) + 0x30))();
          iVar7 = FUN_20086f90();
          piVar8 = (int *)FUN_20085280(auStack_344,&local_39c);
          iVar11 = *piVar8;
joined_r0x2007c8ae:
          if (iVar11 != iVar7) {
            local_378 = (undefined4 *)local_3b0[4];
            if (local_378 == (undefined4 *)0x0) {
              local_378 = (undefined4 *)&DAT_201116cc;
            }
            local_388[0] = *(float *)(iVar11 + 0x10);
            local_380 = *(undefined4 *)(in_ECX + 0x160);
            local_37c = *(undefined4 *)(in_ECX + 0x120);
            local_374 = 0;
            FUN_20082430(auStack_338,*(undefined4 *)(param_3 + 4),local_388);
            if (*(char *)(*(int *)(iVar11 + 8) + 0x15) != '\0') goto LAB_2007c911;
            iVar9 = FUN_20085550();
            goto LAB_2007c928;
          }
          local_3bc = local_3bc + 10;
          local_3b0 = local_3b0 + 10;
        } while (local_3bc != *(float **)(local_3a0 + 8));
      }
      local_3b8 = (float *)((float)local_3b8 - 1.0);
      if (-0.0001 < (float)local_3b8) {
        local_3a4 = (**(code **)(**(int **)(in_ECX + 0x1c4) + 0x30))();
        iVar7 = FUN_20086f90();
        piVar8 = (int *)FUN_20085280(auStack_340,&local_3a4);
        iVar11 = *piVar8;
joined_r0x2007c9b4:
        if (iVar11 != iVar7) {
          local_35c[0] = *(undefined4 *)(iVar11 + 0x10);
          uStack_354 = *(undefined4 *)(in_ECX + 0x160);
          uStack_350 = *(undefined4 *)(in_ECX + 0x120);
          puStack_34c = &DAT_2015ee44;
          uStack_348 = 0;
          FUN_20082430(&local_390,*(undefined4 *)(param_3 + 4),local_35c);
          if (*(char *)(*(int *)(iVar11 + 8) + 0x15) != '\0') goto LAB_2007ca18;
          iVar9 = FUN_20085550();
          goto LAB_2007ca2f;
        }
      }
      local_3bc = *(float **)(local_3a0 + 4);
    } while (0.0 < (float)local_3b8);
  }
LAB_2007ca5d:
  piVar10 = *(int **)(in_ECX + 0xf0);
  piVar8 = (int *)*piVar10;
  if (piVar8 != piVar10) {
    do {
      if (*(char *)(piVar8[3] + 0x128) != '\0') {
        if ((param_4 == '\0') || (*(char *)(piVar8[3] + 0x129) == '\0')) {
          uVar16 = 0;
LAB_2007cb9a:
          puVar12 = local_290;
        }
        else {
          local_ec = 0;
          local_a8 = 0;
          local_17c = 0;
          local_138 = 0;
          if (((short)piVar8[2] == 0) ||
             (cVar4 = FUN_20088d00(CONCAT22((short)((uint)local_12c >> 0x10),
                                            *(undefined2 *)(in_ECX + 0xae)),
                                   CONCAT22((short)((uint)piVar10 >> 0x10),(short)piVar8[2]),
                                   local_334,local_12c), cVar4 == '\0')) {
            uVar16 = 1;
            goto LAB_2007cb9a;
          }
          FUN_200a1100(local_12c,local_290);
          FUN_200a1100(local_24c,local_e8);
          iStack_134 = local_a4 * local_208;
          fStack_130 = local_a0 * local_204;
          puVar12 = local_1bc;
          uVar16 = 1;
        }
        FUN_2007c0f0(param_1,puVar12,CONCAT44(uVar16,param_3));
      }
      piVar8 = (int *)*piVar8;
      piVar10 = *(int **)(in_ECX + 0xf0);
    } while (piVar8 != piVar10);
  }
  return;
LAB_2007c911:
  iVar9 = *(int *)(iVar11 + 4);
  if (iVar11 == *(int *)(iVar9 + 8)) {
    do {
      iVar11 = iVar9;
      iVar9 = *(int *)(iVar11 + 4);
    } while (iVar11 == *(int *)(iVar9 + 8));
  }
  if (*(int *)(iVar11 + 8) != iVar9) {
LAB_2007c928:
    iVar11 = iVar9;
  }
  goto joined_r0x2007c8ae;
LAB_2007ca18:
  iVar9 = *(int *)(iVar11 + 4);
  if (iVar11 == *(int *)(iVar9 + 8)) {
    do {
      iVar11 = iVar9;
      iVar9 = *(int *)(iVar11 + 4);
    } while (iVar11 == *(int *)(iVar9 + 8));
  }
  if (*(int *)(iVar11 + 8) != iVar9) {
LAB_2007ca2f:
    iVar11 = iVar9;
  }
  goto joined_r0x2007c9b4;
}

