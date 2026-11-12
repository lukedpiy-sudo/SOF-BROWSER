// rea decompile_all
// name: FUN_200e6cc0
// address: 0x200e6cc0
// body: available
// range: 0x200e6cc0-0x200e6d68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e6cc0(undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fe5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0xbc);
  piVar5 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar5 = (int *)FUN_200d5250(in_ECX,param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar5 + 0x14))(param_1);
  iVar3 = *(int *)(in_ECX + 0x9c);
  piVar4 = *(int **)(iVar3 + 4);
  piVar2 = operator_new(0xc);
  *piVar2 = iVar3;
  if (piVar4 == (int *)0x0) {
    piVar4 = piVar2;
  }
  piVar2[1] = (int)piVar4;
  *(int **)(iVar3 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = (int)piVar5;
  }
  iVar3 = *(int *)(in_ECX + 0xa0) + 1;
  *(int *)(in_ECX + 0xa0) = iVar3;
  ExceptionList = pvVar1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

