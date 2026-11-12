// rea decompile_all
// name: FUN_50010ba0
// address: 0x50010ba0
// body: available
// range: 0x50010ba0-0x50010cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50010ba0(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  undefined1 *puVar7;
  undefined1 local_26;
  undefined1 local_25;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  local_10[0] = *param_1;
  local_10[1] = 0;
  bVar1 = true;
  piVar3 = *(int **)((int)this + 4);
  piVar2 = (int *)(*(int **)((int)this + 4))[1];
  while (piVar2 != *(int **)((int)this + 8)) {
    bVar1 = local_10[0] < piVar2[3];
    piVar3 = piVar2;
    if (bVar1) {
      piVar2 = (int *)*piVar2;
    }
    else {
      piVar2 = (int *)piVar2[2];
    }
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    piVar3 = (int *)FUN_5000a820(this,&local_20,(int)piVar2,piVar3,local_10);
    return *piVar3 + 0x10;
  }
  local_24 = piVar3;
  if (bVar1) {
    piVar4 = (int *)FUN_500fc2d0(this,&local_1c);
    if (local_24 == (int *)*piVar4) {
      ppiVar6 = &param_1;
      param_1 = (int *)CONCAT31(param_1._1_3_,1);
      puVar5 = (undefined4 *)FUN_5000a820(this,&local_18,(int)piVar2,piVar3,local_10);
      FUN_50010d30(local_10 + 2,puVar5,(undefined1 *)ppiVar6);
      return local_10[2] + 0x10;
    }
    FUN_5000acc0((int *)&local_24);
  }
  if (local_24[3] < local_10[0]) {
    puVar7 = &local_26;
    local_26 = 1;
    ppiVar6 = (int **)FUN_5000a820(this,&local_14,(int)piVar2,piVar3,local_10);
  }
  else {
    puVar7 = &local_25;
    local_25 = 0;
    ppiVar6 = &local_24;
  }
  FUN_50010d30(local_10 + 2,ppiVar6,puVar7);
  return local_10[2] + 0x10;
}

