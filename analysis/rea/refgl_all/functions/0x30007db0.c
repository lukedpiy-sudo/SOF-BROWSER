// rea decompile_all
// name: FUN_30007db0
// address: 0x30007db0
// body: available
// range: 0x30007db0-0x30007e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30007db0(void *this,undefined4 *param_1,int *param_2)

{
  int *this_00;
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  void *local_4;
  
  this_00 = param_2;
  bVar5 = true;
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  local_4 = this;
  if (piVar4 != *(int **)((int)this + 8)) {
    do {
      piVar3 = piVar4;
      uVar1 = FUN_30005e60(this_00,(int)(piVar3 + 3));
      bVar5 = (int)uVar1 < 0;
      if (bVar5) {
        piVar4 = (int *)*piVar3;
      }
      else {
        piVar4 = (int *)piVar3[2];
      }
    } while (piVar4 != *(int **)((int)this + 8));
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    puVar2 = (undefined4 *)FUN_30008290(this,&local_4,(int)piVar4,piVar3,(undefined1 *)this_00);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  param_2 = piVar3;
  if (bVar5) {
    if (piVar3 == (int *)**(int **)((int)this + 4)) {
      puVar2 = (undefined4 *)FUN_30008290(this,&local_4,(int)piVar4,piVar3,(undefined1 *)this_00);
      *param_1 = *puVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_30008550((int *)&param_2);
  }
  uVar1 = FUN_30005e60(param_2 + 3,(int)this_00);
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)FUN_30008290(this,&local_4,(int)piVar4,piVar3,(undefined1 *)this_00);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

