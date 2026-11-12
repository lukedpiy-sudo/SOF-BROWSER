// rea decompile_all
// name: FUN_20068ff0
// address: 0x20068ff0
// body: available
// range: 0x20068ff0-0x200691f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20068ff0(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *local_40c;
  undefined1 local_405;
  undefined1 local_404 [4];
  int local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b63b;
  local_c = ExceptionList;
  pcVar11 = *(char **)(param_1 + 4);
  if (*pcVar11 == '\0') {
    ExceptionList = &local_c;
    iVar3 = (*DAT_204058ac)(&local_40c,4,1,*(undefined4 *)(pcVar11 + 4));
    pcVar11[2] = pcVar11[2] | iVar3 != 1;
  }
  else if (*(uint **)(pcVar11 + 0x20) < *(uint **)(pcVar11 + 0x18) + 1) {
    ExceptionList = &local_c;
    pcVar11[2] = '\x01';
    *(uint **)(pcVar11 + 0x18) = *(uint **)(pcVar11 + 0x20);
  }
  else {
    local_40c = (char *)**(uint **)(pcVar11 + 0x18);
    ExceptionList = &local_c;
    *(int *)(pcVar11 + 0x18) = *(int *)(pcVar11 + 0x18) + 4;
  }
  pcVar11 = local_40c;
  if (local_40c == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_2015ee44;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_2000a6c0(uVar6,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_2015ee44;
      puVar9 = *(undefined4 **)(param_2 + 4);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(uint *)(param_2 + 8) = uVar6;
      *(undefined1 *)(uVar6 + *(int *)(param_2 + 4)) = 0;
    }
  }
  else {
    if ((int)local_40c < 1000) {
      pcVar4 = local_3f4;
    }
    else {
      if (100000 < (int)local_40c) {
        FUN_2008e9e0(s_Huge_String_20156ca0);
      }
      pcVar4 = operator_new((uint)(pcVar11 + 1));
    }
    pcVar1 = *(char **)(param_1 + 4);
    local_40c = pcVar4;
    if (*pcVar1 == '\0') {
      pcVar5 = (char *)(*DAT_204058ac)(pcVar4,1,pcVar11,*(undefined4 *)(pcVar1 + 4));
      pcVar1[2] = pcVar1[2] | pcVar5 != pcVar11;
    }
    else if (*(char **)(pcVar1 + 0x20) < *(char **)(pcVar1 + 0x18) + (int)pcVar11) {
      pcVar1[2] = '\x01';
      *(char **)(pcVar1 + 0x18) = *(char **)(pcVar1 + 0x20);
    }
    else {
      pcVar5 = *(char **)(pcVar1 + 0x18);
      pcVar10 = pcVar4;
      for (uVar6 = (uint)pcVar11 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = (uint)pcVar11 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
      *(char **)(pcVar1 + 0x18) = pcVar11 + *(int *)(pcVar1 + 0x18);
    }
    pcVar4[(int)pcVar11] = '\0';
    local_404[0] = local_405;
    uVar6 = 0xffffffff;
    pcVar11 = pcVar4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    local_400 = 0;
    local_3fc = 0;
    local_3f8 = 0;
    FUN_2000a600(pcVar4,~uVar6 - 1);
    local_4 = 0;
    FUN_2000a3a0(local_404,0,0xffffffff);
    if (local_400 != 0) {
      if (*(char *)(local_400 + -1) == '\0') {
        FUN_200f9f75((char *)(local_400 + -1));
      }
      else {
        *(char *)(local_400 + -1) = *(char *)(local_400 + -1) + -1;
      }
    }
    if (pcVar4 != local_3f4) {
      FUN_200f9f75(pcVar4);
    }
  }
  ExceptionList = local_c;
  return;
}

