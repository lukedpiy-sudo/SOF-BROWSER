// rea decompile_all
// name: FUN_50082b00
// address: 0x50082b00
// body: available
// range: 0x50082b00-0x50082baa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50082b00(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  
  puVar8 = *(undefined4 **)((int)this + 4);
  puVar5 = (undefined4 *)puVar8[1];
  if ((undefined4 *)puVar8[1] != *(undefined4 **)((int)this + 8)) {
    do {
      uVar2 = FUN_50083690(puVar5 + 3,param_2);
      if ((int)uVar2 < 0) {
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        puVar6 = (undefined4 *)*puVar5;
        puVar8 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != *(undefined4 **)((int)this + 8));
  }
  if (puVar8 != *(undefined4 **)((int)this + 4)) {
    uVar2 = puVar8[5];
    pbVar9 = (byte *)puVar8[4];
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = &DAT_50129750;
    }
    uVar1 = *(uint *)(param_2 + 8);
    uVar4 = uVar1;
    if (uVar2 <= uVar1) {
      uVar4 = uVar2;
    }
    bVar10 = false;
    uVar3 = 0;
    bVar11 = true;
    pbVar7 = *(byte **)(param_2 + 4);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar10 = *pbVar7 < *pbVar9;
      bVar11 = *pbVar7 == *pbVar9;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar11);
    if (!bVar11) {
      uVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (uVar3 == 0) {
      if (uVar1 < uVar2) goto LAB_50082b93;
      uVar3 = (uint)(uVar1 != uVar2);
    }
    if (-1 < (int)uVar3) {
      *param_1 = puVar8;
      return;
    }
  }
LAB_50082b93:
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}

