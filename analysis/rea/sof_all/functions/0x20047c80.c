// rea decompile_all
// name: FUN_20047c80
// address: 0x20047c80
// body: available
// range: 0x20047c80-0x20047d4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20047c80(undefined4 param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b2a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_20111dd8;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0xbe) = (undefined1)param_1;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  in_ECX[0xbf] = pvVar1;
  in_ECX[0xc0] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0xc1) = (undefined1)param_1;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  in_ECX[0xc2] = pvVar1;
  in_ECX[0xc3] = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0xc4) = (undefined1)param_1;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  in_ECX[0xc5] = pvVar1;
  in_ECX[0xc6] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_20111d88;
  *(undefined1 *)((int)in_ECX + 0x2f2) = 0;
  FUN_20047d70(param_1);
  ExceptionList = local_c;
  return;
}

