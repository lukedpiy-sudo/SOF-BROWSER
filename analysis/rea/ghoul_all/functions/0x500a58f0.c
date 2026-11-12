// rea decompile_all
// name: FUN_500a58f0
// address: 0x500a58f0
// body: available
// range: 0x500a58f0-0x500a5a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a58f0(void *param_1)

{
  void *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = **(int **)((int)param_1 + 4);
  if ((int *)local_18 != *(int **)((int)param_1 + 4)) {
    do {
      iVar4 = *(int *)(local_18 + 0x10);
      this = (void *)(iVar4 + 4);
      FUN_500fc2d0(this,&local_14);
      iVar4 = *(int *)(iVar4 + 0x14);
      local_1c = local_14;
      if (0 < iVar4) {
        do {
          piVar2 = local_1c;
          FUN_5006b290((int *)&local_1c);
          if ((undefined4 *)piVar2[4] != (undefined4 *)0x0) {
            FUN_500a67a0(&DAT_5018b4b8,(undefined4 *)piVar2[4]);
          }
          piVar2[4] = 0;
          FUN_500a6c30(this,&local_10,piVar2);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_5006b290(&local_18);
    } while (local_18 != *(int *)((int)param_1 + 4));
  }
  iVar4 = *(int *)((int)param_1 + 0x10);
  piVar2 = local_1c;
  while (iVar4 != 0) {
    iVar4 = **(int **)((int)param_1 + 4);
    local_1c = *(int **)(iVar4 + 0x10);
    if (local_1c != (int *)0x0) {
      puVar3 = (undefined4 *)FUN_5006b100(&DAT_5018b468,&local_10,(uint *)&local_1c);
      piVar1 = (int *)*puVar3;
      piVar2 = local_1c;
      if (piVar1 != DAT_5018b46c) {
        puVar3 = (undefined4 *)FUN_5006b1a0(&DAT_5018b47c,(int *)&local_14,piVar1 + 4);
        FUN_500a6c30(&DAT_5018b47c,&local_c,(int *)*puVar3);
        FUN_500a6c30(&DAT_5018b468,&local_8,piVar1);
        piVar2 = local_1c;
        if (local_1c != (int *)0x0) {
          FUN_500a5800(local_1c,1);
          piVar2 = local_1c;
        }
      }
    }
    local_1c = piVar2;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    FUN_500c4640(param_1,&local_4,(int *)**(undefined4 **)((int)param_1 + 4));
    piVar2 = local_1c;
    iVar4 = *(int *)((int)param_1 + 0x10);
  }
  local_1c = piVar2;
  (**(code **)(*DAT_5015d28c + 0x18))();
  return;
}

