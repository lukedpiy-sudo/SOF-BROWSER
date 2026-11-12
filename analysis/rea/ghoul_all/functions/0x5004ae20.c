// rea decompile_all
// name: FUN_5004ae20
// address: 0x5004ae20
// body: available
// range: 0x5004ae20-0x5004aed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5004ae20(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  if (this != (void *)param_1) {
    piVar1 = *(int **)((int)this + 4);
    puVar2 = *(undefined4 **)(param_1 + 4);
    piVar5 = (int *)*piVar1;
    for (puVar3 = (undefined4 *)*puVar2; (piVar5 != piVar1 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      piVar5[2] = puVar3[2];
      piVar5 = (int *)*piVar5;
    }
    while (piVar5 != piVar1) {
      piVar4 = (int *)*piVar5;
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
      FUN_50106b60((undefined *)piVar5);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      piVar5 = piVar4;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      piVar5 = (int *)piVar1[1];
      piVar4 = operator_new(0xc);
      *piVar4 = (int)piVar1;
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar4;
      }
      piVar4[1] = (int)piVar5;
      piVar1[1] = (int)piVar4;
      *(int **)piVar4[1] = piVar4;
      if (piVar4 + 2 != (int *)0x0) {
        piVar4[2] = puVar3[2];
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
  }
  return (int)this;
}

