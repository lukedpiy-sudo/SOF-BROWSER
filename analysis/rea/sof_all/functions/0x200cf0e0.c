// rea decompile_all
// name: FUN_200cf0e0
// address: 0x200cf0e0
// body: available
// range: 0x200cf0e0-0x200cf21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cf0e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int in_stack_ffffffe8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e700;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar10 = (undefined1)param_3;
  FUN_2000a5b0(0);
  uVar6 = *(undefined4 *)(in_ECX + 0x38);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(char *)(in_ECX + 0x61) != '\0') {
    uVar6 = *(undefined4 *)(in_ECX + 0x3c);
  }
  iVar3 = 0;
  uVar4 = 0;
  while( true ) {
    if ((*(int *)(param_3 + 4) == 0) ||
       ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 4) <= uVar4)) break;
    iVar1 = FUN_200e63b0(uVar4 + 1);
    (*DAT_20403604)(iVar1 + param_1);
    puVar2 = *(undefined1 **)(*(int *)(param_3 + 4) + iVar3 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    puVar7 = (undefined1 *)&param_4;
    uVar8 = 0;
    uVar5 = param_2;
    uVar9 = uVar6;
    iVar1 = FUN_200e63b0(uVar4);
    (*DAT_20403638)(iVar1 + param_1,uVar5,puVar2,uVar6,puVar7,uVar8);
    iVar3 = iVar3 + 0x10;
    uVar4 = uVar4 + 1;
    uVar6 = uVar9;
  }
  (*DAT_2040360c)();
  if (in_stack_ffffffe8 != 0) {
    if (*(char *)(in_stack_ffffffe8 + -1) == '\0') {
      FUN_200f9f75((char *)(in_stack_ffffffe8 + -1));
    }
    else {
      *(char *)(in_stack_ffffffe8 + -1) = *(char *)(in_stack_ffffffe8 + -1) + -1;
    }
  }
  if (param_5 != 0) {
    if (*(char *)(param_5 + -1) != '\0') {
      *(char *)(param_5 + -1) = *(char *)(param_5 + -1) + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75((char *)(param_5 + -1),uVar6,uVar10,0,0,0);
  }
  ExceptionList = pvStack_c;
  return;
}

