// rea decompile_all
// name: FUN_20069a00
// address: 0x20069a00
// body: available
// range: 0x20069a00-0x20069f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20069a00(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_825;
  int iStack_814;
  char local_7dc [1000];
  char local_3f4 [1000];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b792;
  pvStack_c = ExceptionList;
  puVar7 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0();
  local_4 = 0;
  *param_3 = 0;
  if (DAT_20403c09 == '\0') {
LAB_20069b46:
    uVar6 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (4 < ~uVar6 - 1) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_3f4 + -(int)param_1)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar6 = 0xffffffff;
      pcVar2 = &DAT_20156cb0;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      do {
        cVar1 = *pcVar2;
        (&stack0xdfea8f57 + ~uVar6)[(int)pcVar2] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (*(code **)(in_ECX + 0x14) == (code *)0x0) {
        iVar5 = 0;
        do {
          pcVar2 = local_3f4 + iVar5;
          local_7dc[iVar5] = *pcVar2;
          iVar5 = iVar5 + 1;
        } while (*pcVar2 != '\0');
        FUN_2000a5b0();
        iVar5 = -1;
        pcVar2 = local_3f4;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600();
        local_4._0_1_ = 4;
      }
      else {
        (**(code **)(in_ECX + 0x14))();
        FUN_2000a5b0();
        iVar5 = -1;
        pcVar2 = local_7dc;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        FUN_2000a600();
        local_4._0_1_ = 3;
      }
      FUN_2000a3a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0();
      iVar5 = -1;
      pcVar2 = &DAT_2015ee44;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_20023c90();
      if (iVar5 != 0) goto LAB_20069ca1;
    }
    local_4 = 0xffffffff;
    FUN_2000a5b0();
    puVar7 = (undefined4 *)0x0;
  }
  else {
    if (*(code **)(in_ECX + 0x14) == (code *)0x0) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(local_7dc + -(int)param_1)] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_2000a5b0();
      iVar5 = -1;
      pcVar2 = param_1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600();
      local_4._0_1_ = 2;
    }
    else {
      (**(code **)(in_ECX + 0x14))();
      FUN_2000a5b0();
      iVar5 = -1;
      pcVar2 = local_7dc;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600();
      local_4._0_1_ = 1;
    }
    FUN_2000a3a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0();
    if (DAT_20403c09 == '\0') goto LAB_20069b46;
    iVar5 = -1;
    pcVar2 = &DAT_2015ee44;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar5 = FUN_20023c90();
    if (iVar5 == 0) goto LAB_20069b46;
LAB_20069ca1:
    FUN_200698a0();
    FUN_200a79f0();
    if (iStack_814 == *(int *)(in_ECX + 4)) {
      puVar3 = operator_new(0x178);
      local_4._0_1_ = 5;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_LAB_20111f4c;
        *(undefined1 *)(puVar3 + 1) = local_825;
        FUN_2000a5b0();
        local_4._0_1_ = 6;
        *(undefined1 *)(puVar3 + 5) = local_825;
        FUN_2000a5b0();
        local_4._0_1_ = 7;
        FUN_2006ea10();
        FUN_2006ef90();
        local_4._0_1_ = 8;
        FUN_2009df30();
        local_4._0_1_ = 9;
        FUN_2009df30();
        local_4._0_1_ = 10;
        FUN_2009df30();
        local_4._0_1_ = 0xb;
        FUN_2009df30();
        local_4._0_1_ = 0xc;
        FUN_2006ea80();
        local_4._0_1_ = 0xd;
        FUN_2003c0d0();
        local_4._0_1_ = 0xe;
        FUN_2009df30();
        local_4._0_1_ = 0xf;
        FUN_2006f150();
        local_4._0_1_ = 0x10;
        FUN_2006f1b0();
        *puVar3 = &PTR_FUN_20111f3c;
        puVar3[9] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
      }
      local_4._0_1_ = 0;
      cVar1 = FUN_200a2df0();
      if (cVar1 == '\0') {
        if (puVar3 != (undefined4 *)0x0) {
          FUN_200a6330();
          FUN_200f9f75();
        }
      }
      else {
        FUN_200234d0();
        local_4._0_1_ = 0x11;
        piVar4 = (int *)FUN_20071ea0();
        iVar5 = *piVar4;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_2000a5b0();
        *(undefined4 **)(iVar5 + 0x1c) = puVar3;
        *(undefined4 *)(iVar5 + 0x20) = 1;
        puVar7 = puVar3;
      }
      local_4 = 0xffffffff;
      FUN_2000a5b0();
    }
    else {
      local_4 = 0xffffffff;
      *(int *)(iStack_814 + 0x20) = *(int *)(iStack_814 + 0x20) + 1;
      *param_3 = 0;
      puVar7 = *(undefined4 **)(iStack_814 + 0x1c);
      FUN_2000a5b0();
    }
  }
  ExceptionList = pvStack_c;
  return puVar7;
}

