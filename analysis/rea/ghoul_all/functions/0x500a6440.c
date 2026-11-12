// rea decompile_all
// name: FUN_500a6440
// address: 0x500a6440
// body: available
// range: 0x500a6440-0x500a655b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_500a6440(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool bVar6;
  uint **ppuVar7;
  undefined1 *puVar8;
  undefined1 local_26;
  undefined1 local_25;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10 [4];
  
  local_10[0] = *param_1;
  local_10[1] = 0;
  bVar6 = true;
  piVar2 = *(int **)((int)this + 4);
  piVar1 = (int *)(*(int **)((int)this + 4))[1];
  while (piVar1 != *(int **)((int)this + 8)) {
    bVar6 = local_10[0] < (uint)piVar1[3];
    piVar2 = piVar1;
    if (bVar6) {
      piVar1 = (int *)*piVar1;
    }
    else {
      piVar1 = (int *)piVar1[2];
    }
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    piVar2 = (int *)FUN_5000aa70(this,&local_20,(int)piVar1,piVar2,local_10);
    return *piVar2 + 0x10;
  }
  local_24 = piVar2;
  if (bVar6) {
    piVar3 = (int *)FUN_500fc2d0(this,&local_1c);
    if (local_24 == (int *)*piVar3) {
      ppuVar7 = &param_1;
      param_1 = (uint *)CONCAT31(param_1._1_3_,1);
      puVar4 = (undefined4 *)FUN_5000aa70(this,&local_18,(int)piVar1,piVar2,local_10);
      FUN_50010d30(local_10 + 2,puVar4,(undefined1 *)ppuVar7);
      return local_10[2] + 0x10;
    }
    FUN_5000acc0((int *)&local_24);
  }
  if ((uint)local_24[3] < local_10[0]) {
    puVar8 = &local_26;
    local_26 = 1;
    ppiVar5 = (int **)FUN_5000aa70(this,&local_14,(int)piVar1,piVar2,local_10);
  }
  else {
    puVar8 = &local_25;
    local_25 = 0;
    ppiVar5 = &local_24;
  }
  FUN_50010d30(local_10 + 2,ppiVar5,puVar8);
  return local_10[2] + 0x10;
}

