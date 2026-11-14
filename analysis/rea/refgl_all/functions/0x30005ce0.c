// rea decompile_all
// name: FUN_30005ce0
// address: 0x30005ce0
// body: available
// range: 0x30005ce0-0x30005e3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x30005d2c) */

void __cdecl FUN_30005ce0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3002b6e1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  uVar1 = *param_2;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 8);
  if (param_1 == param_2) {
    if (uVar2 != 0) {
      FUN_3001faf3();
    }
    iVar3 = *(int *)(param_1 + 8) - uVar2;
    iVar7 = -1;
    if ((iVar3 == -1) || (iVar7 = iVar3, iVar3 != 0)) {
      FUN_300059b0((int)param_1);
      FUN_30020240((undefined4 *)(*(int *)(param_1 + 4) + uVar2),
                   (undefined4 *)((int)(*(int *)(param_1 + 4) + uVar2) + iVar7),
                   (*(int *)(param_1 + 8) - iVar7) - uVar2);
      iVar3 = *(int *)(param_1 + 8);
      uVar4 = FUN_30003420(param_1,iVar3 - iVar7,'\0');
      if ((char)uVar4 != '\0') {
        FUN_30005310(param_1,iVar3 - iVar7);
      }
    }
  }
  else {
    if (uVar2 != 0) {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_3002c310;
      }
      if ((int)(uint)*(byte *)((int)puVar5 + -1) < -1) {
        FUN_300033d0(param_1,'\x01');
        puVar5 = *(undefined4 **)(param_2 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_3002c310;
        }
        *(undefined4 **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_30005e22;
      }
    }
    uVar4 = FUN_30003420(param_1,uVar2,'\x01');
    if ((char)uVar4 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_3002c310;
      }
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar2;
      *(undefined1 *)(uVar2 + *(int *)(param_1 + 4)) = 0;
    }
  }
LAB_30005e22:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  ExceptionList = local_c;
  return;
}

