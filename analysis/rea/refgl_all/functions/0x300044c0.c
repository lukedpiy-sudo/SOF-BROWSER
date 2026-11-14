// rea decompile_all
// name: FUN_300044c0
// address: 0x300044c0
// body: available
// range: 0x300044c0-0x300045af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_300044c0(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_38 [2];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b680;
  local_c = ExceptionList;
  local_30[0] = *param_1;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  ExceptionList = &local_c;
  FUN_30004c90(local_30,param_1,0,0xffffffff);
  local_4 = 0;
  FUN_30004990(local_20,local_30);
  local_10 = 0;
  local_4._0_1_ = 1;
  piVar2 = (int *)FUN_30004ea0(&DAT_30034dd0,local_38,local_20);
  iVar1 = *piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_300033d0(local_20,'\x01');
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_300033d0(local_30,'\x01');
    ExceptionList = local_c;
    return *(undefined4 *)(iVar1 + 8);
  }
  if (local_2c != 0) {
    if (*(char *)(local_2c + -1) == '\0') {
      FUN_3001f8bc((char *)(local_2c + -1));
      ExceptionList = local_c;
      return 0;
    }
    *(char *)(local_2c + -1) = *(char *)(local_2c + -1) + -1;
  }
  ExceptionList = local_c;
  return 0;
}

