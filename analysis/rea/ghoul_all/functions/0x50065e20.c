// rea decompile_all
// name: FUN_50065e20
// address: 0x50065e20
// body: available
// range: 0x50065e20-0x50065fcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_50065e20(undefined4 *param_1)

{
  undefined4 *this;
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_19;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501142de;
  local_c = ExceptionList;
  this = param_1 + 0x52;
  ExceptionList = &local_c;
  *(undefined1 *)this = local_19;
  *(undefined1 *)((int)param_1 + 0x149) = local_19;
  *(undefined1 *)(param_1 + 0x55) = 0;
  local_10 = param_1;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  param_1[0x54] = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  *(undefined4 *)param_1[0x54] = 0;
  *(undefined4 *)(param_1[0x54] + 8) = 0;
  uVar3 = FUN_5006b2e0(param_1[0x54],0);
  param_1[0x53] = uVar3;
  *(undefined4 *)uVar3 = uVar3;
  *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
  param_1[0x56] = 0;
  *param_1 = &PTR_FUN_5012872c;
  puVar5 = param_1;
  for (iVar4 = 0x10; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
  }
  param_1[0x11] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x2b] = 0x41f00000;
  param_1[0x15] = 0;
  puVar5 = param_1 + 0x16;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  puVar5 = param_1 + 0x2c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x3c] = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  local_4 = 0;
  puVar5 = param_1 + 0x41;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[0x51] = 0;
  piVar6 = (int *)param_1[0x53];
  local_14 = (int *)*piVar6;
  piVar1 = local_14;
  if (param_1[0x56] == 0) {
    while (piVar1 != piVar6) {
      local_14 = piVar1;
      FUN_5006b290((int *)&local_14);
      FUN_500c4640(this,&local_18,piVar1);
      piVar1 = local_14;
    }
  }
  else {
    piVar6 = (int *)piVar6[1];
    if (piVar6 != (int *)param_1[0x54]) {
      do {
        local_18 = piVar6;
        FUN_5006b210(this,(int *)piVar6[2]);
        piVar6 = (int *)*piVar6;
        FUN_50106b60((undefined *)local_18);
      } while (piVar6 != (int *)param_1[0x54]);
    }
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
    param_1[0x56] = 0;
    *(undefined4 *)param_1[0x53] = param_1[0x53];
    *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
  }
  ExceptionList = local_c;
  return param_1;
}

