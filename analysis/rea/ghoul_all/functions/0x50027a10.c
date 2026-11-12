// rea decompile_all
// name: FUN_50027a10
// address: 0x50027a10
// body: available
// range: 0x50027a10-0x50027f6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_50027a10(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,uint param_11)

{
  int iVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  void *this_00;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  short *psVar8;
  int *piVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 uVar10;
  int unaff_EBP;
  ushort *puVar11;
  int unaff_EDI;
  int iVar12;
  ushort *local_4;
  
  iVar1 = param_1;
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  local_4 = (ushort *)0x0;
  if (0 < param_9) {
    if (param_2 != *(int *)((int)this + 0x60)) {
      local_4 = (ushort *)(param_2 * 0x30 + *(int *)((int)this + 100));
    }
    puVar11 = (ushort *)0x0;
    if (param_3 != *(int *)((int)this + 0x60)) {
      puVar11 = (ushort *)(param_3 * 0x30 + *(int *)((int)this + 100));
    }
    iVar5 = (*DAT_5015cb24)(0,2);
    iVar12 = *(int *)(param_1 + 0x2ec);
    if ((((iVar12 < param_9) && (0 < iVar12)) && (puVar11 != (ushort *)0x0)) &&
       (((local_4 != (ushort *)0x0 && (*puVar11 != 0)) &&
        ((puVar11[1] != 0 &&
         ((puVar11 != local_4 &&
          (cVar2 = (**(code **)(**(int **)((int)this_00 + 0xc) + 0x24))
                             (CONCAT22((short)((uint)iVar12 >> 0x10),puVar11[1])), cVar2 != '\0'))))
        )))) {
      puVar11[0x12] = 0xc9;
      puVar11[0x13] = 0;
      if (*(int *)(puVar11 + 0x14) < 3) {
        if (*(int *)(puVar11 + 0x14) != 0) {
          param_2 = (int)*puVar11;
          piVar9 = *(int **)((int)this_00 + 0xc);
          piVar6 = (int *)(**(code **)(*piVar9 + 0x88))();
          uVar7 = (**(code **)(*piVar6 + 0x40))(&DAT_5012fc5c);
          if (((short)uVar7 != 0) &&
             (sVar3 = (**(code **)(*piVar9 + 0x30))(uVar7,param_2,0), sVar3 != 0)) {
            iVar5 = 0;
            psVar8 = (short *)((int)this + *(int *)(puVar11 + 0x14) * 8 + 0x40);
            do {
              if (sVar3 == *psVar8) break;
              iVar5 = iVar5 + 1;
              psVar8 = psVar8 + 1;
            } while (iVar5 < 4);
          }
        }
        if (iVar5 < 0) {
          param_1 = 0;
        }
        else {
          param_1 = iVar5;
          if (3 < iVar5) {
            param_1 = 3;
          }
        }
        puVar11[0x14] = 3;
        puVar11[0x15] = 0;
        sVar3 = *(short *)((int)this + param_1 * 2 + 0x58);
        if (sVar3 != 0) {
          param_3 = (int)*puVar11;
          piVar9 = *(int **)((int)this_00 + 0xc);
          piVar6 = (int *)(**(code **)(*piVar9 + 0x88))();
          uVar7 = (**(code **)(*piVar6 + 0x40))(&DAT_5012fc5c);
          if (((short)uVar7 != 0) && (sVar3 != 0)) {
            (**(code **)(*piVar9 + 0x2c))(uVar7,sVar3,param_3);
          }
          if ((*(int *)(puVar11 + 0xe) != *(int *)((int)this + 0x60)) &&
             (psVar8 = (short *)(*(int *)((int)this + 100) + *(int *)(puVar11 + 0xe) * 0x30),
             *psVar8 != 0)) {
            *(undefined4 *)(psVar8 + 0x12) = *(undefined4 *)(puVar11 + 0x12);
            *(undefined4 *)(*(int *)(puVar11 + 0xe) * 0x30 + 0x28 + *(int *)((int)this + 100)) =
                 *(undefined4 *)(puVar11 + 0x14);
            (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))
                      (CONCAT22((short)((uint)(*(int *)(puVar11 + 0xe) * 0x30) >> 0x10),
                                *(undefined2 *)
                                 (*(int *)(puVar11 + 0xe) * 0x30 + *(int *)((int)this + 100))),1);
            piVar9 = *(int **)(unaff_EBP + 0xc);
            piVar6 = (int *)(**(code **)(*piVar9 + 0x88))();
            uVar7 = (**(code **)(*piVar6 + 0x40))(&DAT_5012fc5c);
            if (((short)uVar7 != 0) && (sVar3 != 0)) {
              (**(code **)(*piVar9 + 0x2c))(uVar7,sVar3,param_3);
            }
          }
        }
        if (puVar11[2] != 0) {
          FUN_500a3e10(this_00,puVar11[2]);
          if ((((local_4 == *(ushort **)((int)this + 100)) &&
               (puVar11 == *(ushort **)((int)this + 100) + 0x18)) &&
              (*(int *)(iVar1 + 0x2ec) < param_9)) && (0x50 < param_9)) {
            piVar9 = (int *)(**(code **)(**(int **)(iVar1 + 0x164) + 0x88))();
            uVar4 = (**(code **)(*piVar9 + 0x1c))(s__headbeard_50133938);
            if ((uVar4 == 0) || (uVar4 != local_4[1])) {
              piVar9 = (int *)(**(code **)(**(int **)(iVar1 + 0x164) + 0x88))();
              uVar4 = (**(code **)(*piVar9 + 0x1c))(s__headhelmet_5013392c);
              if (uVar4 != 0) {
                local_4[1] = uVar4;
                FUN_5001c340(this,iVar1,*(int *)(local_4 + 0x10),0);
                (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))(CONCAT22(extraout_var,*puVar11),0);
                uVar7 = CONCAT22(extraout_var_00,*local_4);
                iVar12 = 0;
                (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))(uVar7);
                (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))
                          (CONCAT22(extraout_var_01,local_4[1]),1);
                piVar9 = (int *)(**(code **)(**(int **)(iVar1 + 0x164) + 0x88))();
                sVar3 = (**(code **)(*piVar9 + 0x1c))(s_gz_headhelmet_f_5013391c);
                if (sVar3 != 0) {
                  **(short **)((int)this + 100) = sVar3;
                }
                if (*local_4 != 0) {
                  (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))(*local_4,1);
                  iVar5 = *(int *)(local_4 + 0x14);
                  if (0 < iVar5) {
                    sVar3 = *(short *)((int)this + (unaff_EDI + 0x20 + iVar5 * 4) * 2);
                    if (sVar3 != 0) {
                      uVar4 = *local_4;
                      piVar9 = *(int **)(iVar12 + 0xc);
                      piVar6 = (int *)(**(code **)(*piVar9 + 0x88))();
                      uVar10 = (**(code **)(*piVar6 + 0x40))(&DAT_5012fc5c);
                      if (((short)uVar10 != 0) && (sVar3 != 0)) {
                        (**(code **)(*piVar9 + 0x2c))
                                  (uVar10,CONCAT22((short)((uint)iVar5 >> 0x10),sVar3),
                                   CONCAT22((short)((uint)local_4 >> 0x10),uVar4));
                      }
                    }
                  }
                }
                piVar9 = (int *)(**(code **)(**(int **)(iVar1 + 0x164) + 0x88))();
                sVar3 = (**(code **)(*piVar9 + 0x1c))(s_abolt_head_t_5012fea0);
                if (sVar3 != 0) {
                  *(short *)(*(int *)((int)this + 100) + 0x34) = sVar3;
                }
                if (puVar11[2] == 0) {
                  return;
                }
                (**(code **)(*(int *)this + 0xd4))
                          (iVar1,CONCAT22((short)((uint)puVar11 >> 0x10),puVar11[2]),
                           s_Enemy_bolt_5012fc80,s_g_brain_50133904,s_to_abolt_head_t_5013390c,uVar7
                           ,&DAT_5015911c,0x3f95c28f);
                return;
              }
            }
          }
          (**(code **)(*(int *)this + 0xd4))
                    (iVar1,puVar11[2],s_Enemy_bolt_5012fc80,s_g_exit_chunky_anim1_501338f0,
                     s_to_gbolt_5012fc74,this_00,0,0x3f800000);
          FUN_50084640(iVar1,puVar11[2],100);
          if ((param_11 & 0x200) != 0) {
            FUN_500848b0(iVar1,param_7,param_6);
          }
        }
      }
      (**(code **)(**(int **)(iVar1 + 0x164) + 0x20))(*puVar11,1);
    }
    else {
      if (0 < *(int *)(param_1 + 0x2ec)) {
        return;
      }
      if ((((puVar11 != (ushort *)0x0) && (*puVar11 != 0)) &&
          (iVar12 = (*DAT_5015cb24)(0,1), iVar12 != 0)) &&
         ((uVar4 = puVar11[2], uVar4 != 0 || (uVar4 = puVar11[6], uVar4 != 0)))) {
        FUN_50084640(param_1,uVar4,0x32);
      }
    }
    if (((*(int *)(iVar1 + 0x2ec) < 1) && (iVar12 = (*DAT_5015cb24)(0,2), iVar12 == 0)) &&
       ((param_11 & 0x200) != 0)) {
      FUN_500848b0(iVar1,param_7,param_6);
    }
  }
  return;
}

