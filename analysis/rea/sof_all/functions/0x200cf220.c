// rea decompile_all
// name: FUN_200cf220
// address: 0x200cf220
// body: available
// range: 0x200cf220-0x200cf343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cf220(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  int in_stack_ffffffe8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e720;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar7 = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = (*DAT_20403640)(&param_4);
  uVar5 = 0;
  while( true ) {
    iVar1 = *(int *)(param_3 + 4);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_3 + 8) - iVar1 >> 4) <= uVar5)) break;
    puVar4 = *(undefined1 **)(iVar6 + 4 + iVar1);
    if (uVar5 == param_8) {
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      uVar3 = *(undefined4 *)(in_ECX + 0x3c);
    }
    else {
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      uVar3 = *(undefined4 *)(in_ECX + 0x38);
    }
    (*DAT_20403638)(param_1,param_2,puVar4,uVar3,&param_4,0);
    param_2 = param_2 + iVar2;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x10;
  }
  if (in_stack_ffffffe8 != 0) {
    if (*(char *)(in_stack_ffffffe8 + -1) == '\0') {
      FUN_200f9f75((char *)(in_stack_ffffffe8 + -1),iVar2,uVar7);
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
    FUN_200f9f75((char *)(param_5 + -1),iVar2,uVar7,0,0,0);
  }
  ExceptionList = pvStack_c;
  return;
}

