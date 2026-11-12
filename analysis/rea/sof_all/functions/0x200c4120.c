// rea decompile_all
// name: FUN_200c4120
// address: 0x200c4120
// body: available
// range: 0x200c4120-0x200c4211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200c4120(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  int *in_ECX;
  int *piVar6;
  void *unaff_EBP;
  int *piVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010dd7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x130);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    piVar7 = (int *)FUN_200d7120(*in_ECX,param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar7 + 0x14))(param_1);
  cVar2 = (**(code **)(*piVar7 + 0x18))();
  if (cVar2 != '\0') {
    FUN_200d7d50(param_1);
    piVar7[3] = 0;
    piVar7[4] = 0;
    iVar1 = *(int *)in_ECX[10];
    piVar6 = *(int **)(iVar1 + 4);
    piVar4 = operator_new(0xc);
    *piVar4 = iVar1;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar4;
    }
    piVar4[1] = (int)piVar6;
    *(int **)(iVar1 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    if (piVar4 + 2 != (int *)0x0) {
      piVar4[2] = (int)piVar7;
    }
    in_ECX[0xb] = in_ECX[0xb] + 1;
    iVar1 = *in_ECX;
    *(int **)(iVar1 + 0x38) = piVar7;
    ExceptionList = pvVar3;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  FUN_200eb490(param_1,s_Invalid_ghoul_model_20158248);
  uVar5 = (**(code **)*piVar7)(1);
  ExceptionList = unaff_EBP;
  return uVar5 & 0xffffff00;
}

