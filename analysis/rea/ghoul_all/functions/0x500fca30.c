// rea decompile_all
// name: FUN_500fca30
// address: 0x500fca30
// body: available
// range: 0x500fca30-0x500fcb51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500fca30(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int aiStack_18 [4];
  int aiStack_8 [2];
  
  local_2c = (undefined4 *)**(int **)((int)param_1 + 0x18);
  if (local_2c != *(int **)((int)param_1 + 0x18)) {
    do {
      if ((int *)local_2c[4] != (int *)0x0) {
        (**(code **)(*(int *)local_2c[4] + 0x30))(1);
      }
      FUN_5006b290((int *)&local_2c);
    } while (local_2c != *(undefined4 **)((int)param_1 + 0x18));
  }
  FUN_500fcc10((void *)((int)param_1 + 0x14),&local_2c,(int *)**(int **)((int)param_1 + 0x18),
               *(int **)((int)param_1 + 0x18));
  FUN_500fcb60(param_1,&local_2c,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
  (*DAT_5015cb48)(0x41494354,&iStack_24,4,0);
  iVar2 = 0;
  if (0 < iStack_24) {
    do {
      (*DAT_5015cb48)(0x41494343,&iStack_20,8,0);
      puVar1 = FUN_50038e60(uStack_1c);
      if (DAT_501546ec <= iStack_20) {
        DAT_501546ec = iStack_20 + 1;
      }
      uStack_28 = 0;
      local_2c = puVar1;
      FUN_5000a3d0(param_1,aiStack_18 + 2,(uint *)&local_2c);
      aiStack_18[1] = 0;
      *(int *)(aiStack_18[2] + 0x10) = iStack_20;
      aiStack_18[0] = iStack_20;
      FUN_5000a5e0((void *)((int)param_1 + 0x14),aiStack_8,aiStack_18);
      iVar2 = iVar2 + 1;
      *(undefined4 **)(aiStack_8[0] + 0x10) = puVar1;
    } while (iVar2 < iStack_24);
  }
  return;
}

