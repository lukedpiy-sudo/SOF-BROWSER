// rea decompile_all
// name: FUN_50057d70
// address: 0x50057d70
// body: available
// range: 0x50057d70-0x50057f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x50057d90) */
/* WARNING: Removing unreachable block (ram,0x50057da1) */
/* WARNING: Removing unreachable block (ram,0x50057da3) */
/* WARNING: Removing unreachable block (ram,0x50057e99) */

undefined4 __fastcall FUN_50057d70(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  void *this;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *local_4;
  
  *param_1 = 0;
  pvVar9 = (void *)param_1[5];
  pvVar1 = (void *)param_1[4];
  for (this = pvVar1; this != pvVar9; this = (void *)((int)this + 0x44)) {
    FUN_5005c3b0(this,0);
  }
  param_1[5] = pvVar1;
  uVar2 = param_1[2];
  if (param_1[4] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)(param_1[6] - param_1[4]) / 0x44;
  }
  if (uVar7 < uVar2) {
    uVar7 = uVar2;
    if ((int)uVar2 < 0) {
      uVar7 = 0;
    }
    puVar3 = operator_new(uVar7 * 0x44);
    puVar5 = (undefined4 *)param_1[5];
    local_4 = puVar3;
    for (puVar8 = (undefined4 *)param_1[4]; puVar8 != puVar5; puVar8 = puVar8 + 0x11) {
      FUN_5005c170(puVar3,puVar8);
      puVar3 = puVar3 + 0x11;
    }
    pvVar1 = (void *)param_1[5];
    for (pvVar9 = (void *)param_1[4]; pvVar9 != pvVar1; pvVar9 = (void *)((int)pvVar9 + 0x44)) {
      FUN_5005c3b0(pvVar9,0);
    }
    FUN_50106b60((undefined *)param_1[4]);
    puVar5 = local_4;
    param_1[6] = local_4 + uVar2 * 0x11;
    iVar4 = FUN_5005a3d0((int)(param_1 + 3));
    param_1[4] = puVar5;
    param_1[5] = puVar5 + iVar4 * 0x11;
  }
  uVar6 = param_1[8];
  FUN_50043230();
  param_1[9] = uVar6;
  uVar2 = param_1[2];
  if (param_1[8] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)(param_1[10] - param_1[8]) / 0x21c;
  }
  if (uVar7 < uVar2) {
    uVar7 = uVar2;
    if ((int)uVar2 < 0) {
      uVar7 = 0;
    }
    puVar5 = operator_new(uVar7 * 0x21c);
    FUN_5005a9f0((undefined4 *)param_1[8],(undefined4 *)param_1[9],puVar5);
    FUN_50043230();
    FUN_50106b60((undefined *)param_1[8]);
    param_1[10] = puVar5 + uVar2 * 0x87;
    iVar4 = FUN_5005a9c0((int)(param_1 + 7));
    param_1[8] = puVar5;
    param_1[9] = puVar5 + iVar4 * 0x87;
  }
  uVar6 = FUN_5005ac40(param_1 + 0xb,&local_4,*(int **)param_1[0xc],(int *)param_1[0xc]);
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}

