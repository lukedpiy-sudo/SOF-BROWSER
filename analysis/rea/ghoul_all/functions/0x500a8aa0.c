// rea decompile_all
// name: FUN_500a8aa0
// address: 0x500a8aa0
// body: available
// range: 0x500a8aa0-0x500a8c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a8aa0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  longlong lVar4;
  
  iVar1 = FUN_5006a470(&DAT_5015c7b8,(int)param_1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x74);
    if ((iVar2 != 0) && (0 < *(int *)(param_2 + 0x2ec))) {
      lVar4 = __ftol();
      uVar3 = (undefined4)lVar4;
      if (DAT_5015ccdc < *(float *)(iVar2 + 0x564)) {
        *(float *)(iVar2 + 0x564) = DAT_5015ccdc;
      }
      if (*(int *)(iVar1 + 0x54) == 1) {
        uVar3 = 1;
      }
      iVar2 = (**(code **)(**(int **)(*(int *)(param_2 + 0x74) + 0x34c) + 0x30))
                        (*(undefined4 *)(iVar1 + 0x48),uVar3);
      if (iVar2 != 0) {
        FUN_5006a8b0(&DAT_5015c7b8,3,(uint)param_1);
        uVar3 = (*DAT_5015c9f4)(s_weapons_gpistol_cock_wav_5014b9f4,0x3f800000,0x40000000,0,0);
        (*DAT_5015ca48)(param_2,3,uVar3);
        (*DAT_5015cab0)(param_2,CONCAT22(extraout_var_00,*(undefined2 *)(iVar1 + 0x98)));
        if ((*(int *)(param_2 + 0x458) != 0) && (*(int *)(param_2 + 0x45c) != 0)) {
          *(float *)(*(int *)(param_2 + 0x45c) + 0x3cc) = DAT_5015ccdc + 1.0;
          *(undefined4 *)(*(int *)(param_2 + 0x45c) + 0x3d0) = 1;
        }
        if (((*(float *)(DAT_5015c8c8 + 0x18) == 0.0) || ((param_1[0x6e] & 0x10000U) != 0)) &&
           (-1 < (char)param_1[0x6e])) {
          FUN_500c3880(param_1);
          return;
        }
        (**(code **)(*DAT_5015c4d8 + 0x24))(param_1,*(undefined4 *)(iVar1 + 0xac));
        return;
      }
      if ((float)param_1[0xb5] < DAT_5015ccdc) {
        FUN_5006a8b0(&DAT_5015c7b8,5,(uint)param_1);
        (*DAT_5015cab0)(param_2,CONCAT22(extraout_var,*(undefined2 *)(iVar1 + 0xa0)));
        param_1[0xb5] = (int)(DAT_5015ccdc + 5.0);
      }
    }
  }
  return;
}

