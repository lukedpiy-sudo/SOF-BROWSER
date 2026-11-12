// rea decompile_all
// name: FUN_200a5b60
// address: 0x200a5b60
// body: available
// range: 0x200a5b60-0x200a5d5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200a5b60(int param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  int local_438;
  undefined4 *local_434;
  int local_430;
  undefined1 local_42c [16];
  undefined4 local_41c;
  int local_418;
  undefined4 *local_414 [2];
  undefined1 local_40c [16];
  undefined4 local_3fc;
  int local_3f8;
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d564;
  local_c = ExceptionList;
  local_430 = in_ECX + 0xe4;
  ExceptionList = &local_c;
  FUN_200a79f0(&local_438,param_1);
  if (local_438 == *(int *)(in_ECX + 0xe8)) {
    if ((*(int *)(in_ECX + 0x110) != 0) &&
       (1 < (uint)(*(int *)(in_ECX + 0x114) - *(int *)(in_ECX + 0x110) >> 2))) {
      puVar1 = *(undefined1 **)(param_1 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Mesh__s_is_not_present_in_the_FI_20157890,puVar1);
      FUN_2008ea00(local_3f4,0);
    }
    local_434 = operator_new(0x108);
    local_4 = 0;
    local_414[0] = local_434;
    if (local_434 == (undefined4 *)0x0) {
      local_434 = (undefined4 *)0x0;
    }
    else {
      FUN_2008f650();
      *(undefined1 *)(local_434 + 0x41) = 1;
      *(undefined1 *)((int)local_434 + 0x105) = 0;
      *local_434 = &PTR_LAB_201124b8;
      local_434[0x3a] = 0;
    }
    local_4 = 0xffffffff;
    FUN_200a8890(*(undefined4 *)(in_ECX + 200),1,&local_434);
    if (*(int *)(in_ECX + 0xc4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 2;
    }
    FUN_200234d0(param_1);
    local_41c = 1;
    local_4 = 1;
    local_418 = iVar2 + -1;
    FUN_200234d0(local_42c);
    local_3fc = local_41c;
    local_3f8 = local_418;
    local_4._0_1_ = 2;
    FUN_200a7cf0(local_414,local_40c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_2000a5b0(1);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  else {
    if (*(int *)(local_438 + 0x1c) != 1) {
      puVar1 = *(undefined1 **)(param_1 + 4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Name_collision__two__possibly_hi_20157824,puVar1);
      FUN_2008e9e0(local_3f4);
    }
    local_434 = *(undefined4 **)(*(int *)(in_ECX + 0xc4) + *(int *)(local_438 + 0x20) * 4);
  }
  ExceptionList = local_c;
  return local_434;
}

