// rea decompile_all
// name: FUN_500617f0
// address: 0x500617f0
// body: available
// range: 0x500617f0-0x50061914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 __thiscall FUN_500617f0(void *this,uint param_1)

{
  void *this_00;
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  uint *puVar6;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined2 local_c;
  int local_8 [2];
  
  if (((int)param_1 < 0) || (*(uint *)((int)this + 0x74) <= param_1)) {
    return 0;
  }
  this_00 = (void *)((int)this + 100);
  local_10 = param_1;
  local_c = 0;
  bVar1 = true;
  piVar2 = *(int **)((int)this + 0x68);
  piVar3 = (int *)(*(int **)((int)this + 0x68))[1];
  while (piVar3 != *(int **)((int)this + 0x6c)) {
    bVar1 = (int)param_1 < piVar3[3];
    piVar2 = piVar3;
    if (bVar1) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  if (*(char *)((int)this + 0x70) == '\0') {
    local_24 = piVar2;
    if (bVar1) {
      piVar5 = (int *)FUN_500fc2d0(this_00,&local_1c);
      if (local_24 == (int *)*piVar5) {
        puVar6 = (uint *)&local_27;
        local_27 = 1;
        ppiVar4 = (int **)FUN_5000a820(this_00,&local_18,(int)piVar3,piVar2,(int *)&local_10);
        goto LAB_500618f2;
      }
      FUN_5000acc0((int *)&local_24);
    }
    if (local_24[3] < (int)local_10) {
      puVar6 = (uint *)&local_26;
      local_26 = 1;
      ppiVar4 = (int **)FUN_5000a820(this_00,&local_14,(int)piVar3,piVar2,(int *)&local_10);
    }
    else {
      puVar6 = (uint *)&local_25;
      ppiVar4 = &local_24;
      local_25 = 0;
    }
  }
  else {
    puVar6 = &param_1;
    param_1 = CONCAT31(param_1._1_3_,1);
    ppiVar4 = (int **)FUN_5000a820(this_00,&local_20,(int)piVar3,piVar2,(int *)&local_10);
  }
LAB_500618f2:
  FUN_50010d30(local_8,ppiVar4,(undefined1 *)puVar6);
  return *(undefined2 *)(local_8[0] + 0x10);
}

