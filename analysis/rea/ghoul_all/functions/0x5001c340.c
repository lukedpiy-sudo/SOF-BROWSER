// rea decompile_all
// name: FUN_5001c340
// address: 0x5001c340
// body: available
// range: 0x5001c340-0x5001c57a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001c340(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *_Str1;
  short sVar6;
  int iStack_4;
  
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  iVar4 = *(int *)(param_2 + 8);
  while (((iVar4 != 0x14 && (this_00 != (void *)0x0)) && ((param_3 != 0 || (iVar4 == 6))))) {
    iVar4 = *(int *)(param_2 + 0xc);
    if (iVar4 == 0) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar2 + 0x1c))(param_2 + 0x10);
      if ((short)uVar3 != 0) {
        if ((param_3 != 0) &&
           (cVar1 = (**(code **)(**(int **)((int)this_00 + 0xc) + 0x24))(uVar3), cVar1 != '\0')) {
          (**(code **)(**(int **)(param_3 + 0x164) + 0x20))(uVar3,1);
        }
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x20))(uVar3,0);
      }
    }
    else if (iVar4 == 1) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      _Str1 = (char *)(param_2 + 0x10);
      uVar3 = (**(code **)(*piVar2 + 0x1c))(_Str1);
      sVar6 = (short)uVar3;
      if (sVar6 != 0) {
        iStack_4 = 0;
        if ((param_3 != 0) && (*(int **)(param_3 + 0x164) != (int *)0x0)) {
          iStack_4 = FUN_500a5820(&DAT_5015c79c,*(int **)(param_3 + 0x164));
        }
        iVar4 = __strcmpi(_Str1,s_wbolt_hand_r_5012fedc);
        if ((iVar4 == 0) || (iVar4 = __strcmpi(_Str1,s_wbolt_hand_l_5012feec), iVar4 == 0)) {
          (**(code **)(*(int *)this + 0x160))(param_1,*(undefined4 *)(param_1 + 0x164));
        }
        puVar5 = (undefined4 *)FUN_500a4250(this_00,sVar6);
        while (puVar5 != (undefined4 *)0x0) {
          if ((iStack_4 != 0) &&
             ((*(int *)(param_1 + 0x74) == 0 ||
              ((iVar4 = __strcmpi((char *)(param_2 + 0x10),s_wbolt_hand_r_5012fedc), iVar4 != 0 &&
               (iVar4 = __strcmpi((char *)(param_2 + 0x10),s_wbolt_hand_l_5012feec), iVar4 != 0)))))
             ) {
            (**(code **)(*(int *)this + 0xd8))
                      (param_1,uVar3,s_Enemy_bolt_5012fc80,puVar5[9] + 0x48e,
                       *(undefined2 *)(puVar5 + 8),iStack_4,puVar5[9] + 0x4f2,0x3f800000);
          }
          FUN_500a3f30(this_00,puVar5);
          puVar5 = (undefined4 *)FUN_500a4250(this_00,sVar6);
        }
      }
    }
    else if (iVar4 == 2) {
      (**(code **)(*(int *)this + 0x13c))(param_1,param_2,param_3);
    }
    param_2 = (**(code **)(*(int *)this + 0x138))(*(undefined4 *)(param_2 + 4));
    this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
    iVar4 = *(int *)(param_2 + 8);
  }
  return;
}

