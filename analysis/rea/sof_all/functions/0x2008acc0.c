// rea decompile_all
// name: FUN_2008acc0
// address: 0x2008acc0
// body: available
// range: 0x2008acc0-0x2008b4c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008acc0(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  void **ppvVar7;
  void **ppvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *local_110;
  int local_10c;
  uint local_108;
  undefined1 local_104 [4];
  int local_100;
  int local_fc;
  void *local_f8;
  undefined1 local_f4 [232];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_100 = in_ECX;
  if ((*(char *)(in_ECX + 300) == '\0') && (ExceptionList = &local_c, *(int *)(in_ECX + 0x130) == 0)
     ) {
    ExceptionList = &local_c;
    local_f8 = operator_new(0xe8);
    local_4 = 0;
    if (local_f8 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_20077040(CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 0xe)));
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x130) = uVar3;
    if (*(int *)(in_ECX + 0x110) != 0) {
      FUN_20077320(*(int *)(**(int **)(in_ECX + 0x104) + 0x10) + 4);
    }
  }
  ppvVar8 = (void **)(in_ECX + 4);
  *(undefined1 *)(in_ECX + 300) = 1;
  iVar9 = 1;
  if (*(short *)ppvVar8 == 0) {
    ppvVar8 = &local_110;
    local_110._0_1_ = 0;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    sVar1 = 0x10;
    do {
      if (*(short *)ppvVar8 < sVar1) break;
      sVar1 = sVar1 << 4;
      local_10c = local_10c + 1;
    } while (sVar1 != 0);
    FUN_200bdca0(&local_10c,2);
    iVar9 = local_10c * 4 + 4;
  }
  FUN_200bdca0(ppvVar8,iVar9);
  ppvVar8 = (void **)(in_ECX + 0xc);
  iVar9 = 1;
  if (*(short *)(in_ECX + 0xc) == 0) {
    local_110._0_1_ = 0;
    ppvVar7 = &local_110;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    uVar5 = 0x10;
    do {
      if (*(ushort *)ppvVar8 < uVar5) break;
      uVar5 = uVar5 << 4;
      local_10c = local_10c + 1;
    } while (uVar5 != 0);
    FUN_200bdca0(&local_10c,2);
    iVar9 = local_10c * 4 + 4;
    ppvVar7 = ppvVar8;
  }
  FUN_200bdca0(ppvVar7,iVar9);
  uVar5 = 0;
  if (*(ushort *)ppvVar8 != 0) {
    do {
      if (uVar5 == 0) {
        sVar1 = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(in_ECX + 0x1c) + -2 + (uint)uVar5 * 2) + 1;
      }
      iVar9 = 1;
      sVar1 = *(short *)(*(int *)(in_ECX + 0x1c) + (uint)uVar5 * 2) - sVar1;
      local_108 = CONCAT22((short)((uint)*(int *)(in_ECX + 0x1c) >> 0x10),sVar1);
      if (sVar1 == 0) {
        local_110._0_1_ = 0;
        ppvVar7 = &local_110;
      }
      else {
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        local_10c = 0;
        uVar2 = 0x10;
        do {
          if ((ushort)local_108 < uVar2) break;
          uVar2 = uVar2 << 4;
          local_10c = local_10c + 1;
        } while (uVar2 != 0);
        FUN_200bdca0(&local_10c,2);
        ppvVar7 = (void **)&local_108;
        iVar9 = local_10c * 4 + 4;
      }
      FUN_200bdca0(ppvVar7,iVar9);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)ppvVar8);
  }
  iVar9 = 1;
  if (*(short *)(in_ECX + 0xe) == 0) {
    ppvVar8 = &local_110;
    local_110._0_1_ = 0;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    uVar5 = 0x10;
    do {
      if (*(ushort *)(in_ECX + 0xe) < uVar5) break;
      uVar5 = uVar5 << 4;
      local_10c = local_10c + 1;
    } while (uVar5 != 0);
    FUN_200bdca0(&local_10c,2);
    ppvVar8 = (void **)(in_ECX + 0xe);
    iVar9 = local_10c * 4 + 4;
  }
  FUN_200bdca0(ppvVar8,iVar9);
  uVar5 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      if (uVar5 == 0) {
        sVar1 = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(in_ECX + 0x80) + -0x18 + (uint)uVar5 * 0x18) + 1;
      }
      iVar9 = 1;
      sVar1 = *(short *)(*(int *)(in_ECX + 0x80) + (uint)uVar5 * 0x18) - sVar1;
      local_108 = CONCAT22((short)((uint)uVar5 * 3 >> 0x10),sVar1);
      if (sVar1 == 0) {
        ppvVar8 = &local_110;
        local_110._0_1_ = 0;
      }
      else {
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        local_10c = 0;
        uVar2 = 0x10;
        do {
          if ((ushort)local_108 < uVar2) break;
          uVar2 = uVar2 << 4;
          local_10c = local_10c + 1;
        } while (uVar2 != 0);
        FUN_200bdca0(&local_10c,2);
        ppvVar8 = (void **)&local_108;
        iVar9 = local_10c * 4 + 4;
      }
      FUN_200bdca0(ppvVar8,iVar9);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0xe));
  }
  ppvVar8 = (void **)(in_ECX + 0x10);
  iVar9 = 1;
  if (*(short *)(in_ECX + 0x10) == 0) {
    local_110._0_1_ = 0;
    ppvVar7 = &local_110;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    uVar5 = 0x10;
    do {
      if (*(ushort *)ppvVar8 < uVar5) break;
      uVar5 = uVar5 << 4;
      local_10c = local_10c + 1;
    } while (uVar5 != 0);
    FUN_200bdca0(&local_10c,2);
    iVar9 = local_10c * 4 + 4;
    ppvVar7 = ppvVar8;
  }
  FUN_200bdca0(ppvVar7,iVar9);
  uVar5 = 0;
  if (*(ushort *)ppvVar8 != 0) {
    do {
      if (uVar5 == 0) {
        sVar1 = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(in_ECX + 0xe0) + -2 + (uint)uVar5 * 2) + 1;
      }
      iVar9 = 1;
      sVar1 = *(short *)(*(int *)(in_ECX + 0xe0) + (uint)uVar5 * 2) - sVar1;
      local_108 = CONCAT22((short)((uint)*(int *)(in_ECX + 0xe0) >> 0x10),sVar1);
      if (sVar1 == 0) {
        local_110._0_1_ = 0;
        ppvVar7 = &local_110;
      }
      else {
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        local_10c = 0;
        uVar2 = 0x10;
        do {
          if ((ushort)local_108 < uVar2) break;
          uVar2 = uVar2 << 4;
          local_10c = local_10c + 1;
        } while (uVar2 != 0);
        FUN_200bdca0(&local_10c,2);
        ppvVar7 = (void **)&local_108;
        iVar9 = local_10c * 4 + 4;
      }
      FUN_200bdca0(ppvVar7,iVar9);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)ppvVar8);
  }
  ppvVar8 = (void **)(in_ECX + 0x12);
  iVar9 = 1;
  if (*(short *)(in_ECX + 0x12) == 0) {
    local_110._0_1_ = 0;
    ppvVar7 = &local_110;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    uVar5 = 0x10;
    do {
      if (*(ushort *)ppvVar8 < uVar5) break;
      uVar5 = uVar5 << 4;
      local_10c = local_10c + 1;
    } while (uVar5 != 0);
    FUN_200bdca0(&local_10c,2);
    iVar9 = local_10c * 4 + 4;
    ppvVar7 = ppvVar8;
  }
  FUN_200bdca0(ppvVar7,iVar9);
  uVar5 = 0;
  if (*(ushort *)ppvVar8 != 0) {
    do {
      if (uVar5 == 0) {
        sVar1 = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(in_ECX + 0xa0) + -0x14 + (uint)uVar5 * 0x14) + 1;
      }
      iVar9 = 1;
      sVar1 = *(short *)(*(int *)(in_ECX + 0xa0) + (uint)uVar5 * 0x14) - sVar1;
      local_108 = CONCAT22((short)((uint)uVar5 * 5 >> 0x10),sVar1);
      if (sVar1 == 0) {
        ppvVar7 = &local_110;
        local_110._0_1_ = 0;
      }
      else {
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        local_10c = 0;
        uVar2 = 0x10;
        do {
          if ((ushort)local_108 < uVar2) break;
          uVar2 = uVar2 << 4;
          local_10c = local_10c + 1;
        } while (uVar2 != 0);
        FUN_200bdca0(&local_10c,2);
        ppvVar7 = (void **)&local_108;
        iVar9 = local_10c * 4 + 4;
      }
      FUN_200bdca0(ppvVar7,iVar9);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)ppvVar8);
  }
  iVar9 = 1;
  if (*(short *)(in_ECX + 0x14) == 0) {
    ppvVar8 = &local_110;
    local_110._0_1_ = 0;
  }
  else {
    local_110._0_1_ = 1;
    FUN_200bdca0(&local_110,1);
    local_10c = 0;
    uVar5 = 0x10;
    do {
      if (*(ushort *)(in_ECX + 0x14) < uVar5) break;
      uVar5 = uVar5 << 4;
      local_10c = local_10c + 1;
    } while (uVar5 != 0);
    FUN_200bdca0(&local_10c,2);
    ppvVar8 = (void **)(in_ECX + 0x14);
    iVar9 = local_10c * 4 + 4;
  }
  FUN_200bdca0(ppvVar8,iVar9);
  sVar1 = -1;
  local_108 = 0;
  uVar4 = extraout_var_00;
  if (*(short *)(local_100 + 0x14) != 0) {
    do {
      iVar9 = (local_108 & 0xffff) * 0x14;
      if (*(short *)(*(int *)(local_100 + 0xc0) + iVar9) == sVar1) {
LAB_2008b3a8:
        ppvVar8 = &local_110;
        iVar10 = 1;
        local_110._0_1_ = 0;
      }
      else {
        sVar1 = *(short *)(*(int *)(local_100 + 0xc0) + iVar9);
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        ppvVar8 = (void **)(*(int *)(local_100 + 0xc0) + iVar9);
        if (*(short *)(*(int *)(local_100 + 0xc0) + iVar9) == 0) goto LAB_2008b3a8;
        local_110._0_1_ = 1;
        FUN_200bdca0(&local_110,1);
        local_10c = 0;
        uVar5 = 0x10;
        do {
          if (*(ushort *)ppvVar8 < uVar5) break;
          uVar5 = uVar5 << 4;
          local_10c = local_10c + 1;
        } while (uVar5 != 0);
        FUN_200bdca0(&local_10c,2);
        iVar10 = local_10c * 4 + 4;
      }
      FUN_200bdca0(ppvVar8,iVar10);
      iVar10 = local_100;
      if ((short)local_108 == 0) {
        sVar6 = 0;
      }
      else {
        sVar6 = *(short *)(*(int *)(local_100 + 0xc0) + -0x12 + iVar9) + 1;
      }
      iVar11 = 1;
      sVar6 = *(short *)(*(int *)(local_100 + 0xc0) + 2 + iVar9) - sVar6;
      local_f8 = (void *)CONCAT22((short)((uint)iVar9 >> 0x10),sVar6);
      if (sVar6 == 0) {
        ppvVar8 = &local_110;
        local_110._0_1_ = 0;
      }
      else {
        local_104[0] = 1;
        FUN_200bdca0(local_104,1);
        local_fc = 0;
        uVar5 = 0x10;
        do {
          if ((ushort)local_f8 < uVar5) break;
          uVar5 = uVar5 << 4;
          local_fc = local_fc + 1;
        } while (uVar5 != 0);
        FUN_200bdca0(&local_fc,2);
        ppvVar8 = &local_f8;
        iVar11 = local_fc * 4 + 4;
      }
      FUN_200bdca0(ppvVar8,iVar11);
      local_108 = local_108 + 1;
      uVar4 = extraout_var_01;
    } while ((ushort)local_108 < *(ushort *)(iVar10 + 0x14));
  }
  FUN_20077040(CONCAT22(uVar4,*(undefined2 *)(local_100 + 0xe)));
  local_4 = 1;
  FUN_200778d0(param_1,local_f4,0,local_100);
  local_4 = 0xffffffff;
  FUN_20079350();
  ExceptionList = local_c;
  return;
}

