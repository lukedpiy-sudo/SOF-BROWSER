// rea decompile_all
// name: FUN_500156e0
// address: 0x500156e0
// body: available
// range: 0x500156e0-0x5001589a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500156e0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  
  (**(code **)(*(int *)this + 0x134))(param_1);
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x60)) {
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar2 + 0x28 + *(int *)((int)this + 100)) = 0;
      *(undefined4 *)(iVar2 + 0x24 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 8 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 6 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 2 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 0x14 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 4 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 0xc + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar2 + 10 + *(int *)((int)this + 100)) = 0;
      *(undefined4 *)(iVar2 + 0x10 + *(int *)((int)this + 100)) = 0;
      *(undefined **)(iVar2 + 0x20 + *(int *)((int)this + 100)) = &DAT_5012fb04;
      *(undefined4 *)(iVar2 + 0x18 + *(int *)((int)this + 100)) = *(undefined4 *)((int)this + 0x60);
      iVar2 = iVar2 + 0x30;
    } while (iVar5 < *(int *)((int)this + 0x60));
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar4 = (**(code **)(*piVar3 + 0x1c))(s__body_1_5012fc3c);
  sVar6 = (short)uVar4;
  if (sVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar4);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 2) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fba0);
      *(short *)(*(int *)((int)this + 100) + 0x32) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fb94);
      *(short *)(*(int *)((int)this + 100) + 0x62) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fb88);
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fb7c);
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fb70);
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar6;
      FUN_5001ce30(this,param_1,0x5012fb64);
    }
  }
  FUN_5001d030(this,param_1,0x5012fc30);
  FUN_5001d030(this,param_1,0x5012fc24);
  FUN_5001d030(this,param_1,0x5012fc14);
  FUN_5001d030(this,param_1,0x5012fc04);
  FUN_5001d030(this,param_1,0x5012fbf4);
  FUN_5001d030(this,param_1,0x5012fbe4);
  return;
}

