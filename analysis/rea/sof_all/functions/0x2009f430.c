// rea decompile_all
// name: FUN_2009f430
// address: 0x2009f430
// body: available
// range: 0x2009f430-0x2009f57a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009f430(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d1b2;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_2000a3a0(param_2 + 4,0,0xffffffff);
    local_4._0_1_ = 1;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20);
    }
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    puVar3 = operator_new(uVar2);
    *(undefined1 **)(param_1 + 0x20) = puVar3;
    puVar1 = *(undefined1 **)(param_2 + 0x24);
    for (puVar4 = *(undefined1 **)(param_2 + 0x20); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    *(undefined1 **)(param_1 + 0x24) = puVar3;
    *(undefined1 **)(param_1 + 0x28) = puVar3;
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = param_2[0x2d];
    local_4._0_1_ = 2;
    FUN_200a0c40(param_2 + 0x30);
    FUN_200a0150(param_2 + 0x74);
    param_1[0x84] = param_2[0x84];
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    param_1[0x8c] = param_2[0x8c];
    *(undefined2 *)(param_1 + 0x8e) = *(undefined2 *)(param_2 + 0x8e);
    local_4 = CONCAT31(local_4._1_3_,3);
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
    FUN_200a0c40(param_2 + 0x94);
  }
  ExceptionList = local_c;
  return;
}

