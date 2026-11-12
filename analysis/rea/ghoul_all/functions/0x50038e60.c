// rea decompile_all
// name: FUN_50038e60
// address: 0x50038e60
// body: available
// range: 0x50038e60-0x50039436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_50038e60(undefined4 param_1)

{
  float fVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501137af;
  local_c = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(s_ERROR__only_allowed_to_use_leave_5014211c);
    goto LAB_500393c9;
  case 1:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x24);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_50039480(puVar2,0,0.0);
      *puVar2 = &PTR_LAB_501281a0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xa0);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_501280e8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xd8);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_50128030;
      puVar2[0x28] = 0;
      puVar2[0x29] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x34] = 0;
      puVar2[0x35] = 0;
      puVar2[0x31] = 0;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xe8);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_50127f78;
      puVar2[0x29] = 1;
      puVar2[0x28] = 1;
      puVar2[0x2a] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x31] = 0;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      puVar2[0x34] = 0;
      puVar2[0x35] = 0;
      puVar2[0x36] = 0;
      puVar2[0x37] = 0;
      puVar2[0x38] = 0;
      puVar2[0x39] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar2 = operator_new(200);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_50127ec0;
      puVar2[4] = 0;
      puVar2[0x28] = 0;
      puVar2[0x29] = DAT_5015ccdc;
      puVar2[0x2a] = DAT_5015ccdc;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x31] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xc0);
    local_4 = 5;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_50127e08;
      puVar2[4] = 0;
      puVar2[0x28] = 0;
      *(undefined1 *)(puVar2 + 0x2a) = 0;
      puVar2[0x29] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xb8);
    local_4 = 6;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,0,0.0);
      puVar2[0x28] = 0;
      puVar2[0x2a] = 1;
      puVar2[0x2b] = 1;
      puVar2[0x29] = 0;
      puVar2[0x2d] = 0;
      puVar2[0x2c] = 0;
      *puVar2 = &PTR_LAB_50127d48;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xb8);
    local_4 = 7;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003d420(puVar2,0,0,0.0);
      *puVar2 = &PTR_LAB_50127c88;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    this = operator_new(0xe8);
    local_4 = 8;
    if (this != (void *)0x0) {
      puVar2 = FUN_500402e0(this,0,0x19,0.0,0);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(s_ERROR__invalid_decision_class_co_501420f4,param_1);
LAB_500393c9:
    puVar2 = operator_new(0x24);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50127920;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0x3f000000;
      puVar2[1] = DAT_5015ccdc;
      puVar2[7] = DAT_5015ccdc;
      puVar2[8] = 0;
      fVar1 = DAT_5015ccdc + 1e+09;
      puVar2[6] = 0;
      puVar2[5] = fVar1;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xa0);
    local_4 = 9;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,10,0.0);
      *puVar2 = &PTR_LAB_50127bd0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xa0);
    local_4 = 10;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,8,0.0);
      *puVar2 = &PTR_LAB_50127b18;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xa4);
    local_4 = 0xb;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,5,0.0);
      *puVar2 = &PTR_LAB_50127a60;
      puVar2[0x28] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xe:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xa4);
    local_4 = 0xc;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5003a050(puVar2,0,2,0.0);
      *puVar2 = &PTR_LAB_501279a8;
      puVar2[0x28] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

