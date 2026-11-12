// rea decompile_all
// name: FUN_50004a80
// address: 0x50004a80
// body: available
// range: 0x50004a80-0x50004c4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50004a80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_50112fb2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_50124df0;
  piVar2 = (int *)param_1[0x8b];
  local_4 = 3;
  if (piVar2 != (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      FUN_5000a0e0(&DAT_5018b4e0,piVar2);
    }
    param_1[0x8b] = 0;
  }
  piVar2 = *(int **)param_1[0x94];
  if (piVar2 != (int *)param_1[0x94]) {
    do {
      if ((int *)piVar2[2] != (int *)0x0) {
        FUN_50009f70(&DAT_5018b558,(int *)piVar2[2]);
      }
      piVar2[2] = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0x94]);
  }
  piVar2 = *(int **)param_1[0x97];
  if (piVar2 != (int *)param_1[0x97]) {
    do {
      if ((int *)piVar2[2] != (int *)0x0) {
        FUN_50009ad0(&DAT_5018b530,(int *)piVar2[2]);
      }
      piVar2[2] = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0x97]);
  }
  piVar2 = *(int **)param_1[0x9a];
  if (piVar2 != (int *)param_1[0x9a]) {
    do {
      if ((int *)piVar2[2] != (int *)0x0) {
        FUN_50009d40(&DAT_5018b508,(int *)piVar2[2]);
      }
      piVar2[2] = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0x9a]);
  }
  piVar2 = (int *)param_1[99];
  if (piVar2 != (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      FUN_50009ad0(&DAT_5018b530,piVar2);
    }
    param_1[99] = 0;
  }
  piVar2 = (int *)param_1[100];
  if (piVar2 != (int *)0x0) {
    if (piVar2 != (int *)0x0) {
      FUN_50009ad0(&DAT_5018b530,piVar2);
    }
    param_1[100] = 0;
  }
  local_4._0_1_ = 2;
  FUN_5005acf0(param_1 + 0x99,&local_14,*(int **)param_1[0x9a],(int *)param_1[0x9a]);
  FUN_50106b60((undefined *)param_1[0x9a]);
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  local_4._0_1_ = 1;
  FUN_5005acf0(param_1 + 0x96,&local_14,*(int **)param_1[0x97],(int *)param_1[0x97]);
  FUN_50106b60((undefined *)param_1[0x97]);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  piVar2 = (int *)param_1[0x94];
  local_4 = (uint)local_4._1_3_ << 8;
  puVar1 = (undefined4 *)FUN_500fc2d0(param_1 + 0x93,&local_14);
  FUN_5005acf0(param_1 + 0x93,&local_10,(int *)*puVar1,piVar2);
  FUN_50106b60((undefined *)param_1[0x94]);
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *param_1 = &PTR_LAB_50124d00;
  ExceptionList = local_c;
  return;
}

