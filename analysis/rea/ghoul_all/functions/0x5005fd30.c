// rea decompile_all
// name: FUN_5005fd30
// address: 0x5005fd30
// body: available
// range: 0x5005fd30-0x5005fe57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5005fd30(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 & 0xffff;
  iVar5 = uVar6 * 0x34;
  for (uVar7 = uVar6;
      (*(int *)((int)this + 0x18) != 0 &&
      (uVar7 < (uint)((*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34)));
      uVar7 = uVar7 + 1) {
    iVar2 = *(int *)((int)this + 0x18);
    iVar3 = *(int *)(iVar5 + 0x28 + iVar2);
    if (iVar3 != 0) {
      iVar1 = iVar2 + iVar3 * 0x34;
      if ((int)uVar6 <= iVar3) {
        *(int *)(iVar5 + 0x28 + iVar2) = iVar3 + 1;
      }
      iVar2 = *(int *)(iVar1 + 0x28);
      if ((int)uVar6 <= iVar2) {
        *(int *)(iVar1 + 0x28) = iVar2 + 1;
      }
    }
    iVar5 = iVar5 + 0x34;
  }
  iVar5 = *(int *)((int)this + 0x18);
  if (iVar5 != *(int *)((int)this + 0x1c)) {
    do {
      puVar4 = *(undefined4 **)(iVar5 + 0x30);
      while (puVar4 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar5 + 0x30) = *puVar4;
        FUN_50106b60((undefined *)puVar4);
        puVar4 = *(undefined4 **)(iVar5 + 0x30);
      }
      iVar5 = iVar5 + 0x34;
    } while (iVar5 != *(int *)((int)this + 0x1c));
  }
  puVar4 = *(undefined4 **)((int)this + 0x18);
  uVar7 = 0;
  do {
    if (puVar4 == *(undefined4 **)((int)this + 0x1c)) {
LAB_5005fe07:
      iVar5 = 0;
      for (uVar7 = 0;
          (*(int *)((int)this + 0x18) != 0 &&
          (uVar7 < (uint)((*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34)));
          uVar7 = uVar7 + 1) {
        *(uint *)(iVar5 + 0xc + *(int *)((int)this + 0x18)) = uVar7;
        iVar5 = iVar5 + 0x34;
      }
      FUN_5005fe60(this);
      return *(int *)((int)this + 0x18) + uVar6 * 0x34;
    }
    if (uVar7 == uVar6) {
      FUN_50063510((void *)((int)this + 0x14),puVar4,1,param_2);
      goto LAB_5005fe07;
    }
    puVar4 = puVar4 + 0xd;
    uVar7 = uVar7 + 1;
  } while( true );
}

