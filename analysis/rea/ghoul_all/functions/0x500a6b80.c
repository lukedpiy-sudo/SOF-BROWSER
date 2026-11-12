// rea decompile_all
// name: FUN_500a6b80
// address: 0x500a6b80
// body: available
// range: 0x500a6b80-0x500a6c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a6b80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_3;
  piVar3 = param_2;
  if (((*(int *)((int)this + 0x10) != 0) &&
      (piVar1 = *(int **)((int)this + 4), param_2 == (int *)*piVar1)) && (param_3 == piVar1)) {
    piVar3 = (int *)piVar1[1];
    if ((int *)piVar1[1] != *(int **)((int)this + 8)) {
      do {
        FUN_500a6d70(this,(int *)piVar3[2]);
        piVar2 = (int *)*piVar3;
        FUN_50106b60((undefined *)piVar3);
        piVar3 = piVar2;
      } while (piVar2 != (int *)*(int *)((int)this + 8));
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar3 != piVar2) {
    param_2 = piVar3;
    FUN_5006b290((int *)&param_2);
    FUN_500c4640(this,&param_3,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return;
}

