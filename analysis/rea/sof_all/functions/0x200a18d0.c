// rea decompile_all
// name: FUN_200a18d0
// address: 0x200a18d0
// body: available
// range: 0x200a18d0-0x200a232f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200a18d0(char *param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 local_469;
  undefined4 local_468;
  int local_464;
  void *local_460;
  undefined1 *local_45c;
  void *local_458;
  void *local_454;
  undefined1 *local_450;
  undefined1 local_449;
  undefined4 local_448;
  undefined1 *local_444;
  undefined1 local_440 [4];
  char *local_43c;
  undefined1 local_430 [16];
  undefined4 local_420;
  undefined1 local_41c [8];
  undefined1 local_414;
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d281;
  local_c = ExceptionList;
  local_45c = (undefined1 *)0x0;
  ExceptionList = &local_c;
  *param_2 = 0;
  local_460 = operator_new(0x24);
  local_4 = 0;
  if (local_460 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_440[0] = local_469;
    FUN_2000a5b0(0);
    uVar10 = 0xffffffff;
    pcVar12 = param_1;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    local_458 = (void *)(~uVar10 - 1);
    cVar2 = FUN_2000a6c0(local_458,1);
    if (cVar2 != '\0') {
      pcVar12 = param_1;
      for (uVar10 = (uint)local_458 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_43c = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        local_43c = local_43c + 4;
      }
      for (uVar10 = (uint)local_458 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_43c = *pcVar12;
        pcVar12 = pcVar12 + 1;
        local_43c = local_43c + 1;
      }
      FUN_2000a6a0(local_458);
    }
    local_45c = (undefined1 *)0x1;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_200bd430(local_440,1,1);
  }
  *(undefined4 *)(in_ECX + 0x24) = uVar3;
  local_4 = 0xffffffff;
  if (((uint)local_45c & 1) != 0) {
    FUN_2000a5b0(1);
  }
  if (*(char *)(*(int *)(in_ECX + 0x24) + 2) == '\0') {
    local_468 = 0;
    local_464 = *(int *)(in_ECX + 0x24);
    iVar4 = FUN_20068dc0(&local_468);
    if (iVar4 != 0x33fb1a3) {
      FUN_200fabac(local_3f4,s_Not_a_ghb_file__s_201574f4,param_1);
      FUN_2008e9e0(local_3f4);
      ExceptionList = local_c;
      return 0;
    }
    iVar4 = FUN_20068dc0(&local_468);
    if (iVar4 == 0x4a) {
      iVar4 = FUN_20068dc0(&local_468);
      if (iVar4 == 1) {
        FUN_200fabac(local_3f4,s_Thunks_are_obsolete__s_201574dc,param_1);
        FUN_2008ea00(local_3f4,0);
        FUN_200bd7b0();
        iVar4 = *(int *)(in_ECX + 0x24);
        if (iVar4 != 0) {
          FUN_200bd7a0();
          FUN_200f9f75(iVar4);
        }
        *(undefined4 *)(in_ECX + 0x24) = 0;
      }
      else {
        FUN_20068ff0(&local_468,in_ECX + 4);
        uVar3 = FUN_20068dc0(&local_468);
        *(undefined4 *)(in_ECX + 0x13c) = uVar3;
        pvVar5 = (void *)FUN_20068dc0(&local_468);
        if (*(int *)(in_ECX + 0x110) == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)(*(int *)(in_ECX + 0x118) - *(int *)(in_ECX + 0x110) >> 2);
        }
        local_460 = pvVar5;
        if (pvVar6 < pvVar5) {
          pvVar6 = pvVar5;
          if ((int)pvVar5 < 0) {
            pvVar6 = (void *)0x0;
          }
          pvVar6 = operator_new((int)pvVar6 << 2);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0x110),*(undefined4 *)(in_ECX + 0x114),pvVar6);
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0x110));
          *(void **)(in_ECX + 0x118) = (void *)((int)pvVar6 + (int)pvVar5 * 4);
          iVar4 = FUN_2008c740();
          *(void **)(in_ECX + 0x110) = pvVar6;
          *(void **)(in_ECX + 0x114) = (void *)((int)pvVar6 + iVar4 * 4);
        }
        if (*(int *)(in_ECX + 0x120) == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)(*(int *)(in_ECX + 0x128) - *(int *)(in_ECX + 0x120) >> 2);
        }
        if (pvVar6 < pvVar5) {
          pvVar6 = pvVar5;
          if ((int)pvVar5 < 0) {
            pvVar6 = (void *)0x0;
          }
          pvVar6 = operator_new((int)pvVar6 * 4);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0x120),*(undefined4 *)(in_ECX + 0x124),pvVar6);
          FUN_2008c730(*(undefined4 *)(in_ECX + 0x120),*(undefined4 *)(in_ECX + 0x124));
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0x120));
          *(void **)(in_ECX + 0x128) = (void *)((int)pvVar6 + (int)pvVar5 * 4);
          if (*(int *)(in_ECX + 0x120) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(in_ECX + 0x124) - *(int *)(in_ECX + 0x120) >> 2;
          }
          *(void **)(in_ECX + 0x120) = pvVar6;
          *(void **)(in_ECX + 0x124) = (void *)((int)pvVar6 + iVar4 * 4);
        }
        if (*(int *)(in_ECX + 0x130) == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)(*(int *)(in_ECX + 0x138) - *(int *)(in_ECX + 0x130) >> 2);
        }
        if (pvVar6 < pvVar5) {
          pvVar6 = pvVar5;
          if ((int)pvVar5 < 0) {
            pvVar6 = (void *)0x0;
          }
          pvVar6 = operator_new((int)pvVar6 << 2);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0x130),*(undefined4 *)(in_ECX + 0x134),pvVar6);
          FUN_2008c730(*(undefined4 *)(in_ECX + 0x130),*(undefined4 *)(in_ECX + 0x134));
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0x130));
          *(void **)(in_ECX + 0x138) = (void *)((int)pvVar6 + (int)pvVar5 * 4);
          iVar4 = FUN_2008c740();
          *(void **)(in_ECX + 0x130) = pvVar6;
          *(void **)(in_ECX + 0x134) = (void *)((int)pvVar6 + iVar4 * 4);
        }
        iVar4 = 0;
        if (0 < (int)pvVar5) {
          do {
            puVar7 = operator_new(0x30);
            local_4 = 3;
            local_450 = puVar7;
            if (puVar7 == (undefined1 *)0x0) {
              local_444 = (undefined1 *)0x0;
            }
            else {
              *puVar7 = local_469;
              FUN_2000a5b0(0);
              local_4 = CONCAT31(local_4._1_3_,4);
              FUN_2009df30(&local_469);
              local_444 = puVar7;
            }
            local_4 = 0xffffffff;
            FUN_200a8890(*(undefined4 *)(in_ECX + 0x114),1,&local_444);
            FUN_20068f80(&local_468,*(int *)(*(int *)(in_ECX + 0x110) + iVar4 * 4) + 0x10);
            FUN_20068e30(&local_468,*(int *)(*(int *)(in_ECX + 0x110) + iVar4 * 4) + 0x1c);
            FUN_20068ff0(&local_468,*(undefined4 *)(*(int *)(in_ECX + 0x110) + iVar4 * 4));
            FUN_200234d0(*(undefined4 *)(*(int *)(in_ECX + 0x110) + iVar4 * 4));
            local_420 = 0;
            local_4 = 5;
            piVar8 = (int *)FUN_2003c140(local_440,local_430);
            iVar1 = *piVar8;
            local_4 = 0xffffffff;
            FUN_2000a5b0(1);
            *(int *)(iVar1 + 0x1c) = iVar4;
            uVar10 = FUN_20068dc0(&local_468);
            iVar1 = *(int *)(*(int *)(in_ECX + 0x110) + iVar4 * 4);
            if (*(int *)(iVar1 + 0x24) == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (*(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x24)) / 0x28;
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
              if ((int)uVar10 < 0) {
                uVar11 = 0;
              }
              local_458 = operator_new(uVar11 * 0x28);
              FUN_200a7c90(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),local_458);
              local_450 = *(undefined1 **)(iVar1 + 0x28);
              local_45c = *(undefined1 **)(iVar1 + 0x24);
              if (local_45c != local_450) {
                do {
                  FUN_200a9710(0);
                  local_45c = local_45c + 0x28;
                } while (local_45c != local_450);
              }
              FUN_200f9f75(*(undefined4 *)(iVar1 + 0x24));
              *(void **)(iVar1 + 0x2c) = (void *)((int)local_458 + uVar10 * 0x28);
              iVar9 = FUN_200a79c0();
              *(void **)(iVar1 + 0x24) = local_458;
              *(void **)(iVar1 + 0x28) = (void *)((int)local_458 + iVar9 * 0x28);
            }
            if (0 < (int)uVar10) {
              do {
                local_414 = local_469;
                FUN_2000a5b0(0);
                local_4 = 6;
                FUN_2009df30(&local_449);
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_200a1890(&local_468);
                local_4 = 8;
                FUN_200a82d0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x110) + iVar4 * 4) + 0x28),
                             1,local_41c);
                local_4 = 9;
                FUN_2000a5b0(1);
                local_4 = 0xffffffff;
                FUN_2000a5b0(1);
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            local_448 = FUN_20068dc0(&local_468);
            FUN_200a8890(*(undefined4 *)(in_ECX + 0x124),1,&local_448);
            local_454 = (void *)FUN_20068dc0(&local_468);
            FUN_200a8890(*(undefined4 *)(in_ECX + 0x134),1,&local_454);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)local_460);
        }
        FUN_2009c3c0(&local_468);
        FUN_200674d0(&local_468);
        FUN_20068dc0(&local_468);
        uVar10 = FUN_20068dc0(&local_468);
        if (*(int *)(in_ECX + 0xa4) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(int *)(in_ECX + 0xac) - *(int *)(in_ECX + 0xa4) >> 2;
        }
        if (uVar11 < uVar10) {
          uVar11 = uVar10;
          if ((int)uVar10 < 0) {
            uVar11 = 0;
          }
          pvVar5 = operator_new(uVar11 * 4);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0xa4),*(undefined4 *)(in_ECX + 0xa8),pvVar5);
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0xa4));
          *(void **)(in_ECX + 0xac) = (void *)((int)pvVar5 + uVar10 * 4);
          iVar4 = FUN_2008c740();
          *(void **)(in_ECX + 0xa4) = pvVar5;
          *(void **)(in_ECX + 0xa8) = (void *)((int)pvVar5 + iVar4 * 4);
        }
        if (0 < (int)uVar10) {
          do {
            local_454 = operator_new(0xe8);
            local_4 = 10;
            if (local_454 == (void *)0x0) {
              local_460 = (void *)0x0;
            }
            else {
              local_460 = (void *)FUN_2008f730(&local_468,in_ECX + 0x58);
            }
            local_4 = 0xffffffff;
            FUN_200a8890(*(undefined4 *)(in_ECX + 0xa8),1,&local_460);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        FUN_20068dc0(&local_468);
        uVar10 = FUN_20068dc0(&local_468);
        if (*(int *)(in_ECX + 0xb4) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(int *)(in_ECX + 0xbc) - *(int *)(in_ECX + 0xb4) >> 2;
        }
        if (uVar11 < uVar10) {
          uVar11 = uVar10;
          if ((int)uVar10 < 0) {
            uVar11 = 0;
          }
          pvVar5 = operator_new(uVar11 * 4);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0xb4),*(undefined4 *)(in_ECX + 0xb8),pvVar5);
          FUN_2008c730(*(undefined4 *)(in_ECX + 0xb4),*(undefined4 *)(in_ECX + 0xb8));
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb4));
          *(void **)(in_ECX + 0xbc) = (void *)((int)pvVar5 + uVar10 * 4);
          iVar4 = FUN_2008c740();
          *(void **)(in_ECX + 0xb4) = pvVar5;
          *(void **)(in_ECX + 0xb8) = (void *)((int)pvVar5 + iVar4 * 4);
        }
        if (0 < (int)uVar10) {
          do {
            local_454 = operator_new(0xec);
            local_4 = 0xb;
            if (local_454 == (void *)0x0) {
              local_460 = (void *)0x0;
            }
            else {
              local_460 = (void *)FUN_20091290(&local_468,in_ECX + 0x58);
            }
            local_4 = 0xffffffff;
            FUN_200a8890(*(undefined4 *)(in_ECX + 0xb8),1,&local_460);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        FUN_20068dc0(&local_468);
        uVar10 = FUN_20068dc0(&local_468);
        uVar11 = FUN_200a7cd0();
        if (uVar11 < uVar10) {
          uVar11 = uVar10;
          if ((int)uVar10 < 0) {
            uVar11 = 0;
          }
          pvVar5 = operator_new(uVar11 * 4);
          FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc4),*(undefined4 *)(in_ECX + 200),pvVar5);
          FUN_2008c730(*(undefined4 *)(in_ECX + 0xc4),*(undefined4 *)(in_ECX + 200));
          FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc4));
          *(void **)(in_ECX + 0xcc) = (void *)((int)pvVar5 + uVar10 * 4);
          iVar4 = FUN_2008c740();
          *(void **)(in_ECX + 0xc4) = pvVar5;
          *(void **)(in_ECX + 200) = (void *)((int)pvVar5 + iVar4 * 4);
        }
        uVar11 = uVar10;
        if (0 < (int)uVar10) {
          do {
            local_454 = operator_new(0x108);
            local_4 = 0xc;
            if (local_454 == (void *)0x0) {
              local_460 = (void *)0x0;
            }
            else {
              local_460 = (void *)FUN_20090fd0(&local_468,in_ECX + 0x58);
            }
            local_4 = 0xffffffff;
            FUN_2009e320(*(undefined4 *)(in_ECX + 200),&local_460);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uVar10 != 0) {
          local_460 = operator_new(0x114);
          local_4 = 0xd;
          if (local_460 == (void *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_200ab0b0();
          }
          local_4 = 0xffffffff;
          *(undefined4 *)(in_ECX + 0xe0) = uVar3;
          FUN_200ab600(&local_468,in_ECX + 0x11c);
        }
        FUN_20068dc0(&local_468);
        iVar4 = FUN_20068dc0(&local_468);
        FUN_2008bfd0(iVar4);
        if (0 < iVar4) {
          do {
            local_460 = operator_new(0xf4);
            local_4 = 0xe;
            if (local_460 == (void *)0x0) {
              local_450 = (undefined1 *)0x0;
            }
            else {
              local_450 = (undefined1 *)FUN_200914f0(&local_468,in_ECX + 0x58);
            }
            local_4 = 0xffffffff;
            FUN_200a8890(*(undefined4 *)(in_ECX + 0xd8),1,&local_450);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_200bd7b0();
        FUN_200a6820();
      }
      ExceptionList = local_c;
      return 1;
    }
    if (0x4a < iVar4) {
      *param_2 = 1;
    }
  }
  else {
    FUN_200fabac(local_3f4,s_Old_file__s_20157508,param_1);
    FUN_2008ea00(local_3f4,0);
  }
  FUN_200bd7b0();
  iVar4 = *(int *)(in_ECX + 0x24);
  if (iVar4 != 0) {
    FUN_200bd7a0();
    FUN_200f9f75(iVar4);
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  ExceptionList = local_c;
  return 0;
}

