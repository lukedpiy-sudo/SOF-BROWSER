// rea decompile_all
// name: FUN_500fbd70
// address: 0x500fbd70
// body: available
// range: 0x500fbd70-0x500fc140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500fbd70(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int aiStack_8 [2];
  
  FUN_500fc2d0(&DAT_5018b47c,&local_10);
  local_14 = local_10;
  if (local_10 != DAT_5018b480) {
    do {
      if ((void *)local_14[4] != (void *)0x0) {
        FUN_500a5800((void *)local_14[4],1);
      }
      FUN_500fc520(&local_14,(int *)&local_10);
    } while (local_14 != DAT_5018b480);
  }
  FUN_500fdca0(&DAT_5018b47c);
  FUN_500fdc10(&DAT_5018b468);
  (*DAT_5015cb48)(0x41494354,&local_c,4,0);
  iVar3 = 0;
  if (0 < (int)local_c) {
    do {
      (*DAT_5015cb48)(0x41494343,aiStack_8,8,0);
      local_10 = FUN_500fc270();
      if (DAT_501546ec <= aiStack_8[0]) {
        DAT_501546ec = aiStack_8[0] + 1;
      }
      piVar1 = (int *)FUN_500a6440(&DAT_5018b468,(uint *)&local_10);
      *piVar1 = aiStack_8[0];
      puVar2 = (undefined4 *)FUN_50010ba0(&DAT_5018b47c,aiStack_8);
      iVar3 = iVar3 + 1;
      *puVar2 = local_10;
    } while (iVar3 < (int)local_c);
  }
  FUN_500fc2d0(&DAT_5018b4a4,&local_10);
  local_c = local_10;
  if (local_10 != DAT_5018b4a8) {
    do {
      if ((void *)local_c[4] != (void *)0x0) {
        FUN_500fd9b0((void *)local_c[4],1);
      }
      FUN_500fc520(&local_c,(int *)&local_10);
    } while (local_c != DAT_5018b4a8);
  }
  FUN_500fdb80(&DAT_5018b4a4);
  FUN_500fdaf0(&DAT_5018b490);
  (*DAT_5015cb48)(0x41494354,&local_14,4,0);
  iVar3 = 0;
  if (0 < (int)local_14) {
    do {
      (*DAT_5015cb48)(0x41494343,aiStack_8,8,0);
      local_10 = FUN_500fc150();
      if (DAT_501546ec <= aiStack_8[0]) {
        DAT_501546ec = aiStack_8[0] + 1;
      }
      piVar1 = (int *)FUN_500a6440(&DAT_5018b490,(uint *)&local_10);
      *piVar1 = aiStack_8[0];
      puVar2 = (undefined4 *)FUN_50010ba0(&DAT_5018b4a4,aiStack_8);
      iVar3 = iVar3 + 1;
      *puVar2 = local_10;
    } while (iVar3 < (int)local_14);
  }
  FUN_500fc2d0(&DAT_5018b4cc,&local_10);
  local_c = local_10;
  if (local_10 != DAT_5018b4d0) {
    do {
      if ((void *)local_c[4] != (void *)0x0) {
        FUN_500a4dc0((void *)local_c[4],1);
      }
      FUN_500fc520(&local_c,(int *)&local_10);
    } while (local_c != DAT_5018b4d0);
  }
  FUN_500fda60(&DAT_5018b4cc);
  FUN_500fd9d0(&DAT_5018b4b8);
  (*DAT_5015cb48)(0x41494354,&local_14,4,0);
  iVar3 = 0;
  if (0 < (int)local_14) {
    do {
      (*DAT_5015cb48)(0x41494343,aiStack_8,8,0);
      local_10 = FUN_500fc1e0();
      if (DAT_501546ec <= aiStack_8[0]) {
        DAT_501546ec = aiStack_8[0] + 1;
      }
      piVar1 = (int *)FUN_500a6440(&DAT_5018b4b8,(uint *)&local_10);
      *piVar1 = aiStack_8[0];
      puVar2 = (undefined4 *)FUN_50010ba0(&DAT_5018b4cc,aiStack_8);
      iVar3 = iVar3 + 1;
      *puVar2 = local_10;
    } while (iVar3 < (int)local_14);
  }
  FUN_500fc740(&DAT_5018b530);
  FUN_500fca30(&DAT_5018b508);
  FUN_500fce20(&DAT_5018b558);
  FUN_500fd210(&DAT_5018b4e0);
  FUN_500fd600(&DAT_5018b440);
  FUN_500fc2d0(&DAT_5018b47c,&local_10);
  local_c = local_10;
  if (local_10 != DAT_5018b480) {
    do {
      (**(code **)(*(int *)local_c[4] + 8))();
      FUN_500fc520(&local_c,(int *)&local_10);
    } while (local_c != DAT_5018b480);
  }
  FUN_500fc2d0(&DAT_5018b4cc,&local_10);
  local_c = local_10;
  if (local_10 != DAT_5018b4d0) {
    do {
      (**(code **)(*(int *)local_c[4] + 8))();
      FUN_500fc520(&local_c,(int *)&local_10);
    } while (local_c != DAT_5018b4d0);
  }
  FUN_500fd950(0x5018b490);
  FUN_500fccc0(0x5018b530);
  FUN_500fccc0(0x5018b508);
  FUN_500fd0b0(0x5018b558);
  FUN_500fd4a0(0x5018b4e0);
  FUN_500fd890(0x5018b440);
  return;
}

