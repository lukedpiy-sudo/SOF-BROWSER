// rea decompile_all
// name: FUN_50066290
// address: 0x50066290
// body: available
// range: 0x50066290-0x50066402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50066290(undefined4 *param_1)

{
  undefined4 *this;
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_5011431e;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_5012872c;
  this = param_1 + 0x52;
  param_1[0x29] = 0;
  param_1[0x40] = 0;
  piVar1 = (int *)param_1[0x53];
  local_4 = 0;
  local_1c = (int *)*piVar1;
  piVar3 = local_1c;
  local_18 = param_1;
  if (param_1[0x56] == 0) {
    while (piVar3 != piVar1) {
      local_1c = piVar3;
      FUN_5006b290((int *)&local_1c);
      FUN_500c4640(this,&local_10,piVar3);
      piVar3 = local_1c;
    }
  }
  else {
    piVar3 = (int *)piVar1[1];
    if ((int *)piVar1[1] != (int *)param_1[0x54]) {
      do {
        FUN_5006b210(this,(int *)piVar3[2]);
        piVar1 = (int *)*piVar3;
        FUN_50106b60((undefined *)piVar3);
        piVar3 = piVar1;
      } while (piVar1 != (int *)param_1[0x54]);
    }
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
    param_1[0x56] = 0;
    *(undefined4 *)param_1[0x53] = param_1[0x53];
    *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
    FUN_500fc2d0(this,&local_14);
  }
  piVar1 = (int *)param_1[0x53];
  local_4 = 0xffffffff;
  local_1c = (int *)*piVar1;
  if (param_1[0x56] == 0) {
    while (local_1c != piVar1) {
      puVar2 = (undefined4 *)FUN_500fc520(&local_1c,&local_14);
      FUN_500c4640(this,&local_18,(int *)*puVar2);
    }
  }
  else {
    FUN_5006b210(this,(int *)piVar1[1]);
    *(undefined4 *)(param_1[0x53] + 4) = param_1[0x54];
    param_1[0x56] = 0;
    *(undefined4 *)param_1[0x53] = param_1[0x53];
    *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
    FUN_500fc2d0(this,&local_10);
  }
  FUN_50106b60((undefined *)param_1[0x53]);
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  FUN_50106b60((undefined *)param_1[0x54]);
  param_1[0x54] = 0;
  ExceptionList = local_c;
  return;
}

