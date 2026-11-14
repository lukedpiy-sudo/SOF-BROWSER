// rea decompile_all
// name: FUN_300037b0
// address: 0x300037b0
// body: available
// range: 0x300037b0-0x30003898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_300037b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_28 [2];
  int local_20 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3002b4e0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_30004990(local_20,(undefined1 *)&param_1);
  local_10 = 0;
  local_4._0_1_ = 1;
  FUN_30005330(&DAT_30034dd0,local_28,local_20);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_300033d0(local_20,'\x01');
  iVar1 = *(int *)(local_28[0] + 0x1c);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (*(char *)(param_2 + -1) != '\0') {
        *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + -1;
        ExceptionList = local_c;
        return 0;
      }
      FUN_3001f8bc((char *)(param_2 + -1));
    }
    ExceptionList = local_c;
    return 0;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + -1) != '\0') {
      *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + -1;
      ExceptionList = local_c;
      return iVar1;
    }
    FUN_3001f8bc((char *)(param_2 + -1));
  }
  ExceptionList = local_c;
  return iVar1;
}

