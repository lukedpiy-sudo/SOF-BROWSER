// rea decompile_all
// name: FUN_200b3330
// address: 0x200b3330
// body: available
// range: 0x200b3330-0x200b3bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200b3330(int param_1,int param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  char local_dd;
  int local_dc;
  int *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint *local_c4;
  char local_c0;
  undefined4 *local_bc;
  uint local_b8;
  char local_b4;
  undefined4 *local_b0;
  uint local_ac;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_64;
  int local_60 [4];
  int local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d917;
  local_c = ExceptionList;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 4;
  local_dd = '\0';
  ExceptionList = &local_c;
  FUN_200b94e0(0,0);
  FUN_2009dd40(local_70,param_1,&local_dd);
  local_dd = '\0';
  FUN_200b94e0(local_80,local_7c);
  FUN_2009dd40(local_80,param_1,&local_dd);
  local_c4 = param_3;
  *param_4 = 0;
  do {
    iVar7 = 0;
    local_8c = 0;
    if (0 < param_1) {
      do {
        local_8c = iVar7;
        if (*(char *)(local_80 + iVar7) == '\0') break;
        iVar7 = iVar7 + 1;
        local_8c = iVar7;
      } while (iVar7 < param_1);
    }
    if (local_8c == param_1) {
      iVar7 = 0;
      sVar6 = 0;
      local_98 = (int *)0x0;
      local_d8 = (int *)0x0;
      if (0 < param_1) {
        puVar12 = (uint *)(param_2 + 8);
        do {
          if (*(char *)((int)local_d8 + local_70) != '\0') {
            iVar7 = (int)(short)iVar7;
            local_c4[iVar7 * 3 + 2] = puVar12[-2];
            local_c4[iVar7 * 3 + 3] = puVar12[-1];
            local_c4[iVar7 * 3 + 4] = *puVar12;
            iVar7 = (int)local_98 + 1;
            local_98 = (int *)iVar7;
          }
          sVar6 = (short)iVar7;
          local_d8 = (int *)((int)local_d8 + 1);
          puVar12 = puVar12 + 3;
        } while ((int)local_d8 < param_1);
      }
      *local_c4 = 0;
      puVar12 = local_c4 + 1;
      *puVar12 = sVar6 * 3;
      FUN_200f9f75(0);
      FUN_200f9f75(local_70);
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      FUN_200f9f75(local_d0);
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      FUN_200f9f75(local_a4);
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      FUN_200f9f75(local_80);
      ExceptionList = local_c;
      return (sVar6 * 0xc - (int)param_3) + 4 + (int)puVar12 >> 2;
    }
    *(undefined1 *)(local_80 + local_8c) = 1;
    local_88 = local_8c * 3;
    local_90 = 3;
    local_94 = 2;
    do {
      local_dd = '\0';
      uVar8 = FUN_2009f410(local_cc,local_cc,local_d0);
      FUN_2008c730(uVar8,local_cc);
      local_cc = uVar8;
      FUN_2009dd40(local_d0,param_1,&local_dd);
      piVar10 = (int *)(param_2 + (local_94 % 3 + local_88) * 4);
      local_60[0] = *piVar10;
      iVar7 = 1;
      local_d8 = (int *)(param_2 + ((local_94 + -1) % 3 + local_88) * 4);
      local_60[1] = *local_d8;
      local_c0 = local_dd;
      local_64 = piVar10;
      local_bc = (undefined4 *)FUN_200ea4b0(0,0);
      local_b8 = 0;
      local_4 = CONCAT31(local_4._1_3_,5);
      local_98 = (int *)(param_2 + ((local_94 + -2) % 3 + local_88) * 4);
      FUN_2002ed20(local_44,local_bc,local_98);
      FUN_2002ed20(local_20,local_bc,local_d8);
      FUN_2002ed20(local_38,local_bc,piVar10);
      do {
        local_dd = '\x01';
        local_dc = 0;
        if (param_1 < 1) break;
        iVar11 = 0;
        do {
          if ((*(char *)(local_80 + local_dc) == '\0') && (*(char *)(local_d0 + local_dc) == '\0'))
          {
            iVar9 = 0;
            do {
              if ((*(int *)(param_2 + (iVar9 % 3 + iVar11) * 4) == local_60[0]) &&
                 (*(int *)(param_2 + ((iVar9 + 1) % 3 + iVar11) * 4) == local_60[1])) {
                local_dd = '\0';
                *(undefined1 *)(local_d0 + local_dc) = 1;
                piVar10 = (int *)(param_2 + ((iVar9 + 2) % 3 + iVar11) * 4);
                FUN_2002ed20(local_28,local_bc,piVar10);
                local_60[iVar7] = *piVar10;
                iVar7 = 1 - iVar7;
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 3);
          }
          local_dc = local_dc + 1;
          iVar11 = iVar11 + 3;
        } while (local_dc < param_1);
        piVar10 = local_64;
      } while (local_dd == '\0');
      if (local_90 < local_b8) {
        local_90 = local_b8;
        *local_c4 = local_b8;
        puVar12 = local_c4;
        for (puVar1 = (undefined4 *)*local_bc; puVar1 != local_bc; puVar1 = (undefined4 *)*puVar1) {
          puVar12 = puVar12 + 1;
          *puVar12 = puVar1[2];
        }
        local_dd = '\0';
        uVar8 = FUN_2009f410(local_a0,local_a0,local_a4);
        FUN_2008c730(uVar8,local_a0);
        local_a0 = uVar8;
        FUN_2009dd40(local_a4,param_1,&local_dd);
        iVar7 = 0;
        if (0 < param_1) {
          do {
            if (*(char *)(local_d0 + iVar7) != '\0') {
              *(undefined1 *)(local_a4 + iVar7) = 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_1);
        }
      }
      local_4._0_1_ = 4;
      FUN_2008c530(local_30,*local_bc,local_bc);
      FUN_200f9f75(local_bc);
      local_bc = (undefined4 *)0x0;
      local_b8 = 0;
      local_dd = '\0';
      uVar8 = FUN_2009f410(local_cc,local_cc,local_d0);
      FUN_2008c730(uVar8,local_cc);
      local_cc = uVar8;
      FUN_2009dd40(local_d0,param_1,&local_dd);
      piVar4 = local_d8;
      local_50 = *local_d8;
      local_d8 = (int *)*local_98;
      local_60[3] = *piVar10;
      local_b4 = local_dd;
      local_b0 = operator_new(0xc);
      *local_b0 = local_b0;
      local_b0[1] = local_b0;
      local_ac = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_2002ed20(local_48,local_b0,piVar4);
      FUN_2002ed20(local_3c,local_b0,piVar10);
      do {
        local_dd = '\x01';
        local_dc = 0;
        if (param_1 < 1) break;
        iVar7 = 0;
        do {
          iVar11 = local_dc;
          if ((*(char *)(local_80 + local_dc) == '\0') && (*(char *)(local_d0 + local_dc) == '\0'))
          {
            iVar9 = 0;
            do {
              iVar2 = *(int *)(param_2 + (iVar9 % 3 + iVar7) * 4);
              if ((iVar2 == local_50) &&
                 ((int *)*(int *)(param_2 + ((iVar9 + 1) % 3 + iVar7) * 4) == local_d8)) {
                local_dd = '\0';
                *(undefined1 *)(local_d0 + local_dc) = 1;
                piVar10 = (int *)(param_2 + ((iVar9 + 2) % 3 + iVar7) * 4);
                FUN_2002ed20(local_34,*local_b0,piVar10);
                local_50 = *piVar10;
                iVar11 = local_dc;
                break;
              }
              if (((int *)iVar2 == local_d8) &&
                 (*(int *)(param_2 + ((iVar9 + 1) % 3 + iVar7) * 4) == local_60[3])) {
                local_dd = '\0';
                *(undefined1 *)(local_d0 + local_dc) = 1;
                piVar10 = (int *)(param_2 + ((iVar9 + 2) % 3 + iVar7) * 4);
                FUN_2002ed20(local_2c,local_b0,piVar10);
                local_60[3] = *piVar10;
                break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 3);
          }
          local_dc = iVar11 + 1;
          iVar7 = iVar7 + 3;
        } while (local_dc < param_1);
      } while (local_dd == '\0');
      FUN_2002ed20(local_24,*local_b0,local_98);
      if (local_90 < local_ac) {
        local_90 = local_ac;
        *local_c4 = -local_ac;
        puVar12 = local_c4;
        for (puVar1 = (undefined4 *)*local_b0; puVar1 != local_b0; puVar1 = (undefined4 *)*puVar1) {
          puVar12 = puVar12 + 1;
          *puVar12 = puVar1[2];
        }
        local_dd = '\0';
        uVar8 = FUN_2009f410(local_a0,local_a0,local_a4);
        FUN_2008c730(uVar8,local_a0);
        local_a0 = uVar8;
        FUN_2009dd40(local_a4,param_1,&local_dd);
        iVar7 = 0;
        if (0 < param_1) {
          do {
            if (*(char *)(local_d0 + iVar7) != '\0') {
              *(undefined1 *)(local_a4 + iVar7) = 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_1);
        }
      }
      puVar5 = local_b0;
      local_4 = CONCAT31(local_4._1_3_,4);
      puVar1 = (undefined4 *)*local_b0;
      while (puVar1 != puVar5) {
        puVar3 = (undefined4 *)*puVar1;
        FUN_200ba400(local_40,puVar1);
        puVar1 = puVar3;
      }
      FUN_200f9f75(local_b0);
      local_b0 = (undefined4 *)0x0;
      local_ac = 0;
      iVar7 = local_94 + 1;
      iVar11 = local_94 + -1;
      local_94 = iVar7;
    } while (iVar11 < 3);
    if (local_90 == 3) {
      *(undefined1 *)(local_70 + local_8c) = 1;
    }
    else {
      local_c4 = local_c4 + local_90 + 1;
      iVar7 = 0;
      if (0 < param_1) {
        do {
          if (*(char *)(local_a4 + iVar7) != '\0') {
            *(undefined1 *)(local_80 + iVar7) = 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_1);
      }
    }
    *param_4 = *param_4 + local_90;
    if ((int)local_90 < 100) {
      (&DAT_20404aa0)[local_90] = (&DAT_20404aa0)[local_90] + 1;
    }
    else {
      DAT_20404c2c = DAT_20404c2c + 1;
    }
  } while( true );
}

