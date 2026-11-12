// rea decompile_all
// name: FUN_20027b10
// address: 0x20027b10
// body: available
// range: 0x20027b10-0x20027bc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20027b10(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b0b7;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    uVar1 = *(undefined1 *)(param_2 + 1);
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 1) = uVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_2000a3a0(param_2 + 1,0,0xffffffff);
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    FUN_2000a3a0(param_2 + 8,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    FUN_2000a3a0(param_2 + 0xc,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}

