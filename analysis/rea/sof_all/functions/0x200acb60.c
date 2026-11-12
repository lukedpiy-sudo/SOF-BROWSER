// rea decompile_all
// name: FUN_200acb60
// address: 0x200acb60
// body: available
// range: 0x200acb60-0x200ae15a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200acb60(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            undefined1 *param_6,float *param_7,undefined4 param_8,undefined4 param_9)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *pfVar15;
  float10 fVar16;
  undefined1 *local_114;
  undefined1 *local_110;
  float local_10c;
  undefined1 *local_108;
  int local_104;
  undefined **local_100;
  undefined1 *local_f8;
  uint local_f4;
  float local_f0;
  float local_ec;
  float *local_e8;
  undefined1 local_e1;
  undefined1 *local_e0;
  float local_dc;
  float local_d8 [3];
  int local_cc;
  int *local_c4;
  int *local_c0;
  undefined1 auStack_bc [4];
  int local_b8 [3];
  undefined1 local_ac [24];
  float local_94;
  undefined1 local_8d;
  undefined1 local_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [9];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c [3];
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  undefined1 local_30 [12];
  undefined4 local_24 [3];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d8bd;
  local_c = ExceptionList;
  local_50 = 1;
  local_4f = 0;
  ExceptionList = &local_c;
  FUN_20067780(param_1);
  FUN_20067780(param_2);
  FUN_20067780(param_3);
  *param_7 = 1.0;
  cVar3 = FUN_20067640(param_5,0);
  if (cVar3 == '\0') goto LAB_200acdd5;
  local_100 = &PTR_LAB_201126a0;
  bVar2 = false;
  local_4 = 0;
  FUN_200b9460(&local_8d);
  local_100 = &PTR_LAB_20112694;
  local_4 = 1;
  FUN_200bb310(param_1);
  FUN_200bb310(param_2);
  FUN_200bb310(param_3);
  local_10c = param_5[3];
  FUN_200802f0(&DAT_20406528);
  local_94 = local_10c;
  FUN_200be520();
  local_10c = 0.01;
  local_dc = 4.2039e-45;
  FUN_200bb3d0(local_f4,&local_dc,&local_e1);
  local_4 = CONCAT31(local_4._1_3_,2);
  local_f0 = 1.0;
  bVar1 = false;
  piVar4 = (int *)FUN_20083550(&local_108);
  puVar12 = (undefined1 *)*piVar4;
  if (puVar12 == local_f8) goto LAB_200acd80;
  local_e0 = (undefined1 *)-local_10c;
  local_114 = local_108;
  piVar4 = local_c4;
  do {
    fVar16 = (float10)FUN_20090310(puVar12 + 8);
    fVar16 = fVar16 - (float10)local_94;
    if ((float10)(float)local_e0 <= fVar16) {
      if (fVar16 <= (float10)local_10c) {
        *piVar4 = 0;
      }
      else {
        *piVar4 = 1;
        bVar1 = true;
      }
    }
    else {
      bVar2 = true;
      *piVar4 = 2;
    }
    if (fVar16 < (float10)local_f0) {
      local_f0 = (float)fVar16;
      local_114 = puVar12;
      local_e8 = (float *)piVar4;
    }
    FUN_2008d0b0(&local_104,0);
    pfVar15 = local_e8;
    piVar4 = piVar4 + 1;
  } while (puVar12 != local_f8);
  if (bVar1) {
    pfVar13 = local_e8;
    puVar12 = local_114;
    if (!bVar2) {
LAB_200ad0e1:
      puVar5 = (undefined4 *)FUN_20083550(&local_108);
      FUN_2008c530(&local_104,*puVar5,local_f8);
      goto LAB_200acd80;
    }
    while (*pfVar13 == 2.8026e-45) {
      FUN_2008d0b0(&local_104,0);
      pfVar13 = pfVar13 + 1;
      if (puVar12 == local_f8) {
        piVar4 = (int *)FUN_20083550(&local_10c);
        pfVar13 = (float *)local_c4;
        puVar12 = (undefined1 *)*piVar4;
      }
    }
    for (; puVar6 = local_114, *pfVar15 == 2.8026e-45; pfVar15 = pfVar15 + -1) {
      piVar4 = (int *)FUN_20083550(&local_104);
      if (local_114 == (undefined1 *)*piVar4) {
        local_114 = local_f8;
        pfVar15 = (float *)local_c0;
      }
      FUN_200bb3c0(&local_10c,0);
    }
    if (puVar12 == local_114) {
      piVar4 = (int *)FUN_20083550(&local_108);
      local_114 = puVar12;
      if (puVar12 == (undefined1 *)*piVar4) {
        local_114 = local_f8;
      }
      FUN_200bb3c0(&local_108,0);
      FUN_200bb510(local_b8,puVar12 + 8,local_114 + 8);
      FUN_2008d0b0(&local_108,0);
      puVar6 = puVar12;
      if (puVar12 == local_f8) {
        piVar4 = (int *)FUN_20083550(&local_108);
        puVar6 = (undefined1 *)*piVar4;
      }
      FUN_200bb510(local_8c,puVar12 + 8,puVar6 + 8);
      FUN_200bb360(&local_108,puVar6,local_40);
      FUN_200802f0(local_8c);
LAB_200ad3ed:
      FUN_200802f0(local_b8);
    }
    else {
      if (*pfVar13 != 0.0) {
        piVar4 = (int *)FUN_20083550(&local_104);
        local_114 = puVar12;
        if (puVar12 == (undefined1 *)*piVar4) {
          local_114 = local_f8;
        }
        FUN_200bb3c0(&local_104,0);
        FUN_200bb510(local_b8,puVar12 + 8,local_114 + 8);
        FUN_200802f0(local_b8);
      }
      FUN_2008d0b0(&local_104,0);
      if (puVar12 == local_f8) {
        piVar4 = (int *)FUN_20083550(&local_104);
        puVar12 = (undefined1 *)*piVar4;
      }
      while (puVar12 != puVar6) {
        FUN_2008d0b0(&local_104,0);
        local_110 = puVar12;
        if (puVar12 == local_f8) {
          piVar4 = (int *)FUN_20083550(&local_10c);
          local_110 = (undefined1 *)*piVar4;
        }
        FUN_200ba400(&local_f0,puVar12);
        puVar12 = local_110;
      }
      if (*pfVar15 == 1.4013e-45) {
        FUN_2008d0b0(&local_108,0);
        puVar12 = puVar6;
        if (puVar6 == local_f8) {
          piVar4 = (int *)FUN_20083550(&local_108);
          puVar12 = (undefined1 *)*piVar4;
        }
        FUN_200bb510(local_b8,puVar6 + 8,puVar12 + 8);
        goto LAB_200ad3ed;
      }
    }
    if (2 < local_f4) goto LAB_200ad40b;
LAB_200acd8c:
    local_4._0_1_ = 1;
    FUN_20092110();
  }
  else {
    if (!bVar2) goto LAB_200acd80;
LAB_200ad40b:
    local_4._0_1_ = 1;
    FUN_20092110();
    if (2 < local_f4) {
      local_10c = -*param_5;
      FUN_200802f0(&DAT_20406504);
      local_94 = local_10c;
      FUN_200be520();
      local_10c = 0.01;
      local_dc = 4.2039e-45;
      FUN_200bb3d0(local_f4,&local_dc,&local_e1);
      local_4 = CONCAT31(local_4._1_3_,3);
      local_f0 = 1.0;
      bVar1 = false;
      bVar2 = false;
      piVar4 = (int *)FUN_20083550(&local_108);
      puVar12 = (undefined1 *)*piVar4;
      if (puVar12 == local_f8) goto LAB_200acd80;
      local_e0 = (undefined1 *)-local_10c;
      local_114 = local_108;
      piVar4 = local_c4;
      do {
        fVar16 = (float10)FUN_20090310(puVar12 + 8);
        fVar16 = fVar16 - (float10)local_94;
        if ((float10)(float)local_e0 <= fVar16) {
          if (fVar16 <= (float10)local_10c) {
            *piVar4 = 0;
          }
          else {
            *piVar4 = 1;
            bVar1 = true;
          }
        }
        else {
          bVar2 = true;
          *piVar4 = 2;
        }
        if (fVar16 < (float10)local_f0) {
          local_f0 = (float)fVar16;
          local_114 = puVar12;
          local_e8 = (float *)piVar4;
        }
        FUN_2008d0b0(&local_104,0);
        pfVar15 = local_e8;
        piVar4 = piVar4 + 1;
      } while (puVar12 != local_f8);
      if (bVar1) {
        pfVar13 = local_e8;
        puVar12 = local_114;
        if (!bVar2) goto LAB_200ad0e1;
        while (*pfVar13 == 2.8026e-45) {
          FUN_2008d0b0(&local_104,0);
          pfVar13 = pfVar13 + 1;
          if (puVar12 == local_f8) {
            piVar4 = (int *)FUN_20083550(&local_10c);
            pfVar13 = (float *)local_c4;
            puVar12 = (undefined1 *)*piVar4;
          }
        }
        for (; puVar6 = local_114, *pfVar15 == 2.8026e-45; pfVar15 = pfVar15 + -1) {
          piVar4 = (int *)FUN_20083550(&local_104);
          if (local_114 == (undefined1 *)*piVar4) {
            local_114 = local_f8;
            pfVar15 = (float *)local_c0;
          }
          FUN_200bb3c0(&local_10c,0);
        }
        if (puVar12 == local_114) {
          piVar4 = (int *)FUN_20083550(&local_108);
          local_114 = puVar12;
          if (puVar12 == (undefined1 *)*piVar4) {
            local_114 = local_f8;
          }
          FUN_200bb3c0(&local_108,0);
          FUN_200bb510(local_b8,puVar12 + 8,local_114 + 8);
          FUN_2008d0b0(&local_108,0);
          puVar6 = puVar12;
          if (puVar12 == local_f8) {
            piVar4 = (int *)FUN_20083550(&local_108);
            puVar6 = (undefined1 *)*piVar4;
          }
          FUN_200bb510(local_8c,puVar12 + 8,puVar6 + 8);
          FUN_200bb360(&local_108,puVar6,local_40);
          FUN_200802f0(local_8c);
LAB_200ad83d:
          FUN_200802f0(local_b8);
        }
        else {
          if (*pfVar13 != 0.0) {
            piVar4 = (int *)FUN_20083550(&local_104);
            local_114 = puVar12;
            if (puVar12 == (undefined1 *)*piVar4) {
              local_114 = local_f8;
            }
            FUN_200bb3c0(&local_104,0);
            FUN_200bb510(local_b8,puVar12 + 8,local_114 + 8);
            FUN_200802f0(local_b8);
          }
          FUN_2008d0b0(&local_104,0);
          if (puVar12 == local_f8) {
            piVar4 = (int *)FUN_20083550(&local_104);
            puVar12 = (undefined1 *)*piVar4;
          }
          while (puVar12 != puVar6) {
            FUN_2008d0b0(&local_104,0);
            local_110 = puVar12;
            if (puVar12 == local_f8) {
              piVar4 = (int *)FUN_20083550(&local_10c);
              local_110 = (undefined1 *)*piVar4;
            }
            FUN_200ba400(&local_f0,puVar12);
            puVar12 = local_110;
          }
          if (*pfVar15 == 1.4013e-45) {
            FUN_2008d0b0(&local_108,0);
            puVar12 = puVar6;
            if (puVar6 == local_f8) {
              piVar4 = (int *)FUN_20083550(&local_108);
              puVar12 = (undefined1 *)*piVar4;
            }
            FUN_200bb510(local_b8,puVar6 + 8,puVar12 + 8);
            goto LAB_200ad83d;
          }
        }
        if (local_f4 < 3) goto LAB_200acd8c;
      }
      else {
        if (!bVar2) goto LAB_200acd80;
      }
      local_4._0_1_ = 1;
      FUN_20092110();
      if (2 < local_f4) {
        local_10c = param_5[4];
        FUN_200802f0(&DAT_20406534);
        local_94 = local_10c;
        FUN_200be520();
        local_10c = 0.01;
        local_dc = 4.2039e-45;
        FUN_200bb3d0(local_f4,&local_dc,&local_e1);
        local_4 = CONCAT31(local_4._1_3_,4);
        local_f0 = 1.0;
        bVar1 = false;
        bVar2 = false;
        piVar4 = (int *)FUN_20083550(&local_108);
        puVar12 = (undefined1 *)*piVar4;
        if (puVar12 == local_f8) {
LAB_200acd80:
          goto LAB_200acd8c;
        }
        local_e0 = (undefined1 *)-local_10c;
        local_114 = local_108;
        piVar4 = local_c4;
        do {
          fVar16 = (float10)FUN_20090310(puVar12 + 8);
          fVar16 = fVar16 - (float10)local_94;
          if ((float10)(float)local_e0 <= fVar16) {
            if (fVar16 <= (float10)local_10c) {
              *piVar4 = 0;
            }
            else {
              *piVar4 = 1;
              bVar1 = true;
            }
          }
          else {
            bVar2 = true;
            *piVar4 = 2;
          }
          if (fVar16 < (float10)local_f0) {
            local_f0 = (float)fVar16;
            local_114 = puVar12;
            local_e8 = (float *)piVar4;
          }
          FUN_2008d0b0(&local_104,0);
          pfVar15 = local_e8;
          piVar4 = piVar4 + 1;
        } while (puVar12 != local_f8);
        if (bVar1) {
          pfVar13 = local_e8;
          puVar12 = local_114;
          if (!bVar2) {
            puVar5 = (undefined4 *)FUN_20083550(&local_108);
            FUN_2008c530(&local_104,*puVar5,local_f8);
            goto LAB_200acd80;
          }
          while (*pfVar13 == 2.8026e-45) {
            FUN_2008d0b0(&local_104,0);
            pfVar13 = pfVar13 + 1;
            if (puVar12 == local_f8) {
              piVar4 = (int *)FUN_20083550(&local_10c);
              pfVar13 = (float *)local_c4;
              puVar12 = (undefined1 *)*piVar4;
            }
          }
          for (; puVar6 = local_114, *pfVar15 == 2.8026e-45; pfVar15 = pfVar15 + -1) {
            piVar4 = (int *)FUN_20083550(&local_104);
            if (local_114 == (undefined1 *)*piVar4) {
              local_114 = local_f8;
              pfVar15 = (float *)local_c0;
            }
            FUN_200bb3c0(&local_10c,0);
          }
          if (puVar12 == local_114) {
            piVar4 = (int *)FUN_20083550(&local_108);
            local_114 = puVar12;
            if (puVar12 == (undefined1 *)*piVar4) {
              local_114 = local_f8;
            }
            FUN_200bb3c0(&local_108,0);
            FUN_200bb510(local_8c,puVar12 + 8,local_114 + 8);
            FUN_2008d0b0(&local_108,0);
            puVar6 = puVar12;
            if (puVar12 == local_f8) {
              piVar4 = (int *)FUN_20083550(&local_108);
              puVar6 = (undefined1 *)*piVar4;
            }
            FUN_200bb510(local_40,puVar12 + 8,puVar6 + 8);
            FUN_200bb360(&local_108,puVar6,local_b8);
            FUN_200802f0(local_40);
LAB_200adcc3:
            FUN_200802f0(local_8c);
          }
          else {
            if (*pfVar13 != 0.0) {
              piVar4 = (int *)FUN_20083550(&local_104);
              local_114 = puVar12;
              if (puVar12 == (undefined1 *)*piVar4) {
                local_114 = local_f8;
              }
              FUN_200bb3c0(&local_104,0);
              FUN_200bb510(local_8c,puVar12 + 8,local_114 + 8);
              FUN_200802f0(local_8c);
            }
            FUN_2008d0b0(&local_104,0);
            if (puVar12 == local_f8) {
              piVar4 = (int *)FUN_20083550(&local_104);
              puVar12 = (undefined1 *)*piVar4;
            }
            while (puVar12 != puVar6) {
              FUN_2008d0b0(&local_104,0);
              local_110 = puVar12;
              if (puVar12 == local_f8) {
                piVar4 = (int *)FUN_20083550(&local_10c);
                local_110 = (undefined1 *)*piVar4;
              }
              FUN_200ba400(&local_f0,puVar12);
              puVar12 = local_110;
            }
            if (*pfVar15 == 1.4013e-45) {
              FUN_2008d0b0(&local_108,0);
              puVar12 = puVar6;
              if (puVar6 == local_f8) {
                piVar4 = (int *)FUN_20083550(local_34);
                puVar12 = (undefined1 *)*piVar4;
              }
              FUN_200bb510(local_8c,puVar6 + 8,puVar12 + 8);
              goto LAB_200adcc3;
            }
          }
          if (local_f4 < 3) goto LAB_200acd8c;
        }
        else {
          if (!bVar2) goto LAB_200acd80;
        }
        local_4._0_1_ = 1;
        FUN_20092110();
        if (2 < local_f4) {
          local_10c = -param_5[1];
          FUN_200802f0(&DAT_20406510);
          local_94 = local_10c;
          FUN_200be520();
          iVar10 = FUN_200bac30(local_ac,0x3c23d70a);
          if (((iVar10 != 1) && (iVar10 != 0)) && (2 < local_f4)) {
            local_10c = param_5[5];
            FUN_200802f0(&DAT_2040651c);
            local_94 = local_10c;
            FUN_200be520();
            iVar10 = FUN_200bac30(local_ac,0x3c23d70a);
            if (((iVar10 != 1) && (iVar10 != 0)) && (2 < local_f4)) {
              local_10c = -param_5[2];
              FUN_200802f0(&DAT_204064f8);
              local_94 = local_10c;
              FUN_200be520();
              iVar10 = FUN_200bac30(local_ac,0x3c23d70a);
              if (((iVar10 != 1) && (iVar10 != 0)) && (2 < local_f4)) {
                local_100 = &PTR_LAB_20112694;
                *param_6 = 1;
                local_4 = 5;
                FUN_200b9490();
                ExceptionList = local_c;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  local_100 = &PTR_LAB_20112694;
  local_4 = 6;
  FUN_200b9490();
  local_4 = 0xffffffff;
  local_100 = &PTR_LAB_201126a0;
LAB_200acdd5:
  FUN_200802f0(param_1);
  FUN_20068250(param_4);
  FUN_20067780(local_d8);
  FUN_200802f0(param_2);
  FUN_20068250(param_4);
  FUN_20067780(local_d8);
  FUN_200802f0(param_3);
  FUN_20068250(param_4);
  FUN_20067780(local_d8);
  cVar3 = FUN_20067640(param_5,0x3f800000);
  if (cVar3 != '\0') {
    *param_6 = 0;
    FUN_200802f0(param_3);
    FUN_20068250(param_2);
    FUN_200802f0(param_1);
    FUN_20068250(param_2);
    FUN_200c38a0(local_30);
    fVar16 = (float10)FUN_20090310(param_4);
    if (fVar16 < (float10)0.0) {
      FUN_20067550(param_4,local_74,local_4c);
      local_b8[1] = param_2;
      local_108 = (undefined1 *)(4 - (int)param_5);
      iVar10 = 0;
      local_104 = (int)param_5 - (int)param_4;
      local_b8[0] = param_1;
      local_b8[2] = param_3;
      local_10c = 1.4013e-45;
      local_e8 = param_4;
      do {
        pfVar15 = (float *)(local_104 + (int)local_e8);
        puVar12 = (undefined1 *)((int)pfVar15 + (int)local_108);
        local_dc = local_10c;
        if (2 < (int)local_10c) {
          local_dc = (float)((int)local_10c + -3);
          puVar12 = puVar12 + -0xc;
        }
        local_f0 = (float)((int)local_dc + 1);
        local_e0 = puVar12 + 4;
        if (2 < (int)local_f0) {
          local_f0 = (float)((int)local_dc + -2);
          local_e0 = puVar12 + -8;
        }
        if (*local_e8 <= 0.001) {
          if (*local_e8 < -0.001) {
            local_cc = 0;
            do {
              iVar8 = local_b8[local_cc];
              if ((((*(float *)(iVar10 + iVar8) < *pfVar15 !=
                     (*(float *)(iVar10 + iVar8) == *pfVar15)) &&
                   (*local_e8 + *pfVar15 < *(float *)(iVar10 + iVar8) !=
                    (*local_e8 + *pfVar15 == *(float *)(iVar10 + iVar8)))) &&
                  (local_ec = (1.0 / *local_e8) * (*(float *)(iVar10 + iVar8) - *pfVar15),
                  -0.001 < local_ec)) && (local_ec < *param_7)) {
                if (local_ec < 0.0) {
                  local_ec = 0.0;
                }
                FUN_200802f0(param_4);
                FUN_20068280(-local_ec);
                FUN_20068220(iVar8);
                if (((*(float *)((int)local_d8 + (int)puVar12) < param_5[(int)local_dc + 3] !=
                      (*(float *)((int)local_d8 + (int)puVar12) == param_5[(int)local_dc + 3])) &&
                    (*(float *)((int)param_5 + (int)puVar12) <=
                     *(float *)((int)local_d8 + (int)puVar12))) &&
                   ((*(float *)((int)local_d8 + (int)local_e0) < param_5[(int)local_f0 + 3] !=
                     (*(float *)((int)local_d8 + (int)local_e0) == param_5[(int)local_f0 + 3]) &&
                    (*(float *)(local_e0 + (int)param_5) <=
                     *(float *)((int)local_d8 + (int)local_e0))))) {
                  *param_7 = local_ec;
                  FUN_200802f0(local_d8);
                }
              }
              local_cc = local_cc + 1;
            } while (local_cc < 3);
          }
        }
        else {
          local_cc = 0;
          do {
            iVar8 = local_b8[local_cc];
            if (((pfVar15[3] <= *(float *)(iVar10 + iVar8)) &&
                (*(float *)(iVar10 + iVar8) <= pfVar15[3] + *local_e8)) &&
               ((local_ec = (1.0 / *local_e8) * (*(float *)(iVar10 + iVar8) - pfVar15[3]),
                -0.001 < local_ec && (local_ec < *param_7)))) {
              if (local_ec < 0.0) {
                local_ec = 0.0;
              }
              FUN_200802f0(param_4);
              FUN_20068280(-local_ec);
              FUN_20068220(iVar8);
              if ((((*(float *)((int)local_d8 + (int)puVar12) < param_5[(int)local_dc + 3] !=
                     (*(float *)((int)local_d8 + (int)puVar12) == param_5[(int)local_dc + 3])) &&
                   (*(float *)((int)param_5 + (int)puVar12) <=
                    *(float *)((int)local_d8 + (int)puVar12))) &&
                  (*(float *)((int)local_d8 + (int)local_e0) < param_5[(int)local_f0 + 3] !=
                   (*(float *)((int)local_d8 + (int)local_e0) == param_5[(int)local_f0 + 3]))) &&
                 (*(float *)(local_e0 + (int)param_5) <= *(float *)((int)local_d8 + (int)local_e0)))
              {
                *param_7 = local_ec;
                FUN_200802f0(local_d8);
              }
            }
            local_cc = local_cc + 1;
          } while (local_cc < 3);
        }
        fVar7 = (float)((int)local_10c + 1);
        iVar10 = iVar10 + 4;
        local_e8 = local_e8 + 1;
        bVar1 = (int)local_10c < 3;
        local_10c = fVar7;
      } while (bVar1);
      FUN_200802f0(local_4c);
      uVar11 = 0;
      do {
        FUN_200802f0(local_4c);
        if ((uVar11 & 1) != 0) {
          local_80 = local_74[0];
        }
        if ((uVar11 & 2) != 0) {
          local_7c = local_74[1];
        }
        if ((uVar11 & 4) != 0) {
          local_78 = local_74[2];
        }
        FUN_200abf80(param_1,param_2,param_3,param_8,&local_80,param_4,param_7,param_9);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 7);
      FUN_20011520(local_24,0xc,2,&LAB_200aac50);
      piVar4 = &DAT_20157960;
      local_108 = auStack_bc;
      do {
        puVar5 = local_24;
        iVar10 = 2;
        do {
          iVar8 = 0;
          do {
            if (*piVar4 == 0) {
              uVar14 = *(undefined4 *)((int)local_4c + iVar8);
            }
            else {
              uVar14 = *(undefined4 *)((int)local_74 + iVar8);
            }
            *puVar5 = uVar14;
            iVar8 = iVar8 + 4;
            piVar4 = piVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar8 < 0xc);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar8 = 0;
        iVar10 = 4;
        do {
          iVar8 = iVar8 + 1;
          iVar9 = iVar10;
          if (2 < iVar8) {
            iVar9 = iVar10 + -0xc;
          }
          FUN_200ac200(*(undefined4 *)(local_108 + iVar10),*(undefined4 *)((int)local_b8 + iVar9),
                       local_24,local_18,param_4,param_7,param_9);
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0x10);
      } while ((int)piVar4 < 0x20157a38);
      if (*param_7 < 1.0) {
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

