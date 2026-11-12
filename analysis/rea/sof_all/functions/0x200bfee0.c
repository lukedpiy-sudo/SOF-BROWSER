// rea decompile_all
// name: FUN_200bfee0
// address: 0x200bfee0
// body: available
// range: 0x200bfee0-0x200c07db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200bfee0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int in_ECX;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 local_858 [4];
  undefined4 *local_854;
  undefined4 local_850;
  int local_84c;
  void *local_848;
  undefined1 local_844 [4];
  undefined1 *puStack_840;
  undefined4 uStack_834;
  undefined1 local_830 [4];
  undefined1 local_82c [4];
  undefined1 *puStack_828;
  undefined1 local_81c [4];
  undefined1 *puStack_818;
  undefined1 *local_808;
  undefined1 local_7fc [16];
  undefined1 auStack_7ec [14];
  char acStack_7de [1002];
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010dc2d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_20076600(&DAT_2015ee44);
  if (iVar3 == 0) {
LAB_200c06d0:
    iVar3 = 0;
  }
  else {
    FUN_2000a5b0(0);
    local_4 = 0;
    pcVar8 = *(char **)(param_1 + 4);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = "";
    }
    pcVar10 = local_3f4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_20107ed2(local_3f4);
    iVar3 = -1;
    uVar11 = 0;
    pcVar8 = local_3f4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if (iVar3 != -2) {
      do {
        if (local_3f4[uVar11] == '\\') {
          local_3f4[uVar11] = '/';
        }
        uVar9 = 0xffffffff;
        uVar11 = uVar11 + 1;
        pcVar8 = local_3f4;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
      } while (uVar11 < ~uVar9 - 1);
    }
    uVar11 = 0xffffffff;
    pcVar8 = local_3f4;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_2000a600(local_3f4,~uVar11 - 1);
    pcVar8 = *(char **)(param_2 + 4);
    if (pcVar8 == (char *)0x0) {
      pcVar8 = "";
    }
    pcVar10 = acStack_7de + 2;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar11 = 0xffffffff;
    pcVar8 = acStack_7de + 2;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if (4 < ~uVar11 - 1) {
      uVar11 = 0xffffffff;
      pcVar8 = acStack_7de + 2;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      for (iVar3 = ~uVar11 - 2;
          (((iVar3 != 0 && (cVar2 = acStack_7de[iVar3 + 2], cVar2 != '.')) && (cVar2 != '\\')) &&
          (cVar2 != '/')); iVar3 = iVar3 + -1) {
      }
      if (acStack_7de[iVar3 + 2] == '.') {
        acStack_7de[iVar3 + 2] = '\0';
      }
    }
    FUN_20107ed2(acStack_7de + 2);
    FUN_2000a5b0(0);
    uVar11 = 0xffffffff;
    pcVar8 = acStack_7de + 2;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_2000a600(acStack_7de + 2,~uVar11 - 1);
    local_4._0_1_ = 1;
    uVar4 = FUN_2008e320(local_844,local_81c,local_82c);
    local_4._0_1_ = 2;
    FUN_200a79f0(&local_848,uVar4);
    local_4._0_1_ = 1;
    FUN_2000a5b0(1);
    if (local_848 != *(void **)(in_ECX + 4)) {
      *(int *)(*(int *)((int)local_848 + 0x1c) + 0x58) =
           *(int *)(*(int *)((int)local_848 + 0x1c) + 0x58) + 1;
      iVar3 = *(int *)((int)local_848 + 0x1c);
LAB_200c0796:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      ExceptionList = local_c;
      return iVar3;
    }
    local_854 = (undefined4 *)FUN_20083520(0,0);
    local_850 = 0;
    local_4._0_1_ = 3;
    FUN_2000a5b0(0);
    local_4._0_1_ = 4;
    uVar4 = FUN_2008e320(local_7fc,local_81c,local_82c);
    local_4._0_1_ = 5;
    uVar4 = FUN_2008e200(local_844,uVar4,&DAT_20158190);
    local_4._0_1_ = 6;
    FUN_2000a3a0(uVar4,0,0xffffffff);
    local_4._0_1_ = 5;
    FUN_2000a5b0(1);
    local_4._0_1_ = 4;
    FUN_2000a5b0(1);
    puVar5 = local_808;
    if (local_808 == (undefined1 *)0x0) {
      puVar5 = &DAT_201116cc;
    }
    iVar3 = (*DAT_204058a8)(puVar5,&DAT_201311d4,&local_84c);
    if ((iVar3 == 0) || (local_84c < 1)) {
      uVar4 = FUN_2008e320(local_7fc,local_81c,local_82c);
      local_4._0_1_ = 8;
      uVar4 = FUN_2008e200(local_844,uVar4,&DAT_20158188);
      local_4._0_1_ = 9;
      FUN_2000a3a0(uVar4,0,0xffffffff);
      local_4._0_1_ = 8;
      FUN_2000a5b0(1);
      local_4._0_1_ = 4;
      FUN_2000a5b0(1);
      if (local_808 == (undefined1 *)0x0) {
        local_808 = &DAT_201116cc;
      }
      iVar3 = (*DAT_204058a4)(local_808,&DAT_201311d4);
      if (iVar3 == 0) {
        if (param_5 == '\0') {
          FUN_2000a5b0(0);
          local_4._0_1_ = 10;
          cVar2 = FUN_200bfd40(local_81c,local_844);
          if (cVar2 != '\0') {
            iVar3 = FUN_200bfee0(local_844,param_2,param_3,param_4,1);
            if (iVar3 == 0) {
              if (puStack_828 == (undefined1 *)0x0) {
                puStack_828 = &DAT_201116cc;
              }
              if (puStack_840 == (undefined1 *)0x0) {
                puStack_840 = &DAT_201116cc;
              }
              FUN_200fabac(acStack_7de + 2,s__s_s_not_found_20158178,puStack_840,puStack_828);
              FUN_2008ea00(acStack_7de + 2,0);
            }
            local_4._0_1_ = 4;
            FUN_2000a5b0(1);
            local_4._0_1_ = 3;
            FUN_2000a5b0(1);
            local_4._0_1_ = 1;
            FUN_200c1520(local_7fc,*local_854,local_854);
            FUN_200f9f75(local_854);
            local_854 = (undefined4 *)0x0;
            local_850 = 0;
            goto LAB_200c0796;
          }
          if (puStack_828 == (undefined1 *)0x0) {
            puStack_828 = &DAT_201116cc;
          }
          if (puStack_818 == (undefined1 *)0x0) {
            puStack_818 = &DAT_201116cc;
          }
          FUN_200fabac(acStack_7de + 2,s__s_s_not_found_20158178,puStack_818,puStack_828);
          FUN_2008ea00(acStack_7de + 2,0);
          local_4._0_1_ = 4;
          FUN_2000a5b0(1);
          local_4._0_1_ = 3;
          FUN_2000a5b0(1);
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_200c1520(local_7fc,*local_854,local_854);
        }
        else {
          local_4._0_1_ = 3;
          FUN_2000a5b0(1);
          local_4 = CONCAT31(local_4._1_3_,1);
          puVar7 = (undefined4 *)FUN_20083550(local_830);
          FUN_200c1520(local_7fc,*puVar7,local_854);
        }
        FUN_200f9f75(local_854);
        local_854 = (undefined4 *)0x0;
        local_850 = 0;
        local_4 = local_4 & 0xffffff00;
        FUN_2000a5b0(1);
        local_4 = 0xffffffff;
        FUN_2000a5b0(1);
        goto LAB_200c06d0;
      }
      (*DAT_204058b8)(iVar3);
      FUN_20073050(&local_848,local_854,local_82c);
    }
    else {
      pcVar10 = operator_new(local_84c + 2);
      (*DAT_204058ac)(pcVar10,1,local_84c,iVar3);
      pcVar10[local_84c] = '\0';
      (*DAT_204058b8)(iVar3);
      pcVar8 = pcVar10;
      if (0 < local_84c) {
        do {
          iVar3 = 0;
          cVar2 = *pcVar8;
          while (((cVar2 != '\0' && (cVar2 != '\n')) && (cVar2 != '\r'))) {
            acStack_7de[iVar3 + 2] = cVar2;
            pcVar12 = pcVar8 + 1;
            iVar3 = iVar3 + 1;
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar12;
          }
          acStack_7de[iVar3 + 2] = '\0';
          for (; (*pcVar8 == '\r' || (*pcVar8 == '\n')); pcVar8 = pcVar8 + 1) {
          }
          iVar3 = -1;
          pcVar12 = acStack_7de + 2;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
joined_r0x200c024a:
          if (iVar3 != -2) {
            uVar11 = 0xffffffff;
            pcVar12 = acStack_7de + 2;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            if (' ' < acStack_7de[~uVar11]) goto LAB_200c0290;
            uVar11 = 0xffffffff;
            pcVar12 = acStack_7de + 2;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            acStack_7de[~uVar11] = '\0';
            iVar3 = -1;
            pcVar12 = acStack_7de + 2;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            goto joined_r0x200c024a;
          }
LAB_200c0290:
          uVar11 = 0xffffffff;
          pcVar12 = acStack_7de + 2;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          if (4 < ~uVar11 - 1) {
            uVar11 = 0xffffffff;
            pcVar12 = acStack_7de + 2;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            for (iVar3 = ~uVar11 - 2;
                (((iVar3 != 0 && (cVar2 = acStack_7de[iVar3 + 2], cVar2 != '.')) && (cVar2 != '\\'))
                && (cVar2 != '/')); iVar3 = iVar3 + -1) {
            }
            if (acStack_7de[iVar3 + 2] == '.') {
              acStack_7de[iVar3 + 2] = '\0';
            }
          }
          FUN_20107ed2(acStack_7de + 2);
          if (acStack_7de[2] != '\0') {
            FUN_2000a5b0(0);
            uVar11 = 0xffffffff;
            pcVar12 = acStack_7de + 2;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            FUN_2000a600(acStack_7de + 2,~uVar11 - 1);
            local_4._0_1_ = 7;
            FUN_20073050(&local_848,local_854,local_844);
            local_4._0_1_ = 4;
            FUN_2000a5b0(1);
          }
        } while ((int)pcVar8 - (int)pcVar10 < local_84c);
      }
      FUN_200f9f75(pcVar10);
    }
    FUN_2008e320(auStack_7ec,local_81c,local_82c);
    local_4._0_1_ = 0xb;
    local_848 = operator_new(0x5c);
    local_4._0_1_ = 0xc;
    if (local_848 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_200bf2b0(auStack_7ec,local_81c,local_858,param_3,param_4);
    }
    local_4._0_1_ = 0xb;
    FUN_200234d0(auStack_7ec);
    uStack_834 = 0;
    local_4._0_1_ = 0xd;
    piVar6 = (int *)FUN_200c1380(local_7fc,local_844);
    iVar1 = *piVar6;
    local_4._0_1_ = 0xb;
    FUN_2000a5b0(1);
    *(int *)(iVar1 + 0x1c) = iVar3;
    local_4._0_1_ = 4;
    FUN_2000a5b0(1);
    local_4._0_1_ = 3;
    FUN_2000a5b0(1);
    local_4._0_1_ = 1;
    FUN_200c1520(&local_848,*local_854,local_854);
    FUN_200f9f75(local_854);
    local_854 = (undefined4 *)0x0;
    local_850 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    if (puStack_818 != (undefined1 *)0x0) {
      if (puStack_818[-1] == '\0') {
        FUN_200f9f75(puStack_818 + -1);
      }
      else {
        puStack_818[-1] = puStack_818[-1] + -1;
      }
    }
  }
  ExceptionList = local_c;
  return iVar3;
}

