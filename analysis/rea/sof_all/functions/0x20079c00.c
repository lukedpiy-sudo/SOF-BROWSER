// rea decompile_all
// name: FUN_20079c00
// address: 0x20079c00
// body: available
// range: 0x20079c00-0x2007a2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint FUN_20079c00(undefined4 param_1,undefined4 param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  int *in_ECX;
  bool bVar9;
  float10 fVar10;
  int local_98;
  undefined1 local_94 [2];
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  int local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined2 local_5e;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [4];
  char *local_30 [2];
  undefined1 local_28 [4];
  byte *local_24;
  void *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010bf43;
  pvStack_c = ExceptionList;
  local_28[0] = local_94[0];
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_200be300(param_1,param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_200be060(local_28);
  FUN_200be390(local_34,0x10);
  if (local_24 == (byte *)0x0) {
    local_24 = &DAT_201116cc;
  }
  do {
    bVar1 = *param_5;
    bVar9 = bVar1 < *local_24;
    if (bVar1 != *local_24) {
LAB_20079cc1:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_20079cc6;
    }
    if (bVar1 == 0) break;
    bVar1 = param_5[1];
    bVar9 = bVar1 < local_24[1];
    if (bVar1 != local_24[1]) goto LAB_20079cc1;
    param_5 = param_5 + 2;
    local_24 = local_24 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_20079cc6:
  if (iVar4 != 0) {
    FUN_2008e9e0(s_Inst_has_different_model_than_ex_201570a4);
  }
  FUN_200be390(in_ECX + 1,0x480);
  FUN_200be390(in_ECX + 0x25,0x10);
  FUN_200be390((int)in_ECX + 0x96,8);
  FUN_200be390(in_ECX + 0x26,0x20);
  FUN_200be390(in_ECX + 0x27,0x20);
  FUN_200be390(in_ECX + 0x28,0x20);
  FUN_200be390(in_ECX + 0x29,0x20);
  FUN_200be390(in_ECX + 0x2a,8);
  FUN_200be390((int)in_ECX + 0xa9,8);
  FUN_200be390((int)in_ECX + 0xaa,8);
  FUN_200be390((int)in_ECX + 0xab,8);
  FUN_200be390(in_ECX + 0x2b,8);
  FUN_200be390((int)in_ECX + 0xad,8);
  FUN_200be390((int)in_ECX + 0xae,0x10);
  FUN_200be390(in_ECX + 0x2c,0x20);
  FUN_200be390(&local_98,0x20);
  if (in_ECX[0x2e] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = in_ECX[0x2f] - in_ECX[0x2e];
  }
  if (local_98 != iVar4) {
    FUN_2008e9e0(s_Number_of_parts_mismatch_in_save_2015707c);
  }
  iVar4 = 0;
  if (0 < local_98) {
    do {
      FUN_200be390(in_ECX[0x2e] + iVar4,8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_98);
  }
  FUN_200be390(&local_98,0x20);
  iVar4 = in_ECX[0x32];
  puVar5 = (undefined4 *)FUN_20083550(&local_78);
  FUN_20082ee0(&local_70,*puVar5,iVar4);
  iVar4 = 0;
  local_4c = (uint)local_4c._2_2_ << 0x10;
  local_48 = (uint)local_48._2_2_ << 0x10;
  local_44 = 0;
  local_40 = (uint)local_40._2_2_ << 0x10;
  if (0 < local_98) {
    do {
      FUN_200be390(&local_4c,0x80);
      cVar3 = FUN_2008a6b0(local_4c,local_40);
      if (cVar3 == '\0') {
        FUN_2008e9e0(s_Skin_mismatch_in_savegame_20157060);
      }
      if (in_ECX[0x2e] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = in_ECX[0x2f] - in_ECX[0x2e];
      }
      if (uVar6 < (local_48 & 0xffff)) {
        FUN_2008e9e0(s_Part_mismatch_in_savegame_20157044);
      }
      local_58 = local_48;
      local_54 = local_44;
      local_5c = local_4c;
      local_50 = (undefined2)local_40;
      FUN_200828b0(local_68,&local_5c);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_98);
  }
  FUN_200be390(in_ECX + 0x48,0x20);
  FUN_200be390(in_ECX + 0x49,0x20);
  FUN_200be390(in_ECX + 0x4a,8);
  FUN_200be390((int)in_ECX + 0x129,8);
  FUN_200be390((int)in_ECX + 0x12a,8);
  *(undefined1 *)(in_ECX + 0x74) = 1;
  FUN_200be390(&local_98,0x20);
  FUN_20083770(&local_78,*(undefined4 *)in_ECX[0x4f],(undefined4 *)in_ECX[0x4f]);
  iVar4 = 0;
  if (0 < local_98) {
    do {
      FUN_200be390(&local_6c,0x20);
      FUN_200be390(&local_5e,0x10);
      if ((-1 < local_6c) && (local_6c < param_4)) {
        local_64 = *(undefined4 *)(param_3 + local_6c * 4);
        local_68[0] = local_5e;
        FUN_20083560(local_30,local_68);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_98);
  }
  FUN_200be390(&local_98,0x20);
  local_3c = (uint)local_3c._2_2_ << 0x10;
  local_38 = 0;
  FUN_20083c00(&local_78,*(undefined4 *)in_ECX[0x54],(undefined4 *)in_ECX[0x54]);
  local_78 = 0;
  if (0 < local_98) {
    do {
      FUN_200be390(&local_6c,0x20);
      FUN_200be390(&local_3c,0x40);
      if ((-1 < local_6c) && (local_6c < param_4)) {
        local_54 = *(undefined4 *)(param_3 + local_6c * 4);
        local_70 = (undefined4 *)in_ECX[0x54];
        local_5c = local_3c;
        local_58 = local_38;
        puVar5 = (undefined4 *)local_70[1];
        cVar3 = '\x01';
        if (puVar5 != (undefined4 *)in_ECX[0x55]) {
          do {
            local_70 = puVar5;
            cVar3 = FUN_20087600(&local_5c,puVar5 + 3);
            if (cVar3 == '\0') {
              puVar5 = (undefined4 *)puVar5[2];
            }
            else {
              puVar5 = (undefined4 *)*puVar5;
            }
          } while (puVar5 != (undefined4 *)in_ECX[0x55]);
        }
        puVar2 = local_70;
        if ((char)in_ECX[0x56] == '\0') {
          local_74 = local_70;
          if (cVar3 != '\0') {
            puVar8 = (undefined4 *)FUN_20083550(&local_18);
            if (local_74 == (undefined4 *)*puVar8) {
              puVar8 = (undefined4 *)((int)local_94 + 2);
              _local_94 = CONCAT12(1,local_94);
              ppuVar7 = (undefined4 **)FUN_20085610(local_14,puVar5,puVar2,&local_5c);
              goto LAB_2007a1e7;
            }
            FUN_20086fc0();
          }
          cVar3 = FUN_20087600(local_74 + 3,&local_5c);
          if (cVar3 == '\0') {
            puVar8 = (undefined4 *)local_94;
            ppuVar7 = &local_74;
            _local_94 = _local_94 & 0xffffff00;
          }
          else {
            puVar8 = (undefined4 *)((int)local_94 + 3);
            _local_94 = CONCAT13(1,_local_94);
            ppuVar7 = (undefined4 **)FUN_20085610(local_30,puVar5,local_70,&local_5c);
          }
        }
        else {
          puVar8 = (undefined4 *)((int)local_94 + 1);
          local_94 = (undefined1  [2])CONCAT11(1,local_94[0]);
          ppuVar7 = (undefined4 **)FUN_20085610(local_10,puVar5,local_70,&local_5c);
        }
LAB_2007a1e7:
        FUN_2008c5b0(ppuVar7,puVar8);
      }
      local_78 = local_78 + 1;
    } while (local_78 < local_98);
  }
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0x3f800000;
  in_ECX[0x65] = 0;
  in_ECX[0x6b] = 0;
  *(undefined2 *)(in_ECX + 0x6c) = 0;
  *(undefined1 *)(in_ECX + 0x5a) = 0;
  in_ECX[0x59] = -0x40800000;
  in_ECX[100] = -0x40800000;
  *(undefined1 *)((int)in_ECX + 0x1b2) = 1;
  puVar5 = (undefined4 *)in_ECX[0x6e];
  puVar2 = (undefined4 *)*puVar5;
  while (puVar2 != puVar5) {
    puVar8 = (undefined4 *)*puVar2;
    FUN_200ba400(local_30,puVar2);
    puVar2 = puVar8;
  }
  fVar10 = (float10)(**(code **)(*in_ECX + 0x6c))
                              (CONCAT22((short)((uint)(in_ECX + 0x4c) >> 0x10),
                                        *(undefined2 *)((int)in_ECX + 0xae)),in_ECX[0x2c],
                               in_ECX + 0x4c);
  uVar6 = local_40;
  in_ECX[0x4b] = (int)(float)fVar10;
  FUN_200f9f75(local_98);
  local_98 = 0;
  _local_94 = 0;
  local_90 = 0;
  if (local_30[0] != (char *)0x0) {
    if (local_30[0][-1] == '\0') {
      FUN_200f9f75(local_30[0] + -1);
    }
    else {
      local_30[0][-1] = local_30[0][-1] + -1;
    }
  }
  ExceptionList = local_18;
  return uVar6 & 0xffff;
}

