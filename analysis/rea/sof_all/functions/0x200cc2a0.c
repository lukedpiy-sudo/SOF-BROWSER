// rea decompile_all
// name: FUN_200cc2a0
// address: 0x200cc2a0
// body: available
// range: 0x200cc2a0-0x200cc683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cc2a0(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  void *in_stack_00001018;
  int in_stack_00001028;
  char *in_stack_0000102c;
  undefined4 uStack_c;
  undefined1 *local_8;
  char *local_4;
  
  local_4 = (char *)0xffffffff;
  local_8 = &LAB_2010e4f6;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_200fa720();
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,uStack_c._3_1_);
  FUN_2000a5b0(0);
  param_2 = uStack_c._3_1_;
  FUN_2000a5b0(0);
  iVar5 = -(int)in_stack_0000102c;
  do {
    cVar1 = *in_stack_0000102c;
    in_stack_0000102c[(int)(&stack0x00000018 + iVar5)] = cVar1;
    in_stack_0000102c = in_stack_0000102c + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar6 = &stack0x00000018;
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  puVar2 = (undefined1 *)FUN_200faaf0(&stack0x00000018,0x2b);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar6 = puVar2 + 1;
    pcVar7 = &stack0x00000018;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(&stack0x00000018,~uVar4 - 1);
  }
  FUN_2000a3a0(&local_8,0,0xffffffff);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  pcVar7 = pcVar6;
  if ((pcVar6 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar6,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = puVar2 + 1;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar6,~uVar4 - 1);
  }
  FUN_2000a3a0(&local_8,0,0xffffffff);
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  pcVar6 = pcVar7;
  if ((pcVar7 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar7,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar6 = puVar2 + 1;
    pcVar8 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar7,~uVar4 - 1);
  }
  FUN_200e5c10(&local_8);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  pcVar7 = pcVar6;
  if ((pcVar6 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar6,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = puVar2 + 1;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar6,~uVar4 - 1);
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  pcVar6 = pcVar7;
  if ((pcVar7 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar7,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar6 = puVar2 + 1;
    pcVar8 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar7,~uVar4 - 1);
  }
  pcVar7 = local_4;
  if (local_4 == (char *)0x0) {
    pcVar7 = "";
  }
  iVar5 = -1;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    FUN_2000a3a0(&param_2,0,0xffffffff);
  }
  FUN_2000a3a0(&local_8,0,0xffffffff);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  pcVar7 = pcVar6;
  if ((pcVar6 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar6,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = puVar2 + 1;
    pcVar8 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar6,~uVar4 - 1);
  }
  pcVar6 = local_4;
  if (local_4 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar3 = FUN_200f9e13(pcVar6);
  *(undefined4 *)(in_stack_00001028 + 0x5c) = uVar3;
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_2015ee44,~uVar4 - 1);
  if ((pcVar7 != (char *)0x0) &&
     (puVar2 = (undefined1 *)FUN_200faaf0(pcVar7,0x2b), puVar2 != (undefined1 *)0x0)) {
    *puVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar6 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar7,~uVar4 - 1);
  }
  FUN_2000a3a0(&local_8,0,0xffffffff);
  pcVar6 = local_4;
  if (local_4 == (char *)0x0) {
    pcVar6 = "";
  }
  uVar3 = FUN_200f9e13(pcVar6);
  *(undefined4 *)(in_stack_00001028 + 0x70) = uVar3;
  FUN_2000a5b0(1);
  if (local_4 != (char *)0x0) {
    if (local_4[-1] != '\0') {
      local_4[-1] = local_4[-1] + -1;
      ExceptionList = in_stack_00001018;
      return;
    }
    FUN_200f9f75(local_4 + -1);
  }
  ExceptionList = in_stack_00001018;
  return;
}

