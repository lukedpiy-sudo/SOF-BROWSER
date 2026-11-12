// rea decompile_all
// name: FUN_2008a750
// address: 0x2008a750
// body: available
// range: 0x2008a750-0x2008a8e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008a750(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 *local_38;
  void *local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  short local_1c [2];
  undefined4 local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c47b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = in_ECX;
  local_34 = operator_new(0x1d4);
  uVar4 = param_1;
  local_4 = 0;
  if (local_34 == (void *)0x0) {
    local_34 = (void *)0x0;
  }
  else {
    local_34 = (void *)FUN_20079100(in_ECX,param_1,
                                    CONCAT22(extraout_var_00,*(undefined2 *)(in_ECX + 0xc)),
                                    CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 0xe)));
  }
  local_4 = 0xffffffff;
  FUN_2006b5b0(uVar4,local_34);
  local_1c[0] = (short)uVar4;
  local_18 = 0;
  bVar1 = true;
  puVar2 = *(undefined4 **)(in_ECX + 0x104);
  puVar3 = (undefined4 *)(*(undefined4 **)(in_ECX + 0x104))[1];
  while (puVar3 != *(undefined4 **)(in_ECX + 0x108)) {
    bVar1 = local_1c[0] < *(short *)(puVar3 + 3);
    puVar2 = puVar3;
    if (bVar1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(char *)(in_ECX + 0x10c) == '\0') {
    local_38 = puVar2;
    if (bVar1) {
      puVar6 = (undefined4 *)FUN_20083550(local_28);
      if (local_38 == (undefined4 *)*puVar6) {
        puVar6 = (undefined4 *)&local_3b;
        local_3b = 1;
        ppuVar5 = (undefined4 **)FUN_20075a30(local_24,puVar3,puVar2,local_1c);
        goto LAB_2008a8ad;
      }
      FUN_2008e140();
    }
    if (*(short *)(local_38 + 3) < local_1c[0]) {
      puVar6 = (undefined4 *)&local_3a;
      local_3a = 1;
      ppuVar5 = (undefined4 **)FUN_20075a30(local_20,puVar3,puVar2,local_1c);
    }
    else {
      puVar6 = (undefined4 *)&local_39;
      local_39 = 0;
      ppuVar5 = &local_38;
    }
  }
  else {
    puVar6 = &param_1;
    param_1 = CONCAT31(param_1._1_3_,1);
    ppuVar5 = (undefined4 **)FUN_20075a30(local_2c,puVar3,puVar2,local_1c);
  }
LAB_2008a8ad:
  FUN_2008c5b0(ppuVar5,puVar6);
  *(void **)(local_14 + 0x10) = local_34;
  *(undefined1 *)(local_30 + 0x115) = 1;
  ExceptionList = local_c;
  return;
}

