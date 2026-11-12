// rea decompile_all
// name: FUN_5006a9e0
// address: 0x5006a9e0
// body: available
// range: 0x5006a9e0-0x5006ab0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5006a9e0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return;
  }
  pbVar2 = *(byte **)(param_1 + 0x1c4);
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar7 = *(byte **)((int)this + 0xcc);
  pbVar4 = pbVar2;
  if (pbVar7 != (byte *)0x0) {
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_5006aa38:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_5006aa3d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_5006aa38;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_5006aa3d:
    if (iVar5 == 0) goto LAB_5006aab8;
  }
  puVar3 = *(undefined4 **)((int)this + 200);
  while (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 200) = puVar3[1];
    (**(code **)*puVar3)(1);
    puVar3 = *(undefined4 **)((int)this + 200);
  }
  for (uVar6 = FUN_500c26a0(0,0x1c8,(char *)pbVar2,(void *)0x0); uVar6 != 0;
      uVar6 = FUN_500c26a0(uVar6,0x1c8,(char *)pbVar2,(void *)0x0)) {
    iVar5 = *(int *)(uVar6 + 0x460);
    if (((0 < iVar5) && (iVar5 < 0x28)) &&
       (iVar5 = FUN_500665d0(*(void **)(&DAT_5015c7bc + iVar5 * 4),uVar6), iVar5 != 0)) {
      FUN_5006af60((void *)((int)this + 0xc4),iVar5);
    }
  }
LAB_5006aab8:
  while( true ) {
    puVar3 = *(undefined4 **)((int)this + 200);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    iVar5 = puVar3[2];
    *(undefined4 *)((int)this + 200) = puVar3[1];
    (**(code **)*puVar3)(1);
    if (iVar5 == 0) break;
    iVar5 = *(int *)(iVar5 + 8);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x1b8) & 8) != 0)) {
      *(undefined4 *)(iVar5 + 0x158) = 1;
      if (*(int **)(iVar5 + 0x164) != (int *)0x0) {
        (**(code **)(**(int **)(iVar5 + 0x164) + 0x10))(1,DAT_5015ccdc);
      }
    }
  }
  return;
}

