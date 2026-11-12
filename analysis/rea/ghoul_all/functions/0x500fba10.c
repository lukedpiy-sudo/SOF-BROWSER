// rea decompile_all
// name: FUN_500fba10
// address: 0x500fba10
// body: available
// range: 0x500fba10-0x500fbd64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500fba10(void)

{
  int iStack_14;
  int local_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = DAT_5018b48c;
  (*DAT_5015cb44)(0x41494354,&local_10,4);
  FUN_500fc2d0(&DAT_5018b47c,&iStack_c);
  iStack_14 = iStack_c;
  if (iStack_c != DAT_5018b480) {
    do {
      uStack_8 = *(undefined4 *)(iStack_14 + 0xc);
      uStack_4 = (**(code **)**(undefined4 **)(iStack_14 + 0x10))();
      (*DAT_5015cb44)(0x41494343,&uStack_8,8);
      FUN_5006b290(&iStack_14);
    } while (iStack_14 != DAT_5018b480);
  }
  iStack_c = DAT_5018b4b4;
  (*DAT_5015cb44)(0x41494354,&iStack_c,4);
  FUN_500fc2d0(&DAT_5018b4a4,&local_10);
  iStack_14 = local_10;
  if (local_10 != DAT_5018b4a8) {
    do {
      uStack_8 = *(undefined4 *)(iStack_14 + 0xc);
      uStack_4 = (**(code **)**(undefined4 **)(iStack_14 + 0x10))();
      (*DAT_5015cb44)(0x41494343,&uStack_8,8);
      FUN_500fc520(&iStack_14,&local_10);
    } while (iStack_14 != DAT_5018b4a8);
  }
  iStack_c = DAT_5018b4dc;
  (*DAT_5015cb44)(0x41494354,&iStack_c,4);
  FUN_500fc2d0(&DAT_5018b4cc,&local_10);
  iStack_14 = local_10;
  if (local_10 != DAT_5018b4d0) {
    do {
      uStack_8 = *(undefined4 *)(iStack_14 + 0xc);
      uStack_4 = (**(code **)**(undefined4 **)(iStack_14 + 0x10))();
      (*DAT_5015cb44)(0x41494343,&uStack_8,8);
      FUN_500fc520(&iStack_14,&local_10);
    } while (iStack_14 != DAT_5018b4d0);
  }
  iStack_c = DAT_5018b554;
  (*DAT_5015cb44)(0x41494354,&iStack_c,4);
  FUN_500fc2d0(&DAT_5018b544,&local_10);
  iStack_14 = local_10;
  if (local_10 != DAT_5018b548) {
    do {
      uStack_8 = *(undefined4 *)(iStack_14 + 0xc);
      uStack_4 = (**(code **)(**(int **)(iStack_14 + 0x10) + 0x84))();
      (*DAT_5015cb44)(0x41494343,&uStack_8,8);
      FUN_500fc520(&iStack_14,&local_10);
    } while (iStack_14 != DAT_5018b548);
  }
  iStack_c = DAT_5018b52c;
  (*DAT_5015cb44)(0x41494354,&iStack_c,4);
  FUN_500fc2d0(&DAT_5018b51c,&local_10);
  iStack_14 = local_10;
  if (local_10 != DAT_5018b520) {
    do {
      uStack_8 = *(undefined4 *)(iStack_14 + 0xc);
      uStack_4 = (**(code **)(**(int **)(iStack_14 + 0x10) + 0x84))();
      (*DAT_5015cb44)(0x41494343,&uStack_8,8);
      FUN_500fc520(&iStack_14,&local_10);
    } while (iStack_14 != DAT_5018b520);
  }
  FUN_500fcd20(0x5018b558);
  FUN_500fd110(0x5018b4e0);
  FUN_500fd500(0x5018b440);
  FUN_500fc2d0(&DAT_5018b47c,&iStack_c);
  iStack_14 = iStack_c;
  if (iStack_c != DAT_5018b480) {
    do {
      (**(code **)(**(int **)(iStack_14 + 0x10) + 4))();
      FUN_500fc520(&iStack_14,&iStack_c);
    } while (iStack_14 != DAT_5018b480);
  }
  FUN_500fd8f0(0x5018b4b8);
  FUN_500fd8f0(0x5018b490);
  FUN_500fc9d0(0x5018b530);
  FUN_500fc9d0(0x5018b508);
  FUN_500fcdc0(0x5018b558);
  FUN_500fd1b0(0x5018b4e0);
  FUN_500fd5a0(0x5018b440);
  return;
}

