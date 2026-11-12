// rea decompile_all
// name: FUN_200bf910
// address: 0x200bf910
// body: available
// range: 0x200bf910-0x200bfbde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200bfbb3) */

int FUN_200bf910(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_425;
  int local_424;
  int local_420;
  undefined1 local_41c [16];
  undefined4 local_40c;
  undefined1 local_408 [16];
  undefined4 local_3f8;
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010db81;
  local_c = ExceptionList;
  pcVar4 = *(char **)(param_1 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  pcVar8 = local_3f4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar4 = local_3f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (4 < ~uVar5 - 1) {
    uVar5 = 0xffffffff;
    pcVar4 = local_3f4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    for (iVar6 = ~uVar5 - 2;
        (((iVar6 != 0 && (cVar1 = local_3f4[iVar6], cVar1 != '.')) && (cVar1 != '\\')) &&
        (cVar1 != '/')); iVar6 = iVar6 + -1) {
    }
    if (local_3f4[iVar6] == '.') {
      local_3f4[iVar6] = '\0';
    }
  }
  ExceptionList = &local_c;
  FUN_20107ed2(local_3f4);
  local_41c[0] = local_425;
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar4 = local_3f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(local_3f4,~uVar5 - 1);
  local_4 = 0;
  FUN_200a79f0(&local_424,local_41c);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (local_424 == *(int *)(local_420 + 0x28)) {
    uVar5 = 0xffffffff;
    pcVar4 = s_CUSTOM__2015815c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar6 = FUN_2008c2d0(s_CUSTOM__2015815c,0,~uVar5 - 1);
    if (iVar6 != 0) {
      uVar5 = 0xffffffff;
      pcVar4 = s_CUSTOM__20158154;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar6 = FUN_2008c2d0(s_CUSTOM__20158154,0,~uVar5 - 1);
      if (iVar6 != 0) {
        ExceptionList = local_c;
        return -1;
      }
    }
    iVar6 = local_420;
    if (*(int *)(local_420 + 0x3c) == 0) {
      local_424 = 0;
    }
    else {
      local_424 = (*(int *)(local_420 + 0x40) - *(int *)(local_420 + 0x3c)) / 0x14;
    }
    FUN_200234d0(param_1);
    local_3f8 = 0;
    local_4 = 1;
    piVar3 = (int *)FUN_2003c140(local_41c,local_408);
    iVar2 = *piVar3;
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    *(int *)(iVar2 + 0x1c) = local_424;
    local_41c[0] = *param_1;
    FUN_2000a5b0(0);
    FUN_2000a3a0(param_1,0,0xffffffff);
    local_40c = 0;
    local_4 = 2;
    FUN_200c15a0(*(undefined4 *)(iVar6 + 0x40),1,local_41c);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    local_425 = 1;
    if (*(int *)(iVar6 + 0x3c) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c)) / 0x14;
    }
    iVar6 = *(int *)(local_420 + 0x4c);
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(local_420 + 0x50) - iVar6;
    }
    if (uVar7 < uVar5) {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(local_420 + 0x50) - iVar6;
      }
      FUN_2009dd40(*(undefined4 *)(local_420 + 0x50),uVar5 - iVar6,&local_425);
    }
    else if ((iVar6 != 0) && (uVar5 < (uint)(*(int *)(local_420 + 0x50) - iVar6))) {
      *(uint *)(local_420 + 0x50) = uVar5 + iVar6;
    }
  }
  else {
    local_424 = *(int *)(local_424 + 0x1c);
  }
  ExceptionList = local_c;
  return local_424;
}

