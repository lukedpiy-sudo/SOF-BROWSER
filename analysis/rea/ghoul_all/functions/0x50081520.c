// rea decompile_all
// name: FUN_50081520
// address: 0x50081520
// body: available
// range: 0x50081520-0x500815ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50081520(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar2 = operator_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_5012965c;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
  }
  piVar4 = (int *)**(int **)((int)this + 0x150);
  if (piVar4 != *(int **)((int)this + 0x150)) {
    do {
      if (*(int *)(piVar4[2] + 8) == puVar2[2]) {
        FUN_500817d0(this,(byte *)s_Renner_Error__1__Variable___s__i_50145e40);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x150));
  }
  iVar1 = *(int *)((int)this + 0x150);
  piVar4 = *(int **)(iVar1 + 4);
  piVar3 = operator_new(0xc);
  *piVar3 = iVar1;
  if (piVar4 == (int *)0x0) {
    piVar4 = piVar3;
  }
  piVar3[1] = (int)piVar4;
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)puVar2;
  }
  *(int *)((int)this + 0x154) = *(int *)((int)this + 0x154) + 1;
  return;
}

