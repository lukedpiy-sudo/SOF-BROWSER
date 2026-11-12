// rea decompile_all
// name: FUN_2008bdb0
// address: 0x2008bdb0
// body: available
// range: 0x2008bdb0-0x2008bfce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008bdb0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  undefined1 *local_54;
  undefined4 *local_50;
  undefined1 local_34 [4];
  undefined1 *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  undefined1 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar5 = DAT_204063d8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c5ab;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(in_ECX + 8) + 0x36) != '\0') {
    DAT_204063d8 = 0;
  }
  ExceptionList = &local_c;
  for (uVar8 = 0;
      (iVar6 = *(int *)(in_ECX + 0x4c), iVar6 != 0 &&
      (uVar8 < (uint)(*(int *)(in_ECX + 0x50) - iVar6 >> 2))); uVar8 = uVar8 + 1) {
    if (*(int *)(iVar6 + uVar8 * 4) != 0) {
      local_50 = (undefined4 *)0x0;
      local_18 = (undefined1)param_1;
      local_54 = (undefined1 *)0x2008be24;
      local_14 = (undefined4 *)FUN_2008c580();
      local_10 = 0;
      puVar7 = *(ushort **)(in_ECX + 0xc0);
      local_4 = 0;
      if (puVar7 != *(ushort **)(in_ECX + 0xc4)) {
        do {
          iVar6 = (int)*(short *)(*(int *)(puVar7 + 4) + uVar8 * 2);
          if ((-1 < iVar6) &&
             (iVar1 = (int)*(short *)(*(int *)(*(int *)(in_ECX + 0xa0) + -0xc + (uint)*puVar7 * 0x14
                                              ) + uVar8 * 2), -1 < iVar1)) {
            local_54 = local_34;
            local_50 = local_14;
            local_20 = iVar1;
            local_1c = iVar6;
            FUN_200bb430();
          }
          puVar7 = puVar7 + 10;
        } while (puVar7 != *(ushort **)(in_ECX + 0xc4));
      }
      local_30 = (undefined1 *)&local_54;
      local_54 = (undefined1 *)CONCAT31(local_54._1_3_,local_18);
      local_50 = operator_new(0x10);
      *local_50 = local_50;
      *(undefined4 **)((int)local_50 + 4) = local_50;
      puVar2 = (undefined4 *)FUN_20083550(local_2c);
      puVar3 = (undefined4 *)FUN_20083550(local_28);
      FUN_2008c4d0(*puVar3,*puVar2,local_14);
      local_4 = local_4 & 0xffffff00;
      FUN_2008c170(uVar8);
      FUN_200a71a0(param_1);
      local_54 = local_24;
      local_4 = 0xffffffff;
      local_50 = (undefined4 *)*local_14;
      FUN_2008c530();
      local_50 = (undefined4 *)0x2008bf26;
      FUN_200f9f75();
      local_14 = (undefined4 *)0x0;
      local_10 = 0;
    }
  }
  if (*(char *)(*(int *)(in_ECX + 8) + 0x36) != '\0') {
    DAT_204063d8 = uVar5;
  }
  if (((*(char *)(in_ECX + 300) == '\0') && (*(int *)(in_ECX + 0x130) == 0)) &&
     (*(int *)(in_ECX + 0x110) != 0)) {
    local_50 = (undefined4 *)0x2008bf73;
    pvVar4 = operator_new(0xe8);
    local_4 = 2;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      local_50 = (undefined4 *)0x2008bf92;
      uVar5 = FUN_20077040();
    }
    *(undefined4 *)(in_ECX + 0x130) = uVar5;
    local_4 = 0xffffffff;
    local_50 = (undefined4 *)0x2008bfba;
    FUN_20077320();
  }
  ExceptionList = local_c;
  return;
}

