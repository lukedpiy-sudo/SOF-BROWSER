// rea decompile_all
// name: FUN_500a5680
// address: 0x500a5680
// body: available
// range: 0x500a5680-0x500a57fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a5680(void *param_1)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114ff8;
  local_c = ExceptionList;
  local_4 = 0;
  local_28 = **(int **)((int)param_1 + 4);
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  local_18 = param_1;
  if ((int *)local_28 != *(int **)((int)param_1 + 4)) {
    do {
      iVar4 = *(int *)(local_28 + 0x10);
      this = (void *)(iVar4 + 4);
      FUN_500fc2d0(this,&local_20);
      iVar4 = *(int *)(iVar4 + 0x14);
      local_24 = local_20;
      if (0 < iVar4) {
        do {
          piVar2 = local_24;
          FUN_5006b290((int *)&local_24);
          FUN_500a6380(piVar2 + 4);
          FUN_500c4640(this,&local_1c,piVar2);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_5006b290(&local_28);
      ppvVar3 = ExceptionList;
    } while (local_28 != *(int *)((int)param_1 + 4));
  }
  ExceptionList = ppvVar3;
  local_28 = **(int **)((int)param_1 + 4);
  if ((int *)local_28 != *(int **)((int)param_1 + 4)) {
    do {
      puVar1 = (undefined4 *)(local_28 + 0x10);
      if ((*(int **)(local_28 + 0x10) != (int *)0x0) &&
         (local_24 = *(int **)(local_28 + 0x10),
         FUN_5006b100(&DAT_5018b468,(int *)&local_20,(uint *)&local_24), piVar2 = local_20,
         local_20 != DAT_5018b46c)) {
        FUN_5006b1a0(&DAT_5018b47c,(int *)&local_1c,local_20 + 4);
        FUN_500a6c30(&DAT_5018b47c,&local_14,local_1c);
        FUN_500a6c30(&DAT_5018b468,&local_10,piVar2);
        if (local_24 != (int *)0x0) {
          FUN_500a5800(local_24,1);
        }
      }
      *puVar1 = 0;
      FUN_5006b290(&local_28);
    } while (local_28 != *(int *)((int)param_1 + 4));
  }
  local_4 = 0xffffffff;
  FUN_500a6b80(param_1,&local_10,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
  FUN_50106b60(*(undefined **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  FUN_50106b60(*(undefined **)((int)param_1 + 8));
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

