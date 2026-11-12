// rea decompile_all
// name: FUN_200e68a0
// address: 0x200e68a0
// body: available
// range: 0x200e68a0-0x200e697c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e68a0(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fdbb;
  local_c = ExceptionList;
  if (*(char *)(in_ECX + 0x8b) == '\0') {
    ExceptionList = &local_c;
    pvVar2 = operator_new(0x120);
    piVar4 = (int *)0x0;
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      piVar4 = (int *)FUN_200d1e80(in_ECX,param_1);
    }
    local_4 = 0xffffffff;
    cVar1 = (**(code **)(*piVar4 + 0x18))();
    if (cVar1 != '\0') {
      (**(code **)(*piVar4 + 0x14))(param_1);
      FUN_200e6410(piVar4,param_1);
      ExceptionList = pvVar2;
      return 1;
    }
    uVar3 = FUN_200eb440(0);
    FUN_200eb490(param_1,s_Unable_to_find___s__201591c0,uVar3);
    (**(code **)*piVar4)(1);
    FUN_200eb420();
  }
  else {
    ExceptionList = &local_c;
    FUN_200eb490(param_1,s_No_rects_allowed_after_a_variabl_20159158);
  }
  ExceptionList = local_c;
  return 0;
}

