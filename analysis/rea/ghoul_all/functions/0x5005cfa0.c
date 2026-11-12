// rea decompile_all
// name: FUN_5005cfa0
// address: 0x5005cfa0
// body: available
// range: 0x5005cfa0-0x5005d15b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x5005d13e) */

undefined4 __fastcall FUN_5005cfa0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar5 = FUN_50064270(*(undefined4 **)(param_1 + 0x1c),*(undefined4 **)(param_1 + 0x1c),
                       *(undefined4 **)(param_1 + 0x18));
  FUN_50063890(iVar5,*(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = iVar5;
  uVar1 = *(uint *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / 0x34;
  }
  if (uVar7 < uVar1) {
    uVar7 = uVar1;
    if ((int)uVar1 < 0) {
      uVar7 = 0;
    }
    local_8 = operator_new(uVar7 * 0x34);
    FUN_500638d0(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_1 + 0x1c),local_8);
    FUN_50063890(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
    FUN_50106b60(*(undefined **)(param_1 + 0x18));
    puVar6 = local_8;
    *(undefined4 **)(param_1 + 0x20) = local_8 + uVar1 * 0xd;
    iVar5 = FUN_50056bf0(param_1 + 0x14);
    *(undefined4 **)(param_1 + 0x18) = puVar6;
    *(undefined4 **)(param_1 + 0x1c) = puVar6 + iVar5 * 0xd;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  piVar2 = *(int **)(param_1 + 0x54);
  puVar6 = (undefined4 *)FUN_500fc2d0((void *)(param_1 + 0x50),&local_8);
  FUN_50063910((void *)(param_1 + 0x50),&local_4,(int *)*puVar6,piVar2);
  piVar2 = *(int **)(param_1 + 0x68);
  puVar6 = (undefined4 *)FUN_500fc2d0((void *)(param_1 + 100),&local_4);
  FUN_50063910((void *)(param_1 + 100),&local_8,(int *)*puVar6,piVar2);
  FUN_50063910((void *)(param_1 + 0x78),&local_4,(int *)**(int **)(param_1 + 0x7c),
               *(int **)(param_1 + 0x7c));
  iVar5 = FUN_500642a0(*(undefined1 **)(param_1 + 0x9c),*(undefined1 **)(param_1 + 0x9c),
                       *(undefined1 **)(param_1 + 0x98));
  FUN_50063c80(iVar5,*(int *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = iVar5;
  puVar6 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar6 != *(undefined4 **)(param_1 + 0xac)) {
    do {
      puVar3 = (undefined *)*puVar6;
      if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0;
        FUN_50106b60(puVar3);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(param_1 + 0xac));
  }
  uVar4 = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xa8);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

