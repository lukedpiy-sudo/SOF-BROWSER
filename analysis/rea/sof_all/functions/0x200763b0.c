// rea decompile_all
// name: FUN_200763b0
// address: 0x200763b0
// body: available
// range: 0x200763b0-0x20076533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200763b0(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar8 = (undefined2 *)param_2;
  puStack_8 = &LAB_2010be21;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined2 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *(undefined2 *)param_2;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)param_2 + 4);
    *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_2 + 5);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)((int)param_2 + 0x10);
    pvVar9 = operator_new(0x14);
    *(undefined4 *)((int)pvVar9 + 4) = 0;
    *(undefined1 *)((int)pvVar9 + 0x10) = 1;
    *(undefined1 *)((int)pvVar9 + 0x11) = 0;
    *(void **)(param_1 + 6) = pvVar9;
    *(undefined1 *)((int)pvVar9 + 0x11) = 1;
    **(undefined4 **)(param_1 + 6) = 0;
    *(undefined4 *)(*(int *)(param_1 + 6) + 8) = 0;
    uVar11 = *(undefined4 *)(param_1 + 6);
    pvVar9 = operator_new(0x14);
    *(undefined4 *)((int)pvVar9 + 4) = uVar11;
    *(undefined1 *)((int)pvVar9 + 0x10) = 0;
    *(undefined1 *)((int)pvVar9 + 0x11) = 0;
    *(void **)(param_1 + 4) = pvVar9;
    *(void **)pvVar9 = pvVar9;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 10) = 0;
    piVar3 = (int *)((int)param_2 + 8);
    param_2 = *(undefined4 **)(param_1 + 6);
    puVar2 = *(undefined4 **)(*piVar3 + 4);
    if (*(char *)((int)puVar2 + 0x11) == '\0') {
      puVar10 = (undefined4 *)
                FUN_20075a10(*(undefined4 *)(param_1 + 4),
                             CONCAT31((int3)((uint)*piVar3 >> 8),*(undefined1 *)(puVar2 + 4)));
      FUN_200a9420(puVar10 + 3,puVar2 + 3);
      *puVar10 = *(undefined4 *)(param_1 + 6);
      puVar10[2] = *(undefined4 *)(param_1 + 6);
      if (param_2 == *(undefined4 **)(param_1 + 6)) {
        param_2 = puVar10;
      }
      uVar11 = FUN_20075fe0(*puVar2,puVar10);
      *puVar10 = uVar11;
      uVar11 = FUN_20075fe0(puVar2[2],puVar10);
      puVar10[2] = uVar11;
    }
    *(undefined4 **)(*(int *)(param_1 + 4) + 4) = param_2;
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar8 + 10);
    piVar3 = *(int **)(param_1 + 4);
    piVar4 = (int *)piVar3[1];
    if (piVar4 != *(int **)(param_1 + 6)) {
      cVar1 = *(char *)(*piVar4 + 0x11);
      piVar7 = (int *)*piVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar7 + 0x11);
        piVar4 = piVar7;
        piVar7 = (int *)*piVar7;
      }
      *piVar3 = (int)piVar4;
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar6 = *(int *)(iVar5 + 8);
      cVar1 = *(char *)(iVar6 + 0x11);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x11);
        iVar5 = iVar6;
        iVar6 = *(int *)(iVar6 + 8);
      }
      *(int *)(*(int *)(param_1 + 4) + 8) = iVar5;
      ExceptionList = local_c;
      return;
    }
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  ExceptionList = local_c;
  return;
}

