// rea decompile_all
// name: FUN_200e1700
// address: 0x200e1700
// body: available
// range: 0x200e1700-0x200e1998 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e1700(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int local_40;
  int local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  undefined1 local_2c [4];
  char *local_28;
  char *local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f970;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = in_ECX;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  uVar2 = FUN_200c59d0(*(undefined4 *)(in_ECX + 0xac),*(undefined4 *)(in_ECX + 0xac),
                       *(undefined4 *)(in_ECX + 0xa8));
  FUN_200716d0(uVar2,*(undefined4 *)(in_ECX + 0xac));
  *(undefined4 *)(in_ECX + 0xac) = uVar2;
  uVar2 = FUN_200c59d0(*(undefined4 *)(in_ECX + 0xbc),*(undefined4 *)(in_ECX + 0xbc),
                       *(undefined4 *)(in_ECX + 0xb8));
  FUN_200716d0(uVar2,*(undefined4 *)(in_ECX + 0xbc));
  *(undefined4 *)(in_ECX + 0xbc) = uVar2;
  uVar2 = FUN_20055450(s_maplists__s_lst_2013985c,*(undefined4 *)(*(int *)(in_ECX + 0xa0) + 4),
                       &local_3c,0);
  iVar3 = FS_LoadFile(uVar2);
  iVar8 = in_ECX;
  local_40 = local_3c;
  if (iVar3 < 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    ExceptionList = local_c;
    return;
  }
  while (local_40 != 0) {
    local_38 = (char *)FUN_20055470(&local_40);
    uVar4 = 0xffffffff;
    pcVar5 = local_38;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)(~uVar4 - 1);
    local_34 = pcVar5;
    cVar1 = FUN_2000a6c0(pcVar5,1);
    if (cVar1 != '\0') {
      pcVar6 = local_38;
      pcVar7 = local_18;
      for (uVar4 = (uint)pcVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = (uint)pcVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_18[(int)pcVar5] = '\0';
      local_14 = pcVar5;
    }
    iVar8 = local_30;
    if (local_40 == 0) break;
    local_34 = (char *)FUN_20055470(&local_40);
    uVar4 = 0xffffffff;
    pcVar5 = local_34;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)(~uVar4 - 1);
    local_38 = pcVar5;
    cVar1 = FUN_2000a6c0(pcVar5,1);
    if (cVar1 != '\0') {
      pcVar6 = local_34;
      pcVar7 = local_28;
      for (uVar4 = (uint)pcVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = (uint)pcVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_28[(int)pcVar5] = '\0';
      local_24 = pcVar5;
    }
    iVar8 = local_30;
    if (local_40 == 0) break;
    FUN_2008ce10(*(undefined4 *)(in_ECX + 0xac),1,local_1c);
    FUN_2008ce10(*(undefined4 *)(in_ECX + 0xbc),1,local_2c);
    iVar8 = local_30;
  }
  FS_FreeFile(local_3c);
  *(undefined4 *)(*(int *)(iVar8 + 0xa0) + 0x14) = 0;
  if (local_28 != (char *)0x0) {
    if (local_28[-1] == '\0') {
      FUN_200f9f75(local_28 + -1);
    }
    else {
      local_28[-1] = local_28[-1] + -1;
    }
  }
  local_28 = (char *)0x0;
  local_24 = (char *)0x0;
  local_20 = 0;
  if (local_18 != (char *)0x0) {
    if (local_18[-1] != '\0') {
      local_18[-1] = local_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

