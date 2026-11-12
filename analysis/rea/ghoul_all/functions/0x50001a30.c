// rea decompile_all
// name: FUN_50001a30
// address: 0x50001a30
// body: available
// range: 0x50001a30-0x50003574 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_50001a30(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50112ed3;
  local_c = ExceptionList;
  switch(param_1) {
  case 6:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_50124418;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  default:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(s_ERROR__invalid_ai_class_code___d_5012f4bc,param_1);
    this = operator_new(0x270);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_50004710(this,0);
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x2a0);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_501241c8;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x2a4);
    local_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_500ec520(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x2a4);
    local_4 = 4;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_500e9cb0(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 5;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_50123fa0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 6;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_50123d78;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x278);
    local_4 = 7;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_50123b30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xe:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 8;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50004710(puVar1,0);
      *puVar1 = &PTR_LAB_501238f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0xf:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 9;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501236b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x10:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 10;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50123470;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x11:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0xb;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50123230;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x12:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0xc;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122ff0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x13:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0xd;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122db0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x14:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0xe;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122b70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x15:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0xf;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122930;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x16:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x10;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501226f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x17:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x11;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501224b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x18:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x12;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122270;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x19:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x13;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50122030;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x14;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50121df0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x15;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50121bb0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x16;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50121970;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x17;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50121730;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x18;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501214f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x1f:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x19;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501212b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x20:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1a;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50121070;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x21:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1b;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50120e30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x22:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1c;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50120bf0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x23:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1d;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501209b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x24:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1e;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50120770;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x25:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x1f;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_50120530;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x26:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x20;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501202f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x27:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x21;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_501200b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x28:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x22;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011fe70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x29:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x23;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011fc30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x24;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011f9f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x25;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011f7b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x26;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011f570;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x27;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011f330;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x28;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011f0f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x2f:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x29;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011eeb0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x30:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2a;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011ec70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x31:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2b;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011ea30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x32:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2c;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011e7f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x33:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2d;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011e5b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x34:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2e;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011e370;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x35:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x2f;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011e130;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x36:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x30;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011def0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x37:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x31;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011dcb0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x38:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x34;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011d5f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x39:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x35;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011d3b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x36;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011d170;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x37;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011cf30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x38;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011ccf0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x39;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011cab0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3a;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011c870;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x3f:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3b;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011c630;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x40:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3c;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011c3f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x41:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3d;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011c1b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x42:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3e;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011bf70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x43:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x3f;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011bd30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x44:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x40;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011baf0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x45:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x41;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011b8b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x46:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x42;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011b670;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x47:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x43;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011b430;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x48:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x44;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011b1f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x49:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x45;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011afb0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x46;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011ad70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x47;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011ab30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x48;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011a8f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x49;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011a6b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4a;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011a470;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x4f:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4b;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_5011a230;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x50:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4c;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119ff0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x51:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4d;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119db0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x52:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4e;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119b70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x53:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x4f;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119930;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x54:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x50;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_501196f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x55:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x56;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50118970;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x56:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x51;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_501194b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x57:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x52;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119270;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x58:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x53;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50119030;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x59:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x54;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50118df0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x55;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50118bb0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x57;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50118730;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x32;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011da70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x33;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50009530(puVar1);
      *puVar1 = &PTR_LAB_5011d830;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x58;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_501184f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x5f:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x59;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_501182b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x60:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5a;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50118070;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x61:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5b;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50117e30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x62:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5c;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_50117bf0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 99:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5d;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003760(puVar1);
      *puVar1 = &PTR_LAB_501179b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 100:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5e;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50117770;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x65:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x5f;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50117530;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x66:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x60;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_501172f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x67:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x61;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_501170b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x68:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x62;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50116e70;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x69:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 99;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50116c30;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x6a:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 100;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_501169f0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x6b:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x65;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_501167b0;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x6c:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x66;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50116570;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x6d:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x67;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_50116330;
      ExceptionList = local_c;
      return puVar1;
    }
    break;
  case 0x6e:
    ExceptionList = &local_c;
    puVar1 = operator_new(0x270);
    local_4 = 0x68;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_50003780(puVar1);
      *puVar1 = &PTR_LAB_501160f0;
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

