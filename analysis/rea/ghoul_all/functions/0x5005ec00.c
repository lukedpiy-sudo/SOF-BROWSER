// rea decompile_all
// name: FUN_5005ec00
// address: 0x5005ec00
// body: available
// range: 0x5005ec00-0x5005eca1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_5005ec00(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x45c);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x40) + 0xc);
  uVar6 = (uint)*(ushort *)(*(int *)(iVar1 + 0x40c) + 0x30);
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x45c);
  if (*(int *)(uVar3 + 0x4c) == 0) {
    return uVar3 & 0xffffff00;
  }
  if (uVar6 == 0) {
    uVar4 = FUN_50061fb0(this,param_1);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (uVar6 == uVar2) {
    uVar4 = FUN_50062df0(*(void **)(uVar3 + 0x40c),param_1,(ushort)uVar2);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  iVar1 = *(int *)(*(int *)(uVar3 + 0x40) + 0xc);
  uVar5 = (undefined3)(uVar3 >> 8);
  if (*(int *)(uVar3 + 0x50) == 0) {
    *(int *)(uVar3 + 0x40) = *(int *)((int)this + 0x18) + (iVar1 + 1) * 0x34;
    return CONCAT31(uVar5,1);
  }
  *(int *)(uVar3 + 0x40) = *(int *)((int)this + 0x18) + -0x34 + iVar1 * 0x34;
  return CONCAT31(uVar5,1);
}

