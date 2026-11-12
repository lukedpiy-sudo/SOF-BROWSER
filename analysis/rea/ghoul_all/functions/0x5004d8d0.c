// rea decompile_all
// name: FUN_5004d8d0
// address: 0x5004d8d0
// body: available
// range: 0x5004d8d0-0x5004db98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_5004d8d0(undefined4 param_1)

{
  float fVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113b37;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x58);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5004dbc0(puVar2);
      *puVar2 = &PTR_LAB_50128668;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x58);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5004dbc0(puVar2);
      *puVar2 = &PTR_LAB_50128618;
      puVar2[0x15] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x58);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5004dbc0(puVar2);
      puVar2[0x15] = 0;
      *puVar2 = &PTR_LAB_50125100;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x1c0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50125150;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = DAT_5015ccdc;
      puVar2[0x12] = DAT_5015ccdc - 1.0;
      fVar1 = DAT_5015ccdc - 1.0;
      puVar2[0x14] = 0;
      puVar2[0x11] = 1;
      puVar2[0xf] = 0xc61c4000;
      puVar2[0x13] = fVar1;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xb] = 0;
      puVar2[0x10] = 0;
      puVar2[9] = 0xc61c4000;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      *puVar2 = &PTR_LAB_501250b8;
      puVar2[0x6f] = 0;
      puVar2[5] = 0;
      puVar2[10] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x58);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5004dbc0(puVar2);
      puVar2[0x15] = 0;
      *puVar2 = &PTR_LAB_501285c8;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x5c);
    local_4 = 4;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5004dbc0(puVar2);
      puVar2[0x15] = 0;
      *puVar2 = &PTR_LAB_50128578;
      puVar2[0x16] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  default:
    ExceptionList = &local_c;
    (*DAT_5015ca24)(s_ERROR__invalid_sense_class_code__50142df0,param_1);
  case 0:
    puVar2 = operator_new(0x54);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50125150;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = DAT_5015ccdc;
      puVar2[0x12] = DAT_5015ccdc - 1.0;
      fVar1 = DAT_5015ccdc - 1.0;
      puVar2[0x14] = 0;
      puVar2[0x11] = 1;
      puVar2[0xf] = 0xc61c4000;
      puVar2[0x13] = fVar1;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xb] = 0;
      puVar2[0x10] = 0;
      puVar2[9] = 0xc61c4000;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[5] = 0;
      puVar2[10] = 0;
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

