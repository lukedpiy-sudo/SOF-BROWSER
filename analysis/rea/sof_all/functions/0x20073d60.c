// rea decompile_all
// name: FUN_20073d60
// address: 0x20073d60
// body: available
// range: 0x20073d60-0x20073e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20073d60(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 *in_ECX;
  
  puVar9 = (undefined1 *)param_1;
  *in_ECX = *(undefined1 *)param_1;
  in_ECX[1] = *(undefined1 *)((int)param_1 + 1);
  in_ECX[0xc] = *(undefined1 *)((int)param_1 + 0xc);
  pvVar10 = operator_new(0x14);
  *(undefined4 *)((int)pvVar10 + 4) = 0;
  *(undefined1 *)((int)pvVar10 + 0x10) = 1;
  *(undefined1 *)((int)pvVar10 + 0x11) = 0;
  *(void **)(in_ECX + 8) = pvVar10;
  *(undefined1 *)((int)pvVar10 + 0x11) = 1;
  **(undefined4 **)(in_ECX + 8) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
  uVar12 = *(undefined4 *)(in_ECX + 8);
  pvVar10 = operator_new(0x14);
  *(undefined4 *)((int)pvVar10 + 4) = uVar12;
  *(undefined1 *)((int)pvVar10 + 0x10) = 0;
  *(undefined1 *)((int)pvVar10 + 0x11) = 0;
  *(void **)(in_ECX + 4) = pvVar10;
  *(void **)pvVar10 = pvVar10;
  *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  puVar3 = *(undefined4 **)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  piVar1 = (int *)((int)param_1 + 4);
  puVar4 = *(undefined4 **)(*piVar1 + 4);
  param_1 = puVar3;
  if (*(char *)((int)puVar4 + 0x11) == '\0') {
    puVar11 = (undefined4 *)
              FUN_20075a10(*(undefined4 *)(in_ECX + 4),
                           CONCAT31((int3)((uint)*piVar1 >> 8),*(undefined1 *)(puVar4 + 4)));
    FUN_200a9420(puVar11 + 3,puVar4 + 3);
    *puVar11 = *(undefined4 *)(in_ECX + 8);
    puVar11[2] = *(undefined4 *)(in_ECX + 8);
    if (puVar3 == *(undefined4 **)(in_ECX + 8)) {
      param_1 = puVar11;
    }
    uVar12 = FUN_20075fe0(*puVar4,puVar11);
    *puVar11 = uVar12;
    uVar12 = FUN_20075fe0(puVar4[2],puVar11);
    puVar11[2] = uVar12;
  }
  *(undefined4 **)(*(int *)(in_ECX + 4) + 4) = param_1;
  piVar1 = *(int **)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(puVar9 + 0x10);
  piVar5 = (int *)piVar1[1];
  if (piVar5 == *(int **)(in_ECX + 8)) {
    *piVar1 = (int)piVar1;
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    return;
  }
  cVar2 = *(char *)(*piVar5 + 0x11);
  piVar8 = (int *)*piVar5;
  while (cVar2 == '\0') {
    cVar2 = *(char *)(*piVar8 + 0x11);
    piVar5 = piVar8;
    piVar8 = (int *)*piVar8;
  }
  *piVar1 = (int)piVar5;
  iVar6 = *(int *)(*(int *)(in_ECX + 4) + 4);
  iVar7 = *(int *)(iVar6 + 8);
  cVar2 = *(char *)(iVar7 + 0x11);
  while (cVar2 == '\0') {
    cVar2 = *(char *)(*(int *)(iVar7 + 8) + 0x11);
    iVar6 = iVar7;
    iVar7 = *(int *)(iVar7 + 8);
  }
  *(int *)(*(int *)(in_ECX + 4) + 8) = iVar6;
  return;
}

