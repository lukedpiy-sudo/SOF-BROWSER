// rea decompile_all
// name: FUN_200ea660
// address: 0x200ea660
// body: available
// range: 0x200ea660-0x200ea774 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ea660(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_20110318;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_2000a3a0(param_2 + 1,0,0xffffffff);
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    FUN_2000a3a0(param_2 + 5,0,0xffffffff);
    local_4._0_1_ = 2;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    if (param_2[10] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_2[0xb] - param_2[10]) >> 4;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 << 4);
    param_1[10] = puVar3;
    puVar1 = (undefined1 *)param_2[0xb];
    for (puVar4 = (undefined1 *)param_2[10]; puVar4 != puVar1; puVar4 = puVar4 + 0x10) {
      local_4._0_1_ = 3;
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *puVar4;
        FUN_2000a5b0(0);
        FUN_2000a3a0(puVar4,0,0xffffffff);
      }
      puVar3 = puVar3 + 0x10;
    }
    param_1[0xb] = puVar3;
    param_1[0xc] = puVar3;
  }
  ExceptionList = local_c;
  return;
}

