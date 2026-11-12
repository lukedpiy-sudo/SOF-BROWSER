// rea decompile_all
// name: FUN_200e7160
// address: 0x200e7160
// body: available
// range: 0x200e7160-0x200e726d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200e7160(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010ff3b;
  local_c = ExceptionList;
  if (*(char *)(in_ECX + 0x8b) != '\0') {
    ExceptionList = &local_c;
    uVar2 = FUN_200eb490(param_1,s_No_rects_allowed_after_a_variabl_20159158);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  if (*(int *)(in_ECX + 0x74) == *(int *)(in_ECX + 0x70)) {
    iVar3 = (*DAT_20403640)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + iVar3;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(in_ECX + 0x70) = uVar1;
  *(undefined4 *)(in_ECX + 0x6c) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar1;
  pvVar4 = operator_new(0x94);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_200dccc0(in_ECX,param_1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0x14))(param_1);
  FUN_200e6410(piVar5,param_1);
  *(undefined4 *)(in_ECX + 0x68) = 0;
  if (*(int *)(in_ECX + 0x74) == *(int *)(in_ECX + 0x70)) {
    iVar3 = (*DAT_20403640)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x74) = *(int *)(in_ECX + 0x74) + iVar3;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x74);
  *(undefined4 *)(in_ECX + 0x70) = uVar1;
  *(undefined4 *)(in_ECX + 0x6c) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar1;
  ExceptionList = pvVar4;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

