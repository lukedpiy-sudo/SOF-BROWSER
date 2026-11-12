// rea decompile_all
// name: FUN_5004a9b0
// address: 0x5004a9b0
// body: available
// range: 0x5004a9b0-0x5004ab5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5004a9b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50113af4;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    piVar4 = operator_new(0x1c);
    *piVar4 = (int)piVar4;
    piVar4[1] = (int)piVar4;
    *(int **)(param_1 + 4) = piVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_5004aee0(param_1,*piVar4,(undefined4 *)**(undefined4 **)(param_2 + 4),
                 *(undefined4 **)(param_2 + 4));
    puVar1 = param_1 + 0xc;
    local_4._0_1_ = 1;
    *puVar1 = param_2[0xc];
    pvVar5 = operator_new(0x1c);
    *(void **)pvVar5 = pvVar5;
    *(void **)((int)pvVar5 + 4) = pvVar5;
    *(void **)(param_1 + 0x10) = pvVar5;
    *(undefined4 *)(param_1 + 0x14) = 0;
    puVar2 = *(undefined4 **)(param_2 + 0x10);
    puVar3 = (undefined4 *)*puVar2;
    piVar4 = (int *)FUN_500fc2d0(puVar1,&local_14);
    FUN_5004aee0(puVar1,*piVar4,puVar3,puVar2);
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    puVar1 = param_1 + 0x60;
    *puVar1 = param_2[0x60];
    uVar6 = FUN_5006b170((undefined4 *)0x0,0);
    *(undefined4 *)(param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0x68) = 0;
    puVar2 = *(undefined4 **)(param_2 + 100);
    puVar3 = (undefined4 *)*puVar2;
    piVar4 = (int *)FUN_500fc2d0(puVar1,&local_10);
    FUN_5004af50(puVar1,*piVar4,puVar3,puVar2);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  ExceptionList = local_c;
  return;
}

