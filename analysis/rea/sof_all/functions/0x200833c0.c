// rea decompile_all
// name: FUN_200833c0
// address: 0x200833c0
// body: available
// range: 0x200833c0-0x200834b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200833c0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int in_ECX;
  undefined4 *puVar11;
  
  uVar10 = *(undefined4 *)(in_ECX + 4);
  puVar11 = *(undefined4 **)(in_ECX + 8);
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    uVar1 = *(undefined1 *)(puVar3 + 4);
    puVar9 = operator_new(0x14);
    puVar9[1] = uVar10;
    *(undefined1 *)(puVar9 + 4) = uVar1;
    *(undefined1 *)((int)puVar9 + 0x11) = 0;
    FUN_200a9420(puVar9 + 3,puVar3 + 3);
    *puVar9 = *(undefined4 *)(in_ECX + 8);
    puVar9[2] = *(undefined4 *)(in_ECX + 8);
    if (puVar11 == *(undefined4 **)(in_ECX + 8)) {
      puVar11 = puVar9;
    }
    uVar10 = FUN_20084d40(*puVar3,puVar9);
    *puVar9 = uVar10;
    uVar10 = FUN_20084d40(puVar3[2],puVar9);
    puVar9[2] = uVar10;
  }
  *(undefined4 **)(*(int *)(in_ECX + 4) + 4) = puVar11;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  piVar4 = *(int **)(in_ECX + 4);
  piVar5 = (int *)piVar4[1];
  if (piVar5 == *(int **)(in_ECX + 8)) {
    *piVar4 = (int)piVar4;
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
  *piVar4 = (int)piVar5;
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

