// rea decompile_all
// name: FUN_50066720
// address: 0x50066720
// body: available
// range: 0x50066720-0x5006687d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50066720(undefined4 *param_1)

{
  undefined4 *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_5011433e;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_5012872c;
  this = param_1 + 0x52;
  param_1[0x29] = 0;
  param_1[0x40] = 0;
  piVar1 = (int *)param_1[0x53];
  local_4 = 0;
  local_20 = (int *)*piVar1;
  piVar2 = local_20;
  local_1c = param_1;
  if (param_1[0x56] == 0) {
    while (piVar2 != piVar1) {
      local_20 = piVar2;
      FUN_5006b290((int *)&local_20);
      FUN_500c4640(this,&local_18,piVar2);
      piVar2 = local_20;
    }
  }
  else {
    FUN_5006b210(this,(int *)piVar1[1]);
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
    param_1[0x56] = 0;
    *(undefined4 *)param_1[0x53] = param_1[0x53];
    *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
  }
  piVar1 = (int *)param_1[0x53];
  local_4 = 0xffffffff;
  local_20 = (int *)*piVar1;
  if (((param_1[0x56] == 0) ||
      (puVar3 = (undefined4 *)FUN_500fc2d0(this,&local_18), local_20 != (int *)*puVar3)) ||
     (piVar1 != (int *)param_1[0x53])) {
    while (local_20 != piVar1) {
      puVar3 = (undefined4 *)FUN_500fc520(&local_20,&local_14);
      FUN_500c4640(this,&local_10,(int *)*puVar3);
    }
  }
  else {
    FUN_5006b210(this,(int *)((int *)param_1[0x53])[1]);
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
    param_1[0x56] = 0;
    *(undefined4 *)param_1[0x53] = param_1[0x53];
    *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
    FUN_500fc2d0(this,&local_1c);
  }
  FUN_50106b60((undefined *)param_1[0x53]);
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  FUN_50106b60((undefined *)param_1[0x54]);
  param_1[0x54] = 0;
  ExceptionList = local_c;
  return;
}

