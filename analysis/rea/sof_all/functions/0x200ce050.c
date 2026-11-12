// rea decompile_all
// name: FUN_200ce050
// address: 0x200ce050
// body: available
// range: 0x200ce050-0x200ce190 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ce050(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e648;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    ExceptionList = &local_c;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    FUN_2000a5b0(0);
    FUN_2000a3a0(param_2 + 5,0,0xffffffff);
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    FUN_2000a5b0(0);
    FUN_2000a3a0(param_2 + 9,0,0xffffffff);
    local_4._0_1_ = 2;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    FUN_2000a5b0(0);
    FUN_2000a3a0(param_2 + 0xd,0,0xffffffff);
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    local_4._0_1_ = 3;
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    FUN_2000a3a0(param_2 + 0x13,0,0xffffffff);
    param_1[0x17] = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    local_4._0_1_ = 4;
    FUN_2000a5b0(0);
    FUN_2000a3a0(param_2 + 0x18,0,0xffffffff);
    param_1[0x1c] = param_2[0x1c];
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
    local_4 = CONCAT31(local_4._1_3_,5);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    FUN_2000a3a0(param_2 + 0x1d,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}

