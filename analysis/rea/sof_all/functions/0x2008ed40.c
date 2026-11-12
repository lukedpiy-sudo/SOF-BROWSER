// rea decompile_all
// name: FUN_2008ed40
// address: 0x2008ed40
// body: available
// range: 0x2008ed40-0x2008edad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008ed40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 local_24 [12];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c6e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200be300(param_2,param_3);
  local_4 = 0;
  piVar1 = (int *)FUN_20069630(1,0);
  puVar2 = local_24;
  (**(code **)(*piVar1 + 100))(param_1,local_24,param_4);
  FUN_200f9f75(puVar2);
  ExceptionList = pvStack_18;
  return;
}

