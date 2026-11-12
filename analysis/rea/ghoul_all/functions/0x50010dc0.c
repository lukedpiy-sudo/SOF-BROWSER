// rea decompile_all
// name: FUN_50010dc0
// address: 0x50010dc0
// body: available
// range: 0x50010dc0-0x50011162 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_50010dc0(undefined4 param_1)

{
  float fVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_1) {
  case 4:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x1ec);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_50031840(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x90);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_5001b120(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x90);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_5001b2e0(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(s_ERROR__invalid_body_class_code____5012f7e0,param_1);
  case 3:
    puVar2 = operator_new(0x1ec);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_50033550(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x1ec);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_50037080(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x1b8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_50126470;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 1;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = DAT_5015ccdc;
      puVar2[7] = 1;
      puVar2[8] = 0;
      puVar2[9] = DAT_5015ccdc - 10.0;
      fVar1 = DAT_5015ccdc - 10.0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[10] = fVar1;
      fVar1 = DAT_5015ccdc;
      puVar2[0xe] = 0;
      puVar2[0xd] = fVar1;
      *(undefined1 *)(puVar2 + 0xf) = 0;
      *(undefined1 *)((int)puVar2 + 0x3d) = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1f] = 0;
      *puVar2 = &PTR_FUN_50126338;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 10:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xac);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_FUN_50126470;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 1;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = DAT_5015ccdc;
      puVar2[7] = 1;
      puVar2[8] = 0;
      puVar2[9] = DAT_5015ccdc - 10.0;
      fVar1 = DAT_5015ccdc - 10.0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[10] = fVar1;
      fVar1 = DAT_5015ccdc;
      puVar2[0xe] = 0;
      puVar2[0xd] = fVar1;
      *(undefined1 *)(puVar2 + 0xf) = 0;
      *(undefined1 *)((int)puVar2 + 0x3d) = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1e] = 0;
      *puVar2 = &PTR_FUN_501261f8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    puVar2 = operator_new(0xc0);
    local_4 = 5;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_50011190(puVar2);
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2c] = 0;
      puVar2[0x2d] = 0;
      *puVar2 = &PTR_FUN_501260b0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xc:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x94);
    local_4 = 6;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_50015520(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    puVar2 = operator_new(500);
    local_4 = 7;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_50016d80(puVar2);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

