// rea decompile_all
// name: FUN_200e6d70
// address: 0x200e6d70
// body: available
// range: 0x200e6d70-0x200e6e0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e6d70(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 in_ECX;
  void *unaff_EBX;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fe7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0xb8);
  piVar3 = (int *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    piVar3 = (int *)FUN_200d4c20(in_ECX,param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x14))(param_1);
  cVar1 = (**(code **)(*piVar3 + 0x18))();
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    ExceptionList = unaff_EBX;
    return 0;
  }
  FUN_200e6410(piVar3,param_1);
  ExceptionList = pvVar2;
  return 1;
}

