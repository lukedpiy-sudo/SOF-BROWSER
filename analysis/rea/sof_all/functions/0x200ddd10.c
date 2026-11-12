// rea decompile_all
// name: FUN_200ddd10
// address: 0x200ddd10
// body: available
// range: 0x200ddd10-0x200ddfa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ddd10(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  int *piStack_5c;
  char *pcStack_58;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f520;
  local_c = ExceptionList;
  pcStack_58 = (char *)0x0;
  piStack_5c = (int *)0x200ddd42;
  ExceptionList = &local_c;
  FUN_2000a5b0();
  pcStack_58 = (char *)0x0;
  local_4 = 0;
  piStack_5c = (int *)0x200ddd58;
  FUN_2000a5b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(in_ECX + 0xb8) == 0) {
    uVar4 = 0xffffffff;
    pcStack_58 = (char *)0x1;
    pcVar7 = (char *)&DAT_20139424;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uStack_60 = 0x200dde09;
    piStack_5c = (int *)uVar4;
    cVar1 = FUN_2000a6c0();
    if (cVar1 != '\0') {
      puVar6 = &DAT_20139424;
      puVar8 = local_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      piStack_5c = (int *)0x200dde30;
      pcStack_58 = (char *)uVar4;
      FUN_2000a6a0();
    }
  }
  else {
    iVar2 = *(int *)**(int **)(in_ECX + 0xb0);
    pcVar7 = (char *)((int *)**(int **)(in_ECX + 0xb0))[3];
    piStack_5c = (int *)"";
    if (pcVar7 != (char *)0x0) {
      piStack_5c = (int *)pcVar7;
    }
    uVar4 = 0xffffffff;
    pcVar7 = (char *)piStack_5c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcStack_58 = (char *)(~uVar4 - 1);
    uStack_60 = 0x200ddd9a;
    FUN_2000a600();
    if (1 < *(int *)(in_ECX + 0xb8)) {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_20158f4c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcStack_58 = (char *)(~uVar4 - 1);
      piStack_5c = (int *)&DAT_20158f4c;
      uStack_60 = 0x200dddc5;
      FUN_200e3d90();
      pcVar7 = *(char **)(iVar2 + 0xc);
      piStack_5c = (int *)"";
      if (pcVar7 != (char *)0x0) {
        piStack_5c = (int *)pcVar7;
      }
      uVar4 = 0xffffffff;
      pcVar7 = (char *)piStack_5c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcStack_58 = (char *)(~uVar4 - 1);
      uStack_60 = 0x200dddea;
      FUN_200e3d90();
    }
  }
  pcStack_58 = (char *)&local_40;
  piStack_5c = &local_3c;
  uStack_60 = 0x200dde43;
  cVar1 = FUN_200cf570();
  pcStack_58 = (char *)0x1;
  if (cVar1 == '\0') {
    local_4 = local_4 & 0xffffff00;
    piStack_5c = (int *)0x200dde56;
    FUN_2000a5b0();
    pcStack_58 = (char *)0x1;
    local_4 = 0xffffffff;
    piStack_5c = (int *)0x200dde69;
    FUN_2000a5b0();
    ExceptionList = local_c;
    return;
  }
  local_38 = auStack_68;
  uStack_70 = 0x200dde91;
  iStack_6c = in_ECX + 0x8c;
  FUN_200234d0();
  local_34 = auStack_78;
  puStack_7c = local_2c;
  local_4._0_1_ = 2;
  uStack_80 = 0x200ddea9;
  FUN_200234d0();
  local_30 = auStack_88;
  local_4._0_1_ = 3;
  FUN_200234d0(in_ECX + 0xbc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_200cecc0(local_3c,local_40);
  if (*(int *)(in_ECX + 0x34) != 0) {
    piStack_5c = local_28;
    if (local_28 == (undefined4 *)0x0) {
      piStack_5c = (int *)&DAT_201116cc;
    }
    uStack_60 = 0x200ddef9;
    pcStack_58 = (char *)(in_ECX + 0x8c);
    iVar2 = (*DAT_2040363c)();
    *(int *)(in_ECX + 0x20) = iVar2 + *(int *)(in_ECX + 0x34);
    if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
      local_3c = 0;
    }
    else {
      local_3c = **(int **)(in_ECX + 0x68);
    }
    local_3c = local_3c * 2;
    pcStack_58 = (char *)0x200ddf2c;
    uVar3 = __ftol();
    *(undefined4 *)(in_ECX + 0x28) = uVar3;
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    piStack_5c = (int *)0x200ddf3c;
    FUN_200c48f0();
  }
  if (local_28 != (undefined4 *)0x0) {
    pcStack_58 = (char *)((int)local_28 + -1);
    if (*(char *)((int)local_28 + -1) == '\0') {
      piStack_5c = (int *)0x200ddf58;
      FUN_200f9f75();
    }
    else {
      *pcStack_58 = *(char *)((int)local_28 + -1) + -1;
    }
  }
  local_28 = (undefined4 *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_18 != 0) {
    pcStack_58 = (char *)(iStack_18 + -1);
    if (*(char *)(iStack_18 + -1) != '\0') {
      *pcStack_58 = *(char *)(iStack_18 + -1) + -1;
      ExceptionList = local_c;
      return;
    }
    piStack_5c = (int *)0x200ddf94;
    FUN_200f9f75();
  }
  ExceptionList = local_c;
  return;
}

