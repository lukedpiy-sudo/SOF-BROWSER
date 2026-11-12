// rea decompile_all
// name: FUN_200786b0
// address: 0x200786b0
// body: available
// range: 0x200786b0-0x200790ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200786b0(undefined4 param_1,byte *param_2,float param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined3 uVar9;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int in_ECX;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  byte local_96;
  byte local_95;
  float local_94;
  char local_8e;
  undefined1 local_8d;
  float local_8c;
  float local_88;
  uint local_84;
  int *local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  int local_54 [2];
  float local_4c [2];
  float local_44 [12];
  float local_14 [4];
  undefined4 local_4;
  
  local_8d = 0;
  *param_2 = 0;
  piVar2 = (int *)FUN_2008bce0();
  local_80 = piVar2;
  FUN_200be390(&local_96,1);
  *(byte *)(in_ECX + 0x92) = local_96;
  FUN_200be390(&local_96,1);
  if (local_96 != 0) {
    FUN_20087830(in_ECX + 0x94,4);
  }
  FUN_200be390(&local_96,1);
  *(byte *)(in_ECX + 0xa4) = local_96;
  FUN_200be390(&local_96,1);
  *(byte *)(in_ECX + 0xa5) = local_96;
  iVar11 = piVar2[1];
  if (iVar11 == 0) {
    *(undefined2 *)(in_ECX + 0x90) = 0;
  }
  else {
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200063e0((undefined2 *)(in_ECX + 0x90),iVar11);
    }
  }
  iVar11 = *local_80;
  if (iVar11 == 0) {
    *(undefined2 *)(in_ECX + 0xaa) = 0;
  }
  else {
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200063e0((undefined2 *)(in_ECX + 0xaa),iVar11);
      bVar1 = 1;
      goto LAB_20078798;
    }
  }
  bVar1 = 0;
LAB_20078798:
  *param_2 = *param_2 | bVar1;
  FUN_200be390(&local_96,1);
  bVar12 = local_96 != 0;
  if (bVar12) {
    FUN_20087830(in_ECX + 0xac,2);
  }
  *param_2 = *param_2 | bVar12;
  FUN_200be390(&local_96,1);
  if (local_96 != 0) {
    *param_2 = 1;
    local_8c = (float)((uint)local_8c & 0xffffff00);
    local_94 = 0.0;
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(&local_96,1);
      FUN_200be390(&local_8c,2);
      FUN_200be390(&local_94,((uint)local_8c & 0xff) * 8 + 8);
      if (local_96 != 0) {
        local_94 = (float)-(int)local_94;
      }
    }
    fVar5 = (float)(int)local_94;
    local_8c = (float)((uint)local_8c & 0xffffff00);
    local_94 = 0.0;
    *(float *)(in_ECX + 0x9c) = fVar5 * 0.008333334 + param_3;
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(&local_96,1);
      FUN_200be390(&local_8c,2);
      FUN_200be390(&local_94,((uint)local_8c & 0xff) * 8 + 8);
      if (local_96 != 0) {
        local_94 = (float)-(int)local_94;
      }
    }
    *(float *)(in_ECX + 0x98) = (float)(int)local_94 * 0.008333334 + *(float *)(in_ECX + 0x9c);
  }
  if ((*(char *)(in_ECX + 0xa4) != '\0') && (FUN_200be390(&local_96,1), local_96 != 0)) {
    *param_2 = 1;
    FUN_200be390(&local_96,1);
    if (local_96 == 0) {
      FUN_200be390(in_ECX + 0xa0,0x20);
    }
    else {
      *(undefined4 *)(in_ECX + 0xa0) = 0x7149f2ca;
    }
  }
  FUN_200be390(&local_96,1);
  if (local_96 != 0) {
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(in_ECX + 0xa6,8);
    }
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(in_ECX + 0xa7,8);
    }
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(in_ECX + 0xa8,8);
    }
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(in_ECX + 0xa9,8);
    }
  }
  FUN_200be390(&local_96,1);
  if (local_96 != 0) {
    FUN_200a0c40(in_ECX);
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(&local_84,0x20);
      FUN_2008fd20(local_44,local_84);
    }
    local_94 = 1.0;
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      FUN_200be390(&local_94,0x20);
    }
    iVar11 = 0;
    pfVar7 = local_44 + 2;
    do {
      local_78 = pfVar7[-1];
      local_7c = pfVar7[-2];
      local_74 = *pfVar7;
      fVar13 = (float10)FUN_200790d0();
      FUN_200c3870((float)fVar13);
      local_7c = local_7c * local_94;
      local_78 = local_78 * local_94;
      local_74 = local_74 * local_94;
      FUN_200a15d0(iVar11,&local_7c);
      iVar11 = iVar11 + 1;
      pfVar7 = pfVar7 + 4;
    } while (iVar11 < 3);
    FUN_200be390(&local_96,1);
    if (local_96 != 0) {
      pfVar7 = local_14;
      iVar11 = 3;
      do {
        FUN_200be390(&local_96,1);
        if (local_96 != 0) {
          FUN_200be390(&local_8e,1);
          if (local_8e == '\0') {
            FUN_200be390(&local_88,0x20);
          }
          else {
            local_8c = 0.0;
            FUN_200be390(&local_8c,0xb);
            local_88 = (float)(int)local_8c * 0.0625 - 64.0;
          }
          *pfVar7 = local_88;
          local_4 = 0;
        }
        pfVar7 = pfVar7 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_200a0c70();
    FUN_200a0470(local_44);
  }
  FUN_200be390(&local_8e,1);
  if (local_8e == '\0') {
LAB_20078cc2:
    FUN_200be390(&local_95,1);
    if (local_95 != 0) {
      while( true ) {
        local_88 = (float)((uint)local_88 & 0xffffff00);
        local_94 = 0.0;
        FUN_200be390(&local_95,1);
        if (local_95 != 0) {
          FUN_200be390(&local_88,2);
          FUN_200be390(&local_94,((uint)local_88 & 0xff) * 4 + 4);
        }
        if (local_94._0_2_ == 0) break;
        local_8c = 0.0;
        if (local_80[1] != 0) {
          FUN_200be390(&local_8c,local_80[1]);
        }
        local_84 = CONCAT22(local_8c._0_2_,SUB42(local_94,0));
        FUN_20083030(&local_7c,&local_84);
        local_8d = 1;
      }
      while( true ) {
        local_84 = local_84 & 0xffffff00;
        local_94 = 0.0;
        FUN_200be390(&local_95,1);
        if (local_95 != 0) {
          FUN_200be390(&local_84,2);
          FUN_200be390(&local_94,(local_84 & 0xff) * 4 + 4);
        }
        if (local_94._0_2_ == 0) break;
        local_88 = 0.0;
        if (local_80[1] != 0) {
          FUN_200be390(&local_88,local_80[1]);
        }
        local_8c = (float)CONCAT22(local_88._0_2_,SUB42(local_94,0));
        FUN_20084cb0(&local_6c,&local_8c);
        local_64 = 0.0;
        FUN_20076110(local_6c,local_68,&local_64);
        FUN_20083280(local_54,local_6c,local_68);
        local_8d = 1;
      }
    }
    uVar4 = FUN_200be390(&local_95,1);
    uVar9 = (undefined3)((uint)uVar4 >> 8);
    if (local_95 != 0) {
      FUN_200be390(&local_96,1);
      while (local_96 != 0) {
        local_88 = 0.0;
        if (local_80[2] != 0) {
          FUN_200be390(&local_88,local_80[2]);
        }
        local_84 = 0;
        if (local_80[1] != 0) {
          FUN_200be390(&local_84,local_80[1]);
        }
        local_8c = 0.0;
        if (local_80[3] != 0) {
          FUN_200be390(&local_8c,local_80[3]);
        }
        local_4c[0] = (float)CONCAT22(local_4c[0]._2_2_,(undefined2)local_84);
        local_60 = (float)CONCAT22(local_60._2_2_,local_88._0_2_);
        local_78 = local_4c[0];
        local_74 = 0.0;
        local_7c = local_60;
        local_70 = 0;
        FUN_200828b0(&local_6c,&local_7c);
        FUN_2008c5b0(&local_6c,&local_68);
        *(undefined2 *)(local_54[0] + 0x18) = local_8c._0_2_;
        FUN_200be390(&local_96,1);
      }
      uVar4 = FUN_200be390(&local_96,1);
      uVar9 = (undefined3)((uint)uVar4 >> 8);
      piVar2 = local_80;
      while (local_96 != 0) {
        local_88 = 0.0;
        local_80 = piVar2;
        if (piVar2[2] != 0) {
          FUN_200be390(&local_88,piVar2[2]);
        }
        local_84 = 0;
        if (piVar2[1] != 0) {
          FUN_200be390(&local_84,piVar2[1]);
        }
        local_7c = (float)CONCAT22(local_7c._2_2_,(undefined2)local_84);
        local_5c = local_7c;
        local_60 = (float)CONCAT22(local_60._2_2_,local_88._0_2_);
        local_58 = 0;
        fVar5 = (float)FUN_200874c0(&local_60);
        fVar6 = (float)FUN_20086e00(&local_60);
        local_8c = fVar6;
        while (local_8c != fVar5) {
          FUN_20027950();
        }
        local_94 = fVar6;
        if (((*(int *)(in_ECX + 0xd0) == 0) ||
            (pfVar7 = (float *)FUN_20083550(local_54), local_94 != *pfVar7)) ||
           (fVar5 != *(float *)(in_ECX + 0xc4))) {
          while (fVar6 = local_94, local_94 != fVar5) {
            puVar8 = (undefined4 *)FUN_20084c50(local_4c,0);
            FUN_20082b00(&local_6c,*puVar8);
          }
        }
        else {
          FUN_20084920(*(undefined4 *)((int)*(float *)(in_ECX + 0xc4) + 4));
          *(undefined4 *)(*(int *)(in_ECX + 0xc4) + 4) = *(undefined4 *)(in_ECX + 200);
          *(undefined4 *)(in_ECX + 0xd0) = 0;
          *(undefined4 *)*(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(in_ECX + 0xc4);
          *(int *)(*(int *)(in_ECX + 0xc4) + 8) = *(int *)(in_ECX + 0xc4);
          FUN_20083550(&local_64);
          fVar6 = local_64;
        }
        local_64 = fVar6;
        uVar4 = FUN_200be390(&local_96,1);
        uVar9 = (undefined3)((uint)uVar4 >> 8);
        piVar2 = local_80;
      }
    }
    return CONCAT31(uVar9,local_8d);
  }
  uVar10 = 0;
  do {
    if ((*(int *)(in_ECX + 0xb4) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xb8) - *(int *)(in_ECX + 0xb4)) <= uVar10)) goto LAB_20078cc2;
    FUN_200be390(&local_8e,1);
    if (local_8e == '\0') {
      local_88 = 0.0;
      do {
        iVar11 = *(int *)(in_ECX + 0xb4);
        if ((iVar11 == 0) || ((uint)(*(int *)(in_ECX + 0xb8) - iVar11) <= uVar10)) break;
        pbVar3 = (byte *)(iVar11 + uVar10);
        FUN_200be390(&local_95,1);
        local_88 = (float)((int)local_88 + 1);
        uVar10 = uVar10 + 1;
        *pbVar3 = *pbVar3 ^ local_95;
      } while ((int)local_88 < 4);
    }
    else {
      FUN_200be390(&local_96,1);
      local_94 = 0.0;
      FUN_200be390(&local_94,5);
      iVar11 = 0;
      local_94 = (float)((int)local_94 + 6);
      if (0 < (int)local_94) {
        do {
          pbVar3 = (byte *)(*(int *)(in_ECX + 0xb4) + iVar11 + uVar10);
          *pbVar3 = *pbVar3 ^ local_96;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_94);
      }
      uVar10 = uVar10 + (int)local_94;
    }
  } while( true );
}

