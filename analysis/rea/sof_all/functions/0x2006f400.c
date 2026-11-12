// rea decompile_all
// name: FUN_2006f400
// address: 0x2006f400
// body: available
// range: 0x2006f400-0x2006f5fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006f400(undefined4 param_1,undefined2 param_2)

{
  undefined4 *in_ECX;
  undefined1 local_12;
  undefined1 local_11 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_2010bb1f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_20111fd8;
  *(undefined1 *)(in_ECX + 6) = (undefined1)param_2;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = (undefined1)param_2;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0xe) = (undefined1)param_2;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x13] = 0;
  *(undefined1 *)(in_ECX + 0x12) = (undefined1)param_2;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x16) = (undefined1)param_2;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  local_4 = 4;
  uStack_3 = 0;
  *(undefined1 *)(in_ECX + 0x1a) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0x69) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  FUN_20085140();
  in_ECX[0x20] = 0;
  *(undefined1 *)(in_ECX + 0x1f) = (undefined1)param_2;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 0x23) = (undefined1)param_2;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x28] = 0;
  *(undefined1 *)(in_ECX + 0x27) = (undefined1)param_2;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2c] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = (undefined1)param_2;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x2f) = (undefined1)param_2;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x34] = 0;
  *(undefined1 *)(in_ECX + 0x33) = (undefined1)param_2;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x38] = 0;
  *(undefined1 *)(in_ECX + 0x37) = (undefined1)param_2;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  local_4 = 0xc;
  *(undefined1 *)(in_ECX + 0x3b) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0xed) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x3e) = 0;
  FUN_200739b0();
  _local_4 = CONCAT31(uStack_3,0xd);
  FUN_20083db0(local_11,0,&local_12);
  in_ECX[2] = param_1;
  *(undefined2 *)(in_ECX + 1) = param_2;
  *in_ECX = &PTR_FUN_20111f60;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  in_ECX[0x4c] = 0;
  *(undefined1 *)(in_ECX + 0x4b) = 0;
  *(undefined1 *)((int)in_ECX + 0x117) = 0;
  *(undefined1 *)((int)in_ECX + 0x116) = 0;
  *(undefined1 *)((int)in_ECX + 0x115) = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  ExceptionList = local_c;
  return;
}

