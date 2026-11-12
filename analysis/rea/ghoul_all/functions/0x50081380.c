// rea decompile_all
// name: FUN_50081380
// address: 0x50081380
// body: available
// range: 0x50081380-0x5008149f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50081380(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (*(char *)((int)this + 0x4a8) != '\0') {
    iVar4 = *(int *)((int)this + 0x178);
    while (iVar4 != 0) {
      piVar6 = (int *)**(undefined4 **)((int)this + 0x174);
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1);
      }
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_50106b60((undefined *)piVar6);
      iVar4 = *(int *)((int)this + 0x178) + -1;
      *(int *)((int)this + 0x178) = iVar4;
    }
    *(undefined1 *)((int)this + 0x4a8) = 0;
  }
  if (*(int *)((int)this + 0x178) != 0) {
    puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x174);
    while ((puVar1 != *(undefined4 **)((int)this + 0x174) &&
           (*(float *)(puVar1[2] + 4) <= *(float *)(param_1 + 4)))) {
      puVar1 = (undefined4 *)*puVar1;
    }
    puVar5 = (undefined4 *)puVar1[1];
    puVar2 = operator_new(0xc);
    *puVar2 = puVar1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = puVar2;
    }
    puVar2[1] = puVar5;
    puVar1[1] = puVar2;
    *(undefined4 **)puVar2[1] = puVar2;
    if (puVar2 + 2 != (int *)0x0) {
      puVar2[2] = param_1;
    }
    *(int *)((int)this + 0x178) = *(int *)((int)this + 0x178) + 1;
    return param_1;
  }
  iVar4 = *(int *)((int)this + 0x174);
  piVar6 = *(int **)(iVar4 + 4);
  piVar3 = operator_new(0xc);
  *piVar3 = iVar4;
  if (piVar6 == (int *)0x0) {
    piVar6 = piVar3;
  }
  piVar3[1] = (int)piVar6;
  *(int **)(iVar4 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  *(int *)((int)this + 0x178) = *(int *)((int)this + 0x178) + 1;
  return param_1;
}

