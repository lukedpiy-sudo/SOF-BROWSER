// rea decompile_all
// name: FUN_500f0a00
// address: 0x500f0a00
// body: available
// range: 0x500f0a00-0x500f0aee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f0a00(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar2 != 0) {
    if (((param_1 == 0) || (*(int *)(param_1 + 0x74) == 0)) ||
       ((*(byte *)(*(int *)(param_1 + 0x74) + 0x10) & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if (((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x74) + 0x354), piVar1 != (int *)0x0)) {
      switch(param_2) {
      case 2:
        pcVar3 = s_std_hsignalstop_n_a_a_5013fa10;
        break;
      case 3:
        pcVar3 = s_std_htaunt_n_a_a_5013fa68;
        break;
      case 4:
        iVar2 = (**(code **)(*piVar1 + 0x4c))(param_1,s_std_itouchnuts_n_a_n_5013a268);
        if (iVar2 == 0) {
          pcVar3 = s_std_xdance_n_n_n_5013a898;
        }
        else {
          pcVar3 = s_std_itouchnuts_n_a_n_5013a268;
        }
        break;
      default:
        (*DAT_5015ca28)(param_1,2,s_Unrecognized_wave_value___d__try_501544bc,param_2);
      case 1:
        pcVar3 = s_std_hsignalgo_n_a_a_5013f9b8;
      }
      iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x1c))
                        (param_1,&DAT_5018bf0c,&DAT_5018bf0c,2,uVar4,pcVar3,0);
      if (iVar2 != 0) {
        FUN_500f0b00(param_1,param_1 + 4);
        (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x54))(param_1,iVar2);
      }
    }
  }
  return;
}

