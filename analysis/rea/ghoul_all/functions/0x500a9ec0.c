// rea decompile_all
// name: FUN_500a9ec0
// address: 0x500a9ec0
// body: available
// range: 0x500a9ec0-0x500aa026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a9ec0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  
  iVar3 = FUN_5006a470(&DAT_5015c7b8,(int)param_1);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_2 + 0x74);
    if ((iVar5 != 0) && (0 < *(int *)(param_2 + 0x2ec))) {
      if (DAT_5015ccdc < *(float *)(iVar5 + 0x564)) {
        *(float *)(iVar5 + 0x564) = DAT_5015ccdc;
      }
      iVar5 = *(int *)(param_2 + 0x2f0);
      iVar1 = *(int *)(param_2 + 0x2ec);
      if (iVar1 < iVar5) {
        iVar2 = param_1[0xc6];
        *(int *)(param_2 + 0x2ec) = iVar2 + iVar1;
        if (iVar5 < iVar2 + iVar1) {
          *(int *)(param_2 + 0x2ec) = iVar5;
        }
        uVar4 = (*DAT_5015c9f4)(s_dm_healthpu_wav_50144c88,0x3f800000,0x40000000,0,0);
        (*DAT_5015ca48)(param_2,3,uVar4);
        FUN_500f2810(param_2,iVar1);
        *(undefined4 *)(*(int *)(param_2 + 0x74) + 0x348) = 0;
        uVar4 = (*DAT_5015c9f4)(s_dm_healthpu_wav_50144c88,0x3f800000,0x40000000,0,0);
        (*DAT_5015ca48)(param_2,3,uVar4);
        (*DAT_5015cab0)(param_2,CONCAT22(extraout_var,*(undefined2 *)(iVar3 + 0x98)));
        FUN_5006a8b0(&DAT_5015c7b8,3,(uint)param_1);
        iVar5 = (**(code **)(*DAT_5015c4d8 + 4))();
        if ((iVar5 != 0) && ((param_1[0x6e] & 0x10000U) == 0)) {
          (**(code **)(*DAT_5015c4d8 + 0x24))(param_1,*(undefined4 *)(iVar3 + 0xac));
          FUN_5006a8b0(&DAT_5015c7b8,5,(uint)param_1);
          return;
        }
        FUN_500c3880(param_1);
      }
      FUN_5006a8b0(&DAT_5015c7b8,5,(uint)param_1);
    }
  }
  return;
}

