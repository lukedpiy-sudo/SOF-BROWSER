// rea decompile_all
// name: FUN_5006a7c0
// address: 0x5006a7c0
// body: available
// range: 0x5006a7c0-0x5006a8a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_5006a7c0(void *this,uint param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_c;
  void *local_8;
  undefined4 local_4;
  
  piVar4 = *(int **)((int)this + 0xa8);
  while( true ) {
    if (piVar4 == *(int **)((int)this + 0xac)) {
      return (uint)*(int **)((int)this + 0xac) & 0xffffff00;
    }
    if (*(uint *)(*piVar4 + 8) == param_1) break;
    piVar4 = piVar4 + 1;
  }
  iVar5 = *(int *)(*piVar4 + 4);
  local_8 = this;
  if (((0 < iVar5) && (iVar5 < 0x28)) && (*(int *)(&DAT_5015c7bc + iVar5 * 4) != 0)) {
    pvVar1 = (void *)(*(int *)(&DAT_5015c7bc + iVar5 * 4) + 0x148);
    piVar2 = FUN_5006b380(pvVar1,&param_1);
    piVar3 = FUN_5000a7f0(pvVar1,&param_1);
    local_c = piVar3;
    while (local_c != piVar2) {
      FUN_5006b290((int *)&local_c);
    }
    FUN_5006b050(pvVar1,&local_4,piVar3,piVar2);
  }
  pvVar1 = local_8;
  if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar4)(1);
  }
  piVar3 = *(int **)((int)pvVar1 + 0xac);
  piVar2 = piVar4 + 1;
  if (piVar2 != piVar3) {
    iVar5 = (int)piVar4 - (int)piVar2;
    do {
      *(int *)(iVar5 + (int)piVar2) = *piVar2;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar3);
  }
  iVar5 = *(int *)((int)pvVar1 + 0xac) + -4;
  *(int *)((int)pvVar1 + 0xac) = iVar5;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

