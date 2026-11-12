// rea decompile_all
// name: FUN_200950b0
// address: 0x200950b0
// body: available
// range: 0x200950b0-0x2009536c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200950b0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010cdd2;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &local_c;
  uVar2 = FUN_20068dc0(param_1);
  switch(uVar2) {
  case 0:
    piVar3 = operator_new(0xcc);
    param_1 = piVar3;
    if (piVar3 == (int *)0x0) {
LAB_200952f2:
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_LAB_2011242c;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      FUN_200920f0();
      local_4._0_1_ = 2;
      FUN_200920f0();
      local_4._0_1_ = 3;
      FUN_20092130();
      *piVar3 = (int)&PTR_FUN_20112584;
      local_4._0_1_ = 4;
      FUN_20092130();
      local_4._0_1_ = 5;
      FUN_20092130();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_20092130();
      *piVar3 = (int)&PTR_FUN_20112524;
    }
    break;
  case 1:
    piVar3 = operator_new(0x188);
    local_4 = 7;
    if (piVar3 == (int *)0x0) goto LAB_200952f2;
    FUN_20091e60();
    local_4._0_1_ = 8;
    FUN_2009df30(&param_1);
    *(undefined1 *)((int)piVar3 + 0x79) = 0;
    local_4._0_1_ = 9;
    FUN_20092130();
    local_4._0_1_ = 10;
    FUN_20092130();
    local_4._0_1_ = 0xb;
    FUN_200920f0();
    local_4._0_1_ = 0xc;
    FUN_20092130();
    local_4._0_1_ = 0xd;
    FUN_20092130();
    local_4._0_1_ = 0xe;
    FUN_200920f0();
    local_4 = CONCAT31(local_4._1_3_,0xf);
    FUN_200920f0();
    *piVar3 = (int)&PTR_FUN_20112554;
    break;
  case 2:
    piVar3 = operator_new(0x1a4);
    local_4 = 0x10;
    param_1 = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_200952f2;
    FUN_20091e60();
    local_4._0_1_ = 0x11;
    FUN_20092130();
    local_4._0_1_ = 0x12;
    FUN_20092130();
    local_4._0_1_ = 0x13;
    FUN_20092130();
    local_4._0_1_ = 0x14;
    FUN_200920f0();
    local_4._0_1_ = 0x15;
    FUN_20092130();
    local_4._0_1_ = 0x16;
    FUN_20092130();
    local_4._0_1_ = 0x17;
    FUN_200920f0();
    local_4._0_1_ = 0x18;
    FUN_200920f0();
    local_4 = CONCAT31(local_4._1_3_,0x19);
    FUN_20092130();
    *piVar3 = (int)&PTR_FUN_201124f4;
    break;
  case 3:
    param_1 = operator_new(0x188);
    local_4 = 0x1a;
    if (param_1 == (int *)0x0) {
LAB_20095342:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_20091d10();
    }
    break;
  case 4:
    param_1 = operator_new(0x1a4);
    local_4 = 0x1b;
    if (param_1 == (int *)0x0) goto LAB_20095342;
    piVar3 = (int *)FUN_20091bb0();
    break;
  default:
    goto switchD_200950e0_default;
  }
  local_4 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar1);
  }
switchD_200950e0_default:
  ExceptionList = local_c;
  return piVar3;
}

