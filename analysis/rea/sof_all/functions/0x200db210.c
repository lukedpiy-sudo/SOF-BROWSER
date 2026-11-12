// rea decompile_all
// name: FUN_200db210
// address: 0x200db210
// body: available
// range: 0x200db210-0x200db417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200db210(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int in_stack_00000028;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  char in_stack_00000054;
  char cVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010f210;
  pvStack_c = ExceptionList;
  pcVar9 = (char *)0x0;
  local_4 = 1;
  pcVar2 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &pvStack_c;
  cVar8 = in_stack_00000054;
  iVar3 = __strcmpi(pcVar2,&DAT_2011f220);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    pcVar2 = &DAT_2011f220;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(&DAT_2011f220,~uVar5 - 1);
  }
  else {
    pcVar2 = param_3;
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = *(int *)(in_ECX + 0xa8);
    uVar5 = 0xffffffff;
    pcVar7 = pcVar2 + iVar3 + 1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_2000a6c0(uVar5,1);
    if (cVar1 != '\0') {
      pcVar2 = pcVar2 + iVar3 + 1;
      pcVar7 = pcVar9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar9[uVar5] = '\0';
    }
  }
  if ((in_stack_00000054 == '\0') || (*(char *)(in_ECX + 0x61) == '\0')) {
    pcVar2 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
  }
  else {
    uVar4 = (*DAT_20403640)(in_ECX + 0x8c,in_ECX + 0x40);
    (*DAT_204035e4)(in_stack_00000044,in_stack_00000048,*(undefined4 *)(in_ECX + 0x20),uVar4);
    pcVar2 = pcVar9;
    in_stack_0000004c = in_stack_00000050;
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
  }
  (*DAT_20403638)(in_stack_00000044,in_stack_00000048,pcVar2,in_stack_0000004c,in_ECX + 0x8c,0);
  if (pcVar9 != (char *)0x0) {
    if (pcVar9[-1] == '\0') {
      FUN_200f9f75(pcVar9 + -1);
    }
    else {
      pcVar9[-1] = pcVar9[-1] + -1;
    }
  }
  uVar4 = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_4 = 3;
  FUN_2000a5b0(1);
  if (in_stack_00000028 != 0) {
    if (*(char *)(in_stack_00000028 + -1) == '\0') {
      FUN_200f9f75((char *)(in_stack_00000028 + -1));
    }
    else {
      *(char *)(in_stack_00000028 + -1) = *(char *)(in_stack_00000028 + -1) + -1;
    }
  }
  if (param_3 != (char *)0x0) {
    if (param_3[-1] != '\0') {
      param_3[-1] = param_3[-1] + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75(param_3 + -1,cVar8,uVar4,uVar10,uVar11);
  }
  ExceptionList = pvStack_c;
  return;
}

