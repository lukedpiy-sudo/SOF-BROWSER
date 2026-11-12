// rea decompile_all
// name: FUN_50082050
// address: 0x50082050
// body: available
// range: 0x50082050-0x50082111 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50082050(void *this,int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  if (*(int *)((int)this + 0x130) != 0) {
    for (puVar2 = (undefined4 *)**(undefined4 **)((int)this + 300);
        puVar2 != *(undefined4 **)((int)this + 300); puVar2 = (undefined4 *)*puVar2) {
      pbVar3 = (byte *)(puVar2[2] + 4);
      pbVar6 = (byte *)(param_1 + 4);
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_500820a4:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_500820a9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_500820a4;
        pbVar6 = pbVar6 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_500820a9:
      if (iVar4 == 0) {
        if (puVar2[2] != 0) {
          return puVar2[2] & 0xffffff00;
        }
        break;
      }
    }
  }
  iVar4 = *(int *)((int)this + 300);
  piVar7 = *(int **)(iVar4 + 4);
  piVar5 = operator_new(0xc);
  *piVar5 = iVar4;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar5;
  }
  piVar5[1] = (int)piVar7;
  *(int **)(iVar4 + 4) = piVar5;
  *(int **)piVar5[1] = piVar5;
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = param_1;
  }
  iVar4 = *(int *)((int)this + 0x130) + 1;
  *(int *)((int)this + 0x130) = iVar4;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

