// rea decompile_all
// name: FUN_5007bf20
// address: 0x5007bf20
// body: available
// range: 0x5007bf20-0x5007c1e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007bf20(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *local_4;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  local_4 = (int *)CONCAT31((int3)((uint)param_1 >> 8),uVar1);
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  switch(uVar1) {
  case 0:
    piVar2 = operator_new(0x50);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 0;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_50129328;
      piVar2[0x13] = 0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 1:
    piVar2 = operator_new(0x50);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 1;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_501293f0;
      piVar2[0x13] = 0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 2:
    piVar2 = operator_new(0x58);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 2;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_50129458;
      piVar2[0x13] = 0;
      piVar2[0x14] = 0;
      piVar2[0x15] = 0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 3:
    piVar2 = operator_new(0x50);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 3;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_501294c0;
      piVar2[0x13] = DAT_5015cca0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 4:
    piVar2 = operator_new(0x8c);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 4;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_50129528;
      _strncpy((char *)(piVar2 + 0x13),&DAT_5015911c,0x40);
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 5:
    piVar2 = operator_new(0x50);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 5;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_50129590;
      piVar2[0x13] = 0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 6:
    piVar2 = operator_new(0x54);
    if (piVar2 != (int *)0x0) {
      *piVar2 = (int)&PTR_LAB_50129390;
      _strncpy((char *)(piVar2 + 1),&DAT_5015911c,0x40);
      piVar2[0x11] = 5;
      piVar2[0x12] = -1;
      *piVar2 = (int)&PTR_FUN_501295f8;
      piVar2[0x13] = 0;
      piVar2[0x14] = 0;
      (**(code **)(*piVar2 + 0x18))(param_1);
      local_4 = piVar2;
      goto switchD_5007bf54_default;
    }
    break;
  case 7:
    local_4 = FUN_5007b9a0(param_1);
  default:
    goto switchD_5007bf54_default;
  }
  (**(code **)(iRam00000000 + 0x18))(param_1);
  local_4 = (int *)0x0;
switchD_5007bf54_default:
  if (local_4 == (int *)0x0) {
    FUN_500817d0(param_1,(byte *)s_Illegal_push_5014573c);
  }
  FUN_500825e0((void *)(param_1 + 0x140),(int *)&local_4);
  return;
}

