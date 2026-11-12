// rea decompile_all
// name: FUN_200c07e0
// address: 0x200c07e0
// body: available
// range: 0x200c07e0-0x200c0e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_200c07e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int in_ECX;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint uVar12;
  void *local_878;
  uint local_874;
  undefined1 local_870 [4];
  undefined1 *puStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined1 local_860 [4];
  undefined1 *puStack_85c;
  undefined1 local_850 [4];
  int iStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined1 auStack_840 [16];
  undefined1 auStack_830 [4];
  undefined1 auStack_82c [4];
  undefined1 local_828 [4];
  undefined1 *local_824;
  undefined1 auStack_818 [16];
  int iStack_808;
  undefined1 auStack_800 [16];
  undefined4 uStack_7f0;
  undefined1 local_7ec [16];
  char local_7dc [1000];
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010dca6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  pcVar7 = *(char **)(param_1 + 4);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  pcVar11 = local_7dc;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar11 = cVar1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_20107ed2(local_7dc);
  iVar8 = -1;
  uVar12 = 0;
  pcVar7 = local_7dc;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar8 != -2) {
    do {
      if (local_7dc[uVar12] == '\\') {
        local_7dc[uVar12] = '/';
      }
      uVar9 = 0xffffffff;
      uVar12 = uVar12 + 1;
      pcVar7 = local_7dc;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    } while (uVar12 < ~uVar9 - 1);
  }
  uVar12 = 0xffffffff;
  pcVar7 = local_7dc;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(local_7dc,~uVar12 - 1);
  pcVar7 = *(char **)(param_2 + 4);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  pcVar11 = local_3f4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar11 = cVar1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar12 = 0xffffffff;
  pcVar7 = local_3f4;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (4 < ~uVar12 - 1) {
    uVar12 = 0xffffffff;
    pcVar7 = local_3f4;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    for (iVar8 = ~uVar12 - 2;
        (((iVar8 != 0 && (cVar1 = local_3f4[iVar8], cVar1 != '.')) && (cVar1 != '\\')) &&
        (cVar1 != '/')); iVar8 = iVar8 + -1) {
    }
    if (local_3f4[iVar8] == '.') {
      local_3f4[iVar8] = '\0';
    }
  }
  FUN_20107ed2(local_3f4);
  FUN_2000a5b0(0);
  uVar12 = 0xffffffff;
  pcVar7 = local_3f4;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(local_3f4,~uVar12 - 1);
  local_4._0_1_ = 1;
  FUN_2008e320(local_850,local_860,local_870);
  local_4._0_1_ = 2;
  FUN_200a79f0(&local_878,local_850);
  if (local_878 == *(void **)(in_ECX + 0x18)) {
    uVar2 = FUN_2008e320(local_7ec,local_860,local_870);
    local_4._0_1_ = 3;
    FUN_2008e200(local_828,uVar2,&DAT_20158188);
    local_4._0_1_ = 5;
    FUN_2000a5b0(1);
    if (local_824 == (undefined1 *)0x0) {
      local_824 = &DAT_201116cc;
    }
    iVar8 = (*DAT_204058a8)(local_824,&DAT_201311d4,&local_874);
    if ((iVar8 == 0) || (local_874 == 0)) {
      puVar10 = puStack_86c;
      if (puStack_86c == (undefined1 *)0x0) {
        puVar10 = &DAT_201116cc;
      }
      puVar3 = puStack_85c;
      if (puStack_85c == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      FUN_200fabac(local_7dc,s__s_s_not_found_20158178,puVar3,puVar10);
      FUN_2008ea00(local_7dc,0);
      iVar4 = FUN_20076600(s_DEFAULT_201581b4);
      if (iVar4 != 0) {
        FUN_2000a5b0(0);
        local_4._0_1_ = 6;
        cVar1 = FUN_200bfd40(local_860,auStack_840);
        if (cVar1 == '\0') {
          if (puStack_86c == (undefined1 *)0x0) {
            puStack_86c = &DAT_201116cc;
          }
          if (puStack_85c == (undefined1 *)0x0) {
            puStack_85c = &DAT_201116cc;
          }
          FUN_200fabac(local_7dc,s__s_s_not_found_20158178,puStack_85c,puStack_86c);
          FUN_2008ea00(local_7dc,0);
          local_4._0_1_ = 5;
          FUN_2000a5b0(1);
          local_4._0_1_ = 2;
          FUN_2000a5b0(1);
          local_4._0_1_ = 1;
          FUN_2000a5b0(1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_2000a5b0(1);
          local_4 = 0xffffffff;
          FUN_2000a5b0(1);
          ExceptionList = local_c;
          return (void *)0;
        }
        FUN_2000a5b0(0);
        uVar12 = 0xffffffff;
        pcVar7 = s_DEFAULT_201581b4;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600(s_DEFAULT_201581b4,~uVar12 - 1);
        local_4._0_1_ = 7;
        pvVar5 = (void *)FUN_200c07e0(auStack_840,auStack_818,param_3,param_4);
        local_4._0_1_ = 6;
        FUN_2000a5b0(1);
        local_4._0_1_ = 5;
        FUN_2000a5b0(1);
        local_4._0_1_ = 2;
        FUN_2000a5b0(1);
        goto LAB_200c0c13;
      }
      FUN_2008e9e0(s_Default_Texture_Not_Found_20158198);
    }
    pvVar5 = (void *)0x0;
    if (DAT_20403c04 != 0) {
      pvVar6 = operator_new(local_874);
      DAT_204064f0 = pvVar6;
      (*DAT_204058ac)(pvVar6,local_874,1,iVar8);
      DAT_204064f4 = (int)DAT_204064f0 + local_874;
      local_878 = operator_new(0x124);
      local_4._0_1_ = 8;
      if (local_878 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)FUN_200be5b0(0,local_850,param_3,param_4);
      }
      local_4._0_1_ = 5;
      local_878 = pvVar5;
      FUN_200f9f75(pvVar6);
      DAT_204064f0 = (void *)0x0;
      DAT_204064f4 = 0;
      FUN_200234d0(local_850);
      uStack_7f0 = 0;
      local_4._0_1_ = 9;
      FUN_200c1900(auStack_830,auStack_800);
      FUN_2008c5b0(auStack_830,auStack_82c);
      local_4._0_1_ = 5;
      FUN_2000a5b0(1);
      *(void **)(iStack_808 + 0x1c) = pvVar5;
    }
    (*DAT_204058b8)(iVar8);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_2000a5b0(1);
    if (iStack_84c != 0) {
      if (*(char *)(iStack_84c + -1) == '\0') {
        FUN_200f9f75((char *)(iStack_84c + -1));
      }
      else {
        *(char *)(iStack_84c + -1) = *(char *)(iStack_84c + -1) + -1;
      }
    }
    iStack_84c = 0;
    uStack_848 = 0;
    uStack_844 = 0;
    if (puStack_86c != (undefined1 *)0x0) {
      if (puStack_86c[-1] == '\0') {
        FUN_200f9f75(puStack_86c + -1);
      }
      else {
        puStack_86c[-1] = puStack_86c[-1] + -1;
      }
    }
    puStack_86c = (undefined1 *)0x0;
    uStack_868 = 0;
    uStack_864 = 0;
    if (puStack_85c != (undefined1 *)0x0) {
      if (puStack_85c[-1] == '\0') {
        FUN_200f9f75(puStack_85c + -1);
      }
      else {
        puStack_85c[-1] = puStack_85c[-1] + -1;
      }
    }
  }
  else {
    *(int *)(*(int *)((int)local_878 + 0x1c) + 0x120) =
         *(int *)(*(int *)((int)local_878 + 0x1c) + 0x120) + 1;
    pvVar5 = *(void **)((int)local_878 + 0x1c);
LAB_200c0c13:
    local_4._0_1_ = 1;
    FUN_2000a5b0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  ExceptionList = local_c;
  return pvVar5;
}

