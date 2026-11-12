// rea decompile_all
// name: FUN_50081730
// address: 0x50081730
// body: available
// range: 0x50081730-0x500817cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50081730(void *this,uint param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((*(int *)((int)this + 0x160) != 0) &&
     (piVar3 = (int *)**(int **)((int)this + 0x15c), piVar3 != *(int **)((int)this + 0x15c))) {
    do {
      if (*(int *)((int)this + 0x10c) == 0x80) {
        (**(code **)(*(int *)piVar3[2] + 0x24))();
      }
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x15c));
  }
  piVar3 = *(int **)((int)this + 0x15c);
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_50106b60((undefined *)piVar2);
    *(int *)((int)this + 0x160) = *(int *)((int)this + 0x160) + -1;
    piVar2 = piVar1;
  }
  if (param_2 != '\0') {
    FUN_500818d0(this,param_1,0);
  }
  return;
}

