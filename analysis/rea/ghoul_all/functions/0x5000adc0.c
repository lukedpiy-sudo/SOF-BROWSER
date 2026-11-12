// rea decompile_all
// name: FUN_5000adc0
// address: 0x5000adc0
// body: available
// range: 0x5000adc0-0x5000b3bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_5000adc0(undefined4 param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113292;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    param_1 = 0;
    pcVar2 = s_ERROR__only_allowed_to_use_leave_5012f628;
    goto LAB_5000b372;
  case 1:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125230;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125e00;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125d78;
      *(undefined1 *)(puVar1 + 0x1d) = 0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *(undefined1 *)(puVar1 + 0x1d) = 0;
      *puVar1 = &PTR_FUN_50125cf0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 4;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *(undefined1 *)(puVar1 + 0x1d) = 0;
      *puVar1 = &PTR_FUN_50125c68;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 5;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125be0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 6;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125198;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 7;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125b50;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 8;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_501253d8;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x78);
    local_4 = 9;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125470;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 10;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125ac0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x70);
    local_4 = 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125a30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x78);
    local_4 = 0xc;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50010b80(puVar1);
      *puVar1 = &PTR_FUN_50125340;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xe:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x7c);
    local_4 = 0xd;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50010b80(puVar1);
      *puVar1 = &PTR_FUN_50125998;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xf:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0xe;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125900;
      puVar1[0x1c] = 0xffffffff;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x10:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0xf;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      puVar1[0x1c] = 0xffffffff;
      *puVar1 = &PTR_FUN_50125868;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x11:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0x10;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      puVar1[0x1c] = 0xffffffff;
      *puVar1 = &PTR_FUN_501257d0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x12:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0x11;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      puVar1[0x1c] = 0xffffffff;
      *puVar1 = &PTR_FUN_50125738;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x13:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0x12;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      puVar1[0x1c] = 0xffffffff;
      *puVar1 = &PTR_FUN_501256a0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x14:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0x13;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125608;
      puVar1[0x1c] = 0xffffffff;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x15:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0x14;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5000b600(puVar1);
      *puVar1 = &PTR_FUN_50125570;
      puVar1[0x1c] = 0xffffffff;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  default:
    pcVar2 = s_ERROR__invalid_action_class_code_5012f600;
LAB_5000b372:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(pcVar2,param_1);
    puVar1 = operator_new(0x70);
    local_4 = 0x15;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_5000b600(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

