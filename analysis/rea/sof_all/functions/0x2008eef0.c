// rea decompile_all
// name: FUN_2008eef0
// address: 0x2008eef0
// body: available
// range: 0x2008eef0-0x2008f62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008eef0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,int param_8,undefined4 param_9)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  undefined1 local_4b1;
  undefined1 local_4b0 [4];
  undefined1 *local_4ac;
  uint local_4a8;
  undefined4 uStack_4a4;
  int iStack_4a0;
  char *pcStack_49c;
  int iStack_498;
  int iStack_490;
  int iStack_48c;
  undefined1 uStack_488;
  undefined1 local_484 [4];
  int local_480;
  uint local_47c;
  undefined1 local_474 [4];
  undefined4 local_470;
  undefined4 uStack_46a;
  int aiStack_464 [11];
  int aiStack_438 [16];
  undefined4 uStack_3f8;
  undefined1 auStack_3f4 [960];
  void *pvStack_34;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c72c;
  pvStack_c = ExceptionList;
  piVar9 = (int *)0x0;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  FUN_20068ff0(param_1,local_4b0);
  uVar10 = 0;
  if (local_4a8 != 0) {
    do {
      if (local_4ac == (undefined1 *)0x0) {
        pcVar12 = "";
      }
      else {
        FUN_2000a930();
        pcVar12 = local_4ac + uVar10;
      }
      puVar5 = (undefined1 *)FUN_200483c0(uVar10);
      uVar2 = FUN_200fb2a2((int)*pcVar12);
      *puVar5 = uVar2;
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_4a8);
  }
  FUN_20068ff0(param_1,local_484);
  uVar10 = 0;
  if (local_47c != 0) {
    do {
      if (local_480 == 0) {
        pcVar12 = "";
      }
      else {
        FUN_2000a930();
        pcVar12 = (char *)(local_480 + uVar10);
      }
      puVar5 = (undefined1 *)FUN_200483c0(uVar10);
      uVar2 = FUN_200fb2a2((int)*pcVar12);
      *puVar5 = uVar2;
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_47c);
  }
  FUN_20069200(param_1,local_474,0x3c);
  switch(local_470) {
  case 0:
    piVar9 = (int *)(**(code **)*param_3)(local_4b0);
    break;
  case 1:
    piVar9 = (int *)(**(code **)(*param_3 + 4))(local_4b0);
    break;
  case 2:
    piVar9 = (int *)(**(code **)(*param_3 + 8))(local_4b0);
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    piVar9 = (int *)(**(code **)(*param_3 + 0xc))(local_4b0);
    break;
  default:
    FUN_2008e9e0(s_Bad_Ghoul_File_201571ec);
  }
  if ((char)piVar9[1] == '\0') {
    FUN_2000a3a0(local_4b0,0,0xffffffff);
    FUN_2000a3a0(local_484,0,0xffffffff);
    *(undefined1 *)((int)piVar9 + 0x41) = 0;
    piVar9[0x1a] = 0;
    piVar9[0x1b] = 0;
    iStack_4a0 = CONCAT31(iStack_4a0._1_3_,local_4b1);
    FUN_2000a5b0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_spriteball_201571e0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    uVar10 = ~uVar10 - 1;
    cVar3 = FUN_2000a6c0(uVar10,1);
    if (cVar3 != '\0') {
      pcVar12 = s_spriteball_201571e0;
      for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcStack_49c = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcStack_49c = pcStack_49c + 4;
      }
      for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_49c = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcStack_49c = pcStack_49c + 1;
      }
      FUN_2000a6a0(uVar10);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if ((DAT_20403c10 & 1) == 0) {
      DAT_20403c10 = DAT_20403c10 | 1;
      FUN_20091ed0(0,0,0);
      FUN_200f9f16(&LAB_2008eee0);
    }
    iStack_48c = iStack_498;
    if ((int)local_4a8 < iStack_498) {
LAB_2008f152:
      bVar1 = false;
    }
    else {
      iVar6 = 0;
      if (0 < iStack_498) {
        do {
          if (local_4ac == (undefined1 *)0x0) {
            puVar5 = &DAT_201116cc;
          }
          else {
            puVar5 = local_4ac + iVar6;
          }
          uStack_488 = *puVar5;
          puVar5 = (undefined1 *)FUN_20091eb0(iVar6);
          iStack_490 = CONCAT31(iStack_490._1_3_,*puVar5);
          cVar3 = (**(code **)(DAT_20403c14 + 8))(iStack_490);
          cVar4 = (**(code **)(DAT_20403c14 + 8))(iStack_48c);
          if (cVar4 != cVar3) goto LAB_2008f152;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_48c);
      }
      bVar1 = true;
    }
    local_4._0_1_ = 1;
    FUN_2000a5b0(1);
    if (bVar1) {
      *(undefined1 *)(piVar9 + 0x10) = 1;
      *(undefined1 *)((int)piVar9 + 0x41) = 1;
    }
    else {
      iStack_4a0 = CONCAT31(iStack_4a0._1_3_,local_4b1);
      FUN_2000a5b0(0);
      uVar10 = 0xffffffff;
      pcVar12 = s_sprite_201571d8;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_2000a600(s_sprite_201571d8,~uVar10 - 1);
      local_4 = CONCAT31(local_4._1_3_,3);
      if ((DAT_20403c10 & 1) == 0) {
        DAT_20403c10 = DAT_20403c10 | 1;
        FUN_20091ed0(0,0,0);
        FUN_200f9f16(&LAB_2008eee0);
      }
      iStack_490 = iStack_498;
      if ((int)local_4a8 < iStack_498) {
LAB_2008f257:
        bVar1 = false;
      }
      else {
        iVar6 = 0;
        if (0 < iStack_498) {
          do {
            if (local_4ac == (undefined1 *)0x0) {
              puVar5 = &DAT_201116cc;
            }
            else {
              puVar5 = local_4ac + iVar6;
            }
            uStack_488 = *puVar5;
            puVar5 = (undefined1 *)FUN_20091eb0(iVar6);
            iStack_48c = CONCAT31(iStack_48c._1_3_,*puVar5);
            cVar3 = (**(code **)(DAT_20403c14 + 8))(iStack_48c);
            cVar4 = (**(code **)(DAT_20403c14 + 8))(iStack_48c);
            if (cVar4 != cVar3) goto LAB_2008f257;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack_490);
        }
        bVar1 = true;
      }
      local_4._0_1_ = 1;
      FUN_2000a5b0(1);
      if (bVar1) {
        *(undefined1 *)(piVar9 + 0x10) = 1;
      }
      else {
        *(undefined1 *)(piVar9 + 0x10) = 0;
      }
    }
    uVar10 = 0xffffffff;
    *(undefined1 *)((int)piVar9 + 0x42) = 0;
    pcVar12 = s_NOBLOCK_201571d0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    iVar6 = FUN_2008c2d0(s_NOBLOCK_201571d0,0,~uVar10 - 1);
    if (iVar6 == -1) {
      uVar10 = 0xffffffff;
      pcVar12 = s_NO_BLOCK_201571c4;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      iVar6 = FUN_2008c2d0(s_NO_BLOCK_201571c4,0,~uVar10 - 1);
      if (iVar6 != -1) goto LAB_2008f32a;
    }
    else {
LAB_2008f32a:
      *(undefined1 *)((int)piVar9 + 0x42) = 1;
    }
    uVar10 = 0xffffffff;
    pcVar12 = s_NOBLOCK_201571d0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    iVar6 = FUN_2008c2d0(s_NOBLOCK_201571d0,0,~uVar10 - 1);
    if (iVar6 == -1) {
      uVar10 = 0xffffffff;
      pcVar12 = s_NO_BLOCK_201571c4;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      iVar6 = FUN_2008c2d0(s_NO_BLOCK_201571c4,0,~uVar10 - 1);
      if (iVar6 != -1) goto LAB_2008f374;
    }
    else {
LAB_2008f374:
      *(undefined1 *)((int)piVar9 + 0x42) = 1;
    }
    if (((char)piVar9[0x10] != '\0') || (*(char *)((int)piVar9 + 0x41) != '\0')) {
      *(undefined1 *)((int)piVar9 + 0x42) = 1;
    }
  }
  if ((int)param_7 < piVar9[0xb]) {
    if (local_4ac == (undefined1 *)0x0) {
      local_4ac = &DAT_201116cc;
    }
    FUN_200fabac(auStack_3f4,s_Name_collision__two_objects_name_2015719c,local_4ac);
    FUN_2008e9e0(auStack_3f4);
  }
  FUN_200c2870(param_7);
  FUN_200c2710(param_5,param_6,param_7,param_8,uStack_46a);
  iVar6 = 0;
  uStack_3f8 = 0;
  FUN_200a0cc0();
  piVar11 = aiStack_464;
  do {
    iStack_4a0 = piVar11[-1];
    pcStack_49c = (char *)*piVar11;
    iStack_498 = piVar11[1];
    FUN_200a15d0(iVar6,&iStack_4a0);
    iVar6 = iVar6 + 1;
    piVar11 = piVar11 + 3;
  } while (iVar6 < 4);
  FUN_200a0c70();
  if (*(char *)((int)piVar9 + 0x75) == '\0') {
    *(undefined1 *)(piVar9 + 0x1d) = 1;
    *(undefined1 *)((int)piVar9 + 0x75) = 1;
    piVar11 = aiStack_438;
    piVar13 = piVar9 + 0x1e;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar13 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
    }
LAB_2008f481:
    cVar3 = FUN_200a10a0(aiStack_438);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_2008f49e;
    }
  }
  else if ((char)piVar9[0x1d] != '\0') goto LAB_2008f481;
  cVar3 = '\0';
LAB_2008f49e:
  *(char *)(piVar9 + 0x1d) = cVar3;
  if (cVar3 == '\0') {
    uVar10 = FUN_200921b0();
    if (uVar10 < param_7) {
      iVar6 = piVar9[0x31];
      piVar11 = piVar9 + 0x1e;
      iVar7 = FUN_200921b0(piVar11);
      FUN_200932c0(iVar6,param_7 - iVar7,piVar11);
    }
    else {
      uVar10 = FUN_200921b0();
      if (param_7 < uVar10) {
        FUN_20092fe0(piVar9[0x30] + param_7 * 0x44,piVar9[0x31]);
      }
    }
    FUN_200932c0(piVar9[0x31],1,aiStack_438);
  }
  (**(code **)(*piVar9 + 8))
            (param_1,param_2,param_4,param_5,param_6,param_7,param_8,local_470,(char)piVar9[1],
             param_9);
  *(undefined1 *)(piVar9 + 1) = 1;
  iVar6 = 0;
  if (0 < (int)pcStack_49c) {
    do {
      FUN_2008eef0(uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,uStack_10,param_7,puStack_8,
                   param_9);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)pcStack_49c);
  }
  if (local_4a8 != 0) {
    if (*(char *)(local_4a8 - 1) == '\0') {
      FUN_200f9f75((char *)(local_4a8 - 1));
    }
    else {
      *(char *)(local_4a8 - 1) = *(char *)(local_4a8 - 1) + -1;
    }
  }
  local_4a8 = 0;
  uStack_4a4 = 0;
  iStack_4a0 = 0;
  if (param_8 != 0) {
    if (*(char *)(param_8 + -1) == '\0') {
      FUN_200f9f75((char *)(param_8 + -1));
    }
    else {
      *(char *)(param_8 + -1) = *(char *)(param_8 + -1) + -1;
    }
  }
  ExceptionList = pvStack_34;
  return;
}

