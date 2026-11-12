// rea decompile_all
// name: FUN_50047d90
// address: 0x50047d90
// body: available
// range: 0x50047d90-0x50047f48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50047d90(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  DAT_50159168 = 0;
  DAT_50159164 = 0;
  for (local_14 = 0;
      (iVar6 = *(int *)((int)param_1 + 4), iVar6 != 0 &&
      (local_14 < (uint)((*(int *)((int)param_1 + 8) - iVar6) / 0x88))); local_14 = local_14 + 1) {
    piVar3 = *(int **)(iVar6 + 4 + iVar7);
    pvVar8 = (void *)(iVar6 + iVar7);
    puVar2 = (undefined4 *)FUN_500fc2d0(pvVar8,&local_c);
    FUN_5005acf0(pvVar8,&local_10,(int *)*puVar2,piVar3);
    piVar3 = *(int **)((int)pvVar8 + 0x10);
    puVar2 = (undefined4 *)FUN_500fc2d0((void *)((int)pvVar8 + 0xc),&local_8);
    FUN_5005acf0((void *)((int)pvVar8 + 0xc),&local_4,(int *)*puVar2,piVar3);
    FUN_50047b20(param_1,(void *)(*(int *)((int)param_1 + 4) + iVar7),0);
    FUN_50047b20(param_1,(void *)(*(int *)((int)param_1 + 4) + iVar7),1);
    iVar7 = iVar7 + 0x88;
  }
  FUN_500477f0((int)param_1);
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    iVar7 = *(int *)((int)param_1 + 4);
    if (iVar7 == 0) {
      return;
    }
    uVar5 = (*(int *)((int)param_1 + 8) - iVar7) / 0x88;
    if (uVar5 <= local_14) break;
    puVar2 = (undefined4 *)(local_10 + 0x28 + iVar7);
    pvVar8 = operator_new(uVar5);
    *puVar2 = pvVar8;
    local_c = uVar5 * 2;
    puVar1 = (undefined4 *)(local_10 + 0x2c + iVar7);
    pvVar8 = operator_new(local_c);
    iVar7 = local_10;
    puVar2 = (undefined4 *)*puVar2;
    *puVar1 = pvVar8;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    puVar2 = (undefined4 *)*puVar1;
    for (uVar5 = local_c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    iVar6 = *(int *)((int)param_1 + 4);
    if (iVar6 != *(int *)((int)param_1 + 8)) {
      do {
        *(undefined4 *)(iVar6 + 0x30) = 0;
        piVar3 = (int *)**(int **)(iVar6 + 4);
        if (piVar3 != *(int **)(iVar6 + 4)) {
          do {
            piVar3[5] = 1;
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)*(int *)(iVar6 + 4));
        }
        iVar6 = iVar6 + 0x88;
      } while (iVar6 != *(int *)((int)param_1 + 8));
    }
    FUN_50046a70(*(int *)((int)param_1 + 4) + local_10);
    local_14 = local_14 + 1;
    local_10 = iVar7 + 0x88;
  }
  return;
}

