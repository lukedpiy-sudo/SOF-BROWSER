// rea decompile_all
// name: FUN_500815d0
// address: 0x500815d0
// body: available
// range: 0x500815d0-0x500816a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500815d0(void *this,uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  
  bVar4 = false;
  if ((*(int *)((int)this + 0x154) != 0) &&
     (piVar6 = (int *)**(int **)((int)this + 0x150), piVar6 != *(int **)((int)this + 0x150))) {
    do {
      iVar1 = piVar6[2];
      piVar2 = (int *)*piVar6;
      if ((param_2 == *(int *)(iVar1 + 0xc)) && (*(uint *)(iVar1 + 4) == param_1)) {
        (**(code **)(**(int **)(iVar1 + 8) + 0x20))(param_1);
        puVar3 = (undefined4 *)piVar6[2];
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = &PTR_FUN_5012965c;
          if ((undefined4 *)puVar3[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)puVar3[2])(1);
          }
          FUN_50106b60((undefined *)puVar3);
        }
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        FUN_50106b60((undefined *)piVar6);
        bVar4 = true;
        *(int *)((int)this + 0x154) = *(int *)((int)this + 0x154) + -1;
      }
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x150));
    if ((bVar4) &&
       (((*(int *)((int)this + 0x108) == 4 || (*(int *)((int)this + 0x108) == 3)) &&
        (uVar5 = FUN_500816b0((int)this), (char)uVar5 != '\0')))) {
      FUN_50081730(this,param_1,'\x01');
    }
  }
  return;
}

