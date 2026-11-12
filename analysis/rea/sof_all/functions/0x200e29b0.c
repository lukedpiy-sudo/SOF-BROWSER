// rea decompile_all
// name: FUN_200e29b0
// address: 0x200e29b0
// body: available
// range: 0x200e29b0-0x200e3054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e29b0(void)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *local_d4;
  char *local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  char local_9c [128];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fb99;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_2015ee44;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_2000a600(&DAT_2015ee44,~uVar6 - 1);
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_2015ee44;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar6 - 1);
  uVar6 = FUN_200e3640();
  if (uVar6 < 7) {
    pvVar2 = operator_new(0x70);
    FUN_200cd610(*(undefined4 *)(in_ECX + 200),*(undefined4 *)(in_ECX + 0xcc),pvVar2);
    FUN_200716d0(*(undefined4 *)(in_ECX + 200),*(undefined4 *)(in_ECX + 0xcc));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 200));
    *(int *)(in_ECX + 0xd0) = (int)pvVar2 + 0x70;
    iVar3 = FUN_200e33d0();
    *(void **)(in_ECX + 200) = pvVar2;
    *(void **)(in_ECX + 0xcc) = (void *)(iVar3 * 0x10 + (int)pvVar2);
  }
  uVar6 = FUN_200e3640();
  if (uVar6 < 7) {
    pvVar2 = operator_new(0x70);
    FUN_200cd610(*(undefined4 *)(in_ECX + 0xd8),*(undefined4 *)(in_ECX + 0xdc),pvVar2);
    FUN_200716d0(*(undefined4 *)(in_ECX + 0xd8),*(undefined4 *)(in_ECX + 0xdc));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xd8));
    *(int *)(in_ECX + 0xe0) = (int)pvVar2 + 0x70;
    iVar3 = FUN_200e33d0();
    *(void **)(in_ECX + 0xd8) = pvVar2;
    *(void **)(in_ECX + 0xdc) = (void *)(iVar3 * 0x10 + (int)pvVar2);
  }
  iVar3 = 7;
  do {
    FUN_2000a5b0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_2015ee44;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(&DAT_2015ee44,~uVar6 - 1);
    local_4 = 0;
    FUN_200e3660(*(undefined4 *)(in_ECX + 0xcc),local_cc);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    FUN_2000a5b0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_2015ee44;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(&DAT_2015ee44,~uVar6 - 1);
    local_4 = 1;
    FUN_200e3660(*(undefined4 *)(in_ECX + 0xdc),local_ac);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(in_ECX + 0x50) == 0) {
    puVar9 = &DAT_2015ee44;
  }
  else {
    puVar9 = *(undefined1 **)(*(int *)(in_ECX + 0x50) + 4);
  }
  uVar4 = FUN_20055450(s_bot_bots__s_bpf_20159110,puVar9,&local_d0,0);
  iVar3 = FS_LoadFile(uVar4);
  if (-1 < iVar3) {
    local_d4 = local_d0;
    if (local_d0 != (char *)0x0) {
LAB_200e2bf9:
      pcVar8 = local_9c;
      local_9c[0] = '\0';
      for (; cVar1 = *local_d4, cVar1 != '\0'; local_d4 = local_d4 + 1) {
        if ((cVar1 < '\x01') || (' ' < cVar1)) goto LAB_200e2c17;
      }
      local_d4 = (char *)0x0;
      goto LAB_200e2c44;
    }
LAB_200e3022:
    FS_FreeFile(local_d0);
    if (*(int *)(in_ECX + 0x50) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x14) = 0;
    }
    *(undefined1 *)(in_ECX + 0xa0) = 1;
  }
  ExceptionList = local_c;
  return;
LAB_200e2c17:
  cVar1 = *local_d4;
  local_d4 = local_d4 + 1;
  if (cVar1 == '\0') goto LAB_200e2c2b;
  if ((cVar1 == '\n') || (cVar1 == '\r')) goto LAB_200e2c35;
  *pcVar8 = cVar1;
  pcVar8 = pcVar8 + 1;
  goto LAB_200e2c17;
LAB_200e2c2b:
  local_d4 = (char *)0x0;
LAB_200e2c35:
  *pcVar8 = '\0';
  if (local_9c[0] != '#') {
LAB_200e2c44:
    uVar6 = 0xffffffff;
    pcVar8 = s_userinfo_2011e278;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_200fbba0(local_9c,s_userinfo_2011e278,~uVar6 - 1);
    if (iVar3 == 0) {
      iVar3 = FUN_200faaf0(local_9c,0x3d);
      pcVar8 = &DAT_2015ee44;
      if (iVar3 != 0) {
        pcVar8 = (char *)(iVar3 + 1);
      }
      uVar6 = 0xffffffff;
      pcVar5 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar8,~uVar6 - 1);
      puVar9 = *(undefined1 **)(in_ECX + 0xa8);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_201116cc;
      }
      FUN_2000a5b0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_ghoul_pmodels_portraits__201590f4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(s_ghoul_pmodels_portraits__201590f4,~uVar6 - 1);
      local_4 = 2;
      uVar4 = FUN_20055590(puVar9,&DAT_2011e394);
      uVar4 = FUN_2008e200(local_1c,local_bc,uVar4);
      local_4._0_1_ = 3;
      FUN_2000a3a0(uVar4,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      puVar9 = *(undefined1 **)(in_ECX + 0xa8);
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_201116cc;
      }
      pcVar5 = (char *)FUN_20055590(puVar9,&DAT_2011e3b0);
      uVar6 = 0xffffffff;
      pcVar8 = pcVar5;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar5,~uVar6 - 1);
    }
    else {
      uVar6 = 0xffffffff;
      pcVar8 = s_accuracy_201590e8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      iVar3 = FUN_200fbba0(local_9c,s_accuracy_201590e8,~uVar6 - 1);
      if (iVar3 == 0) {
        iVar3 = FUN_200faaf0(local_9c,0x3d);
        pcVar8 = &DAT_2015ee44;
        if (iVar3 != 0) {
          pcVar8 = (char *)(iVar3 + 1);
        }
        uVar6 = 0xffffffff;
        pcVar5 = pcVar8;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600(pcVar8,~uVar6 - 1);
      }
      else {
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_2011e36c;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar3 = FUN_200fbba0(local_9c,&DAT_2011e36c,~uVar6 - 1);
        if (iVar3 == 0) {
          iVar3 = FUN_200faaf0(local_9c,0x3d);
          pcVar8 = &DAT_2015ee44;
          if (iVar3 != 0) {
            pcVar8 = (char *)(iVar3 + 1);
          }
          uVar6 = 0xffffffff;
          pcVar5 = pcVar8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_2000a600(pcVar8,~uVar6 - 1);
        }
        else {
          uVar6 = 0xffffffff;
          pcVar8 = s_turning_speed_201590d8;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          iVar3 = FUN_200fbba0(local_9c,s_turning_speed_201590d8,~uVar6 - 1);
          if (iVar3 == 0) {
            iVar3 = FUN_200faaf0(local_9c,0x3d);
            pcVar8 = &DAT_2015ee44;
            if (iVar3 != 0) {
              pcVar8 = (char *)(iVar3 + 1);
            }
            uVar6 = 0xffffffff;
            pcVar5 = pcVar8;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_2000a600(pcVar8,~uVar6 - 1);
          }
          else {
            uVar6 = 0xffffffff;
            pcVar8 = s_view_distance_201590c8;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            iVar3 = FUN_200fbba0(local_9c,s_view_distance_201590c8,~uVar6 - 1);
            if (iVar3 == 0) {
              iVar3 = FUN_200faaf0(local_9c,0x3d);
              pcVar8 = &DAT_2015ee44;
              if (iVar3 != 0) {
                pcVar8 = (char *)(iVar3 + 1);
              }
              iVar3 = *(int *)(in_ECX + 0xd8) + 0x40;
            }
            else {
              uVar6 = 0xffffffff;
              pcVar8 = s_general_intelligence_201590b0;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              iVar3 = FUN_200fbba0(local_9c,s_general_intelligence_201590b0,~uVar6 - 1);
              if (iVar3 != 0) {
                uVar6 = 0xffffffff;
                pcVar8 = s_canchat_201590a8;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                iVar3 = FUN_200fbba0(local_9c,s_canchat_201590a8,~uVar6 - 1);
                if (iVar3 == 0) {
                  iVar3 = FUN_200faaf0(local_9c,0x3d);
                  pcVar8 = &DAT_2015ee44;
                  if (iVar3 != 0) {
                    pcVar8 = (char *)(iVar3 + 1);
                  }
                  iVar3 = *(int *)(in_ECX + 0xd8);
                  uVar6 = 0xffffffff;
                  pcVar5 = pcVar8;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar5;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar1 != '\0');
                  uVar6 = ~uVar6 - 1;
                  cVar1 = FUN_2000a6c0(uVar6,1);
                  if (cVar1 != '\0') {
                    pcVar5 = *(char **)(iVar3 + 100);
                    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
                      pcVar8 = pcVar8 + 4;
                      pcVar5 = pcVar5 + 4;
                    }
                    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *pcVar5 = *pcVar8;
                      pcVar8 = pcVar8 + 1;
                      pcVar5 = pcVar5 + 1;
                    }
                    *(uint *)(iVar3 + 0x68) = uVar6;
                    *(undefined1 *)(uVar6 + *(int *)(iVar3 + 100)) = 0;
                  }
                }
                goto LAB_200e3010;
              }
              iVar3 = FUN_200faaf0(local_9c,0x3d);
              pcVar8 = &DAT_2015ee44;
              if (iVar3 != 0) {
                pcVar8 = (char *)(iVar3 + 1);
              }
              iVar3 = *(int *)(in_ECX + 0xd8) + 0x50;
            }
            uVar6 = 0xffffffff;
            pcVar5 = pcVar8;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6 - 1;
            cVar1 = FUN_2000a6c0(uVar6,1);
            if (cVar1 != '\0') {
              pcVar5 = *(char **)(iVar3 + 4);
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar5 = pcVar5 + 4;
              }
              for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar5 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar5 = pcVar5 + 1;
              }
              FUN_2000a6a0(uVar6);
            }
          }
        }
      }
    }
  }
LAB_200e3010:
  if (local_d4 == (char *)0x0) goto LAB_200e3022;
  goto LAB_200e2bf9;
}

