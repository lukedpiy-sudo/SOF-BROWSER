// rea decompile_all
// name: FUN_200cecc0
// address: 0x200cecc0
// body: available
// range: 0x200cecc0-0x200cf0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cecc0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 undefined4 param_13,undefined4 param_14,int param_15)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int in_ECX;
  undefined4 local_3c;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e6d8;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  uVar6 = *(undefined4 *)(in_ECX + 0x38);
  local_4 = CONCAT31(local_4._1_3_,3);
  local_34 = (undefined1)uVar6;
  uStack_33 = (undefined1)((uint)uVar6 >> 8);
  uStack_32 = (undefined1)((uint)uVar6 >> 0x10);
  uStack_31 = (undefined1)((uint)uVar6 >> 0x18);
  if (*(char *)(in_ECX + 0x61) != '\0') {
    uVar6 = *(undefined4 *)(in_ECX + 0x3c);
    local_34 = (undefined1)uVar6;
    uStack_33 = (undefined1)((uint)uVar6 >> 8);
    uStack_32 = (undefined1)((uint)uVar6 >> 0x10);
    uStack_31 = (undefined1)((uint)uVar6 >> 0x18);
  }
  local_3c = uVar6;
  if (((char)param_15 != '\0') &&
     (*(int *)(*(int *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0x14) + 0x30) == in_ECX)) {
    cVar3 = FUN_20055930();
    local_3c = CONCAT13(cVar3 + -0x80,(int3)uVar6);
  }
  if (*(char *)(in_ECX + 0x65) == '\0') {
    param_15 = 0xffffffff;
    iVar5 = __ftol();
    if (iVar5 < 0x100) {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 0xff;
    }
    param_15 = CONCAT31(param_15._1_3_,(char)iVar5);
    uVar6 = __ftol(0,0xff);
    uVar4 = FUN_200d3da0(uVar6);
    param_15._0_2_ = CONCAT11(uVar4,(char)param_15);
    uVar6 = __ftol(0,0xff);
    uStack_32 = FUN_200d3da0(uVar6);
    uVar6 = param_15;
    param_15 = CONCAT13(uStack_31,CONCAT12(uStack_32,(undefined2)param_15));
    local_34 = (undefined1)uVar6;
    uStack_33 = (undefined1)((uint)uVar6 >> 8);
    uVar6 = param_15;
  }
  if (((*(int *)(in_ECX + 0x50) != 0) && ((*(byte *)(*(int *)(in_ECX + 0x50) + 0xc) & 0x10) != 0))
     && (3 < DAT_201c1f00)) {
    uVar1 = *(undefined4 *)(in_ECX + 0x38);
    *(undefined1 *)(in_ECX + 0x61) = 0;
    local_34 = (undefined1)uVar1;
    uStack_33 = (undefined1)((uint)uVar1 >> 8);
    uStack_32 = (undefined1)((uint)uVar1 >> 0x10);
    uStack_31 = 0x60;
    uVar6 = CONCAT13(0x60,(int3)uVar1);
    local_3c = CONCAT13(0x60,(int3)uVar1);
  }
  if (*(int *)(in_ECX + 0x34) == 0) {
    piVar2 = (int *)**(int **)(in_ECX + 4);
    iVar5 = *(int *)(*piVar2 + 0x9c);
    param_15 = FUN_200c64f0();
    param_15 = (piVar2[0x12] + piVar2[0x10] + iVar5) - param_15;
    iVar5 = FUN_200e6cb0();
    (*DAT_20403604)(param_15 - iVar5);
    uVar6 = FUN_2008e320(auStack_1c,&param_3,&param_7);
    local_4._0_1_ = 4;
    FUN_2000a3a0(uVar6,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_2000a5b0(1);
    if (*(char *)(in_ECX + 0x61) != '\0') {
      uVar6 = (*DAT_20403640)(&param_11,in_ECX + 0x40);
      (*DAT_204035e4)(param_1,param_2,*(undefined4 *)(in_ECX + 0x20),uVar6);
    }
    puVar7 = param_4;
    if (param_4 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    (*DAT_20403638)(param_1,param_2,puVar7,
                    CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34))),&param_11,0
                   );
    puVar7 = param_4;
    if (param_4 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    iVar5 = (*DAT_2040363c)(puVar7,&param_11);
    puVar7 = param_8;
    if (param_8 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    (*DAT_20403638)(param_1 + iVar5,param_2,puVar7,local_3c,&param_11,0);
    (*DAT_2040360c)();
  }
  else {
    (*DAT_20403604)(*(int *)(in_ECX + 0x34) + param_1);
    puVar7 = param_4;
    if (param_4 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    (*DAT_20403638)(param_1,param_2,puVar7,uVar6,&param_11,0);
    piVar2 = (int *)**(int **)(in_ECX + 4);
    iVar5 = *(int *)(*piVar2 + 0x9c);
    param_15 = FUN_200c64f0();
    param_15 = (piVar2[0x12] + piVar2[0x10] + iVar5) - param_15;
    iVar5 = FUN_200e6cb0();
    (*DAT_20403604)(param_15 - iVar5);
    puVar7 = param_8;
    if (param_8 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    (*DAT_20403638)(*(int *)(in_ECX + 0x34) + param_1,param_2,puVar7,local_3c,&param_11,0);
    (*DAT_2040360c)();
  }
  if (iStack_28 != 0) {
    if (*(char *)(iStack_28 + -1) == '\0') {
      FUN_200f9f75((char *)(iStack_28 + -1));
    }
    else {
      *(char *)(iStack_28 + -1) = *(char *)(iStack_28 + -1) + -1;
    }
  }
  if (param_4 != (undefined1 *)0x0) {
    if (param_4[-1] == '\0') {
      FUN_200f9f75(param_4 + -1);
    }
    else {
      param_4[-1] = param_4[-1] + -1;
    }
  }
  param_4 = (undefined1 *)0x0;
  param_5 = 0;
  param_6 = 0;
  if (param_8 != (undefined1 *)0x0) {
    if (param_8[-1] == '\0') {
      FUN_200f9f75(param_8 + -1);
    }
    else {
      param_8[-1] = param_8[-1] + -1;
    }
  }
  param_8 = (undefined1 *)0x0;
  param_9 = 0;
  param_10 = 0;
  if (param_12 != 0) {
    if (*(char *)(param_12 + -1) != '\0') {
      *(char *)(param_12 + -1) = *(char *)(param_12 + -1) + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75((char *)(param_12 + -1));
  }
  ExceptionList = pvStack_c;
  return;
}

