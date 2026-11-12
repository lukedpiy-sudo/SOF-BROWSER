// rea decompile_all
// name: FUN_2009ab70
// address: 0x2009ab70
// body: available
// range: 0x2009ab70-0x2009ad44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009ab70(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010cde8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20069380(param_1,in_ECX + 4);
  local_1c[0] = (undefined1)param_1;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_2000a6c0(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_2015ee44;
    puVar7 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_2000a6a0(uVar2);
  }
  local_4 = 0;
  FUN_20069380(param_1,local_1c);
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    if (*(char *)((int)local_18 + -1) == '\0') {
      FUN_200f9f75((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + -1;
    }
  }
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x8c));
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x14));
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x15));
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x16));
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x18));
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX + 0x24) - *(int *)(in_ECX + 0x20);
    }
    FUN_200692e0(param_1,iVar5);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x20),iVar5);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x1a,1);
  }
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x2c));
  if (*(char *)(in_ECX + 0x2c) == '\0') {
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78)) / 0x44;
    }
    FUN_200692e0(param_1,iVar5);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x78),iVar5 * 0x44);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x30,0x44);
  }
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x84));
  ExceptionList = local_c;
  return;
}

